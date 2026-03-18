/*
 * XREFs of PspReferenceSystemDll @ 0x140757130
 * Callers:
 *     DbgkCreateThread @ 0x140702604 (DbgkCreateThread.c)
 *     PspMapSystemDll @ 0x140756AD4 (PspMapSystemDll.c)
 *     MmInitSystemDll @ 0x140B30EE0 (MmInitSystemDll.c)
 *     PspGetSystemDllSecureHandle @ 0x140B533E0 (PspGetSystemDllSecureHandle.c)
 * Callees:
 *     ObFastReferenceObject @ 0x14027A950 (ObFastReferenceObject.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     ObFastReferenceObjectLocked @ 0x1405C5DA0 (ObFastReferenceObjectLocked.c)
 */

unsigned __int64 __fastcall PspReferenceSystemDll(signed __int64 *a1)
{
  unsigned __int64 v2; // rdi
  struct _KTHREAD *CurrentThread; // rbp

  v2 = ObFastReferenceObject(a1);
  if ( !v2 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)(a1 + 1), 0LL);
    v2 = ObFastReferenceObjectLocked(a1, 0x64537350u);
    if ( _InterlockedCompareExchange64(a1 + 1, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(a1 + 1);
    KeAbPostRelease((ULONG_PTR)(a1 + 1));
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
  }
  return v2;
}
