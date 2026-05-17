/*
 * XREFs of RtlpTpTimerQueueRundown @ 0x180070D10
 * Callers:
 *     RtlDeleteTimerQueueEx @ 0x18006F8B0 (RtlDeleteTimerQueueEx.c)
 *     RtlpTpTimerRundown @ 0x180070B70 (RtlpTpTimerRundown.c)
 * Callees:
 *     ZwSetEvent @ 0x1800A4230 (ZwSetEvent.c)
 *     ZwAlertThreadByThreadId @ 0x1800A4E60 (ZwAlertThreadByThreadId.c)
 */

__int64 __fastcall RtlpTpTimerQueueRundown(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  v2 = *(_QWORD *)(a1 + 40);
  if ( v2 )
  {
    ZwAlertThreadByThreadId(v2);
  }
  else
  {
    v3 = *(_QWORD *)(a1 + 16);
    if ( v3 )
      ZwSetEvent(v3, 0LL);
  }
  return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
}
