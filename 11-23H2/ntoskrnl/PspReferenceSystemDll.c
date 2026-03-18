/*
 * XREFs of PspReferenceSystemDll @ 0x1407A34A4
 * Callers:
 *     DbgkCreateThread @ 0x14076FC1C (DbgkCreateThread.c)
 *     PspMapSystemDll @ 0x1407A32E0 (PspMapSystemDll.c)
 *     MmInitSystemDll @ 0x140B75608 (MmInitSystemDll.c)
 *     PspGetSystemDllSecureHandle @ 0x140B96B2C (PspGetSystemDllSecureHandle.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockSharedEx @ 0x140230D90 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     ObFastReferenceObject @ 0x1402A1650 (ObFastReferenceObject.c)
 *     ExfReleasePushLockShared @ 0x1402BD860 (ExfReleasePushLockShared.c)
 *     ObFastReferenceObjectLocked @ 0x140582AB0 (ObFastReferenceObjectLocked.c)
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
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
  }
  return v2;
}
