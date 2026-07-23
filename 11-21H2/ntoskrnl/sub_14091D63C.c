/*
 * XREFs of sub_14091D63C @ 0x14091D63C
 * Callers:
 *     sub_1403CBDF0 @ 0x1403CBDF0 (sub_1403CBDF0.c)
 *     sub_14083200C @ 0x14083200C (sub_14083200C.c)
 *     sub_14083C870 @ 0x14083C870 (sub_14083C870.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

void sub_14091D63C()
{
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rax

  if ( !byte_140D3CA88 && byte_140D3CA03 && byte_140C5B134 && byte_140D3CA02 )
  {
    PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x20204D43u);
    if ( PoolWithTag )
    {
      PoolWithTag->List.Flink = 0LL;
      PoolWithTag->WorkerRoutine = (PWORKER_THREAD_ROUTINE)sub_14091D6C0;
      byte_140D3CA88 = 1;
      PoolWithTag->Parameter = PoolWithTag;
      ExQueueWorkItem(PoolWithTag, DelayedWorkQueue);
    }
  }
}
