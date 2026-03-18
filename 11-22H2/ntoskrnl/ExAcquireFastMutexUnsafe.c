/*
 * XREFs of ExAcquireFastMutexUnsafe @ 0x140302660
 * Callers:
 *     FsRtlCheckOplockEx2 @ 0x1402FD950 (FsRtlCheckOplockEx2.c)
 *     FsRtlpOplockStoreKeyForDeleteOperation @ 0x1402FE6F0 (FsRtlpOplockStoreKeyForDeleteOperation.c)
 *     FsRtlpRequestShareableOplock @ 0x140301920 (FsRtlpRequestShareableOplock.c)
 *     ExEnterCriticalRegionAndAcquireFastMutexUnsafe @ 0x140302630 (ExEnterCriticalRegionAndAcquireFastMutexUnsafe.c)
 *     FsRtlUninitializeOplock @ 0x14034C030 (FsRtlUninitializeOplock.c)
 *     FsRtlCancelNotify @ 0x14035DB70 (FsRtlCancelNotify.c)
 *     FsRtlpRequestExclusiveOplock @ 0x1403BF5C4 (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x1403D2CD0 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     KeAcquireGuardedMutexUnsafe @ 0x14045F730 (KeAcquireGuardedMutexUnsafe.c)
 *     FsRtlOplockBreakToNoneEx @ 0x14053DDC0 (FsRtlOplockBreakToNoneEx.c)
 *     FsRtlOplockGetAnyBreakOwnerProcess @ 0x14053DF80 (FsRtlOplockGetAnyBreakOwnerProcess.c)
 *     FsRtlpAcknowledgeOplockBreak @ 0x14053E018 (FsRtlpAcknowledgeOplockBreak.c)
 *     DifExAcquireFastMutexUnsafeWrapper @ 0x1405D6F40 (DifExAcquireFastMutexUnsafeWrapper.c)
 *     DifKeAcquireGuardedMutexUnsafeWrapper @ 0x1405E21C0 (DifKeAcquireGuardedMutexUnsafeWrapper.c)
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
 *     FsRtlpOplockFsctrlInternal @ 0x140766820 (FsRtlpOplockFsctrlInternal.c)
 *     CmpNotifyTriggerCheck @ 0x140766CF4 (CmpNotifyTriggerCheck.c)
 *     CmpPostNotify @ 0x140766D70 (CmpPostNotify.c)
 *     NtNotifyChangeMultipleKeys @ 0x140767040 (NtNotifyChangeMultipleKeys.c)
 *     LOCK_TRANSACTION_LIST @ 0x1407684DC (LOCK_TRANSACTION_LIST.c)
 *     CmpTransSearchAddTrans @ 0x140768A4C (CmpTransSearchAddTrans.c)
 *     CmpTransSearchAddLightWeightTrans @ 0x140768DAC (CmpTransSearchAddLightWeightTrans.c)
 *     CmpTransMgrPrepare @ 0x140768FAC (CmpTransMgrPrepare.c)
 *     CmNotifyRunDown @ 0x14076EAF4 (CmNotifyRunDown.c)
 *     FsRtlNotifyCleanup @ 0x1407C5000 (FsRtlNotifyCleanup.c)
 *     FsRtlNotifyFilterChangeDirectoryLite @ 0x1407C5090 (FsRtlNotifyFilterChangeDirectoryLite.c)
 *     CmpTransMgrRollback @ 0x1407D0EB8 (CmpTransMgrRollback.c)
 *     CmpCleanupLightWeightTransaction @ 0x1407D0F34 (CmpCleanupLightWeightTransaction.c)
 *     FsRtlOplockBreakH2 @ 0x1407E2980 (FsRtlOplockBreakH2.c)
 *     CmRmFinalizeRecovery @ 0x1407E8CA8 (CmRmFinalizeRecovery.c)
 *     NtQueryBootEntryOrder @ 0x14083F3D0 (NtQueryBootEntryOrder.c)
 *     NtQueryBootOptions @ 0x14083F5D0 (NtQueryBootOptions.c)
 *     NtEnumerateBootEntries @ 0x14083F840 (NtEnumerateBootEntries.c)
 *     FsRtlNotifyFilterReportChange @ 0x14084C6F0 (FsRtlNotifyFilterReportChange.c)
 *     FsRtlNotifyFilterChangeDirectory @ 0x140852B70 (FsRtlNotifyFilterChangeDirectory.c)
 *     SeRegisterLogonSessionTerminatedRoutineEx @ 0x140860E30 (SeRegisterLogonSessionTerminatedRoutineEx.c)
 *     NtGetEnvironmentVariableEx @ 0x140862720 (NtGetEnvironmentVariableEx.c)
 *     FsRtlCheckUpperOplock @ 0x14093DC80 (FsRtlCheckUpperOplock.c)
 *     FsRtlpOpBatchBreakClosePending @ 0x14093E3FC (FsRtlpOpBatchBreakClosePending.c)
 *     FsRtlpOplockBreakNotify @ 0x14093E538 (FsRtlpOplockBreakNotify.c)
 *     FsRtlNotifyCleanupAll @ 0x140940050 (FsRtlNotifyCleanupAll.c)
 *     KeStartDynamicProcessor @ 0x1409747B0 (KeStartDynamicProcessor.c)
 *     SeRegisterLogonSessionTerminatedRoutine @ 0x1409CFC70 (SeRegisterLogonSessionTerminatedRoutine.c)
 *     SeUnregisterLogonSessionTerminatedRoutine @ 0x1409CFD10 (SeUnregisterLogonSessionTerminatedRoutine.c)
 *     SeUnregisterLogonSessionTerminatedRoutineEx @ 0x1409CFDE0 (SeUnregisterLogonSessionTerminatedRoutineEx.c)
 *     SepNotifyFileSystems @ 0x1409D0320 (SepNotifyFileSystems.c)
 *     ExpSetBootEntry @ 0x1409FD220 (ExpSetBootEntry.c)
 *     ExpSetDriverEntry @ 0x1409FD9B0 (ExpSetDriverEntry.c)
 *     ExpSetFirmwareEnvironmentVariable @ 0x1409FDFA4 (ExpSetFirmwareEnvironmentVariable.c)
 *     NtDeleteBootEntry @ 0x1409FE950 (NtDeleteBootEntry.c)
 *     NtDeleteDriverEntry @ 0x1409FEAE0 (NtDeleteDriverEntry.c)
 *     NtEnumerateDriverEntries @ 0x1409FEC70 (NtEnumerateDriverEntries.c)
 *     NtEnumerateSystemEnvironmentValuesEx @ 0x1409FF130 (NtEnumerateSystemEnvironmentValuesEx.c)
 *     NtQueryDriverEntryOrder @ 0x1409FF390 (NtQueryDriverEntryOrder.c)
 *     NtQueryEnvironmentVariableInfoEx @ 0x1409FF610 (NtQueryEnvironmentVariableInfoEx.c)
 *     NtQuerySystemEnvironmentValue @ 0x1409FF6C0 (NtQuerySystemEnvironmentValue.c)
 *     NtSetBootEntryOrder @ 0x1409FF9F0 (NtSetBootEntryOrder.c)
 *     NtSetBootOptions @ 0x1409FFC00 (NtSetBootOptions.c)
 *     NtSetDriverEntryOrder @ 0x1409FFE20 (NtSetDriverEntryOrder.c)
 *     NtSetSystemEnvironmentValue @ 0x140A00030 (NtSetSystemEnvironmentValue.c)
 *     CmObliterateRMTxArray @ 0x140A1C060 (CmObliterateRMTxArray.c)
 *     CmpLazyCommitWorker @ 0x140A1C170 (CmpLazyCommitWorker.c)
 *     CmpCommitPreparedLightWeightTransaction @ 0x140A1C694 (CmpCommitPreparedLightWeightTransaction.c)
 *     CmpPrepareLightWeightTransaction @ 0x140A1C804 (CmpPrepareLightWeightTransaction.c)
 *     KeInitSystem @ 0x140B53548 (KeInitSystem.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x1402A1600 (MmGetSessionIdEx.c)
 *     ExpAcquireFastMutexContended @ 0x1402FCD4C (ExpAcquireFastMutexContended.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x14032F8C8 (KiAbTryReclaimOrphanedEntries.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
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
    if ( (unsigned __int64)FastMutex - qword_140C65AE8 < 0x8000000000LL )
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
