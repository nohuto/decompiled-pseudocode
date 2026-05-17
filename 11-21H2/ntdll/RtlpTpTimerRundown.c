/*
 * XREFs of RtlpTpTimerRundown @ 0x180070B70
 * Callers:
 *     RtlDeleteTimerQueueEx @ 0x18006F8B0 (RtlDeleteTimerQueueEx.c)
 *     RtlpTpTimerFinalizationCallback @ 0x18006FB30 (RtlpTpTimerFinalizationCallback.c)
 *     RtlDeleteTimer @ 0x18006FC50 (RtlDeleteTimer.c)
 * Callees:
 *     RtlpTpTimerQueueRundown @ 0x180070D10 (RtlpTpTimerQueueRundown.c)
 *     ZwSetEvent @ 0x1800A4230 (ZwSetEvent.c)
 *     NtClose @ 0x1800A4250 (NtClose.c)
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
