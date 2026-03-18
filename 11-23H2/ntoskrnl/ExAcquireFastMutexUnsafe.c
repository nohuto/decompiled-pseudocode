/*
 * XREFs of ExAcquireFastMutexUnsafe @ 0x140302660
 * Callers:
 *     FsRtlCheckOplockEx2 @ 0x1402FD950 (FsRtlCheckOplockEx2.c)
 *     FsRtlpOplockStoreKeyForDeleteOperation @ 0x1402FE6F0 (FsRtlpOplockStoreKeyForDeleteOperation.c)
 *     FsRtlpRequestShareableOplock @ 0x140301920 (FsRtlpRequestShareableOplock.c)
 *     ExEnterCriticalRegionAndAcquireFastMutexUnsafe @ 0x140302630 (ExEnterCriticalRegionAndAcquireFastMutexUnsafe.c)
 *     FsRtlUninitializeOplock @ 0x14034C630 (FsRtlUninitializeOplock.c)
 *     FsRtlCancelNotify @ 0x14035E1C0 (FsRtlCancelNotify.c)
 *     FsRtlpRequestExclusiveOplock @ 0x1403BFC24 (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x1403D3330 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     KeAcquireGuardedMutexUnsafe @ 0x14045FD90 (KeAcquireGuardedMutexUnsafe.c)
 *     FsRtlOplockBreakToNoneEx @ 0x14053DD10 (FsRtlOplockBreakToNoneEx.c)
 *     FsRtlOplockGetAnyBreakOwnerProcess @ 0x14053DED0 (FsRtlOplockGetAnyBreakOwnerProcess.c)
 *     FsRtlpAcknowledgeOplockBreak @ 0x14053DF68 (FsRtlpAcknowledgeOplockBreak.c)
 *     DifExAcquireFastMutexUnsafeWrapper @ 0x1405D6EB0 (DifExAcquireFastMutexUnsafeWrapper.c)
 *     DifKeAcquireGuardedMutexUnsafeWrapper @ 0x1405E2130 (DifKeAcquireGuardedMutexUnsafeWrapper.c)
 *     FsRtlCheckOplockForFsFilterCallback @ 0x14067E390 (FsRtlCheckOplockForFsFilterCallback.c)
 *     CmpInitCmRM @ 0x14068571C (CmpInitCmRM.c)
 *     ExpGetFirmwareEnvironmentVariable @ 0x1406875CC (ExpGetFirmwareEnvironmentVariable.c)
 *     FsRtlNotifyFilterReportChangeLiteEx @ 0x14068A3A0 (FsRtlNotifyFilterReportChangeLiteEx.c)
 *     CmKtmNotification @ 0x140697D50 (CmKtmNotification.c)
 *     CmpIsCmRm @ 0x1406981A8 (CmpIsCmRm.c)
 *     CmpCleanupTransactionState @ 0x14069831C (CmpCleanupTransactionState.c)
 *     CmpTransInitializeTransaction @ 0x14069846C (CmpTransInitializeTransaction.c)
 *     CmpRunDownCmRM @ 0x1406987D0 (CmpRunDownCmRM.c)
 *     CmpLogCheckpoint @ 0x1406989A4 (CmpLogCheckpoint.c)
 *     CmSnapshotRMTxArray @ 0x140699FE8 (CmSnapshotRMTxArray.c)
 *     FsRtlpOplockFsctrlInternal @ 0x140766310 (FsRtlpOplockFsctrlInternal.c)
 *     CmpNotifyTriggerCheck @ 0x1407667E4 (CmpNotifyTriggerCheck.c)
 *     CmpPostNotify @ 0x140766860 (CmpPostNotify.c)
 *     NtNotifyChangeMultipleKeys @ 0x140766B30 (NtNotifyChangeMultipleKeys.c)
 *     LOCK_TRANSACTION_LIST @ 0x140767FCC (LOCK_TRANSACTION_LIST.c)
 *     CmpTransSearchAddTrans @ 0x14076853C (CmpTransSearchAddTrans.c)
 *     CmpTransSearchAddLightWeightTrans @ 0x14076889C (CmpTransSearchAddLightWeightTrans.c)
 *     CmpTransMgrPrepare @ 0x140768A9C (CmpTransMgrPrepare.c)
 *     CmNotifyRunDown @ 0x14076E5E4 (CmNotifyRunDown.c)
 *     FsRtlNotifyCleanup @ 0x1407C4A70 (FsRtlNotifyCleanup.c)
 *     FsRtlNotifyFilterChangeDirectoryLite @ 0x1407C4B00 (FsRtlNotifyFilterChangeDirectoryLite.c)
 *     CmpTransMgrRollback @ 0x1407D0938 (CmpTransMgrRollback.c)
 *     CmpCleanupLightWeightTransaction @ 0x1407D09B4 (CmpCleanupLightWeightTransaction.c)
 *     FsRtlOplockBreakH2 @ 0x1407E2400 (FsRtlOplockBreakH2.c)
 *     CmRmFinalizeRecovery @ 0x1407E8728 (CmRmFinalizeRecovery.c)
 *     NtQueryBootEntryOrder @ 0x14083D640 (NtQueryBootEntryOrder.c)
 *     NtQueryBootOptions @ 0x14083D840 (NtQueryBootOptions.c)
 *     NtEnumerateBootEntries @ 0x14083DAB0 (NtEnumerateBootEntries.c)
 *     FsRtlNotifyFilterReportChange @ 0x14084B490 (FsRtlNotifyFilterReportChange.c)
 *     FsRtlNotifyFilterChangeDirectory @ 0x140851C60 (FsRtlNotifyFilterChangeDirectory.c)
 *     SeRegisterLogonSessionTerminatedRoutineEx @ 0x140860D60 (SeRegisterLogonSessionTerminatedRoutineEx.c)
 *     NtGetEnvironmentVariableEx @ 0x1408625C0 (NtGetEnvironmentVariableEx.c)
 *     FsRtlCheckUpperOplock @ 0x14093DBD0 (FsRtlCheckUpperOplock.c)
 *     FsRtlpOpBatchBreakClosePending @ 0x14093E34C (FsRtlpOpBatchBreakClosePending.c)
 *     FsRtlpOplockBreakNotify @ 0x14093E488 (FsRtlpOplockBreakNotify.c)
 *     FsRtlNotifyCleanupAll @ 0x14093FFA0 (FsRtlNotifyCleanupAll.c)
 *     KeStartDynamicProcessor @ 0x140974700 (KeStartDynamicProcessor.c)
 *     SeRegisterLogonSessionTerminatedRoutine @ 0x1409CFBC0 (SeRegisterLogonSessionTerminatedRoutine.c)
 *     SeUnregisterLogonSessionTerminatedRoutine @ 0x1409CFC60 (SeUnregisterLogonSessionTerminatedRoutine.c)
 *     SeUnregisterLogonSessionTerminatedRoutineEx @ 0x1409CFD30 (SeUnregisterLogonSessionTerminatedRoutineEx.c)
 *     SepNotifyFileSystems @ 0x1409D0270 (SepNotifyFileSystems.c)
 *     ExpSetBootEntry @ 0x1409FD170 (ExpSetBootEntry.c)
 *     ExpSetDriverEntry @ 0x1409FD900 (ExpSetDriverEntry.c)
 *     ExpSetFirmwareEnvironmentVariable @ 0x1409FDEF4 (ExpSetFirmwareEnvironmentVariable.c)
 *     NtDeleteBootEntry @ 0x1409FE8A0 (NtDeleteBootEntry.c)
 *     NtDeleteDriverEntry @ 0x1409FEA30 (NtDeleteDriverEntry.c)
 *     NtEnumerateDriverEntries @ 0x1409FEBC0 (NtEnumerateDriverEntries.c)
 *     NtEnumerateSystemEnvironmentValuesEx @ 0x1409FF080 (NtEnumerateSystemEnvironmentValuesEx.c)
 *     NtQueryDriverEntryOrder @ 0x1409FF2E0 (NtQueryDriverEntryOrder.c)
 *     NtQueryEnvironmentVariableInfoEx @ 0x1409FF560 (NtQueryEnvironmentVariableInfoEx.c)
 *     NtQuerySystemEnvironmentValue @ 0x1409FF610 (NtQuerySystemEnvironmentValue.c)
 *     NtSetBootEntryOrder @ 0x1409FF940 (NtSetBootEntryOrder.c)
 *     NtSetBootOptions @ 0x1409FFB50 (NtSetBootOptions.c)
 *     NtSetDriverEntryOrder @ 0x1409FFD70 (NtSetDriverEntryOrder.c)
 *     NtSetSystemEnvironmentValue @ 0x1409FFF80 (NtSetSystemEnvironmentValue.c)
 *     CmObliterateRMTxArray @ 0x140A1BFB0 (CmObliterateRMTxArray.c)
 *     CmpLazyCommitWorker @ 0x140A1C0C0 (CmpLazyCommitWorker.c)
 *     CmpCommitPreparedLightWeightTransaction @ 0x140A1C5E4 (CmpCommitPreparedLightWeightTransaction.c)
 *     CmpPrepareLightWeightTransaction @ 0x140A1C754 (CmpPrepareLightWeightTransaction.c)
 *     KeInitSystem @ 0x140B4DED4 (KeInitSystem.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x1402A1720 (MmGetSessionIdEx.c)
 *     ExpAcquireFastMutexContended @ 0x1402FCD4C (ExpAcquireFastMutexContended.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x14032FA68 (KiAbTryReclaimOrphanedEntries.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DEB4 (KiRemoveSystemWorkPriorityKick.c)
 */

void __stdcall ExAcquireFastMutexUnsafe(PFAST_MUTEX FastMutex)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v2; // rbx
  unsigned int AbEntrySummary; // eax
  unsigned int v5; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  int SessionId; // eax
  signed __int32 v9; // eax
  signed __int32 v10; // ett
  unsigned int v11; // [rsp+40h] [rbp+8h]

  CurrentThread = KeGetCurrentThread();
  v2 = 0LL;
  _disable();
  AbEntrySummary = CurrentThread->AbEntrySummary;
  if ( CurrentThread->AbEntrySummary || (AbEntrySummary = KiAbTryReclaimOrphanedEntries(FastMutex, CurrentThread)) != 0 )
  {
    _BitScanForward(&v5, AbEntrySummary);
    v11 = v5;
    CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v5);
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v9 = *SchedulerAssist;
      do
      {
        v10 = v9;
        v9 = _InterlockedCompareExchange(SchedulerAssist, v9 & 0xFFDFFFFF, v9);
      }
      while ( v10 != v9 );
      if ( (v9 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    _enable();
    v2 = (__int64)(&CurrentThread[1].Process + 12 * v11);
    if ( (unsigned __int64)FastMutex - qword_140C659E8 < 0x8000000000LL )
      SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
    else
      SessionId = -1;
    *(_DWORD *)(v2 + 8) = SessionId;
    *(_QWORD *)v2 = (unsigned __int64)FastMutex & 0x7FFFFFFFFFFFFFFCLL;
  }
  if ( !_interlockedbittestandreset(&FastMutex->Count, 0) )
    ExpAcquireFastMutexContended((__int64)FastMutex, v2, (__int64)SchedulerAssist);
  if ( v2 )
    *(_BYTE *)(v2 + 18) = 1;
  FastMutex->Owner = CurrentThread;
}
