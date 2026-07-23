/*
 * XREFs of sub_140645DC0 @ 0x140645DC0
 * Callers:
 *     WheaProcessWaitingETWEvents @ 0x140645F50 (WheaProcessWaitingETWEvents.c)
 * Callees:
 *     KeSetTargetProcessorDpcEx @ 0x14025ACA0 (KeSetTargetProcessorDpcEx.c)
 *     sub_140345190 @ 0x140345190 (sub_140345190.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     sub_14057C2F0 @ 0x14057C2F0 (sub_14057C2F0.c)
 */

void sub_140645DC0()
{
  _PROCESSOR_NUMBER ProcNumber; // [rsp+40h] [rbp+8h] BYREF

  ProcNumber = 0;
  _InterlockedAdd(&dword_140C0FAC0, 1u);
  if ( dword_140C0FAC0 <= 1 )
  {
    if ( KeGetCurrentIrql() <= 2u )
    {
      ExQueueWorkItem(&stru_140C0FAA0, DelayedWorkQueue);
    }
    else
    {
      sub_14057C2F0(&ProcNumber);
      KeSetTargetProcessorDpcEx((PKDPC)&stru_140C0FA60, &ProcNumber);
      sub_140345190((ULONG_PTR)&stru_140C0FA60, 0LL, 0LL, 0LL, 0);
    }
  }
}
