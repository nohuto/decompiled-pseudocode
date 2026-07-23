/*
 * XREFs of PopUnlockAfterSleepWorker @ 0x140AA67C0
 * Callers:
 *     <none>
 * Callees:
 *     MmUnlockPagableImageSection @ 0x14025A6D0 (MmUnlockPagableImageSection.c)
 *     PopReleaseRwLock @ 0x14032C710 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C874 (PopAcquireRwLockExclusive.c)
 *     ExNotifyCallback @ 0x14033C1D0 (ExNotifyCallback.c)
 *     PoPushPowerStateTransitionRecordWithCallback @ 0x14058F5F4 (PoPushPowerStateTransitionRecordWithCallback.c)
 *     PopRunNormalIrpWorkers @ 0x14059909C (PopRunNormalIrpWorkers.c)
 *     PopReleaseTransitionLock @ 0x140801968 (PopReleaseTransitionLock.c)
 *     PopClearShutdownMarker @ 0x140980924 (PopClearShutdownMarker.c)
 *     PopClearSleepMarker @ 0x140980934 (PopClearSleepMarker.c)
 *     PopClearSystemShutdownMarker @ 0x140980978 (PopClearSystemShutdownMarker.c)
 *     PopClearTransitionCheckpoints @ 0x1409809B8 (PopClearTransitionCheckpoints.c)
 *     PopAdjustHiberFile @ 0x140987EE4 (PopAdjustHiberFile.c)
 *     PopClearHibernateDiagnosticInfo @ 0x14098872C (PopClearHibernateDiagnosticInfo.c)
 *     PopFreeHiberContext @ 0x1409887F0 (PopFreeHiberContext.c)
 *     PopClearSystemSleepCheckpoint @ 0x140996F7C (PopClearSystemSleepCheckpoint.c)
 *     ExSwapinWorkerThreads @ 0x140A00858 (ExSwapinWorkerThreads.c)
 *     CmSetLazyFlushState @ 0x140A11B78 (CmSetLazyFlushState.c)
 *     PopReleasePolicyLock @ 0x140A87BA4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A87BE4 (PopAcquirePolicyLock.c)
 *     PoDelistPowerStateTransitionBlocker @ 0x140AA5FDC (PoDelistPowerStateTransitionBlocker.c)
 */

LONG PopUnlockAfterSleepWorker()
{
  __int64 v0; // rcx

  PopAcquireRwLockExclusive((ULONG_PTR)&PopUnlockAfterSleepLock);
  qword_140C3CF48 = KeGetCurrentThread();
  if ( PopWaitingForTransitionLock
    && (int)PoPushPowerStateTransitionRecordWithCallback(
              KeGetCurrentThread()->ApcState.Process,
              qword_140C3CF48,
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
  qword_140C3CF48 = 0LL;
  if ( PopWaitingForTransitionLock )
    PoDelistPowerStateTransitionBlocker();
  PopReleaseRwLock(&PopUnlockAfterSleepLock);
  return PopReleaseTransitionLock(1);
}
