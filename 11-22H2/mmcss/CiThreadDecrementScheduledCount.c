/*
 * XREFs of CiThreadDecrementScheduledCount @ 0x1C000A660
 * Callers:
 *     CiProcessSuspend @ 0x1C0004AE8 (CiProcessSuspend.c)
 *     CiThreadCleanup @ 0x1C000A4B0 (CiThreadCleanup.c)
 * Callees:
 *     CiNdisUpdateThrottleState @ 0x1C000B860 (CiNdisUpdateThrottleState.c)
 */

__int64 __fastcall CiThreadDecrementScheduledCount(__int64 a1)
{
  __int64 result; // rax
  struct _LIST_ENTRY *CurrentThread; // rax
  bool v3; // zf

  result = *(_QWORD *)(a1 + 64);
  if ( (*(_BYTE *)(result + 3) & 1) != 0 )
  {
    ExAcquirePushLockExclusiveEx(&WPP_MAIN_CB.Queue, 0LL);
    CurrentThread = (struct _LIST_ENTRY *)KeGetCurrentThread();
    v3 = LODWORD(WPP_MAIN_CB.DeviceExtension)-- == 1;
    WPP_MAIN_CB.Queue.ListEntry.Blink = CurrentThread;
    if ( v3 )
      CiNdisUpdateThrottleState();
    WPP_MAIN_CB.Queue.ListEntry.Blink = 0LL;
    return ExReleasePushLockExclusiveEx(&WPP_MAIN_CB.Queue, 0LL);
  }
  return result;
}
