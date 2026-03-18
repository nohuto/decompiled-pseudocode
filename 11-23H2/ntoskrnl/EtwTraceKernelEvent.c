/*
 * XREFs of EtwTraceKernelEvent @ 0x140211EDC
 * Callers:
 *     EtwTraceProcessTerminate @ 0x140204F94 (EtwTraceProcessTerminate.c)
 *     EtwpTraceImageUnload @ 0x140211D68 (EtwpTraceImageUnload.c)
 *     MiCombineWithExisting @ 0x1402179B4 (MiCombineWithExisting.c)
 *     KiSwapThread @ 0x14023F3F0 (KiSwapThread.c)
 *     KiExecuteAllDpcs @ 0x1402444C0 (KiExecuteAllDpcs.c)
 *     KiRetireDpcList @ 0x1402459F0 (KiRetireDpcList.c)
 *     KiTimer2Expiration @ 0x1402515E0 (KiTimer2Expiration.c)
 *     KiProcessExpiredTimerList @ 0x140252B50 (KiProcessExpiredTimerList.c)
 *     KiCancelTimer @ 0x140253AA0 (KiCancelTimer.c)
 *     MiCopyOnWrite @ 0x14026FDA0 (MiCopyOnWrite.c)
 *     CcWorkerThread @ 0x140298940 (CcWorkerThread.c)
 *     CcCachemapUninitWorkerThread @ 0x1402994A0 (CcCachemapUninitWorkerThread.c)
 *     KiHvEnlightenedGuestPriorityKick @ 0x1402B2E20 (KiHvEnlightenedGuestPriorityKick.c)
 *     PpmIdleExecuteTransition @ 0x1402C5320 (PpmIdleExecuteTransition.c)
 *     KeResumeClockTimerFromIdle @ 0x1402C7060 (KeResumeClockTimerFromIdle.c)
 *     KiCheckForTimerExpiration @ 0x1402C8140 (KiCheckForTimerExpiration.c)
 *     MiMakePageAvoidRead @ 0x1402CE000 (MiMakePageAvoidRead.c)
 *     MiDeletePteRun @ 0x1402D50F0 (MiDeletePteRun.c)
 *     MiDeleteSystemPagableVm @ 0x1402E9440 (MiDeleteSystemPagableVm.c)
 *     MiCombineInitialInstance @ 0x1402EC690 (MiCombineInitialInstance.c)
 *     MiDemoteCombinedPte @ 0x1402F37B4 (MiDemoteCombinedPte.c)
 *     CcPerformReadAhead @ 0x14030EA20 (CcPerformReadAhead.c)
 *     VslpEnterIumSecureMode @ 0x14033FCF0 (VslpEnterIumSecureMode.c)
 *     KePrepareClockTimerForIdle @ 0x140347334 (KePrepareClockTimerForIdle.c)
 *     KiEventClockStateChange @ 0x140347660 (KiEventClockStateChange.c)
 *     PpmEventIdleStateChange @ 0x14034E968 (PpmEventIdleStateChange.c)
 *     PpmEventLegacyProcessorPerfStateChange @ 0x14034F33C (PpmEventLegacyProcessorPerfStateChange.c)
 *     CcPerfLogScheduleReadAhead @ 0x140393930 (CcPerfLogScheduleReadAhead.c)
 *     CcPerfLogFlushSection @ 0x140394304 (CcPerfLogFlushSection.c)
 *     CcPerfLogFlushCache @ 0x1403943EC (CcPerfLogFlushCache.c)
 *     CcPerfLogWorkItemEnqueue @ 0x140395554 (CcPerfLogWorkItemEnqueue.c)
 *     CcPerfLogVolumeLogHandleInfo @ 0x14039B6C0 (CcPerfLogVolumeLogHandleInfo.c)
 *     CcPerfLogLazyWriteScan @ 0x14039EB5C (CcPerfLogLazyWriteScan.c)
 *     PpmIdleSelectStates @ 0x1403B7470 (PpmIdleSelectStates.c)
 *     MiFindContiguousPagesEx @ 0x1403BB018 (MiFindContiguousPagesEx.c)
 *     EtwTraceAntiStarvationBoost @ 0x140411EFC (EtwTraceAntiStarvationBoost.c)
 *     IopPerfCompleteRequest @ 0x14045F95E (IopPerfCompleteRequest.c)
 *     KiTraceCancelTimer2 @ 0x1404629E8 (KiTraceCancelTimer2.c)
 *     KiTraceSetTimer @ 0x140462A80 (KiTraceSetTimer.c)
 *     PopLogNotifyDevice @ 0x14046302A (PopLogNotifyDevice.c)
 *     PpmEventCoordinatedIdleTransition @ 0x14046328A (PpmEventCoordinatedIdleTransition.c)
 *     EtwTracePriority @ 0x14046738E (EtwTracePriority.c)
 *     EtwTraceThreadAffinity @ 0x140467710 (EtwTraceThreadAffinity.c)
 *     EtwpTraceFltIo @ 0x1404680D0 (EtwpTraceFltIo.c)
 *     EtwpTraceNetwork @ 0x140468250 (EtwpTraceNetwork.c)
 *     EtwpTraceWdf @ 0x1404682E0 (EtwpTraceWdf.c)
 *     MiLogPerfMemoryEvent @ 0x14046B966 (MiLogPerfMemoryEvent.c)
 *     CcAsyncLazywriteWorker @ 0x14053983C (CcAsyncLazywriteWorker.c)
 *     CcPerfLogCanWriteFail @ 0x14053A708 (CcPerfLogCanWriteFail.c)
 *     CcPerfLogExtraWBThreadAction @ 0x14053A798 (CcPerfLogExtraWBThreadAction.c)
 *     IopPerfCompletionRoutine @ 0x1405590C0 (IopPerfCompletionRoutine.c)
 *     IopPerfLogCallEvent @ 0x140559218 (IopPerfLogCallEvent.c)
 *     IopPerfLogCallReturnEvent @ 0x1405592EC (IopPerfLogCallReturnEvent.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DEB4 (KiRemoveSystemWorkPriorityKick.c)
 *     KiTimerExpiration @ 0x14057C7D4 (KiTimerExpiration.c)
 *     KiTimerExpirationDpc @ 0x14057C9E0 (KiTimerExpirationDpc.c)
 *     KiTraceSetTimer2 @ 0x14057D5A4 (KiTraceSetTimer2.c)
 *     PpmTraceExitLatency @ 0x140586050 (PpmTraceExitLatency.c)
 *     PoSetUserPresent @ 0x14058DDC0 (PoSetUserPresent.c)
 *     PpmTracePerfIdleRundown @ 0x140597E80 (PpmTracePerfIdleRundown.c)
 *     PpmEventEnterPlatformIdleState @ 0x14059A060 (PpmEventEnterPlatformIdleState.c)
 *     PpmEventThermalCapChange @ 0x14059B690 (PpmEventThermalCapChange.c)
 *     EtwTraceDebuggerEvent @ 0x1405FC9E0 (EtwTraceDebuggerEvent.c)
 *     EtwTraceDequeueWork @ 0x1405FCA60 (EtwTraceDequeueWork.c)
 *     EtwTraceDpcEnqueueEvent @ 0x1405FCAEC (EtwTraceDpcEnqueueEvent.c)
 *     EtwTraceEnqueueWork @ 0x1405FCD0C (EtwTraceEnqueueWork.c)
 *     EtwTraceIdealProcessor @ 0x1405FCD90 (EtwTraceIdealProcessor.c)
 *     EtwTraceInswapProcess @ 0x1405FCE0C (EtwTraceInswapProcess.c)
 *     EtwTraceIoTimerEvent @ 0x1405FCE90 (EtwTraceIoTimerEvent.c)
 *     EtwTraceLongDpcDetectionEvent @ 0x1405FCEFC (EtwTraceLongDpcDetectionEvent.c)
 *     EtwTraceLongDpcMitigationEvent @ 0x1405FCF7C (EtwTraceLongDpcMitigationEvent.c)
 *     EtwTraceRetpolineExit @ 0x1405FD440 (EtwTraceRetpolineExit.c)
 *     EtwTraceShouldYieldProcessor @ 0x1405FD4AC (EtwTraceShouldYieldProcessor.c)
 *     EtwTraceThreadFeedbackRead @ 0x1405FD670 (EtwTraceThreadFeedbackRead.c)
 *     EtwTraceThreadWorkItem @ 0x1405FD6F0 (EtwTraceThreadWorkItem.c)
 *     EtwTraceWorkloadClassUpdate @ 0x1405FD774 (EtwTraceWorkloadClassUpdate.c)
 *     EtwTraceXSchedulerPriorityKickReceive @ 0x1405FD7F4 (EtwTraceXSchedulerPriorityKickReceive.c)
 *     EtwTraceXSchedulerPriorityUpdate @ 0x1405FD868 (EtwTraceXSchedulerPriorityUpdate.c)
 *     EtwpLogMemInfo @ 0x1405FDE24 (EtwpLogMemInfo.c)
 *     EtwpPmcInterrupt @ 0x1405FDF80 (EtwpPmcInterrupt.c)
 *     EtwpSystemTraceWdf @ 0x1405FE300 (EtwpSystemTraceWdf.c)
 *     EtwpTraceALPC @ 0x1405FE360 (EtwpTraceALPC.c)
 *     EtwpTraceDebugPrint @ 0x1405FE460 (EtwpTraceDebugPrint.c)
 *     EtwpTraceOpticalIo @ 0x1405FE590 (EtwpTraceOpticalIo.c)
 *     EtwpTraceOpticalIoInit @ 0x1405FE840 (EtwpTraceOpticalIoInit.c)
 *     EtwpTraceSplitIo @ 0x1405FE9E0 (EtwpTraceSplitIo.c)
 *     PerfInfoLogUnexpectedInterrupt @ 0x1405FECE0 (PerfInfoLogUnexpectedInterrupt.c)
 *     PerfLogExecutiveResourceInitialize @ 0x1406007CC (PerfLogExecutiveResourceInitialize.c)
 *     PerfLogExecutiveResourceRelease @ 0x140600874 (PerfLogExecutiveResourceRelease.c)
 *     PerfLogExecutiveResourceSetOwnerPointer @ 0x140600A68 (PerfLogExecutiveResourceSetOwnerPointer.c)
 *     PerfLogExecutiveResourceWait @ 0x140600B84 (PerfLogExecutiveResourceWait.c)
 *     PerfLogSpinLockRelease @ 0x140600D78 (PerfLogSpinLockRelease.c)
 *     MiLogAllocateWsleEvent @ 0x14061C258 (MiLogAllocateWsleEvent.c)
 *     MiLogRemoveWsleEvent @ 0x14061C31C (MiLogRemoveWsleEvent.c)
 *     MiLogPerfMemoryRangeEvent @ 0x14061D878 (MiLogPerfMemoryRangeEvent.c)
 *     MiLogMdlRangeEvent @ 0x1406234A0 (MiLogMdlRangeEvent.c)
 *     MiLogNonPagedPoolReleaseEvent @ 0x140641740 (MiLogNonPagedPoolReleaseEvent.c)
 *     MiLogKernelStackEvent @ 0x140644F04 (MiLogKernelStackEvent.c)
 *     MiLogCombinedPteDelete @ 0x14065368C (MiLogCombinedPteDelete.c)
 *     PopDispatchStateCallout @ 0x140682AC8 (PopDispatchStateCallout.c)
 *     MiCreateImageFileMap @ 0x1406A8928 (MiCreateImageFileMap.c)
 *     EtwTraceThreadSetName @ 0x1406ACBBC (EtwTraceThreadSetName.c)
 *     PerfLogImageLoad @ 0x1406AD914 (PerfLogImageLoad.c)
 *     EtwpEnumerateAddressSpace @ 0x1406ADAFC (EtwpEnumerateAddressSpace.c)
 *     MiReleaseProcessReferenceToSessionDataPage @ 0x140706CDC (MiReleaseProcessReferenceToSessionDataPage.c)
 *     HvpMarkDirty @ 0x140747110 (HvpMarkDirty.c)
 *     CmpNotifyChangeKey @ 0x1407674F0 (CmpNotifyChangeKey.c)
 *     MiSessionCreate @ 0x1407A900C (MiSessionCreate.c)
 *     MmLogQueryCombineStats @ 0x1407EA5CC (MmLogQueryCombineStats.c)
 *     EtwpLogSessionWorkingSetInfo @ 0x1408A6F8C (EtwpLogSessionWorkingSetInfo.c)
 *     KeSetIntervalProfile @ 0x140975118 (KeSetIntervalProfile.c)
 *     PopExecutePowerAction @ 0x1409897F4 (PopExecutePowerAction.c)
 *     PopPolicyWorkerAction @ 0x14098A130 (PopPolicyWorkerAction.c)
 *     EtwTraceFreezeThawProcess @ 0x1409E522C (EtwTraceFreezeThawProcess.c)
 *     EtwTraceJob @ 0x1409E5308 (EtwTraceJob.c)
 *     EtwTraceJobAssignProcess @ 0x1409E53E8 (EtwTraceJobAssignProcess.c)
 *     EtwTraceJobRemoveProcess @ 0x1409E5498 (EtwTraceJobRemoveProcess.c)
 *     EtwTraceJobSendNotification @ 0x1409E553C (EtwTraceJobSendNotification.c)
 *     EtwTraceJobSetQuery @ 0x1409E569C (EtwTraceJobSetQuery.c)
 *     EtwTraceWakeCounter @ 0x1409E5E5C (EtwTraceWakeCounter.c)
 *     EtwTraceWakeEvent @ 0x1409E5F18 (EtwTraceWakeEvent.c)
 *     EtwpLogMemInfoWsHelper @ 0x1409E6068 (EtwpLogMemInfoWsHelper.c)
 *     CmpLogHiveDestroyEvent @ 0x140A12770 (CmpLogHiveDestroyEvent.c)
 *     CmpLogHiveInitializeEvent @ 0x140A12864 (CmpLogHiveInitializeEvent.c)
 *     CmpLogHiveLinkEvent @ 0x140A1294C (CmpLogHiveLinkEvent.c)
 *     MiLogSectionCreate @ 0x140A2F640 (MiLogSectionCreate.c)
 *     KiCalibrateTimeAdjustment @ 0x140A9EF40 (KiCalibrateTimeAdjustment.c)
 *     PoBroadcastSystemState @ 0x140AA6A68 (PoBroadcastSystemState.c)
 *     PopSystemIrpCompletion @ 0x140AA75C0 (PopSystemIrpCompletion.c)
 *     PopInvokeSystemStateHandler @ 0x140AA859C (PopInvokeSystemStateHandler.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x140233CA0 (EtwpLogKernelEvent.c)
 */

__int64 __fastcall EtwTraceKernelEvent(int a1, int a2, unsigned int a3, __int16 a4, int a5)
{
  __int64 result; // rax
  unsigned __int64 v7; // rsi
  unsigned int v10; // ebx
  bool i; // zf
  __int64 v12; // r10
  __int64 v13; // rcx

  result = EtwpHostSiloState;
  v7 = a3;
  v10 = *(_DWORD *)(EtwpHostSiloState + 4248);
  for ( i = !_BitScanForward((unsigned int *)&v12, v10); !i; i = !_BitScanForward((unsigned int *)&v12, v10) )
  {
    v10 &= v10 - 1;
    result = 32LL * (unsigned int)v12;
    v13 = result + EtwpHostSiloState + 4284;
    if ( v13 )
    {
      result = v7 >> 29;
      if ( ((unsigned int)v7 & *(_DWORD *)(v13 + 4 * (v7 >> 29)) & 0x1FFFFFFF) != 0 )
        result = EtwpLogKernelEvent(
                   a1,
                   EtwpHostSiloState,
                   *(unsigned __int8 *)(EtwpHostSiloState + 2 * v12 + 4232),
                   a2,
                   a4,
                   a5);
    }
  }
  return result;
}
