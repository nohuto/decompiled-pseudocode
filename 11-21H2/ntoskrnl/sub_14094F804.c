/*
 * XREFs of sub_14094F804 @ 0x14094F804
 * Callers:
 *     sub_14094FC28 @ 0x14094FC28 (sub_14094FC28.c)
 *     sub_14094FCD4 @ 0x14094FCD4 (sub_14094FCD4.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 sub_14094F804()
{
  struct _WORK_QUEUE_ITEM *Pool2; // rax

  Pool2 = (struct _WORK_QUEUE_ITEM *)ExAllocatePool2(64LL, 32LL, 538996816LL);
  if ( !Pool2 )
    return 3221225626LL;
  Pool2->List.Flink = 0LL;
  Pool2->WorkerRoutine = (PWORKER_THREAD_ROUTINE)sub_14094F920;
  Pool2->Parameter = Pool2;
  ExQueueWorkItem(Pool2, CriticalWorkQueue);
  return 0LL;
}
