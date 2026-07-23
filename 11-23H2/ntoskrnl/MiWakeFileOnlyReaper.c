/*
 * XREFs of MiWakeFileOnlyReaper @ 0x14064099C
 * Callers:
 *     MiInsertPageInList @ 0x14026EE90 (MiInsertPageInList.c)
 *     MiQueueExtentPfnDeletion @ 0x14063F608 (MiQueueExtentPfnDeletion.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1402B7EC0 (ExQueueWorkItem.c)
 */

void MiWakeFileOnlyReaper()
{
  if ( !byte_140C65729 )
  {
    stru_140C656E8.List.Flink = 0LL;
    stru_140C656E8.WorkerRoutine = (void (__fastcall *)(void *))MiDeleteExtentPfns;
    stru_140C656E8.Parameter = (void *)1;
    ExQueueWorkItem(&stru_140C656E8, DelayedWorkQueue);
    byte_140C65729 = 1;
  }
}
