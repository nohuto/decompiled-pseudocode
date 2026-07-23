/*
 * XREFs of WheaFlushETWEventsAddWorkRtn @ 0x1406134C4
 * Callers:
 *     WheaProcessWaitingETWEvents @ 0x140613650 (WheaProcessWaitingETWEvents.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x140254850 (KiInsertQueueDpc.c)
 *     ExQueueWorkItem @ 0x1402B7EC0 (ExQueueWorkItem.c)
 *     KeSetTargetProcessorDpcEx @ 0x14036BE70 (KeSetTargetProcessorDpcEx.c)
 *     WheaFlushETWEventsSelectProcessor @ 0x1405807B0 (WheaFlushETWEventsSelectProcessor.c)
 */

void WheaFlushETWEventsAddWorkRtn()
{
  _PROCESSOR_NUMBER ProcNumber; // [rsp+40h] [rbp+8h] BYREF

  ProcNumber = 0;
  _InterlockedAdd(&dword_140C2BA20, 1u);
  if ( dword_140C2BA20 <= 1 )
  {
    if ( KeGetCurrentIrql() <= 2u )
    {
      ExQueueWorkItem(&stru_140C2BA00, DelayedWorkQueue);
    }
    else
    {
      WheaFlushETWEventsSelectProcessor(&ProcNumber);
      KeSetTargetProcessorDpcEx((PKDPC)&WheaFlushETWEventsDpcWorker, &ProcNumber);
      KiInsertQueueDpc((ULONG_PTR)&WheaFlushETWEventsDpcWorker, 0LL, 0LL, 0LL, 0);
    }
  }
}
