/*
 * XREFs of RtlUnlockBootStatusData @ 0x1406D6AD0
 * Callers:
 *     PopBootStatGet @ 0x1406D5F3C (PopBootStatGet.c)
 *     PopBootStatSet @ 0x1406D6228 (PopBootStatSet.c)
 *     PoClearTransitionMarker @ 0x1408285B0 (PoClearTransitionMarker.c)
 *     PopBootStatCheckIntegrity @ 0x140998CC4 (PopBootStatCheckIntegrity.c)
 *     PopBootStatRestoreDefaults @ 0x140998F18 (PopBootStatRestoreDefaults.c)
 *     PopBootStatUnlock @ 0x140998FF4 (PopBootStatUnlock.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwFsControlFile @ 0x14041BE80 (ZwFsControlFile.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
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
    ExfTryToWakePushLock(&RtlpBootStatHandleLock);
  KeAbPostRelease((ULONG_PTR)&RtlpBootStatHandleLock);
  KeLeaveCriticalRegion();
}
