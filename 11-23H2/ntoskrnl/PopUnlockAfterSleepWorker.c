/*
 * XREFs of PopUnlockAfterSleepWorker @ 0x140AA6950
 * Callers:
 *     <none>
 * Callees:
 *     MmUnlockPagableImageSection @ 0x14025A440 (MmUnlockPagableImageSection.c)
 *     PopReleaseRwLock @ 0x14032C480 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C5E4 (PopAcquireRwLockExclusive.c)
 *     ExNotifyCallback @ 0x14033BF40 (ExNotifyCallback.c)
 *     PoPushPowerStateTransitionRecordWithCallback @ 0x14058F104 (PoPushPowerStateTransitionRecordWithCallback.c)
 *     PopRunNormalIrpWorkers @ 0x140598BAC (PopRunNormalIrpWorkers.c)
 *     PopReleaseTransitionLock @ 0x140801698 (PopReleaseTransitionLock.c)
 *     PopClearShutdownMarker @ 0x140980724 (PopClearShutdownMarker.c)
 *     PopClearSleepMarker @ 0x140980734 (PopClearSleepMarker.c)
 *     PopClearSystemShutdownMarker @ 0x140980778 (PopClearSystemShutdownMarker.c)
 *     PopClearTransitionCheckpoints @ 0x1409807B8 (PopClearTransitionCheckpoints.c)
 *     PopAdjustHiberFile @ 0x140987CE4 (PopAdjustHiberFile.c)
 *     PopClearHibernateDiagnosticInfo @ 0x14098852C (PopClearHibernateDiagnosticInfo.c)
 *     PopFreeHiberContext @ 0x1409885F0 (PopFreeHiberContext.c)
 *     PopClearSystemSleepCheckpoint @ 0x140996D7C (PopClearSystemSleepCheckpoint.c)
 *     ExSwapinWorkerThreads @ 0x140A005C8 (ExSwapinWorkerThreads.c)
 *     CmSetLazyFlushState @ 0x140A118C8 (CmSetLazyFlushState.c)
 *     PopReleasePolicyLock @ 0x140A87BA4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A87BE4 (PopAcquirePolicyLock.c)
 *     PoDelistPowerStateTransitionBlocker @ 0x140AA616C (PoDelistPowerStateTransitionBlocker.c)
 */

LONG PopUnlockAfterSleepWorker()
{
  __int64 v0; // rcx

  PopAcquireRwLockExclusive((ULONG_PTR)&PopUnlockAfterSleepLock);
  qword_140C3D288 = KeGetCurrentThread();
  if ( PopWaitingForTransitionLock
    && (int)PoPushPowerStateTransitionRecordWithCallback(
              KeGetCurrentThread()->ApcState.Process,
              qword_140C3D288,
              0LL,
              0LL) < 0 )
  {
    PopWaitingForTransitionLock = 0;
  }
  PopReleaseRwLock(&PopUnlockAfterSleepLock);
  CmSetLazyFlushState(1);
  ExSwapinWorkerThreads(1u);
  ExNotifyCallback(ExCbPowerState, (PVOID)3, (PVOID)1);
  PopRunNormalIrpWorkers();
  MmUnlockPagableImageSection(ExPageLockHandle);
  PopClearTransitionCheckpoints();
  PopClearSleepMarker();
  PopClearSystemSleepCheckpoint(0);
  PopClearShutdownMarker();
  PopClearSystemShutdownMarker();
  PopFreeHiberContext();
  PopAcquirePolicyLock();
  if ( BYTE8(PopCapabilities) )
    PopAdjustHiberFile(v0);
  PopClearHibernateDiagnosticInfo();
  PopReleasePolicyLock();
  PopAcquireRwLockExclusive((ULONG_PTR)&PopUnlockAfterSleepLock);
  qword_140C3D288 = 0LL;
  if ( PopWaitingForTransitionLock )
    PoDelistPowerStateTransitionBlocker();
  PopReleaseRwLock(&PopUnlockAfterSleepLock);
  return PopReleaseTransitionLock(1);
}
