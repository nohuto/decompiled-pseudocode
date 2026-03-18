/*
 * XREFs of ExEnableRaiseUMExceptionOnInvalidHandleClose @ 0x1406CB004
 * Callers:
 *     NtSetInformationProcess @ 0x1407E7850 (NtSetInformationProcess.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AC800 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 */

_QWORD *__fastcall ExEnableRaiseUMExceptionOnInvalidHandleClose(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  volatile signed __int64 *v5; // rsi

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = (volatile signed __int64 *)(a1 + 56);
  ExAcquirePushLockExclusiveEx(a1 + 56, 0LL);
  if ( a2 )
  {
    if ( a2 == 1 )
      *(_BYTE *)(a1 + 44) |= 0x10u;
  }
  else
  {
    *(_BYTE *)(a1 + 44) &= ~0x10u;
  }
  if ( (_InterlockedExchangeAdd64(v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v5);
  KeAbPostRelease((ULONG_PTR)v5);
  return KeLeaveCriticalRegionThread((__int64)CurrentThread);
}
