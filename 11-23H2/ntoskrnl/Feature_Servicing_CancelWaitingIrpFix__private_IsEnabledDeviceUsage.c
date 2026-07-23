/*
 * XREFs of Feature_Servicing_CancelWaitingIrpFix__private_IsEnabledDeviceUsage @ 0x14040FD14
 * Callers:
 *     FsRtlpCancelWaitingIrp @ 0x14053E7D4 (FsRtlpCancelWaitingIrp.c)
 * Callees:
 *     Feature_Servicing_CancelWaitingIrpFix__private_IsEnabledFallback @ 0x14040FD4C (Feature_Servicing_CancelWaitingIrpFix__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_CancelWaitingIrpFix__private_IsEnabledDeviceUsage()
{
  if ( (Feature_Servicing_CancelWaitingIrpFix__private_featureState & 0x10) != 0 )
    return Feature_Servicing_CancelWaitingIrpFix__private_featureState & 1;
  else
    return Feature_Servicing_CancelWaitingIrpFix__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_CancelWaitingIrpFix__private_featureState,
             3LL);
}
