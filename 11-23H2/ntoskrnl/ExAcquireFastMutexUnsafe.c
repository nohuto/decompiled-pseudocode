/*
 * XREFs of ExAcquireFastMutexUnsafe @ 0x1403028F0
 * Callers:
 *     FsRtlCheckOplockEx2 @ 0x1402FDBE0 (FsRtlCheckOplockEx2.c)
 *     FsRtlpOplockStoreKeyForDeleteOperation @ 0x1402FE980 (FsRtlpOplockStoreKeyForDeleteOperation.c)
 *     FsRtlpRequestShareableOplock @ 0x140301BB0 (FsRtlpRequestShareableOplock.c)
 *     ExEnterCriticalRegionAndAcquireFastMutexUnsafe @ 0x1403028C0 (ExEnterCriticalRegionAndAcquireFastMutexUnsafe.c)
 *     FsRtlUninitializeOplock @ 0x14034C7D0 (FsRtlUninitializeOplock.c)
 *     FsRtlCancelNotify @ 0x14035E360 (FsRtlCancelNotify.c)
 *     FsRtlpRequestExclusiveOplock @ 0x1403BFE04 (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x1403D3510 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     KeAcquireGuardedMutexUnsafe @ 0x140460190 (KeAcquireGuardedMutexUnsafe.c)
 *     FsRtlOplockBreakToNoneEx @ 0x14053E260 (FsRtlOplockBreakToNoneEx.c)
 *     FsRtlOplockGetAnyBreakOwnerProcess @ 0x14053E420 (FsRtlOplockGetAnyBreakOwnerProcess.c)
 *     FsRtlpAcknowledgeOplockBreak @ 0x14053E4B8 (FsRtlpAcknowledgeOplockBreak.c)
 *     DifExAcquireFastMutexUnsafeWrapper @ 0x1405D7420 (DifExAcquireFastMutexUnsafeWrapper.c)
 *     DifKeAcquireGuardedMutexUnsafeWrapper @ 0x1405E26A0 (DifKeAcquireGuardedMutexUnsafeWrapper.c)
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
 *     FsRtlpOplockFsctrlInternal @ 0x140766500 (FsRtlpOplockFsctrlInternal.c)
 *     CmpNotifyTriggerCheck @ 0x1407669D4 (CmpNotifyTriggerCheck.c)
 *     CmpPostNotify @ 0x140766A50 (CmpPostNotify.c)
 *     NtNotifyChangeMultipleKeys @ 0x140766D20 (NtNotifyChangeMultipleKeys.c)
 *     LOCK_TRANSACTION_LIST @ 0x1407681BC (LOCK_TRANSACTION_LIST.c)
 *     CmpTransSearchAddTrans @ 0x14076872C (CmpTransSearchAddTrans.c)
 *     CmpTransSearchAddLightWeightTrans @ 0x140768A8C (CmpTransSearchAddLightWeightTrans.c)
 *     CmpTransMgrPrepare @ 0x140768C8C (CmpTransMgrPrepare.c)
 *     CmNotifyRunDown @ 0x14076E7D4 (CmNotifyRunDown.c)
 *     FsRtlNotifyCleanup @ 0x1407C4D40 (FsRtlNotifyCleanup.c)
 *     FsRtlNotifyFilterChangeDirectoryLite @ 0x1407C4DD0 (FsRtlNotifyFilterChangeDirectoryLite.c)
 *     CmpTransMgrRollback @ 0x1407D0C08 (CmpTransMgrRollback.c)
 *     CmpCleanupLightWeightTransaction @ 0x1407D0C84 (CmpCleanupLightWeightTransaction.c)
 *     FsRtlOplockBreakH2 @ 0x1407E26D0 (FsRtlOplockBreakH2.c)
 *     CmRmFinalizeRecovery @ 0x1407E89F8 (CmRmFinalizeRecovery.c)
 *     NtQueryBootEntryOrder @ 0x14083D940 (NtQueryBootEntryOrder.c)
 *     NtQueryBootOptions @ 0x14083DB40 (NtQueryBootOptions.c)
 *     NtEnumerateBootEntries @ 0x14083DDB0 (NtEnumerateBootEntries.c)
 *     FsRtlNotifyFilterReportChange @ 0x14084B790 (FsRtlNotifyFilterReportChange.c)
 *     FsRtlNotifyFilterChangeDirectory @ 0x140851F60 (FsRtlNotifyFilterChangeDirectory.c)
 *     SeRegisterLogonSessionTerminatedRoutineEx @ 0x140860FA0 (SeRegisterLogonSessionTerminatedRoutineEx.c)
 *     NtGetEnvironmentVariableEx @ 0x140862800 (NtGetEnvironmentVariableEx.c)
 *     FsRtlCheckUpperOplock @ 0x14093DDD0 (FsRtlCheckUpperOplock.c)
 *     FsRtlpOpBatchBreakClosePending @ 0x14093E54C (FsRtlpOpBatchBreakClosePending.c)
 *     FsRtlpOplockBreakNotify @ 0x14093E688 (FsRtlpOplockBreakNotify.c)
 *     FsRtlNotifyCleanupAll @ 0x1409401A0 (FsRtlNotifyCleanupAll.c)
 *     KeStartDynamicProcessor @ 0x140974900 (KeStartDynamicProcessor.c)
 *     SeRegisterLogonSessionTerminatedRoutine @ 0x1409CFDC0 (SeRegisterLogonSessionTerminatedRoutine.c)
 *     SeUnregisterLogonSessionTerminatedRoutine @ 0x1409CFE60 (SeUnregisterLogonSessionTerminatedRoutine.c)
 *     SeUnregisterLogonSessionTerminatedRoutineEx @ 0x1409CFF30 (SeUnregisterLogonSessionTerminatedRoutineEx.c)
 *     SepNotifyFileSystems @ 0x1409D0470 (SepNotifyFileSystems.c)
 *     ExpSetBootEntry @ 0x1409FD400 (ExpSetBootEntry.c)
 *     ExpSetDriverEntry @ 0x1409FDB90 (ExpSetDriverEntry.c)
 *     ExpSetFirmwareEnvironmentVariable @ 0x1409FE184 (ExpSetFirmwareEnvironmentVariable.c)
 *     NtDeleteBootEntry @ 0x1409FEB30 (NtDeleteBootEntry.c)
 *     NtDeleteDriverEntry @ 0x1409FECC0 (NtDeleteDriverEntry.c)
 *     NtEnumerateDriverEntries @ 0x1409FEE50 (NtEnumerateDriverEntries.c)
 *     NtEnumerateSystemEnvironmentValuesEx @ 0x1409FF310 (NtEnumerateSystemEnvironmentValuesEx.c)
 *     NtQueryDriverEntryOrder @ 0x1409FF570 (NtQueryDriverEntryOrder.c)
 *     NtQueryEnvironmentVariableInfoEx @ 0x1409FF7F0 (NtQueryEnvironmentVariableInfoEx.c)
 *     NtQuerySystemEnvironmentValue @ 0x1409FF8A0 (NtQuerySystemEnvironmentValue.c)
 *     NtSetBootEntryOrder @ 0x1409FFBD0 (NtSetBootEntryOrder.c)
 *     NtSetBootOptions @ 0x1409FFDE0 (NtSetBootOptions.c)
 *     NtSetDriverEntryOrder @ 0x140A00000 (NtSetDriverEntryOrder.c)
 *     NtSetSystemEnvironmentValue @ 0x140A00210 (NtSetSystemEnvironmentValue.c)
 *     CmObliterateRMTxArray @ 0x140A1C260 (CmObliterateRMTxArray.c)
 *     CmpLazyCommitWorker @ 0x140A1C370 (CmpLazyCommitWorker.c)
 *     CmpCommitPreparedLightWeightTransaction @ 0x140A1C894 (CmpCommitPreparedLightWeightTransaction.c)
 *     CmpPrepareLightWeightTransaction @ 0x140A1CA04 (CmpPrepareLightWeightTransaction.c)
 *     KeInitSystem @ 0x140B4DED4 (KeInitSystem.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x1402A19B0 (MmGetSessionIdEx.c)
 *     ExpAcquireFastMutexContended @ 0x1402FCFDC (ExpAcquireFastMutexContended.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x14032FCF8 (KiAbTryReclaimOrphanedEntries.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
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
