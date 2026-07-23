/*
 * XREFs of Feature_Servicing_DefaultProfileIntervalQueryErrorETLVMPlatforms__private_IsEnabledFallback @ 0x14040FA3C
 * Callers:
 *     Feature_Servicing_DefaultProfileIntervalQueryErrorETLVMPlatforms__private_IsEnabledDeviceUsage @ 0x14040FA04 (Feature_Servicing_DefaultProfileIntervalQueryErrorETLVMPlatforms__private_IsEnabledDeviceUsage.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x14040FAAC (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_Servicing_DefaultProfileIntervalQueryErrorETLVMPlatforms__private_IsEnabledFallback(
        __int64 a1,
        __int64 a2)
{
  return wil_details_IsEnabledFallback(
           a1,
           a2,
           &Feature_Servicing_DefaultProfileIntervalQueryErrorETLVMPlatforms__private_descriptor);
}
