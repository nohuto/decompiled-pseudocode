/*
 * XREFs of sub_14091191C @ 0x14091191C
 * Callers:
 *     sub_14068D5F8 @ 0x14068D5F8 (sub_14068D5F8.c)
 *     sub_140863DD8 @ 0x140863DD8 (sub_140863DD8.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

char __fastcall sub_14091191C(int a1)
{
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rax

  PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x20204D43u);
  if ( PoolWithTag )
  {
    PoolWithTag->List.Flink = 0LL;
    PoolWithTag->WorkerRoutine = (PWORKER_THREAD_ROUTINE)sub_140911B20;
    dword_140D0181C = a1;
    PoolWithTag->Parameter = PoolWithTag;
    ExQueueWorkItem(PoolWithTag, DelayedWorkQueue);
    LOBYTE(PoolWithTag) = 1;
  }
  return (char)PoolWithTag;
}
