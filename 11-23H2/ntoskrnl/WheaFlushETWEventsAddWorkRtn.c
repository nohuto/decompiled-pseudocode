/*
 * XREFs of WheaFlushETWEventsAddWorkRtn @ 0x140612F74
 * Callers:
 *     WheaProcessWaitingETWEvents @ 0x140613100 (WheaProcessWaitingETWEvents.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x140254790 (KiInsertQueueDpc.c)
 *     ExQueueWorkItem @ 0x1402B7C30 (ExQueueWorkItem.c)
 *     KeSetTargetProcessorDpcEx @ 0x14036BCD0 (KeSetTargetProcessorDpcEx.c)
 *     WheaFlushETWEventsSelectProcessor @ 0x1405802C0 (WheaFlushETWEventsSelectProcessor.c)
 */

void WheaFlushETWEventsAddWorkRtn()
{
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+40h] [rbp+8h] BYREF

  ProcNumber = 0;
  _InterlockedAdd(&dword_140C2BA60, 1u);
  if ( dword_140C2BA60 <= 1 )
  {
    if ( KeGetCurrentIrql() <= 2u )
    {
      ExQueueWorkItem(&stru_140C2BA40, DelayedWorkQueue);
    }
    else
    {
      WheaFlushETWEventsSelectProcessor(&ProcNumber);
      KeSetTargetProcessorDpcEx((PKDPC)&WheaFlushETWEventsDpcWorker, &ProcNumber);
      KiInsertQueueDpc((ULONG_PTR)&WheaFlushETWEventsDpcWorker, 0LL, 0LL, 0LL, 0);
    }
  }
}
