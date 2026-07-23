/*
 * XREFs of KeDelayExecutionThread @ 0x1402467F0
 * Callers:
 *     CcCanIWrite @ 0x14020F1A0 (CcCanIWrite.c)
 *     MmAccessFault @ 0x140235350 (MmAccessFault.c)
 *     CcInitializeCacheMapInternal @ 0x14025E7B0 (CcInitializeCacheMapInternal.c)
 *     MiFlushSectionInternal @ 0x140275630 (MiFlushSectionInternal.c)
 *     MmFlushSection @ 0x140287370 (MmFlushSection.c)
 *     PopAllocateIrp @ 0x14028F314 (PopAllocateIrp.c)
 *     MiGatherMappedPages @ 0x140297C04 (MiGatherMappedPages.c)
 *     IopCancelIrpsInFileObjectList @ 0x1402AF910 (IopCancelIrpsInFileObjectList.c)
 *     CcMapAndCopyInToCache @ 0x1402CC8F0 (CcMapAndCopyInToCache.c)
 *     MiWalkEntireImage @ 0x1402DAFE0 (MiWalkEntireImage.c)
 *     CcPurgeCacheSection @ 0x1402F07D0 (CcPurgeCacheSection.c)
 *     MiAllocatePagesForMdl @ 0x1402F8CDC (MiAllocatePagesForMdl.c)
 *     FsRtlCreateSectionForDataScan @ 0x140305100 (FsRtlCreateSectionForDataScan.c)
 *     ExpExpandResourceOwnerTable @ 0x140341200 (ExpExpandResourceOwnerTable.c)
 *     ?SmStAcquireStoreLockExclusive@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140344DA0 (-SmStAcquireStoreLockExclusive@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     MiCreateSystemSection @ 0x14035F150 (MiCreateSystemSection.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x140368400 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     PnpBootDeviceWait @ 0x14037519C (PnpBootDeviceWait.c)
 *     MiMappedPageWriter @ 0x14038FA30 (MiMappedPageWriter.c)
 *     CcDeletePrivateVolumeCacheMap @ 0x1403C1A14 (CcDeletePrivateVolumeCacheMap.c)
 *     CcWaitForCurrentLazyWriterActivityOnNode @ 0x1403D3FB0 (CcWaitForCurrentLazyWriterActivityOnNode.c)
 *     CcCrossPartitionDrainSectionDeletion @ 0x140535784 (CcCrossPartitionDrainSectionDeletion.c)
 *     CcDeletePartition @ 0x140538D10 (CcDeletePartition.c)
 *     CcDeleteSectionsForPartition @ 0x140539004 (CcDeleteSectionsForPartition.c)
 *     InbvRotateGuiBootDisplay @ 0x14054E8B0 (InbvRotateGuiBootDisplay.c)
 *     IopKeepAliveWorker @ 0x140558820 (IopKeepAliveWorker.c)
 *     ?StNpLeafPageIn@?$ST_STORE@USM_TRAITS@@@@SAJPEAUNP_CTX@NP_CONTEXT@@PEAX_K@Z @ 0x1405C9050 (-StNpLeafPageIn@-$ST_STORE@USM_TRAITS@@@@SAJPEAUNP_CTX@NP_CONTEXT@@PEAX_K@Z.c)
 *     MdlInvariantPostProcessing1 @ 0x1405CF524 (MdlInvariantPostProcessing1.c)
 *     DifKeDelayExecutionThreadWrapper @ 0x1405E2E80 (DifKeDelayExecutionThreadWrapper.c)
 *     MiMakeOutswappedPageResident @ 0x1406185DC (MiMakeOutswappedPageResident.c)
 *     MiMarkHugePfnBad @ 0x140621688 (MiMarkHugePfnBad.c)
 *     MiRemoveUnusedSegments @ 0x140625B94 (MiRemoveUnusedSegments.c)
 *     MiFlushAllFilesystemPages @ 0x140629304 (MiFlushAllFilesystemPages.c)
 *     MiCheckSystemTrimEndCriteria @ 0x1406342DC (MiCheckSystemTrimEndCriteria.c)
 *     MiFlushAllPagesWorker @ 0x140639D54 (MiFlushAllPagesWorker.c)
 *     MiFlushAllStoreSwapPages @ 0x140639E5C (MiFlushAllStoreSwapPages.c)
 *     MiGatherPagefilePages @ 0x14063A1B4 (MiGatherPagefilePages.c)
 *     MiDelayFaultingThread @ 0x140645E88 (MiDelayFaultingThread.c)
 *     MiHandleForkTransitionPte @ 0x1406649B8 (MiHandleForkTransitionPte.c)
 *     sub_14066CB80 @ 0x14066CB80 (sub_14066CB80.c)
 *     IpmiLibpDelay @ 0x14067809C (IpmiLibpDelay.c)
 *     CmFcpConnectToAlpcServer @ 0x140680B8C (CmFcpConnectToAlpcServer.c)
 *     PoBlockConsoleSwitch @ 0x140682A78 (PoBlockConsoleSwitch.c)
 *     CmpUuidCreate @ 0x140685EA8 (CmpUuidCreate.c)
 *     NtCreateJobObject @ 0x1406885D0 (NtCreateJobObject.c)
 *     MmCreateSpecialImageSection @ 0x1406B9664 (MmCreateSpecialImageSection.c)
 *     EtwpWaitForBufferReferenceCount @ 0x1406BD91C (EtwpWaitForBufferReferenceCount.c)
 *     NtDelayExecution @ 0x1406EF5B0 (NtDelayExecution.c)
 *     MiCreateSectionCommon @ 0x140722780 (MiCreateSectionCommon.c)
 *     MmGetSystemRoutineAddress @ 0x140756D80 (MmGetSystemRoutineAddress.c)
 *     PfpOpenHandleCreate @ 0x14075D594 (PfpOpenHandleCreate.c)
 *     MmManagePartitionMemoryInformation @ 0x14076060C (MmManagePartitionMemoryInformation.c)
 *     CmpTransMgrCommit @ 0x140769178 (CmpTransMgrCommit.c)
 *     PspExitThread @ 0x14076DF3C (PspExitThread.c)
 *     IoCancelThreadIo @ 0x14076E9F4 (IoCancelThreadIo.c)
 *     NtSetInformationProcess @ 0x140774A50 (NtSetInformationProcess.c)
 *     PnpCompleteDeviceEvent @ 0x140784280 (PnpCompleteDeviceEvent.c)
 *     ExpWatchProductTypeWork @ 0x1407AC5E0 (ExpWatchProductTypeWork.c)
 *     NtNotifyChangeSession @ 0x1407B3FD0 (NtNotifyChangeSession.c)
 *     MmFlushVirtualMemory @ 0x1407B4808 (MmFlushVirtualMemory.c)
 *     NtCancelIoFile @ 0x1407C1CC0 (NtCancelIoFile.c)
 *     PopPolicyWorkerNotify @ 0x1407DD420 (PopPolicyWorkerNotify.c)
 *     PopAcquireAdaptiveLock @ 0x1407EC41C (PopAcquireAdaptiveLock.c)
 *     PfTLoggingWorker @ 0x14083A720 (PfTLoggingWorker.c)
 *     PnpAllocateCriticalMemory @ 0x140868B24 (PnpAllocateCriticalMemory.c)
 *     MmVirtualAccessFault @ 0x1408AC5C8 (MmVirtualAccessFault.c)
 *     IopCancelAlertedRequest @ 0x14094442C (IopCancelAlertedRequest.c)
 *     IopFreeBandwidthContract @ 0x1409519DC (IopFreeBandwidthContract.c)
 *     PipEventRemovalCheckOpenHandles @ 0x140971BAC (PipEventRemovalCheckOpenHandles.c)
 *     PoShutdownBugCheck @ 0x140989660 (PoShutdownBugCheck.c)
 *     ExpNodeHotAddProcessorWorker @ 0x140A00880 (ExpNodeHotAddProcessorWorker.c)
 *     WheaRemoveErrorSource @ 0x140A07970 (WheaRemoveErrorSource.c)
 *     CmpRetryBackOff @ 0x140A1E778 (CmpRetryBackOff.c)
 *     MiGetReadyInPageBlock @ 0x140A313A0 (MiGetReadyInPageBlock.c)
 *     sub_140A4D79C @ 0x140A4D79C (sub_140A4D79C.c)
 *     PoBroadcastSystemState @ 0x140AA6B28 (PoBroadcastSystemState.c)
 *     ViThunkHookExportAddress @ 0x140ADCC48 (ViThunkHookExportAddress.c)
 *     HdlspPutMore @ 0x140AEC0B8 (HdlspPutMore.c)
 *     StartFirstUserProcess @ 0x140B69B90 (StartFirstUserProcess.c)
 *     PiCreateDriverDataDirectoryRoot @ 0x140B6CFB4 (PiCreateDriverDataDirectoryRoot.c)
 * Callees:
 *     KiCommitThreadWait @ 0x140241F00 (KiCommitThreadWait.c)
 *     KeYieldExecution @ 0x1402469D0 (KeYieldExecution.c)
 *     KiFastExitThreadWait @ 0x1402BBBE0 (KiFastExitThreadWait.c)
 *     KiBeginThreadWait @ 0x1402C18E0 (KiBeginThreadWait.c)
 *     KiCheckDueTimeExpired @ 0x1402C1A60 (KiCheckDueTimeExpired.c)
 *     KiCheckWaitNext @ 0x1402C26F0 (KiCheckWaitNext.c)
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
