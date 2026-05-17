/*
 * XREFs of RtlpFcFreeChangeRegistration @ 0x1800503CC
 * Callers:
 *     RtlUnregisterFeatureConfigurationChangeNotification @ 0x180050420 (RtlUnregisterFeatureConfigurationChangeNotification.c)
 * Callees:
 *     TpWaitForWork @ 0x18004C830 (TpWaitForWork.c)
 *     TpReleaseWork @ 0x18004E5B0 (TpReleaseWork.c)
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
