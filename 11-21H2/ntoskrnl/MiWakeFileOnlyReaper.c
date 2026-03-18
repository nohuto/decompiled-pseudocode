/*
 * XREFs of MiWakeFileOnlyReaper @ 0x1405A1CC0
 * Callers:
 *     MiInsertPageInList @ 0x1402BF9C0 (MiInsertPageInList.c)
 *     MiQueueExtentPfnDeletion @ 0x1405A0964 (MiQueueExtentPfnDeletion.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 */

void MiWakeFileOnlyReaper()
{
  if ( !byte_140C4F2E9 )
  {
    stru_140C4F2A8.List.Flink = 0LL;
    stru_140C4F2A8.WorkerRoutine = (void (__fastcall *)(void *))MiDeleteExtentPfns;
    stru_140C4F2A8.Parameter = (void *)1;
    ExQueueWorkItem(&stru_140C4F2A8, DelayedWorkQueue);
    byte_140C4F2E9 = 1;
  }
}
