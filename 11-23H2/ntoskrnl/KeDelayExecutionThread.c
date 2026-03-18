/*
 * XREFs of KeDelayExecutionThread @ 0x140246810
 * Callers:
 *     CcCanIWrite @ 0x14020F180 (CcCanIWrite.c)
 *     MmAccessFault @ 0x140235370 (MmAccessFault.c)
 *     CcInitializeCacheMapInternal @ 0x14025E8D0 (CcInitializeCacheMapInternal.c)
 *     MiFlushSectionInternal @ 0x140275750 (MiFlushSectionInternal.c)
 *     MmFlushSection @ 0x140287490 (MmFlushSection.c)
 *     PopAllocateIrp @ 0x14028F434 (PopAllocateIrp.c)
 *     MiGatherMappedPages @ 0x140297D24 (MiGatherMappedPages.c)
 *     IopCancelIrpsInFileObjectList @ 0x1402AFB50 (IopCancelIrpsInFileObjectList.c)
 *     CcMapAndCopyInToCache @ 0x1402CC8F0 (CcMapAndCopyInToCache.c)
 *     MiWalkEntireImage @ 0x1402DAFE0 (MiWalkEntireImage.c)
 *     CcPurgeCacheSection @ 0x1402F07D0 (CcPurgeCacheSection.c)
 *     MiAllocatePagesForMdl @ 0x1402F8CDC (MiAllocatePagesForMdl.c)
 *     FsRtlCreateSectionForDataScan @ 0x140305100 (FsRtlCreateSectionForDataScan.c)
 *     ExpExpandResourceOwnerTable @ 0x1403416F0 (ExpExpandResourceOwnerTable.c)
 *     ?SmStAcquireStoreLockExclusive@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140345290 (-SmStAcquireStoreLockExclusive@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     MiCreateSystemSection @ 0x14035F7A0 (MiCreateSystemSection.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x140368A50 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     PnpBootDeviceWait @ 0x140374B4C (PnpBootDeviceWait.c)
 *     MiMappedPageWriter @ 0x1403915B0 (MiMappedPageWriter.c)
 *     CcDeletePrivateVolumeCacheMap @ 0x1403C2074 (CcDeletePrivateVolumeCacheMap.c)
 *     CcWaitForCurrentLazyWriterActivityOnNode @ 0x1403D4610 (CcWaitForCurrentLazyWriterActivityOnNode.c)
 *     CcCrossPartitionDrainSectionDeletion @ 0x1405356D4 (CcCrossPartitionDrainSectionDeletion.c)
 *     CcDeletePartition @ 0x140538C60 (CcDeletePartition.c)
 *     CcDeleteSectionsForPartition @ 0x140538F54 (CcDeleteSectionsForPartition.c)
 *     InbvRotateGuiBootDisplay @ 0x14054E810 (InbvRotateGuiBootDisplay.c)
 *     IopKeepAliveWorker @ 0x140558780 (IopKeepAliveWorker.c)
 *     ?StNpLeafPageIn@?$ST_STORE@USM_TRAITS@@@@SAJPEAUNP_CTX@NP_CONTEXT@@PEAX_K@Z @ 0x1405C8FC0 (-StNpLeafPageIn@-$ST_STORE@USM_TRAITS@@@@SAJPEAUNP_CTX@NP_CONTEXT@@PEAX_K@Z.c)
 *     MdlInvariantPostProcessing1 @ 0x1405CF494 (MdlInvariantPostProcessing1.c)
 *     DifKeDelayExecutionThreadWrapper @ 0x1405E2DF0 (DifKeDelayExecutionThreadWrapper.c)
 *     MiMakeOutswappedPageResident @ 0x14061856C (MiMakeOutswappedPageResident.c)
 *     MiMarkHugePfnBad @ 0x140621618 (MiMarkHugePfnBad.c)
 *     MiRemoveUnusedSegments @ 0x140625B24 (MiRemoveUnusedSegments.c)
 *     MiFlushAllFilesystemPages @ 0x140629294 (MiFlushAllFilesystemPages.c)
 *     MiCheckSystemTrimEndCriteria @ 0x14063426C (MiCheckSystemTrimEndCriteria.c)
 *     MiFlushAllPagesWorker @ 0x140639CE4 (MiFlushAllPagesWorker.c)
 *     MiFlushAllStoreSwapPages @ 0x140639DEC (MiFlushAllStoreSwapPages.c)
 *     MiGatherPagefilePages @ 0x14063A144 (MiGatherPagefilePages.c)
 *     MiDelayFaultingThread @ 0x140645E18 (MiDelayFaultingThread.c)
 *     MiHandleForkTransitionPte @ 0x140664948 (MiHandleForkTransitionPte.c)
 *     sub_14066CB10 @ 0x14066CB10 (sub_14066CB10.c)
 *     IpmiLibpDelay @ 0x14067802C (IpmiLibpDelay.c)
 *     CmFcpConnectToAlpcServer @ 0x140680B8C (CmFcpConnectToAlpcServer.c)
 *     PoBlockConsoleSwitch @ 0x140682A78 (PoBlockConsoleSwitch.c)
 *     CmpUuidCreate @ 0x140685EA8 (CmpUuidCreate.c)
 *     NtCreateJobObject @ 0x1406885D0 (NtCreateJobObject.c)
 *     MmCreateSpecialImageSection @ 0x1406B9664 (MmCreateSpecialImageSection.c)
 *     EtwpWaitForBufferReferenceCount @ 0x1406BD91C (EtwpWaitForBufferReferenceCount.c)
 *     NtDelayExecution @ 0x1406EF500 (NtDelayExecution.c)
 *     MiCreateSectionCommon @ 0x140722710 (MiCreateSectionCommon.c)
 *     MmGetSystemRoutineAddress @ 0x140756870 (MmGetSystemRoutineAddress.c)
 *     PfpOpenHandleCreate @ 0x14075D084 (PfpOpenHandleCreate.c)
 *     MmManagePartitionMemoryInformation @ 0x1407600FC (MmManagePartitionMemoryInformation.c)
 *     CmpTransMgrCommit @ 0x140768C68 (CmpTransMgrCommit.c)
 *     PspExitThread @ 0x14076DA2C (PspExitThread.c)
 *     IoCancelThreadIo @ 0x14076E4E4 (IoCancelThreadIo.c)
 *     NtSetInformationProcess @ 0x140774540 (NtSetInformationProcess.c)
 *     PnpCompleteDeviceEvent @ 0x140783D70 (PnpCompleteDeviceEvent.c)
 *     ExpWatchProductTypeWork @ 0x1407AC030 (ExpWatchProductTypeWork.c)
 *     NtNotifyChangeSession @ 0x1407B3A20 (NtNotifyChangeSession.c)
 *     MmFlushVirtualMemory @ 0x1407B4258 (MmFlushVirtualMemory.c)
 *     NtCancelIoFile @ 0x1407C1730 (NtCancelIoFile.c)
 *     PopPolicyWorkerNotify @ 0x1407DCEA0 (PopPolicyWorkerNotify.c)
 *     PopAcquireAdaptiveLock @ 0x1407EBE9C (PopAcquireAdaptiveLock.c)
 *     PfTLoggingWorker @ 0x140838BD0 (PfTLoggingWorker.c)
 *     PnpAllocateCriticalMemory @ 0x140868654 (PnpAllocateCriticalMemory.c)
 *     MmVirtualAccessFault @ 0x1408AC0E8 (MmVirtualAccessFault.c)
 *     IopCancelAlertedRequest @ 0x14094437C (IopCancelAlertedRequest.c)
 *     IopFreeBandwidthContract @ 0x14095192C (IopFreeBandwidthContract.c)
 *     PipEventRemovalCheckOpenHandles @ 0x140971AFC (PipEventRemovalCheckOpenHandles.c)
 *     PoShutdownBugCheck @ 0x1409895B0 (PoShutdownBugCheck.c)
 *     ExpNodeHotAddProcessorWorker @ 0x140A007D0 (ExpNodeHotAddProcessorWorker.c)
 *     WheaRemoveErrorSource @ 0x140A078C0 (WheaRemoveErrorSource.c)
 *     CmpRetryBackOff @ 0x140A1E6C8 (CmpRetryBackOff.c)
 *     MiGetReadyInPageBlock @ 0x140A31330 (MiGetReadyInPageBlock.c)
 *     sub_140A4D72C @ 0x140A4D72C (sub_140A4D72C.c)
 *     PoBroadcastSystemState @ 0x140AA6A68 (PoBroadcastSystemState.c)
 *     ViThunkHookExportAddress @ 0x140ADBC78 (ViThunkHookExportAddress.c)
 *     HdlspPutMore @ 0x140AEB0B8 (HdlspPutMore.c)
 *     StartFirstUserProcess @ 0x140B68C34 (StartFirstUserProcess.c)
 *     PiCreateDriverDataDirectoryRoot @ 0x140B6BEC8 (PiCreateDriverDataDirectoryRoot.c)
 * Callees:
 *     KiCommitThreadWait @ 0x140241F20 (KiCommitThreadWait.c)
 *     KeYieldExecution @ 0x1402469F0 (KeYieldExecution.c)
 *     KiFastExitThreadWait @ 0x1402BBC10 (KiFastExitThreadWait.c)
 *     KiBeginThreadWait @ 0x1402C1910 (KiBeginThreadWait.c)
 *     KiCheckDueTimeExpired @ 0x1402C1A90 (KiCheckDueTimeExpired.c)
 *     KiCheckWaitNext @ 0x1402C2720 (KiCheckWaitNext.c)
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
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
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
