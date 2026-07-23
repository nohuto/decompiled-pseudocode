/*
 * XREFs of VrpUnloadDifferencingHive @ 0x14077C0BC
 * Callers:
 *     VrpHandleIoctlLoadDifferencingHive @ 0x14077AF58 (VrpHandleIoctlLoadDifferencingHive.c)
 *     VrpCleanupNamespace @ 0x14077BFE8 (VrpCleanupNamespace.c)
 *     VrpHandleIoctlUnloadDifferencingHiveForHost @ 0x140A72C68 (VrpHandleIoctlUnloadDifferencingHiveForHost.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPreAcquire @ 0x140230FD0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FD0A0 (ExfAcquirePushLockExclusiveEx.c)
 *     ZwUnloadKey @ 0x14041EBD0 (ZwUnloadKey.c)
 *     ZwUnloadKey2 @ 0x14041EBF0 (ZwUnloadKey2.c)
 *     VrpFindDiffHiveEntryForMountPoint @ 0x14077C25C (VrpFindDiffHiveEntryForMountPoint.c)
 *     VrpRelinquishDiffHiveEntryTransitionOwner @ 0x14077C750 (VrpRelinquishDiffHiveEntryTransitionOwner.c)
 *     VrpDecrementDiffHiveEntryHardRefCount @ 0x14077C790 (VrpDecrementDiffHiveEntryHardRefCount.c)
 *     VrpBecomeDiffHiveEntryTransitionOwner @ 0x14077C7D0 (VrpBecomeDiffHiveEntryTransitionOwner.c)
 *     VrpDereferenceDiffHiveEntry @ 0x14077C820 (VrpDereferenceDiffHiveEntry.c)
 *     VrpIncrementDiffHiveEntryHardRefCount @ 0x14077CB28 (VrpIncrementDiffHiveEntryHardRefCount.c)
 */

__int64 __fastcall VrpUnloadDifferencingHive(UNICODE_STRING *a1)
{
  __int64 DiffHiveEntryForMountPoint; // rdi
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rsi
  char v7; // al
  char v8; // r15
  char v9; // cl
  NTSTATUS v10; // esi
  struct _KTHREAD *v11; // rax
  __int64 v12; // rax
  __int64 v13; // r14
  char v14; // bp
  OBJECT_ATTRIBUTES TargetKey; // [rsp+20h] [rbp-48h] BYREF

  memset(&TargetKey, 0, 44);
  DiffHiveEntryForMountPoint = VrpFindDiffHiveEntryForMountPoint(a1);
  if ( DiffHiveEntryForMountPoint )
  {
    CurrentThread = KeGetCurrentThread();
    v4 = (volatile signed __int64 *)(DiffHiveEntryForMountPoint + 24);
    --CurrentThread->KernelApcDisable;
    v5 = KeAbPreAcquire(DiffHiveEntryForMountPoint + 24, 0LL);
    v6 = v5;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(DiffHiveEntryForMountPoint + 24), 0LL) )
      ExfAcquirePushLockExclusiveEx(
        (unsigned __int64 *)(DiffHiveEntryForMountPoint + 24),
        v5,
        DiffHiveEntryForMountPoint + 24);
    if ( v6 )
      *(_BYTE *)(v6 + 18) = 1;
    if ( (unsigned __int8)VrpDecrementDiffHiveEntryHardRefCount(DiffHiveEntryForMountPoint) )
    {
      v7 = VrpBecomeDiffHiveEntryTransitionOwner(DiffHiveEntryForMountPoint);
      *(_DWORD *)(DiffHiveEntryForMountPoint + 56) &= ~1u;
      v8 = v7;
      v9 = _InterlockedExchangeAdd64(v4, 0xFFFFFFFFFFFFFFFFuLL);
      if ( (v9 & 2) != 0 && (v9 & 4) == 0 )
        ExfTryToWakePushLock((volatile signed __int64 *)(DiffHiveEntryForMountPoint + 24));
      KeAbPostRelease(DiffHiveEntryForMountPoint + 24);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      TargetKey.RootDirectory = 0LL;
      TargetKey.Length = 48;
      *(_OWORD *)&TargetKey.SecurityDescriptor = 0LL;
      TargetKey.Attributes = 576;
      TargetKey.ObjectName = a1;
      v10 = ZwUnloadKey(&TargetKey);
      if ( v10 < 0 )
        v10 = ZwUnloadKey2(&TargetKey, 1u);
      v11 = KeGetCurrentThread();
      --v11->KernelApcDisable;
      v12 = KeAbPreAcquire(DiffHiveEntryForMountPoint + 24, 0LL);
      v13 = v12;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
        ExfAcquirePushLockExclusiveEx(
          (unsigned __int64 *)(DiffHiveEntryForMountPoint + 24),
          v12,
          DiffHiveEntryForMountPoint + 24);
      if ( v13 )
        *(_BYTE *)(v13 + 18) = 1;
      if ( v10 < 0 )
      {
        *(_DWORD *)(DiffHiveEntryForMountPoint + 56) |= 1u;
        VrpIncrementDiffHiveEntryHardRefCount(DiffHiveEntryForMountPoint);
      }
      if ( v8 )
        VrpRelinquishDiffHiveEntryTransitionOwner(DiffHiveEntryForMountPoint);
    }
    else
    {
      v10 = 0;
    }
    v14 = _InterlockedExchangeAdd64(v4, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v14 & 2) != 0 && (v14 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)(DiffHiveEntryForMountPoint + 24));
    KeAbPostRelease(DiffHiveEntryForMountPoint + 24);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    VrpDereferenceDiffHiveEntry((PVOID)DiffHiveEntryForMountPoint);
  }
  else
  {
    return (unsigned int)-1073741772;
  }
  return (unsigned int)v10;
}
