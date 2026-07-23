/*
 * XREFs of RtlUnlockBootStatusData @ 0x1407EC660
 * Callers:
 *     PopBootStatGet @ 0x1407EC7B8 (PopBootStatGet.c)
 *     PopBootStatSet @ 0x1407EED48 (PopBootStatSet.c)
 *     PopBootStatCheckIntegrity @ 0x14084D83C (PopBootStatCheckIntegrity.c)
 *     PoClearTransitionMarker @ 0x14085E508 (PoClearTransitionMarker.c)
 *     PopBootStatRestoreDefaults @ 0x1409972B0 (PopBootStatRestoreDefaults.c)
 *     PopBootStatUnlock @ 0x140997390 (PopBootStatUnlock.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140231120 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140231550 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     ZwClose @ 0x14041B2D0 (ZwClose.c)
 *     ZwFsControlFile @ 0x14041B810 (ZwFsControlFile.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl RtlUnlockBootStatusData(HANDLE FileHandle)
{
  struct _KTHREAD *CurrentThread; // rax
  int v3; // eax
  char v4; // si
  NTSTATUS result; // eax
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
  if ( !FileHandle )
  {
    FileHandle = BootStatFileHandle;
LABEL_6:
    BootStatReferenceCount = 0;
    v4 = 1;
    BootStatFileHandle = 0LL;
    BootStatFileHandleAcquired = 0;
    BootStatKeepHandleOpen = 0;
LABEL_7:
    if ( !FileHandle )
      goto LABEL_9;
    goto LABEL_8;
  }
  if ( !BootStatKeepHandleOpen && !v3 )
    goto LABEL_6;
LABEL_8:
  ZwFsControlFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, 0x9C040u, &InputBuffer, 2u, 0LL, 0);
  if ( v4 )
  {
    if ( BootStatDataCache )
    {
      ExFreePoolWithTag(BootStatDataCache, 0);
      BootStatDataCache = 0LL;
    }
    ZwClose(FileHandle);
  }
LABEL_9:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&RtlpBootStatHandleLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&RtlpBootStatHandleLock);
  KeAbPostRelease((ULONG_PTR)&RtlpBootStatHandleLock);
  KeLeaveCriticalRegion();
  return result;
}
