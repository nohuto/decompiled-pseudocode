/*
 * XREFs of RtlpFcFreeChangeRegistration @ 0x1800503CC
 * Callers:
 *     RtlUnregisterFeatureConfigurationChangeNotification @ 0x180050420 (RtlUnregisterFeatureConfigurationChangeNotification.c)
 * Callees:
 *     TpWaitForWork @ 0x18004C830 (TpWaitForWork.c)
 *     TpReleaseWork @ 0x18004E5B0 (TpReleaseWork.c)
 */

LOGICAL __fastcall RtlpFcFreeChangeRegistration(PTP_WORK *a1)
{
  _TP_WORK *v2; // rcx

  v2 = a1[5];
  if ( v2 )
  {
    TpWaitForWork(v2, 1u);
    TpReleaseWork(a1[5]);
  }
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
}
