/*
 * XREFs of PspLookupSyscallProviderById @ 0x1405A4C90
 * Callers:
 *     PspSyscallProviderOptIn @ 0x1409B4ECC (PspSyscallProviderOptIn.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockSharedEx @ 0x140230D90 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1402BD860 (ExfReleasePushLockShared.c)
 *     PspLookupSyscallProviderByIdNoLock @ 0x1409B4DBC (PspLookupSyscallProviderByIdNoLock.c)
 */

__int64 __fastcall PspLookupSyscallProviderById(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v5; // ebx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&PspSyscallProviderRegistrationLock, 0LL);
  v5 = PspLookupSyscallProviderByIdNoLock(a1, a2);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PspSyscallProviderRegistrationLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PspSyscallProviderRegistrationLock);
  KeAbPostRelease((ULONG_PTR)&PspSyscallProviderRegistrationLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v5;
}
