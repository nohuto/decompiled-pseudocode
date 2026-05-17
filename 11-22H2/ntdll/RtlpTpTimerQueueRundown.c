/*
 * XREFs of RtlpTpTimerQueueRundown @ 0x180051FA0
 * Callers:
 *     RtlpTpTimerRundown @ 0x18004F9AC (RtlpTpTimerRundown.c)
 *     RtlDeleteTimerQueueEx @ 0x180051E20 (RtlDeleteTimerQueueEx.c)
 * Callees:
 *     ZwSetEvent @ 0x18009EFB0 (ZwSetEvent.c)
 *     ZwAlertThreadByThreadId @ 0x18009FBE0 (ZwAlertThreadByThreadId.c)
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
