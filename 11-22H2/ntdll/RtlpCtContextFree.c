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

LOGICAL __fastcall RtlpCtContextFree(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rcx

  v2 = *(void **)(a1 + 8);
  if ( v2 )
    RtlUnsubscribeWnfNotificationWaitForCompletion(v2);
  v3 = *(void **)(a1 + 16);
  if ( v3 )
  {
    NtClose(v3);
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  if ( *(_QWORD *)a1 )
    TpReleaseWork(*(PTP_WORK *)a1);
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)a1);
}
