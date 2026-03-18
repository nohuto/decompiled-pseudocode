/*
 * XREFs of PopBsdFlushWorker @ 0x140980620
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14032C480 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C5E4 (PopAcquireRwLockExclusive.c)
 *     PopOkayToQueueNextWorkItem @ 0x14032EF00 (PopOkayToQueueNextWorkItem.c)
 *     PopBsdFlush @ 0x1407A64C4 (PopBsdFlush.c)
 */

__int64 PopBsdFlushWorker()
{
  PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
  PopBsdFlush(7);
  PopReleaseRwLock(&PopBsdUpdateLock);
  return PopOkayToQueueNextWorkItem((__int64)&PopBsdFlushWorkItem);
}
