/*
 * XREFs of RtlpFcFreeChangeRegistration @ 0x180084C00
 * Callers:
 *     RtlUnregisterFeatureConfigurationChangeNotification @ 0x180084BD0 (RtlUnregisterFeatureConfigurationChangeNotification.c)
 * Callees:
 *     TpReleaseWork @ 0x180020220 (TpReleaseWork.c)
 *     TpWaitForWork @ 0x180084C50 (TpWaitForWork.c)
 */

__int64 __fastcall RtlpFcFreeChangeRegistration(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 40);
  if ( v2 )
  {
    TpWaitForWork(v2, 1LL);
    TpReleaseWork(*(_QWORD *)(a1 + 40));
  }
  return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
}
