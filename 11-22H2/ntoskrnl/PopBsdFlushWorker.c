/*
 * XREFs of PopBsdFlushWorker @ 0x1409806D0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14032C2A0 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C404 (PopAcquireRwLockExclusive.c)
 *     PopOkayToQueueNextWorkItem @ 0x14032ED60 (PopOkayToQueueNextWorkItem.c)
 *     PopBsdFlush @ 0x1407A69D4 (PopBsdFlush.c)
 */

__int64 PopBsdFlushWorker()
{
  PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
  PopBsdFlush(7);
  PopReleaseRwLock(&PopBsdUpdateLock);
  return PopOkayToQueueNextWorkItem((__int64)&PopBsdFlushWorkItem);
}
