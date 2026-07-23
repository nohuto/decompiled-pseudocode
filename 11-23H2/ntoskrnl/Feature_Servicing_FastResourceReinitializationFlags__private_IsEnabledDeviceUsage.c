/*
 * XREFs of Feature_Servicing_FastResourceReinitializationFlags__private_IsEnabledDeviceUsage @ 0x140416D10
 * Callers:
 *     ExReinitializeFastResource2 @ 0x14041404C (ExReinitializeFastResource2.c)
 * Callees:
 *     Feature_Servicing_FastResourceReinitializationFlags__private_IsEnabledFallback @ 0x140416D48 (Feature_Servicing_FastResourceReinitializationFlags__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_FastResourceReinitializationFlags__private_IsEnabledDeviceUsage()
{
  if ( (Feature_Servicing_FastResourceReinitializationFlags__private_featureState & 0x10) != 0 )
    return Feature_Servicing_FastResourceReinitializationFlags__private_featureState & 1;
  else
    return Feature_Servicing_FastResourceReinitializationFlags__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_FastResourceReinitializationFlags__private_featureState,
             3LL);
}
