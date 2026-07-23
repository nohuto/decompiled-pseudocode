/*
 * XREFs of PopBsdUpdateWorker @ 0x1408758C0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14032C710 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C874 (PopAcquireRwLockExclusive.c)
 *     PopOkayToQueueNextWorkItem @ 0x14032F190 (PopOkayToQueueNextWorkItem.c)
 *     PopBsdFlush @ 0x1407A66B4 (PopBsdFlush.c)
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
