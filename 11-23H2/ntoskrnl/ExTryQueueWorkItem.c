/*
 * XREFs of ExTryQueueWorkItem @ 0x1402B9B30
 * Callers:
 *     PopFxQueueWorkItem @ 0x14028C22C (PopFxQueueWorkItem.c)
 *     PopFxRequestWorkerInternal @ 0x140314F74 (PopFxRequestWorkerInternal.c)
 * Callees:
 *     ExpTryQueueWorkItem @ 0x1402B993C (ExpTryQueueWorkItem.c)
 */

char __fastcall ExTryQueueWorkItem(__int64 *a1, unsigned int a2)
{
  return ExpTryQueueWorkItem(*((_QWORD *)PspSystemPartition + 2), a1, a2, 0);
}
