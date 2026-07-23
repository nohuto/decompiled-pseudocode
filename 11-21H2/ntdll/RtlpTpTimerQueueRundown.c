/*
 * XREFs of RtlpTpTimerQueueRundown @ 0x180070D10
 * Callers:
 *     RtlDeleteTimerQueueEx @ 0x18006F8B0 (RtlDeleteTimerQueueEx.c)
 *     RtlpTpTimerRundown @ 0x180070B70 (RtlpTpTimerRundown.c)
 * Callees:
 *     ZwSetEvent @ 0x1800A4230 (ZwSetEvent.c)
 *     ZwAlertThreadByThreadId @ 0x1800A4E60 (ZwAlertThreadByThreadId.c)
 */

LOGICAL __fastcall RtlpTpTimerQueueRundown(_QWORD *a1)
{
  void *v2; // rcx
  void *v3; // rcx

  v2 = (void *)a1[5];
  if ( v2 )
  {
    ZwAlertThreadByThreadId(v2);
  }
  else
  {
    v3 = (void *)a1[2];
    if ( v3 )
      ZwSetEvent(v3, 0LL);
  }
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
}
