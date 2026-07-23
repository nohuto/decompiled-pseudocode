/*
 * XREFs of sub_14055F0C0 @ 0x14055F0C0
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_14055F0C0(struct _KDPC *Dpc, PVOID DeferredContext, PVOID SystemArgument1, PVOID SystemArgument2)
{
  if ( Dpc )
    ExFreePoolWithTag(Dpc, 0);
  stru_140C46C40.Parameter = 0LL;
  stru_140C46C40.List.Flink = 0LL;
  stru_140C46C40.WorkerRoutine = (PWORKER_THREAD_ROUTINE)sub_14080FDC0;
  ExQueueWorkItem(&stru_140C46C40, DelayedWorkQueue);
}
