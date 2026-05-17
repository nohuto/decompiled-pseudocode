/*
 * XREFs of RtlpCtContextFree @ 0x18010F068
 * Callers:
 *     RtlRaiseCustomSystemEventTrigger @ 0x18010EE10 (RtlRaiseCustomSystemEventTrigger.c)
 *     RtlpCtContextInit @ 0x18010F0C4 (RtlpCtContextInit.c)
 *     RtlpRtlpCtWaitForWnfQuiescentWorker @ 0x18010F1E0 (RtlpRtlpCtWaitForWnfQuiescentWorker.c)
 * Callees:
 *     RtlUnsubscribeWnfNotificationWaitForCompletion @ 0x18004C670 (RtlUnsubscribeWnfNotificationWaitForCompletion.c)
 *     TpReleaseWork @ 0x18004E710 (TpReleaseWork.c)
 *     NtClose @ 0x18009EFD0 (NtClose.c)
 */

__int64 __fastcall RtlpCtContextFree(__int64 *a1)
{
  __int64 v2; // rcx
  void *v3; // rcx

  v2 = a1[1];
  if ( v2 )
    RtlUnsubscribeWnfNotificationWaitForCompletion(v2);
  v3 = (void *)a1[2];
  if ( v3 )
  {
    NtClose(v3);
    a1[2] = 0LL;
  }
  if ( *a1 )
    TpReleaseWork(*a1);
  return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)a1);
}
