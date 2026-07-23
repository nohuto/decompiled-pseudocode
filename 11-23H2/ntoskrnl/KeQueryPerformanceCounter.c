/*
 * XREFs of KeQueryPerformanceCounter @ 0x1402C3500
 * Callers:
 *     KeInsertSchedulingGroup @ 0x1402050DC (KeInsertSchedulingGroup.c)
 *     KiUpdateCpuTargetByWeight @ 0x14020572C (KiUpdateCpuTargetByWeight.c)
 *     KiUpdateCpuTargetByRate @ 0x1402058E8 (KiUpdateCpuTargetByRate.c)
 *     KeQueryUnbiasedInterruptTimePrecise @ 0x14020C300 (KeQueryUnbiasedInterruptTimePrecise.c)
 *     KeThawExecution @ 0x14020D410 (KeThawExecution.c)
 *     KeFreezeExecution @ 0x14020D540 (KeFreezeExecution.c)
 *     KiFreezeTargetExecution @ 0x14020E1D0 (KiFreezeTargetExecution.c)
 *     MiFlushCacheForAttributeChange @ 0x14021AB84 (MiFlushCacheForAttributeChange.c)
 *     MiScheduleZeroPageThreads @ 0x14021F3CC (MiScheduleZeroPageThreads.c)
 *     RtlGetSystemTimePrecise @ 0x140226F20 (RtlGetSystemTimePrecise.c)
 *     EtwpGetLoggerTimeStamp @ 0x140227C5C (EtwpGetLoggerTimeStamp.c)
 *     EtwpReserveTraceBuffer @ 0x1402341D0 (EtwpReserveTraceBuffer.c)
 *     PopGetIdleTimesCallback @ 0x1402521A0 (PopGetIdleTimesCallback.c)
 *     KiProcessExpiredTimerList @ 0x140252C10 (KiProcessExpiredTimerList.c)
 *     PpmSnapPerformanceAccumulation @ 0x140256390 (PpmSnapPerformanceAccumulation.c)
 *     CcCopyReadEx @ 0x140261FF0 (CcCopyReadEx.c)
 *     CcFetchDataForRead @ 0x140262550 (CcFetchDataForRead.c)
 *     PopDeepSleepResiliencyPhaseAccountingUpdate @ 0x14028EBC8 (PopDeepSleepResiliencyPhaseAccountingUpdate.c)
 *     KeQuerySchedulingGroupHistory @ 0x1402939D8 (KeQuerySchedulingGroupHistory.c)
 *     CcFlushCachePriv @ 0x14029CFC4 (CcFlushCachePriv.c)
 *     CcFlushCachePreProcess @ 0x14029E110 (CcFlushCachePreProcess.c)
 *     EtwGetKernelTraceTimestampSilo @ 0x1402A3240 (EtwGetKernelTraceTimestampSilo.c)
 *     KeQuerySystemTimePrecise @ 0x1402BE7C0 (KeQuerySystemTimePrecise.c)
 *     CcAsyncCopyRead @ 0x1402C1300 (CcAsyncCopyRead.c)
 *     CcCompleteAsyncRead @ 0x1402C16C0 (CcCompleteAsyncRead.c)
 *     KiCheckStall @ 0x1402C2920 (KiCheckStall.c)
 *     KiSetClockTickRate @ 0x1402C2B20 (KiSetClockTickRate.c)
 *     KiUpdateProcessConcurrencyCounts @ 0x1402C3650 (KiUpdateProcessConcurrencyCounts.c)
 *     KiUpdateTime @ 0x1402C3930 (KiUpdateTime.c)
 *     RtlGetInterruptTimePrecise @ 0x1402C4570 (RtlGetInterruptTimePrecise.c)
 *     KeClockInterruptNotify @ 0x1402C4930 (KeClockInterruptNotify.c)
 *     KiUpdateRunTime @ 0x1402C7770 (KiUpdateRunTime.c)
 *     KiSetNextClockTickDueTime @ 0x1402C87A0 (KiSetNextClockTickDueTime.c)
 *     CcCopyWriteEx @ 0x1402C8FB0 (CcCopyWriteEx.c)
 *     CcMapAndCopyInToCache @ 0x1402CCB80 (CcMapAndCopyInToCache.c)
 *     MiZeroLocalPages @ 0x1402CF7D0 (MiZeroLocalPages.c)
 *     MiAllocatePagesForMdl @ 0x1402F8F6C (MiAllocatePagesForMdl.c)
 *     PopWriteBsdPoInfo @ 0x14032B570 (PopWriteBsdPoInfo.c)
 *     HalpSetVirtualRtc @ 0x14033B880 (HalpSetVirtualRtc.c)
 *     StEtaStart @ 0x140344134 (StEtaStart.c)
 *     ?StDmInitialize@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@0@Z @ 0x1403448B8 (-StDmInitialize@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@0@Z.c)
 *     StLcInitialize @ 0x140344C78 (StLcInitialize.c)
 *     PpmIdleSnapConcurrency @ 0x140346824 (PpmIdleSnapConcurrency.c)
 *     PpmPerfApplyProcessorState @ 0x14034F1AC (PpmPerfApplyProcessorState.c)
 *     MiReassessZeroThreads @ 0x14035179C (MiReassessZeroThreads.c)
 *     PpmPerfApplyDomainState @ 0x140352838 (PpmPerfApplyDomainState.c)
 *     RtlGetMultiTimePrecise @ 0x140364C20 (RtlGetMultiTimePrecise.c)
 *     HalpTimerDpcRoutine @ 0x14036A500 (HalpTimerDpcRoutine.c)
 *     HalpTimerReadTimerPairWithLatencyLimit @ 0x14037A370 (HalpTimerReadTimerPairWithLatencyLimit.c)
 *     HalpTimerDetermineValidTimerPairReadLatency @ 0x14037A978 (HalpTimerDetermineValidTimerPairReadLatency.c)
 *     BgpFwQueryPerformanceCounter @ 0x140385150 (BgpFwQueryPerformanceCounter.c)
 *     MiZeroPageCalibrateLastDpcProcessorDone @ 0x14038E05C (MiZeroPageCalibrateLastDpcProcessorDone.c)
 *     MiStartDpcZeroingRound @ 0x14038E128 (MiStartDpcZeroingRound.c)
 *     PpmQueryTime @ 0x140391A88 (PpmQueryTime.c)
 *     PpmInstallFeedbackCounters @ 0x140393258 (PpmInstallFeedbackCounters.c)
 *     PpmResetIdlePolicy @ 0x14039FD38 (PpmResetIdlePolicy.c)
 *     KiIpiGenericCallTarget @ 0x1403A6450 (KiIpiGenericCallTarget.c)
 *     EtwpFileModeCompress @ 0x1403A695C (EtwpFileModeCompress.c)
 *     PpmResetPerformanceAccumulation @ 0x1403A735C (PpmResetPerformanceAccumulation.c)
 *     ?SmInitialize@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z @ 0x1403A8AEC (-SmInitialize@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z.c)
 *     KiSetupTimeIncrement @ 0x1403ABC64 (KiSetupTimeIncrement.c)
 *     HalpTimerFinalizeAuxiliaryCounter @ 0x1403ACA10 (HalpTimerFinalizeAuxiliaryCounter.c)
 *     HalpTimerCaptureCloestAuxiliaryQpcPair @ 0x1403ACA8C (HalpTimerCaptureCloestAuxiliaryQpcPair.c)
 *     HalWheaUpdateCmciPolicy @ 0x1403AD510 (HalWheaUpdateCmciPolicy.c)
 *     KiComputeDispatchInterruptCostDpcRoutine @ 0x1403B0500 (KiComputeDispatchInterruptCostDpcRoutine.c)
 *     HalpCmciLoadThresholdConfiguration @ 0x1403B11A0 (HalpCmciLoadThresholdConfiguration.c)
 *     PpmIdleInstallConcurrency @ 0x1403B36C0 (PpmIdleInstallConcurrency.c)
 *     HalpTimerSchedulePeriodicQueries @ 0x1403B3C84 (HalpTimerSchedulePeriodicQueries.c)
 *     PpmIdleSelectStates @ 0x1403B7650 (PpmIdleSelectStates.c)
 *     MiAllocateContiguousMemory @ 0x1403B9EB4 (MiAllocateContiguousMemory.c)
 *     KiUpdateSystemTime @ 0x1403C16D8 (KiUpdateSystemTime.c)
 *     KiUpdateTimeAssist @ 0x1403CF998 (KiUpdateTimeAssist.c)
 *     KiLogClockIncrementUpdate @ 0x1403D03B8 (KiLogClockIncrementUpdate.c)
 *     HalpScanForProfilingCorruption @ 0x14045BCC4 (HalpScanForProfilingCorruption.c)
 *     ?SmAsyncReadQueueWorker@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x140465060 (-SmAsyncReadQueueWorker@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     EtwpGetDurationSince @ 0x140467D8E (EtwpGetDurationSince.c)
 *     HalpTimerCaptureCurrentAuxiliaryQpcPair @ 0x1404FE780 (HalpTimerCaptureCurrentAuxiliaryQpcPair.c)
 *     HalpTimerRestorePerformanceCounter @ 0x1404FED8C (HalpTimerRestorePerformanceCounter.c)
 *     HalpCmciHandler @ 0x140505C8C (HalpCmciHandler.c)
 *     HalpCollectProfileCorruptionStatus @ 0x14050785C (HalpCollectProfileCorruptionStatus.c)
 *     HalpTscFallback @ 0x14050ABF0 (HalpTscFallback.c)
 *     HalpQueryVirtualRtc @ 0x14050BE70 (HalpQueryVirtualRtc.c)
 *     HalpTimerMeasureProcessorsWorker @ 0x14050D040 (HalpTimerMeasureProcessorsWorker.c)
 *     EmonAllocateCounter @ 0x14051D120 (EmonAllocateCounter.c)
 *     EmonOverflowHandler @ 0x14051DBA0 (EmonOverflowHandler.c)
 *     Amd64AllocateCounter @ 0x140529048 (Amd64AllocateCounter.c)
 *     Amd64OverflowHandler @ 0x14052A010 (Amd64OverflowHandler.c)
 *     XmRdtscOp @ 0x140534A40 (XmRdtscOp.c)
 *     CcWriteBehindAsync @ 0x14053A9D0 (CcWriteBehindAsync.c)
 *     IopLiveDumpGetMillisecondCounter @ 0x14055A3FC (IopLiveDumpGetMillisecondCounter.c)
 *     KeRebaselineInterruptTime @ 0x14056B56C (KeRebaselineInterruptTime.c)
 *     KeRebaselineSystemTime @ 0x14056B59C (KeRebaselineSystemTime.c)
 *     KeSwitchFrozenProcessor @ 0x140577090 (KeSwitchFrozenProcessor.c)
 *     KiTimerExpiration @ 0x14057CCC4 (KiTimerExpiration.c)
 *     PoInitiateProcessorWake @ 0x140584210 (PoInitiateProcessorWake.c)
 *     PpmIdleRemoveConcurrency @ 0x1405858A0 (PpmIdleRemoveConcurrency.c)
 *     PpmIdleSnapConcurrencyIdleTime @ 0x140585A4C (PpmIdleSnapConcurrencyIdleTime.c)
 *     PpmIdleTransitionStall @ 0x140585B40 (PpmIdleTransitionStall.c)
 *     PpmTraceExitLatency @ 0x140586540 (PpmTraceExitLatency.c)
 *     PopFxUpdateDeviceIRPhaseAccounting @ 0x14058C7C4 (PopFxUpdateDeviceIRPhaseAccounting.c)
 *     PopDeepSleepResiliencyPhaseAccountingBegin @ 0x140598AD0 (PopDeepSleepResiliencyPhaseAccountingBegin.c)
 *     PopDeepSleepResiliencyPhaseAccountingEnd @ 0x140598BEC (PopDeepSleepResiliencyPhaseAccountingEnd.c)
 *     PopUmpoSendFlushSleepStudyLoggerNotification @ 0x140599C3C (PopUmpoSendFlushSleepStudyLoggerNotification.c)
 *     PdcPoCurrentPdcPhase @ 0x140599CA0 (PdcPoCurrentPdcPhase.c)
 *     ?SmReadPickStore@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAKPEAPEAU?$SMKM_STORE@USM_TRAITS@@@@2@Z @ 0x1405C08F0 (-SmReadPickStore@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAKPEAPEAU-$SMKM_STO.c)
 *     ?StDeviceIoIssue@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_PF_QUEUE@@@Z @ 0x1405C4794 (-StDeviceIoIssue@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_PF_QUEUE@@@Z.c)
 *     ?StDmDeviceIoCompletion@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1405C5968 (-StDmDeviceIoCompletion@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StNpLeafPageIn@?$ST_STORE@USM_TRAITS@@@@SAJPEAUNP_CTX@NP_CONTEXT@@PEAX_K@Z @ 0x1405C9530 (-StNpLeafPageIn@-$ST_STORE@USM_TRAITS@@@@SAJPEAUNP_CTX@NP_CONTEXT@@PEAX_K@Z.c)
 *     StEtaIoStart @ 0x1405CAEC8 (StEtaIoStart.c)
 *     StLcBucketsCopy @ 0x1405CB038 (StLcBucketsCopy.c)
 *     CarInitLogging @ 0x1405D37D0 (CarInitLogging.c)
 *     WmiGetClock @ 0x1405FFC90 (WmiGetClock.c)
 *     EtwpCompressPendingBuffers @ 0x140602A34 (EtwpCompressPendingBuffers.c)
 *     BgpFwDisplayBugCheckProgressUpdate @ 0x140673458 (BgpFwDisplayBugCheckProgressUpdate.c)
 *     BgpFwDisplayBugCheckScreen @ 0x140673614 (BgpFwDisplayBugCheckScreen.c)
 *     IpmiLibpKcsRequestAndReceive @ 0x140678930 (IpmiLibpKcsRequestAndReceive.c)
 *     IpmiLibpKcsSpinRegister @ 0x140678C10 (IpmiLibpKcsSpinRegister.c)
 *     IpmiLibpTimeAfter @ 0x140678D08 (IpmiLibpTimeAfter.c)
 *     NtQueryInformationProcess @ 0x1406FCCA0 (NtQueryInformationProcess.c)
 *     NtQueryPerformanceCounter @ 0x1407420C0 (NtQueryPerformanceCounter.c)
 *     PspNotifyThreadCreation @ 0x14076F9F0 (PspNotifyThreadCreation.c)
 *     NtPowerInformation @ 0x140784110 (NtPowerInformation.c)
 *     ExpAllocateUuids @ 0x1407E2308 (ExpAllocateUuids.c)
 *     RtlCapabilityCheck @ 0x1407ED020 (RtlCapabilityCheck.c)
 *     EtwpAddLogHeader @ 0x1407F7844 (EtwpAddLogHeader.c)
 *     Phase1Initialization @ 0x140821230 (Phase1Initialization.c)
 *     MiComputeCacheAttributeSpeeds @ 0x1408256A8 (MiComputeCacheAttributeSpeeds.c)
 *     PpmRegisterPerfStates @ 0x14082E84C (PpmRegisterPerfStates.c)
 *     MiNodeZeroConductor @ 0x14082F920 (MiNodeZeroConductor.c)
 *     EtwpInitializeSiloState @ 0x14083B664 (EtwpInitializeSiloState.c)
 *     RtlpCapChkTelemetryRunOnce @ 0x140865F80 (RtlpCapChkTelemetryRunOnce.c)
 *     IoCaptureLiveDump @ 0x14094BBE8 (IoCaptureLiveDump.c)
 *     PopExecutePowerAction @ 0x1409899F4 (PopExecutePowerAction.c)
 *     PopIssueActionRequest @ 0x140989EA4 (PopIssueActionRequest.c)
 *     PopResumeApps @ 0x14098A634 (PopResumeApps.c)
 *     PopResumeServices @ 0x14098A6AC (PopResumeServices.c)
 *     CmpRecordShutdownStopTime @ 0x140A1192C (CmpRecordShutdownStopTime.c)
 *     HalpCmciInit @ 0x140A8A70C (HalpCmciInit.c)
 *     HalpDpReplaceControl @ 0x140A97710 (HalpDpReplaceControl.c)
 *     PnprGetMillisecondCounter @ 0x140A9C724 (PnprGetMillisecondCounter.c)
 *     KiCalibrateTimeAdjustment @ 0x140A9EDB0 (KiCalibrateTimeAdjustment.c)
 *     PopDecompressHiberBlocks @ 0x140AA21A4 (PopDecompressHiberBlocks.c)
 *     PopHiberCheckForDebugBreak @ 0x140AA2CC4 (PopHiberCheckForDebugBreak.c)
 *     PopTransitionToSleep @ 0x140AA51B0 (PopTransitionToSleep.c)
 *     PopWriteImageHeader @ 0x140AA5B08 (PopWriteImageHeader.c)
 *     PoBroadcastSystemState @ 0x140AA68D8 (PoBroadcastSystemState.c)
 *     PopDiagComputeEarlyHiberStats @ 0x140AA770C (PopDiagComputeEarlyHiberStats.c)
 *     PopHandleNextState @ 0x140AA7F8C (PopHandleNextState.c)
 *     PopInvokeSystemStateHandler @ 0x140AA840C (PopInvokeSystemStateHandler.c)
 *     PopTransitionSystemPowerStateEx @ 0x140AA8F60 (PopTransitionSystemPowerStateEx.c)
 *     PopSstDiagInitializeResumeTimer @ 0x140AAA4D4 (PopSstDiagInitializeResumeTimer.c)
 *     PopSstDiagQueryResumeTimestamp @ 0x140AAA5C0 (PopSstDiagQueryResumeTimestamp.c)
 *     KdpSendWaitContinue @ 0x140AB07C8 (KdpSendWaitContinue.c)
 *     KdInitSystem @ 0x140AB1040 (KdInitSystem.c)
 *     VfFillAllocatedMemory @ 0x140ADA02C (VfFillAllocatedMemory.c)
 *     CcInitializeTelemetry @ 0x140B34E14 (CcInitializeTelemetry.c)
 *     MiInitNucleus @ 0x140B41888 (MiInitNucleus.c)
 *     MiInitSystem @ 0x140B44518 (MiInitSystem.c)
 *     MiInitializeDriverImages @ 0x140B460A0 (MiInitializeDriverImages.c)
 *     KiComputeDispatchInterruptCost @ 0x140B4CBF4 (KiComputeDispatchInterruptCost.c)
 *     Phase1InitializationDiscard @ 0x140B4FFBC (Phase1InitializationDiscard.c)
 *     PoInitSystem @ 0x140B50BBC (PoInitSystem.c)
 *     InitBootProcessor @ 0x140B52774 (InitBootProcessor.c)
 *     ViInitSystemPhase0 @ 0x140B69A68 (ViInitSystemPhase0.c)
 *     MiInitializeCacheFlushing @ 0x140B6A51C (MiInitializeCacheFlushing.c)
 *     KeInitializeClock @ 0x140B6AB28 (KeInitializeClock.c)
 *     EtwpInitializeBootTimeStamps @ 0x140B742E4 (EtwpInitializeBootTimeStamps.c)
 *     EtwpFixBootSystemTime @ 0x140B974E0 (EtwpFixBootSystemTime.c)
 * Callees:
 *     HalpTimerGetInternalData @ 0x1402C4800 (HalpTimerGetInternalData.c)
 *     HalpTimerScaleCounter @ 0x1403C4704 (HalpTimerScaleCounter.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

LARGE_INTEGER __stdcall KeQueryPerformanceCounter(PLARGE_INTEGER PerformanceFrequency)
{
  ULONG_PTR v2; // rsi
  LONGLONG v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // r15
  signed __int64 v7; // rdx
  LARGE_INTEGER result; // rax
  __int64 v9; // rcx
  __int64 InternalData; // rax
  __int64 v11; // rax
  __int64 v12; // r15
  signed __int64 v13; // rdx
  __int64 v14; // rdi
  __int64 v15; // rax
  unsigned __int64 v16; // r11
  signed __int64 v17; // rax
  int v18; // r10d
  unsigned __int64 v19; // rcx
  __int64 v20; // r8
  unsigned __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rdi
  __int64 v24; // rax
  unsigned __int64 v25; // r11
  signed __int64 v26; // rax
  int v27; // r10d
  unsigned __int64 v28; // rcx
  __int64 v29; // r8
  unsigned __int64 v30; // r8
  __int64 v31; // rdx
  __int64 v32; // r8
  LONGLONG v33; // r8
  signed __int32 v34[14]; // [rsp+0h] [rbp-38h] BYREF

  v2 = HalpPerformanceCounter;
  if ( *(_DWORD *)(HalpPerformanceCounter + 228) == 5 )
  {
    v3 = 10000000LL;
    if ( HalpTimerReferencePage )
    {
      if ( (*(_DWORD *)(HalpPerformanceCounter + 224) & 0x10000) != 0 )
        v9 = *(_QWORD *)(HalpPerformanceCounter + 72)
           + *(_DWORD *)(HalpPerformanceCounter + 80) * KeGetPcr()->Prcb.Number;
      else
        v9 = *(_QWORD *)(HalpPerformanceCounter + 72);
      result.QuadPart = MEMORY[0xFFFFF780000003B8]
                      + (((unsigned __int64)(*(__int64 (__fastcall **)(__int64))(HalpPerformanceCounter + 112))(v9)
                        * (unsigned __int128)*((unsigned __int64 *)HalpTimerReferencePage + 1)) >> 64);
    }
    else
    {
      if ( *(_DWORD *)(HalpPerformanceCounter + 220) == 64 )
      {
        InternalData = HalpTimerGetInternalData(HalpPerformanceCounter);
        v11 = (*(__int64 (__fastcall **)(__int64))(v2 + 112))(InternalData);
        v12 = *(_QWORD *)(v2 + 208);
        v13 = v11;
      }
      else
      {
        do
        {
          v12 = *(_QWORD *)(v2 + 208);
          do
          {
            v14 = *(_QWORD *)(v2 + 200);
            v15 = HalpTimerGetInternalData(v2);
            v16 = (*(__int64 (__fastcall **)(__int64))(v2 + 112))(v15);
            _InterlockedOr(v34, 0);
            v17 = *(_QWORD *)(v2 + 200);
          }
          while ( v14 != v17 );
        }
        while ( v12 != *(_QWORD *)(v2 + 208) );
        v18 = *(_DWORD *)(v2 + 220);
        v19 = v14 ^ v16;
        if ( _bittest64((const __int64 *)&v19, (unsigned __int8)(v18 - 1)) )
        {
          v20 = -1LL;
          if ( v18 != 64 )
            v20 = (1LL << v18) - 1;
          v21 = v14 & v20;
          v13 = v16 | v14 ^ v21;
          if ( v16 < v21 )
            v13 += 1LL << v18;
          _InterlockedCompareExchange64((volatile signed __int64 *)(v2 + 200), v13, v17);
        }
        else
        {
          if ( v18 == 64 )
            v22 = -1LL;
          else
            v22 = (1LL << v18) - 1;
          v13 = v16 | v14 & ~v22;
        }
      }
      result.QuadPart = HalpTimerScaleCounter(v12 + v13, *(_QWORD *)(v2 + 192), 10000000LL);
    }
  }
  else
  {
    v3 = *(_QWORD *)(HalpPerformanceCounter + 192);
    if ( *(_DWORD *)(HalpPerformanceCounter + 220) == 64 )
    {
      v4 = HalpTimerGetInternalData(HalpPerformanceCounter);
      v5 = (*(__int64 (__fastcall **)(__int64))(v2 + 112))(v4);
      v6 = *(_QWORD *)(v2 + 208);
      v7 = v5;
    }
    else
    {
      do
      {
        v6 = *(_QWORD *)(v2 + 208);
        do
        {
          v23 = *(_QWORD *)(v2 + 200);
          v24 = HalpTimerGetInternalData(v2);
          v25 = (*(__int64 (__fastcall **)(__int64))(v2 + 112))(v24);
          _InterlockedOr(v34, 0);
          v26 = *(_QWORD *)(v2 + 200);
        }
        while ( v23 != v26 );
      }
      while ( v6 != *(_QWORD *)(v2 + 208) );
      v27 = *(_DWORD *)(v2 + 220);
      v28 = v23 ^ v25;
      if ( _bittest64((const __int64 *)&v28, (unsigned __int8)(v27 - 1)) )
      {
        v29 = -1LL;
        if ( v27 != 64 )
          v29 = (1LL << v27) - 1;
        v30 = v23 & v29;
        v7 = v25 | v23 ^ v30;
        if ( v25 < v30 )
          v7 += 1LL << v27;
        _InterlockedCompareExchange64((volatile signed __int64 *)(v2 + 200), v7, v26);
      }
      else
      {
        if ( v27 == 64 )
          v31 = -1LL;
        else
          v31 = (1LL << v27) - 1;
        v7 = v25 | v23 & ~v31;
      }
    }
    result.QuadPart = v6 + v7;
  }
  if ( v2 == HalpOriginalPerformanceCounter || !HalpOriginalPerformanceCounter )
  {
    if ( PerformanceFrequency )
      PerformanceFrequency->QuadPart = v3;
  }
  else
  {
    v32 = *(_QWORD *)(HalpOriginalPerformanceCounter + 192);
    if ( *(_DWORD *)(HalpOriginalPerformanceCounter + 228) == 5 )
      v32 = 10000000LL;
    result.QuadPart = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))HalpTimerScaleCounter)(
                        (LARGE_INTEGER)result.QuadPart,
                        v3,
                        v32);
    if ( PerformanceFrequency )
      PerformanceFrequency->QuadPart = v33;
  }
  return result;
}
