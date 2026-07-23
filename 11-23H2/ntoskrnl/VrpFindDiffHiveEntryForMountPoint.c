/*
 * XREFs of VrpFindDiffHiveEntryForMountPoint @ 0x14077C25C
 * Callers:
 *     VrpUnloadDifferencingHive @ 0x14077C0BC (VrpUnloadDifferencingHive.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPreAcquire @ 0x140230FD0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ExfReleasePushLock @ 0x1402BDAC0 (ExfReleasePushLock.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402FD2D0 (ExfAcquirePushLockSharedEx.c)
 *     VrpFindDiffHiveEntryForMountPointWithLock @ 0x14077C5E4 (VrpFindDiffHiveEntryForMountPointWithLock.c)
 */

__int64 __fastcall VrpFindDiffHiveEntryForMountPoint(PCUNICODE_STRING String1)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v3; // rbx
  __int64 DiffHiveEntryForMountPointWithLock; // rax
  __int64 v5; // rbx
  signed __int64 v6; // rdx
  ULONG_PTR v7; // rtt

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = KeAbPreAcquire((__int64)&gLoadedDiffHivesLock, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&gLoadedDiffHivesLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)&gLoadedDiffHivesLock, 0LL, v3, (__int64)&gLoadedDiffHivesLock);
  if ( v3 )
    *(_BYTE *)(v3 + 18) = 1;
  DiffHiveEntryForMountPointWithLock = VrpFindDiffHiveEntryForMountPointWithLock(String1);
  v5 = DiffHiveEntryForMountPointWithLock;
  if ( DiffHiveEntryForMountPointWithLock
    && _InterlockedIncrement64((volatile signed __int64 *)(DiffHiveEntryForMountPointWithLock + 16)) <= 1 )
  {
    __fastfail(0xEu);
  }
  _m_prefetchw(&gLoadedDiffHivesLock);
  v6 = gLoadedDiffHivesLock - 16;
  if ( (gLoadedDiffHivesLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v6 = 0LL;
  if ( (gLoadedDiffHivesLock & 2) != 0
    || (v7 = gLoadedDiffHivesLock,
        v7 != _InterlockedCompareExchange64((volatile signed __int64 *)&gLoadedDiffHivesLock, v6, gLoadedDiffHivesLock)) )
  {
    ExfReleasePushLock(&gLoadedDiffHivesLock);
  }
  KeAbPostRelease((ULONG_PTR)&gLoadedDiffHivesLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v5;
}
