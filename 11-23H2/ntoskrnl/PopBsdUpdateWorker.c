/*
 * XREFs of PopBsdUpdateWorker @ 0x140875680
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14032C480 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C5E4 (PopAcquireRwLockExclusive.c)
 *     PopOkayToQueueNextWorkItem @ 0x14032EF00 (PopOkayToQueueNextWorkItem.c)
 *     PopBsdFlush @ 0x1407A64C4 (PopBsdFlush.c)
 */

void PopBsdUpdateWorker()
{
  int v0; // eax

  PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
  while ( 1 )
  {
    v0 = PopBsdUpdateRequests;
    PopBsdUpdateRequests = 0;
    if ( !v0 )
      break;
    PopBsdFlush(v0);
  }
  PopOkayToQueueNextWorkItem((__int64)&PopBsdUpdateWorkItem);
  PopReleaseRwLock(&PopBsdUpdateLock);
}
