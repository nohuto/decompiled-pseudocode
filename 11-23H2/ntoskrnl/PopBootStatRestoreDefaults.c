/*
 * XREFs of PopBootStatRestoreDefaults @ 0x1409972B0
 * Callers:
 *     PopPowerInformationInternal @ 0x1407ED33C (PopPowerInformationInternal.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140231120 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140231550 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     PopBootStatAccessCheck @ 0x1407EBE24 (PopBootStatAccessCheck.c)
 *     RtlUnlockBootStatusData @ 0x1407EC660 (RtlUnlockBootStatusData.c)
 *     RtlLockBootStatusData @ 0x1407EF060 (RtlLockBootStatusData.c)
 *     RtlRestoreBootStatusDefaults @ 0x1409BDCA0 (RtlRestoreBootStatusDefaults.c)
 */

__int64 PopBootStatRestoreDefaults()
{
  KPROCESSOR_MODE PreviousMode; // bp
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v2; // esi
  HANDLE FileHandle; // [rsp+30h] [rbp+8h] BYREF

  FileHandle = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopBootStatLock, 0LL);
  v2 = RtlLockBootStatusData(&FileHandle);
  if ( v2 >= 0 )
  {
    if ( !PreviousMode || (v2 = PopBootStatAccessCheck(FileHandle, PreviousMode, 1u), v2 >= 0) )
      v2 = RtlRestoreBootStatusDefaults(FileHandle);
  }
  if ( FileHandle )
    RtlUnlockBootStatusData(FileHandle);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopBootStatLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PopBootStatLock);
  KeAbPostRelease((ULONG_PTR)&PopBootStatLock);
  KeLeaveCriticalRegion();
  return (unsigned int)v2;
}
