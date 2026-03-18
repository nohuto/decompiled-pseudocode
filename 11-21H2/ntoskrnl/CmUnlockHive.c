/*
 * XREFs of CmUnlockHive @ 0x14071F27C
 * Callers:
 *     CmpWaitForLateUnloadWorker @ 0x1402A4298 (CmpWaitForLateUnloadWorker.c)
 * Callees:
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall CmUnlockHive(__int64 a1)
{
  ULONG_PTR v1; // rbx

  v1 = a1 + 1680;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1680), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a1 + 1680);
  return KeAbPostRelease(v1);
}
