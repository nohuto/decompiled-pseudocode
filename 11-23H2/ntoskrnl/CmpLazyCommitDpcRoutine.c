/*
 * XREFs of CmpLazyCommitDpcRoutine @ 0x140616490
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x1402B7C30 (ExQueueWorkItem.c)
 */

void CmpLazyCommitDpcRoutine()
{
  if ( CmpLazyCommitWorkItemActive )
    ExQueueWorkItem(&CmpLazyCommitWorkItem, DelayedWorkQueue);
}
