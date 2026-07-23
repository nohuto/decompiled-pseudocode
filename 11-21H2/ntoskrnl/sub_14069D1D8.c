/*
 * XREFs of sub_14069D1D8 @ 0x14069D1D8
 * Callers:
 *     sub_14069BBC0 @ 0x14069BBC0 (sub_14069BBC0.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

void __fastcall sub_14069D1D8(_QWORD *a1, void *a2)
{
  __int64 Pool2; // rax
  struct _WORK_QUEUE_ITEM *v5; // rbx

  Pool2 = ExAllocatePool2(64LL, 48LL, 1397122387LL);
  v5 = (struct _WORK_QUEUE_ITEM *)Pool2;
  if ( Pool2 )
  {
    *(_QWORD *)(Pool2 + 32) = *a1;
    *(_QWORD *)(Pool2 + 40) = a2;
    if ( a2 )
      ObfReferenceObjectWithTag(a2, 0x53466553u);
    v5->List.Flink = 0LL;
    v5->WorkerRoutine = (PWORKER_THREAD_ROUTINE)sub_1406EA9C0;
    v5->Parameter = v5;
    ExQueueWorkItem(v5, DelayedWorkQueue);
  }
}
