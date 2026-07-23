/*
 * XREFs of ExTryQueueWorkItem @ 0x1402B9DC0
 * Callers:
 *     PopFxQueueWorkItem @ 0x14028C4BC (PopFxQueueWorkItem.c)
 *     PopFxRequestWorkerInternal @ 0x140315204 (PopFxRequestWorkerInternal.c)
 * Callees:
 *     ExpTryQueueWorkItem @ 0x1402B9BCC (ExpTryQueueWorkItem.c)
 */

char __fastcall ExTryQueueWorkItem(__int64 *a1, unsigned int a2)
{
  return ExpTryQueueWorkItem(*((_QWORD *)PspSystemPartition + 2), a1, a2, 0);
}
