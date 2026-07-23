/*
 * XREFs of KeDelayExecutionThread @ 0x1402468E0
 * Callers:
 *     CcCanIWrite @ 0x14020F180 (CcCanIWrite.c)
 *     MmAccessFault @ 0x140235440 (MmAccessFault.c)
 *     CcInitializeCacheMapInternal @ 0x14025EB60 (CcInitializeCacheMapInternal.c)
 *     MiFlushSectionInternal @ 0x1402759E0 (MiFlushSectionInternal.c)
 *     MmFlushSection @ 0x140287720 (MmFlushSection.c)
 *     PopAllocateIrp @ 0x14028F6C4 (PopAllocateIrp.c)
 *     MiGatherMappedPages @ 0x140297FB4 (MiGatherMappedPages.c)
 *     IopCancelIrpsInFileObjectList @ 0x1402AFBD0 (IopCancelIrpsInFileObjectList.c)
 *     CcMapAndCopyInToCache @ 0x1402CCB80 (CcMapAndCopyInToCache.c)
 *     MiWalkEntireImage @ 0x1402DB270 (MiWalkEntireImage.c)
 *     CcPurgeCacheSection @ 0x1402F0A60 (CcPurgeCacheSection.c)
 *     MiAllocatePagesForMdl @ 0x1402F8F6C (MiAllocatePagesForMdl.c)
 *     FsRtlCreateSectionForDataScan @ 0x140305390 (FsRtlCreateSectionForDataScan.c)
 *     ExpExpandResourceOwnerTable @ 0x140341980 (ExpExpandResourceOwnerTable.c)
 *     ?SmStAcquireStoreLockExclusive@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140345520 (-SmStAcquireStoreLockExclusive@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     MiCreateSystemSection @ 0x14035F940 (MiCreateSystemSection.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x140368BF0 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     PnpBootDeviceWait @ 0x140374CEC (PnpBootDeviceWait.c)
 *     MiMappedPageWriter @ 0x140391790 (MiMappedPageWriter.c)
 *     CcDeletePrivateVolumeCacheMap @ 0x1403C2254 (CcDeletePrivateVolumeCacheMap.c)
 *     CcWaitForCurrentLazyWriterActivityOnNode @ 0x1403D47F0 (CcWaitForCurrentLazyWriterActivityOnNode.c)
 *     CcCrossPartitionDrainSectionDeletion @ 0x140535C24 (CcCrossPartitionDrainSectionDeletion.c)
 *     CcDeletePartition @ 0x1405391B0 (CcDeletePartition.c)
 *     CcDeleteSectionsForPartition @ 0x1405394A4 (CcDeleteSectionsForPartition.c)
 *     InbvRotateGuiBootDisplay @ 0x14054EED0 (InbvRotateGuiBootDisplay.c)
 *     IopKeepAliveWorker @ 0x140558E40 (IopKeepAliveWorker.c)
 *     ?StNpLeafPageIn@?$ST_STORE@USM_TRAITS@@@@SAJPEAUNP_CTX@NP_CONTEXT@@PEAX_K@Z @ 0x1405C9530 (-StNpLeafPageIn@-$ST_STORE@USM_TRAITS@@@@SAJPEAUNP_CTX@NP_CONTEXT@@PEAX_K@Z.c)
 *     MdlInvariantPostProcessing1 @ 0x1405CFA04 (MdlInvariantPostProcessing1.c)
 *     DifKeDelayExecutionThreadWrapper @ 0x1405E3360 (DifKeDelayExecutionThreadWrapper.c)
 *     MiMakeOutswappedPageResident @ 0x140618ABC (MiMakeOutswappedPageResident.c)
 *     MiMarkHugePfnBad @ 0x140621B68 (MiMarkHugePfnBad.c)
 *     MiRemoveUnusedSegments @ 0x140626074 (MiRemoveUnusedSegments.c)
 *     MiFlushAllFilesystemPages @ 0x1406297E4 (MiFlushAllFilesystemPages.c)
 *     MiCheckSystemTrimEndCriteria @ 0x1406347BC (MiCheckSystemTrimEndCriteria.c)
 *     MiFlushAllPagesWorker @ 0x14063A234 (MiFlushAllPagesWorker.c)
 *     MiFlushAllStoreSwapPages @ 0x14063A33C (MiFlushAllStoreSwapPages.c)
 *     MiGatherPagefilePages @ 0x14063A694 (MiGatherPagefilePages.c)
 *     MiDelayFaultingThread @ 0x140646368 (MiDelayFaultingThread.c)
 *     MiHandleForkTransitionPte @ 0x140664E98 (MiHandleForkTransitionPte.c)
 *     sub_14066D060 @ 0x14066D060 (sub_14066D060.c)
 *     IpmiLibpDelay @ 0x14067857C (IpmiLibpDelay.c)
 *     CmFcpConnectToAlpcServer @ 0x140680B8C (CmFcpConnectToAlpcServer.c)
 *     PoBlockConsoleSwitch @ 0x140682A78 (PoBlockConsoleSwitch.c)
 *     CmpUuidCreate @ 0x140685EA8 (CmpUuidCreate.c)
 *     NtCreateJobObject @ 0x1406885D0 (NtCreateJobObject.c)
 *     MmCreateSpecialImageSection @ 0x1406B9694 (MmCreateSpecialImageSection.c)
 *     EtwpWaitForBufferReferenceCount @ 0x1406BD94C (EtwpWaitForBufferReferenceCount.c)
 *     NtDelayExecution @ 0x1406EF530 (NtDelayExecution.c)
 *     MiCreateSectionCommon @ 0x140722910 (MiCreateSectionCommon.c)
 *     MmGetSystemRoutineAddress @ 0x140756A60 (MmGetSystemRoutineAddress.c)
 *     PfpOpenHandleCreate @ 0x14075D274 (PfpOpenHandleCreate.c)
 *     MmManagePartitionMemoryInformation @ 0x1407602EC (MmManagePartitionMemoryInformation.c)
 *     CmpTransMgrCommit @ 0x140768E58 (CmpTransMgrCommit.c)
 *     PspExitThread @ 0x14076DC1C (PspExitThread.c)
 *     IoCancelThreadIo @ 0x14076E6D4 (IoCancelThreadIo.c)
 *     NtSetInformationProcess @ 0x140774730 (NtSetInformationProcess.c)
 *     PnpCompleteDeviceEvent @ 0x140783F60 (PnpCompleteDeviceEvent.c)
 *     ExpWatchProductTypeWork @ 0x1407AC220 (ExpWatchProductTypeWork.c)
 *     NtNotifyChangeSession @ 0x1407B3C10 (NtNotifyChangeSession.c)
 *     MmFlushVirtualMemory @ 0x1407B4538 (MmFlushVirtualMemory.c)
 *     NtCancelIoFile @ 0x1407C1A00 (NtCancelIoFile.c)
 *     PopPolicyWorkerNotify @ 0x1407DD170 (PopPolicyWorkerNotify.c)
 *     PopAcquireAdaptiveLock @ 0x1407EC16C (PopAcquireAdaptiveLock.c)
 *     PfTLoggingWorker @ 0x140838ED0 (PfTLoggingWorker.c)
 *     PnpAllocateCriticalMemory @ 0x140868894 (PnpAllocateCriticalMemory.c)
 *     MmVirtualAccessFault @ 0x1408AC338 (MmVirtualAccessFault.c)
 *     IopCancelAlertedRequest @ 0x14094457C (IopCancelAlertedRequest.c)
 *     IopFreeBandwidthContract @ 0x140951B2C (IopFreeBandwidthContract.c)
 *     PipEventRemovalCheckOpenHandles @ 0x140971CFC (PipEventRemovalCheckOpenHandles.c)
 *     PoShutdownBugCheck @ 0x1409897B0 (PoShutdownBugCheck.c)
 *     ExpNodeHotAddProcessorWorker @ 0x140A00A60 (ExpNodeHotAddProcessorWorker.c)
 *     WheaRemoveErrorSource @ 0x140A07B50 (WheaRemoveErrorSource.c)
 *     CmpRetryBackOff @ 0x140A1E978 (CmpRetryBackOff.c)
 *     MiGetReadyInPageBlock @ 0x140A315E0 (MiGetReadyInPageBlock.c)
 *     sub_140A4D9DC @ 0x140A4D9DC (sub_140A4D9DC.c)
 *     PoBroadcastSystemState @ 0x140AA68D8 (PoBroadcastSystemState.c)
 *     ViThunkHookExportAddress @ 0x140ADBC68 (ViThunkHookExportAddress.c)
 *     HdlspPutMore @ 0x140AEB0B8 (HdlspPutMore.c)
 *     StartFirstUserProcess @ 0x140B68C34 (StartFirstUserProcess.c)
 *     PiCreateDriverDataDirectoryRoot @ 0x140B6BEC8 (PiCreateDriverDataDirectoryRoot.c)
 * Callees:
 *     KiCommitThreadWait @ 0x140241FF0 (KiCommitThreadWait.c)
 *     KeYieldExecution @ 0x140246AC0 (KeYieldExecution.c)
 *     KiFastExitThreadWait @ 0x1402BBEA0 (KiFastExitThreadWait.c)
 *     KiBeginThreadWait @ 0x1402C1BA0 (KiBeginThreadWait.c)
 *     KiCheckDueTimeExpired @ 0x1402C1D20 (KiCheckDueTimeExpired.c)
 *     KiCheckWaitNext @ 0x1402C29B0 (KiCheckWaitNext.c)
 */

NTSTATUS __stdcall KeDelayExecutionThread(KPROCESSOR_MODE WaitMode, BOOLEAN Alertable, PLARGE_INTEGER Interval)
{
  struct _KTHREAD *CurrentThread; // rbp
  NTSTATUS v4; // ebx
  PLARGE_INTEGER v5; // r14
  NTSTATUS result; // eax
  unsigned __int8 v9; // al
  __int64 v10; // r12
  unsigned int v11; // r13d
  NTSTATUS v12; // r15d
  ULONG_PTR v13; // rcx
  NTSTATUS v14; // eax
  unsigned __int8 CurrentIrql; // r8
  _DWORD *SchedulerAssist; // r10
  __int64 v17; // rdx
  __int64 v18; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int8 v19; // [rsp+90h] [rbp+18h]
  unsigned int v20; // [rsp+98h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  v4 = 0;
  v5 = Interval;
  v18 = 0LL;
  v20 = 0;
  if ( !Interval->QuadPart && WaitMode && !Alertable && (CurrentThread->ApcState.UserApcPendingAll & 2) == 0 )
    return KeYieldExecution(0LL);
  LOBYTE(Interval) = 1;
  v9 = KiCheckWaitNext((_DWORD)CurrentThread, (_DWORD)v5, (_DWORD)Interval, (unsigned int)&v18, (__int64)&v20);
  v10 = v18;
  v11 = v20;
  v19 = v9;
  while ( 1 )
  {
    result = KiBeginThreadWait(CurrentThread, (unsigned __int8)WaitMode, 4LL, Alertable);
    v12 = result;
    if ( result )
      break;
    if ( (unsigned int)KiCheckDueTimeExpired(CurrentThread, v11, v10) )
    {
      KiFastExitThreadWait(KeGetCurrentPrcb(), CurrentThread, v19);
      if ( !v5->QuadPart )
        return KeYieldExecution(0LL);
      return v12;
    }
    CurrentThread->WaitBlock[0].Object = (PVOID)-1LL;
    CurrentThread->WaitBlockFill4[17] = 5;
    CurrentThread->WaitBlockCount = 1;
    v14 = (unsigned int)KiCommitThreadWait(v13, (__int64 *)&CurrentThread->320, v11, v10, 0LL);
    if ( v14 != 256 )
    {
      if ( v14 != 258 )
        return v14;
      return v4;
    }
    v19 = 0;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      if ( CurrentIrql == 2 )
        LODWORD(v17) = 4;
      else
        v17 = (-1LL << (CurrentIrql + 1)) & 4;
      v10 = v18;
      v11 = v20;
      SchedulerAssist[5] |= v17;
    }
    CurrentThread->WaitIrql = CurrentIrql;
  }
  return result;
}
