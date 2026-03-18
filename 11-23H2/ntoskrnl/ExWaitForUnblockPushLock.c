/*
 * XREFs of ExWaitForUnblockPushLock @ 0x140609B10
 * Callers:
 *     <none>
 * Callees:
 *     ExTimedWaitForUnblockPushLock @ 0x140348780 (ExTimedWaitForUnblockPushLock.c)
 */

__int64 __fastcall ExWaitForUnblockPushLock(volatile __int64 *a1, char *a2)
{
  return ExTimedWaitForUnblockPushLock(a1, a2, 0LL);
}
