/*
 * XREFs of EtwTraceKernelEvent @ 0x140211EDC
 * Callers:
 *     EtwTraceProcessTerminate @ 0x140204F94 (EtwTraceProcessTerminate.c)
 *     EtwpTraceImageUnload @ 0x140211D68 (EtwpTraceImageUnload.c)
 *     MiCombineWithExisting @ 0x1402179B4 (MiCombineWithExisting.c)
 *     KiSwapThread @ 0x14023F4C0 (KiSwapThread.c)
 *     KiExecuteAllDpcs @ 0x140244590 (KiExecuteAllDpcs.c)
 *     KiRetireDpcList @ 0x140245AC0 (KiRetireDpcList.c)
 *     KiTimer2Expiration @ 0x1402516A0 (KiTimer2Expiration.c)
 *     KiProcessExpiredTimerList @ 0x140252C10 (KiProcessExpiredTimerList.c)
 *     KiCancelTimer @ 0x140253B60 (KiCancelTimer.c)
 *     MiCopyOnWrite @ 0x140270030 (MiCopyOnWrite.c)
 *     CcWorkerThread @ 0x140298BD0 (CcWorkerThread.c)
 *     CcCachemapUninitWorkerThread @ 0x140299730 (CcCachemapUninitWorkerThread.c)
 *     KiHvEnlightenedGuestPriorityKick @ 0x1402B30B0 (KiHvEnlightenedGuestPriorityKick.c)
 *     PpmIdleExecuteTransition @ 0x1402C55B0 (PpmIdleExecuteTransition.c)
 *     KeResumeClockTimerFromIdle @ 0x1402C72F0 (KeResumeClockTimerFromIdle.c)
 *     KiCheckForTimerExpiration @ 0x1402C83D0 (KiCheckForTimerExpiration.c)
 *     MiMakePageAvoidRead @ 0x1402CE290 (MiMakePageAvoidRead.c)
 *     MiDeletePteRun @ 0x1402D5380 (MiDeletePteRun.c)
 *     MiDeleteSystemPagableVm @ 0x1402E96D0 (MiDeleteSystemPagableVm.c)
 *     MiCombineInitialInstance @ 0x1402EC920 (MiCombineInitialInstance.c)
 *     MiDemoteCombinedPte @ 0x1402F3A44 (MiDemoteCombinedPte.c)
 *     CcPerformReadAhead @ 0x14030ECB0 (CcPerformReadAhead.c)
 *     VslpEnterIumSecureMode @ 0x14033FF80 (VslpEnterIumSecureMode.c)
 *     KePrepareClockTimerForIdle @ 0x1403475C4 (KePrepareClockTimerForIdle.c)
 *     KiEventClockStateChange @ 0x1403478F0 (KiEventClockStateChange.c)
 *     PpmEventIdleStateChange @ 0x14034EB08 (PpmEventIdleStateChange.c)
 *     PpmEventLegacyProcessorPerfStateChange @ 0x14034F4DC (PpmEventLegacyProcessorPerfStateChange.c)
 *     CcPerfLogScheduleReadAhead @ 0x140393B10 (CcPerfLogScheduleReadAhead.c)
 *     CcPerfLogFlushSection @ 0x1403944E4 (CcPerfLogFlushSection.c)
 *     CcPerfLogFlushCache @ 0x1403945CC (CcPerfLogFlushCache.c)
 *     CcPerfLogWorkItemEnqueue @ 0x140395734 (CcPerfLogWorkItemEnqueue.c)
 *     CcPerfLogVolumeLogHandleInfo @ 0x14039B8A0 (CcPerfLogVolumeLogHandleInfo.c)
 *     CcPerfLogLazyWriteScan @ 0x14039ED3C (CcPerfLogLazyWriteScan.c)
 *     PpmIdleSelectStates @ 0x1403B7650 (PpmIdleSelectStates.c)
 *     MiFindContiguousPagesEx @ 0x1403BB1F8 (MiFindContiguousPagesEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTraceAntiStarvationBoost @ 0x1404121E8 (EtwTraceAntiStarvationBoost.c)
 *     IopPerfCompleteRequest @ 0x14045FD5E (IopPerfCompleteRequest.c)
 *     KiTraceCancelTimer2 @ 0x140462DE8 (KiTraceCancelTimer2.c)
 *     KiTraceSetTimer @ 0x140462E80 (KiTraceSetTimer.c)
 *     PopLogNotifyDevice @ 0x14046342A (PopLogNotifyDevice.c)
 *     PpmEventCoordinatedIdleTransition @ 0x14046368A (PpmEventCoordinatedIdleTransition.c)
 *     EtwTracePriority @ 0x14046778E (EtwTracePriority.c)
 *     EtwTraceThreadAffinity @ 0x140467B10 (EtwTraceThreadAffinity.c)
 *     EtwpTraceFltIo @ 0x1404684D0 (EtwpTraceFltIo.c)
 *     EtwpTraceNetwork @ 0x140468650 (EtwpTraceNetwork.c)
 *     EtwpTraceWdf @ 0x1404686E0 (EtwpTraceWdf.c)
 *     MiLogPerfMemoryEvent @ 0x14046BD66 (MiLogPerfMemoryEvent.c)
 *     CcAsyncLazywriteWorker @ 0x140539D8C (CcAsyncLazywriteWorker.c)
 *     CcPerfLogCanWriteFail @ 0x14053AC58 (CcPerfLogCanWriteFail.c)
 *     CcPerfLogExtraWBThreadAction @ 0x14053ACE8 (CcPerfLogExtraWBThreadAction.c)
 *     IopPerfCompletionRoutine @ 0x140559780 (IopPerfCompletionRoutine.c)
 *     IopPerfLogCallEvent @ 0x1405598D8 (IopPerfLogCallEvent.c)
 *     IopPerfLogCallReturnEvent @ 0x1405599AC (IopPerfLogCallReturnEvent.c)
 *     KiTimerExpiration @ 0x14057CCC4 (KiTimerExpiration.c)
 *     KiTimerExpirationDpc @ 0x14057CED0 (KiTimerExpirationDpc.c)
 *     KiTraceSetTimer2 @ 0x14057DA94 (KiTraceSetTimer2.c)
 *     PpmTraceExitLatency @ 0x140586540 (PpmTraceExitLatency.c)
 *     PoSetUserPresent @ 0x14058E2B0 (PoSetUserPresent.c)
 *     PpmTracePerfIdleRundown @ 0x140598370 (PpmTracePerfIdleRundown.c)
 *     PpmEventEnterPlatformIdleState @ 0x14059A550 (PpmEventEnterPlatformIdleState.c)
 *     PpmEventThermalCapChange @ 0x14059BB80 (PpmEventThermalCapChange.c)
 *     EtwTraceDebuggerEvent @ 0x1405FCF50 (EtwTraceDebuggerEvent.c)
 *     EtwTraceDequeueWork @ 0x1405FCFD0 (EtwTraceDequeueWork.c)
 *     EtwTraceDpcEnqueueEvent @ 0x1405FD05C (EtwTraceDpcEnqueueEvent.c)
 *     EtwTraceEnqueueWork @ 0x1405FD27C (EtwTraceEnqueueWork.c)
 *     EtwTraceIdealProcessor @ 0x1405FD300 (EtwTraceIdealProcessor.c)
 *     EtwTraceInswapProcess @ 0x1405FD37C (EtwTraceInswapProcess.c)
 *     EtwTraceIoTimerEvent @ 0x1405FD400 (EtwTraceIoTimerEvent.c)
 *     EtwTraceLongDpcDetectionEvent @ 0x1405FD46C (EtwTraceLongDpcDetectionEvent.c)
 *     EtwTraceLongDpcMitigationEvent @ 0x1405FD4EC (EtwTraceLongDpcMitigationEvent.c)
 *     EtwTraceRetpolineExit @ 0x1405FD9B0 (EtwTraceRetpolineExit.c)
 *     EtwTraceShouldYieldProcessor @ 0x1405FDA1C (EtwTraceShouldYieldProcessor.c)
 *     EtwTraceThreadFeedbackRead @ 0x1405FDBE0 (EtwTraceThreadFeedbackRead.c)
 *     EtwTraceThreadWorkItem @ 0x1405FDC60 (EtwTraceThreadWorkItem.c)
 *     EtwTraceWorkloadClassUpdate @ 0x1405FDCE4 (EtwTraceWorkloadClassUpdate.c)
 *     EtwTraceXSchedulerPriorityKickReceive @ 0x1405FDD64 (EtwTraceXSchedulerPriorityKickReceive.c)
 *     EtwTraceXSchedulerPriorityUpdate @ 0x1405FDDD8 (EtwTraceXSchedulerPriorityUpdate.c)
 *     EtwpLogMemInfo @ 0x1405FE394 (EtwpLogMemInfo.c)
 *     EtwpPmcInterrupt @ 0x1405FE4F0 (EtwpPmcInterrupt.c)
 *     EtwpSystemTraceWdf @ 0x1405FE870 (EtwpSystemTraceWdf.c)
 *     EtwpTraceALPC @ 0x1405FE8D0 (EtwpTraceALPC.c)
 *     EtwpTraceDebugPrint @ 0x1405FE9D0 (EtwpTraceDebugPrint.c)
 *     EtwpTraceOpticalIo @ 0x1405FEB00 (EtwpTraceOpticalIo.c)
 *     EtwpTraceOpticalIoInit @ 0x1405FEDB0 (EtwpTraceOpticalIoInit.c)
 *     EtwpTraceSplitIo @ 0x1405FEF50 (EtwpTraceSplitIo.c)
 *     PerfInfoLogUnexpectedInterrupt @ 0x1405FF250 (PerfInfoLogUnexpectedInterrupt.c)
 *     PerfLogExecutiveResourceInitialize @ 0x140600D1C (PerfLogExecutiveResourceInitialize.c)
 *     PerfLogExecutiveResourceRelease @ 0x140600DC4 (PerfLogExecutiveResourceRelease.c)
 *     PerfLogExecutiveResourceSetOwnerPointer @ 0x140600FB8 (PerfLogExecutiveResourceSetOwnerPointer.c)
 *     PerfLogExecutiveResourceWait @ 0x1406010D4 (PerfLogExecutiveResourceWait.c)
 *     PerfLogSpinLockRelease @ 0x1406012C8 (PerfLogSpinLockRelease.c)
 *     MiLogAllocateWsleEvent @ 0x14061C7A8 (MiLogAllocateWsleEvent.c)
 *     MiLogRemoveWsleEvent @ 0x14061C86C (MiLogRemoveWsleEvent.c)
 *     MiLogPerfMemoryRangeEvent @ 0x14061DDC8 (MiLogPerfMemoryRangeEvent.c)
 *     MiLogMdlRangeEvent @ 0x1406239F0 (MiLogMdlRangeEvent.c)
 *     MiLogNonPagedPoolReleaseEvent @ 0x140641C90 (MiLogNonPagedPoolReleaseEvent.c)
 *     MiLogKernelStackEvent @ 0x140645454 (MiLogKernelStackEvent.c)
 *     MiLogCombinedPteDelete @ 0x140653BDC (MiLogCombinedPteDelete.c)
 *     PopDispatchStateCallout @ 0x140682AC8 (PopDispatchStateCallout.c)
 *     MiCreateImageFileMap @ 0x1406A8928 (MiCreateImageFileMap.c)
 *     EtwTraceThreadSetName @ 0x1406ACBBC (EtwTraceThreadSetName.c)
 *     PerfLogImageLoad @ 0x1406AD944 (PerfLogImageLoad.c)
 *     EtwpEnumerateAddressSpace @ 0x1406ADB2C (EtwpEnumerateAddressSpace.c)
 *     MiReleaseProcessReferenceToSessionDataPage @ 0x140706EEC (MiReleaseProcessReferenceToSessionDataPage.c)
 *     HvpMarkDirty @ 0x140747300 (HvpMarkDirty.c)
 *     CmpNotifyChangeKey @ 0x1407676E0 (CmpNotifyChangeKey.c)
 *     MiSessionCreate @ 0x1407A91FC (MiSessionCreate.c)
 *     MmLogQueryCombineStats @ 0x1407EA89C (MmLogQueryCombineStats.c)
 *     EtwpLogSessionWorkingSetInfo @ 0x1408A71DC (EtwpLogSessionWorkingSetInfo.c)
 *     KeSetIntervalProfile @ 0x140975318 (KeSetIntervalProfile.c)
 *     PopExecutePowerAction @ 0x1409899F4 (PopExecutePowerAction.c)
 *     PopPolicyWorkerAction @ 0x14098A330 (PopPolicyWorkerAction.c)
 *     EtwTraceFreezeThawProcess @ 0x1409E54BC (EtwTraceFreezeThawProcess.c)
 *     EtwTraceJob @ 0x1409E5598 (EtwTraceJob.c)
 *     EtwTraceJobAssignProcess @ 0x1409E5678 (EtwTraceJobAssignProcess.c)
 *     EtwTraceJobRemoveProcess @ 0x1409E5728 (EtwTraceJobRemoveProcess.c)
 *     EtwTraceJobSendNotification @ 0x1409E57CC (EtwTraceJobSendNotification.c)
 *     EtwTraceJobSetQuery @ 0x1409E592C (EtwTraceJobSetQuery.c)
 *     EtwTraceWakeCounter @ 0x1409E60EC (EtwTraceWakeCounter.c)
 *     EtwTraceWakeEvent @ 0x1409E61A8 (EtwTraceWakeEvent.c)
 *     EtwpLogMemInfoWsHelper @ 0x1409E62F8 (EtwpLogMemInfoWsHelper.c)
 *     CmpLogHiveDestroyEvent @ 0x140A12A20 (CmpLogHiveDestroyEvent.c)
 *     CmpLogHiveInitializeEvent @ 0x140A12B14 (CmpLogHiveInitializeEvent.c)
 *     CmpLogHiveLinkEvent @ 0x140A12BFC (CmpLogHiveLinkEvent.c)
 *     MiLogSectionCreate @ 0x140A2F8F0 (MiLogSectionCreate.c)
 *     KiCalibrateTimeAdjustment @ 0x140A9EDB0 (KiCalibrateTimeAdjustment.c)
 *     PoBroadcastSystemState @ 0x140AA68D8 (PoBroadcastSystemState.c)
 *     PopSystemIrpCompletion @ 0x140AA7430 (PopSystemIrpCompletion.c)
 *     PopInvokeSystemStateHandler @ 0x140AA840C (PopInvokeSystemStateHandler.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x140233D70 (EtwpLogKernelEvent.c)
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
