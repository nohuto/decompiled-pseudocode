/*
 * XREFs of RtlpFcFreeChangeRegistration @ 0x18005052C
 * Callers:
 *     RtlUnregisterFeatureConfigurationChangeNotification @ 0x180050580 (RtlUnregisterFeatureConfigurationChangeNotification.c)
 * Callees:
 *     TpWaitForWork @ 0x18004C990 (TpWaitForWork.c)
 *     TpReleaseWork @ 0x18004E710 (TpReleaseWork.c)
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
