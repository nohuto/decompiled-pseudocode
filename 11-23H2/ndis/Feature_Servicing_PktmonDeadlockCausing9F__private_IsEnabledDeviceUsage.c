/*
 * XREFs of Feature_Servicing_PktmonDeadlockCausing9F__private_IsEnabledDeviceUsage @ 0x1C0037508
 * Callers:
 *     ndisPktMonComponentNotify @ 0x1C0136F40 (ndisPktMonComponentNotify.c)
 * Callees:
 *     Feature_Servicing_PktmonDeadlockCausing9F__private_IsEnabledFallback @ 0x1C0037540 (Feature_Servicing_PktmonDeadlockCausing9F__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_PktmonDeadlockCausing9F__private_IsEnabledDeviceUsage()
{
  if ( (Feature_Servicing_PktmonDeadlockCausing9F__private_featureState & 0x10) != 0 )
    return Feature_Servicing_PktmonDeadlockCausing9F__private_featureState & 1;
  else
    return Feature_Servicing_PktmonDeadlockCausing9F__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_PktmonDeadlockCausing9F__private_featureState,
             3LL);
}
