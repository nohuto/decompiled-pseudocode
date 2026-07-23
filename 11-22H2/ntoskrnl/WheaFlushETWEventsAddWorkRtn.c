/*
 * XREFs of WheaFlushETWEventsAddWorkRtn @ 0x140612FE4
 * Callers:
 *     WheaProcessWaitingETWEvents @ 0x140613170 (WheaProcessWaitingETWEvents.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x140254670 (KiInsertQueueDpc.c)
 *     ExQueueWorkItem @ 0x1402B7C00 (ExQueueWorkItem.c)
 *     KeSetTargetProcessorDpcEx @ 0x14036B680 (KeSetTargetProcessorDpcEx.c)
 *     WheaFlushETWEventsSelectProcessor @ 0x140580350 (WheaFlushETWEventsSelectProcessor.c)
 */

void WheaFlushETWEventsAddWorkRtn()
{
  _PROCESSOR_NUMBER ProcNumber; // [rsp+40h] [rbp+8h] BYREF

  ProcNumber = 0;
  _InterlockedAdd(&dword_140C2BA40, 1u);
  if ( dword_140C2BA40 <= 1 )
  {
    if ( KeGetCurrentIrql() <= 2u )
    {
      ExQueueWorkItem(&stru_140C2BA20, DelayedWorkQueue);
    }
    else
    {
      WheaFlushETWEventsSelectProcessor(&ProcNumber);
      KeSetTargetProcessorDpcEx((PKDPC)&WheaFlushETWEventsDpcWorker, &ProcNumber);
      KiInsertQueueDpc((ULONG_PTR)&WheaFlushETWEventsDpcWorker, 0LL, 0LL, 0LL, 0);
    }
  }
}
