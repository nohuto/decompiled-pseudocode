/*
 * XREFs of sub_14024C070 @ 0x14024C070
 * Callers:
 *     sub_14024BFF8 @ 0x14024BFF8 (sub_14024BFF8.c)
 * Callees:
 *     sub_14024C0E0 @ 0x14024C0E0 (sub_14024C0E0.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 */

void __fastcall sub_14024C070(int a1, int a2, int a3, int a4, void *a5, int a6, __int64 a7)
{
  PWORK_QUEUE_ITEM v7; // rcx
  PWORK_QUEUE_ITEM WorkItem[3]; // [rsp+40h] [rbp-18h] BYREF

  WorkItem[0] = 0LL;
  if ( (int)sub_14024C0E0(a1, a2, a3, a4, a5, a6, a7, (__int64)WorkItem) >= 0 )
  {
    v7 = WorkItem[0];
    WorkItem[0]->List.Flink = 0LL;
    v7->WorkerRoutine = (PWORKER_THREAD_ROUTINE)sub_1406D97E0;
    v7->Parameter = v7;
    ExQueueWorkItem(v7, DelayedWorkQueue);
  }
}
