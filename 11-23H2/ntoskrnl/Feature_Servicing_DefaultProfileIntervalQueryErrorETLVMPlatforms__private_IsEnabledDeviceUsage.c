/*
 * XREFs of Feature_Servicing_DefaultProfileIntervalQueryErrorETLVMPlatforms__private_IsEnabledDeviceUsage @ 0x14040FA04
 * Callers:
 *     HalpQueryProfileSource @ 0x14050806C (HalpQueryProfileSource.c)
 * Callees:
 *     Feature_Servicing_DefaultProfileIntervalQueryErrorETLVMPlatforms__private_IsEnabledFallback @ 0x14040FA3C (Feature_Servicing_DefaultProfileIntervalQueryErrorETLVMPlatforms__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_DefaultProfileIntervalQueryErrorETLVMPlatforms__private_IsEnabledDeviceUsage()
{
  if ( (Feature_Servicing_DefaultProfileIntervalQueryErrorETLVMPlatforms__private_featureState & 0x10) != 0 )
    return Feature_Servicing_DefaultProfileIntervalQueryErrorETLVMPlatforms__private_featureState & 1;
  else
    return Feature_Servicing_DefaultProfileIntervalQueryErrorETLVMPlatforms__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_DefaultProfileIntervalQueryErrorETLVMPlatforms__private_featureState,
             3LL);
}
