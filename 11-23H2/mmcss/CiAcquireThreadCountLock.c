/*
 * XREFs of CiAcquireThreadCountLock @ 0x1C000DCBC
 * Callers:
 *     CiNdisCleanupThrottle @ 0x1C000DD24 (CiNdisCleanupThrottle.c)
 * Callees:
 *     <none>
 */

struct _LIST_ENTRY *CiAcquireThreadCountLock()
{
  struct _LIST_ENTRY *result; // rax

  ExAcquirePushLockExclusiveEx(&WPP_MAIN_CB.Queue, 0LL);
  result = (struct _LIST_ENTRY *)KeGetCurrentThread();
  WPP_MAIN_CB.Queue.ListEntry.Blink = result;
  return result;
}
