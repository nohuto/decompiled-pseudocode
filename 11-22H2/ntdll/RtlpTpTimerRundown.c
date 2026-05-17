/*
 * XREFs of RtlpTpTimerRundown @ 0x18004F9AC
 * Callers:
 *     RtlDeleteTimer @ 0x18004D370 (RtlDeleteTimer.c)
 *     RtlpTpTimerFinalizationCallback @ 0x180050690 (RtlpTpTimerFinalizationCallback.c)
 *     RtlDeleteTimerQueueEx @ 0x180051E20 (RtlDeleteTimerQueueEx.c)
 * Callees:
 *     RtlpTpTimerQueueRundown @ 0x180051FA0 (RtlpTpTimerQueueRundown.c)
 *     ZwSetEvent @ 0x18009EFB0 (ZwSetEvent.c)
 *     NtClose @ 0x18009EFD0 (NtClose.c)
 */

__int64 __fastcall RtlpTpTimerRundown(__int64 a1)
{
  __int64 v2; // rcx
  void *v3; // rcx

  v2 = *(_QWORD *)(a1 + 72);
  if ( v2 )
    ZwSetEvent(v2, 0LL);
  v3 = *(void **)(a1 + 16);
  if ( v3 )
    NtClose(v3);
  if ( _InterlockedExchangeAdd(*(volatile signed __int32 **)(a1 + 56), 0xFFFFFFFF) == 1 )
    RtlpTpTimerQueueRundown(*(_QWORD *)(a1 + 56));
  return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
}
