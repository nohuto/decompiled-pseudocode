/*
 * XREFs of sub_1405A1CC0 @ 0x1405A1CC0
 * Callers:
 *     sub_1402BF9C0 @ 0x1402BF9C0 (sub_1402BF9C0.c)
 *     sub_1405A0964 @ 0x1405A0964 (sub_1405A0964.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 */

void sub_1405A1CC0()
{
  if ( !byte_140C4F2E9 )
  {
    stru_140C4F2A8.List.Flink = 0LL;
    stru_140C4F2A8.WorkerRoutine = (PWORKER_THREAD_ROUTINE)sub_14059E2C0;
    stru_140C4F2A8.Parameter = (PVOID)1;
    ExQueueWorkItem(&stru_140C4F2A8, DelayedWorkQueue);
    byte_140C4F2E9 = 1;
  }
}
