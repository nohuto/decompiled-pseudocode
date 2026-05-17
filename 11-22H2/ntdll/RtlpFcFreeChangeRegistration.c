/*
 * XREFs of RtlpFcFreeChangeRegistration @ 0x18005052C
 * Callers:
 *     RtlUnregisterFeatureConfigurationChangeNotification @ 0x180050580 (RtlUnregisterFeatureConfigurationChangeNotification.c)
 * Callees:
 *     TpWaitForWork @ 0x18004C990 (TpWaitForWork.c)
 *     TpReleaseWork @ 0x18004E710 (TpReleaseWork.c)
 */

__int64 __fastcall RtlpFcFreeChangeRegistration(__int64 a1)
{
  _QWORD *v2; // rcx

  v2 = *(_QWORD **)(a1 + 40);
  if ( v2 )
  {
    TpWaitForWork(v2, 1);
    TpReleaseWork(*(_QWORD *)(a1 + 40));
  }
  return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
}
