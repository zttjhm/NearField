/*
* This header is generated by classdump-dyld 0.7
* Operating System: Version 8.1 (Build 12B411)
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSData;

@interface NFHardwareBoosterInfo : NSObject {

	unsigned long long _siliconVersion;
	NSData* _staticConfig;
	NSData* _dynamicConfig;

}

@property (nonatomic,readonly) unsigned long long siliconVersion;
@property (nonatomic,readonly) NSData * staticConfig;
@property (nonatomic,readonly) NSData * dynamicConfig;

-(void)dealloc;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)siliconVersion;
-(NSData *)staticConfig;
-(NSData *)dynamicConfig;
@end

