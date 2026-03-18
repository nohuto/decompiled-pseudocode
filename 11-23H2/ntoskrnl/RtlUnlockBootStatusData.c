/*
 * XREFs of RtlUnlockBootStatusData @ 0x1407EC390
 * Callers:
 *     PopBootStatGet @ 0x1407EC4E8 (PopBootStatGet.c)
 *     PopBootStatSet @ 0x1407EEA78 (PopBootStatSet.c)
 *     PopBootStatCheckIntegrity @ 0x14084D53C (PopBootStatCheckIntegrity.c)
 *     PoClearTransitionMarker @ 0x14085E2C8 (PoClearTransitionMarker.c)
 *     PopBootStatRestoreDefaults @ 0x1409970B0 (PopBootStatRestoreDefaults.c)
 *     PopBootStatUnlock @ 0x140997190 (PopBootStatUnlock.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140231030 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140231460 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1402BD960 (ExfTryToWakePushLock.c)
 *     ZwClose @ 0x14041AF40 (ZwClose.c)
 *     ZwFsControlFile @ 0x14041B480 (ZwFsControlFile.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall RtlUnlockBootStatusData(HANDLE Handle)
{
  struct _KTHREAD *CurrentThread; // rax
  int v3; // eax
  char v4; // si
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-18h] BYREF
  __int16 InputBuffer; // [rsp+78h] [rbp+10h] BYREF

  IoStatusBlock = 0LL;
  InputBuffer = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&RtlpBootStatHandleLock, 0LL);
  if ( !BootStatReferenceCount )
    goto LABEL_9;
  v3 = BootStatReferenceCount - 1;
  v4 = 0;
  --BootStatReferenceCount;
  if ( !BootStatFileHandleAcquired )
    goto LABEL_7;
  if ( !Handle )
  {
    Handle = BootStatFileHandle;
LABEL_6:
    BootStatReferenceCount = 0;
    v4 = 1;
    BootStatFileHandle = 0LL;
    BootStatFileHandleAcquired = 0;
    BootStatKeepHandleOpen = 0;
LABEL_7:
    if ( !Handle )
      goto LABEL_9;
    goto LABEL_8;
  }
  if ( !BootStatKeepHandleOpen && !v3 )
    goto LABEL_6;
LABEL_8:
  ZwFsControlFile(Handle, 0LL, 0LL, 0LL, &IoStatusBlock, 0x9C040u, &InputBuffer, 2u, 0LL, 0);
  if ( v4 )
  {
    if ( BootStatDataCache )
    {
      ExFreePoolWithTag(BootStatDataCache, 0);
      BootStatDataCache = 0LL;
    }
    ZwClose(Handle);
  }
LABEL_9:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&RtlpBootStatHandleLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&RtlpBootStatHandleLock);
  KeAbPostRelease((ULONG_PTR)&RtlpBootStatHandleLock);
  KeLeaveCriticalRegion();
}
