/*
 * XREFs of PpmWmiIdleAccountingProcedure @ 0x140598F60
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x1402B7C00 (ExQueueWorkItem.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 */

void PpmWmiIdleAccountingProcedure()
{
  struct _WORK_QUEUE_ITEM *Pool2; // rax

  Pool2 = (struct _WORK_QUEUE_ITEM *)ExAllocatePool2(64LL, 32LL, 1701602409LL);
  if ( Pool2 )
  {
    Pool2->List.Flink = 0LL;
    Pool2->WorkerRoutine = (void (__fastcall *)(void *))PpmWmiIdleAccountingWork;
    Pool2->Parameter = Pool2;
    ExQueueWorkItem(Pool2, DelayedWorkQueue);
  }
}
