/*
 * XREFs of CmpLockSiloKeyLockTrackerExclusive @ 0x140847A74
 * Callers:
 *     CmpStartSiloKeyLockTracker @ 0x14080C978 (CmpStartSiloKeyLockTracker.c)
 *     CmLockKeyForWrite @ 0x1408475CC (CmLockKeyForWrite.c)
 *     CmpStopSiloKeyLockTracker @ 0x140A1C148 (CmpStopSiloKeyLockTracker.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140230FD0 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FD0A0 (ExfAcquirePushLockExclusiveEx.c)
 */

__int64 __fastcall CmpLockSiloKeyLockTrackerExclusive(unsigned __int64 *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 result; // rax
  __int64 v4; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  result = KeAbPreAcquire((__int64)a1, 0LL);
  v4 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)a1, 0LL) )
    result = ExfAcquirePushLockExclusiveEx(a1, result, (__int64)a1);
  if ( v4 )
    *(_BYTE *)(v4 + 18) = 1;
  return result;
}
