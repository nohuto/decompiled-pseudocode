/*
 * XREFs of PopBsdFlush @ 0x1407A66B4
 * Callers:
 *     PopBsdHandleRequest @ 0x14032D618 (PopBsdHandleRequest.c)
 *     PopBsdUpdateWorker @ 0x1408758C0 (PopBsdUpdateWorker.c)
 *     PopBsdFlushWorker @ 0x140980820 (PopBsdFlushWorker.c)
 * Callees:
 *     KeSetEvent @ 0x14023C6B0 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x140243DB0 (KeWaitForSingleObject.c)
 *     PopWriteBsdPoInfo @ 0x14032B570 (PopWriteBsdPoInfo.c)
 *     PopReleaseRwLock @ 0x14032C710 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C874 (PopAcquireRwLockExclusive.c)
 */

LONG __fastcall PopBsdFlush(char a1)
{
  LARGE_INTEGER Timeout; // [rsp+48h] [rbp+10h] BYREF

  Timeout.QuadPart = 0LL;
  if ( !PopBsdFlushInactiveEvent.Header.SignalState
    || KeWaitForSingleObject(&PopBsdFlushInactiveEvent, Executive, 0, 0, &Timeout) < 0 )
  {
    PopReleaseRwLock(&PopBsdUpdateLock);
    KeWaitForSingleObject(&PopBsdFlushInactiveEvent, Executive, 0, 0, 0LL);
    PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
  }
  if ( (a1 & 1) != 0 )
    PopWriteBsdPoInfo(RtlBsdPowerTransition);
  if ( (a1 & 2) != 0 )
    PopWriteBsdPoInfo(RtlBsdPowerTransitionExtension);
  if ( (a1 & 4) != 0 )
    PopWriteBsdPoInfo(RtlBsdItemPowerButtonPressInfo);
  return KeSetEvent(&PopBsdFlushInactiveEvent, 0, 0);
}
