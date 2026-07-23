/*
 * XREFs of RtlpTpTimerRundown @ 0x18004F84C
 * Callers:
 *     RtlDeleteTimer @ 0x18004D210 (RtlDeleteTimer.c)
 *     RtlpTpTimerFinalizationCallback @ 0x180050530 (RtlpTpTimerFinalizationCallback.c)
 *     RtlDeleteTimerQueueEx @ 0x180051CC0 (RtlDeleteTimerQueueEx.c)
 * Callees:
 *     RtlpTpTimerQueueRundown @ 0x180051E40 (RtlpTpTimerQueueRundown.c)
 *     ZwSetEvent @ 0x1800A1070 (ZwSetEvent.c)
 *     NtClose @ 0x1800A1090 (NtClose.c)
 */

LOGICAL __fastcall RtlpTpTimerRundown(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rcx

  v2 = *(void **)(a1 + 72);
  if ( v2 )
    ZwSetEvent(v2, 0LL);
  v3 = *(void **)(a1 + 16);
  if ( v3 )
    NtClose(v3);
  if ( _InterlockedExchangeAdd(*(volatile signed __int32 **)(a1 + 56), 0xFFFFFFFF) == 1 )
    RtlpTpTimerQueueRundown(*(_QWORD *)(a1 + 56));
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)a1);
}
