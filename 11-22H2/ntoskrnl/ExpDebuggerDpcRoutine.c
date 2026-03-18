/*
 * XREFs of ExpDebuggerDpcRoutine @ 0x1403B65A0
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x1402B7C00 (ExQueueWorkItem.c)
 */

void ExpDebuggerDpcRoutine()
{
  ExQueueWorkItem(&ExpDebuggerWorkItem, DelayedWorkQueue);
}
