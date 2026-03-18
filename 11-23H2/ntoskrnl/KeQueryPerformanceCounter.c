/*
 * XREFs of KeQueryPerformanceCounter @ 0x1402C3270
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
 *     RtlGetSystemTimePrecise @ 0x140226E10 (RtlGetSystemTimePrecise.c)
 *     EtwpGetLoggerTimeStamp @ 0x140227B4C (EtwpGetLoggerTimeStamp.c)
 *     EtwpReserveTraceBuffer @ 0x140234100 (EtwpReserveTraceBuffer.c)
 *     PopGetIdleTimesCallback @ 0x1402520E0 (PopGetIdleTimesCallback.c)
 *     KiProcessExpiredTimerList @ 0x140252B50 (KiProcessExpiredTimerList.c)
 *     PpmSnapPerformanceAccumulation @ 0x1402562D0 (PpmSnapPerformanceAccumulation.c)
 *     CcCopyReadEx @ 0x140261D60 (CcCopyReadEx.c)
 *     CcFetchDataForRead @ 0x1402622C0 (CcFetchDataForRead.c)
 *     PopDeepSleepResiliencyPhaseAccountingUpdate @ 0x14028E938 (PopDeepSleepResiliencyPhaseAccountingUpdate.c)
 *     KeQuerySchedulingGroupHistory @ 0x140293748 (KeQuerySchedulingGroupHistory.c)
 *     CcFlushCachePriv @ 0x14029CD34 (CcFlushCachePriv.c)
 *     CcFlushCachePreProcess @ 0x14029DE80 (CcFlushCachePreProcess.c)
 *     EtwGetKernelTraceTimestampSilo @ 0x1402A2FB0 (EtwGetKernelTraceTimestampSilo.c)
 *     KeQuerySystemTimePrecise @ 0x1402BE530 (KeQuerySystemTimePrecise.c)
 *     CcAsyncCopyRead @ 0x1402C1070 (CcAsyncCopyRead.c)
 *     CcCompleteAsyncRead @ 0x1402C1430 (CcCompleteAsyncRead.c)
 *     KiCheckStall @ 0x1402C2690 (KiCheckStall.c)
 *     KiSetClockTickRate @ 0x1402C2890 (KiSetClockTickRate.c)
 *     KiUpdateProcessConcurrencyCounts @ 0x1402C33C0 (KiUpdateProcessConcurrencyCounts.c)
 *     KiUpdateTime @ 0x1402C36A0 (KiUpdateTime.c)
 *     RtlGetInterruptTimePrecise @ 0x1402C42E0 (RtlGetInterruptTimePrecise.c)
 *     KeClockInterruptNotify @ 0x1402C46A0 (KeClockInterruptNotify.c)
 *     KiUpdateRunTime @ 0x1402C74E0 (KiUpdateRunTime.c)
 *     KiSetNextClockTickDueTime @ 0x1402C8510 (KiSetNextClockTickDueTime.c)
 *     CcCopyWriteEx @ 0x1402C8D20 (CcCopyWriteEx.c)
 *     CcMapAndCopyInToCache @ 0x1402CC8F0 (CcMapAndCopyInToCache.c)
 *     MiZeroLocalPages @ 0x1402CF540 (MiZeroLocalPages.c)
 *     MiAllocatePagesForMdl @ 0x1402F8CDC (MiAllocatePagesForMdl.c)
 *     PopWriteBsdPoInfo @ 0x14032B2E0 (PopWriteBsdPoInfo.c)
 *     HalpSetVirtualRtc @ 0x14033B5F0 (HalpSetVirtualRtc.c)
 *     StEtaStart @ 0x140343EA4 (StEtaStart.c)
 *     ?StDmInitialize@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@0@Z @ 0x140344628 (-StDmInitialize@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@0@Z.c)
 *     StLcInitialize @ 0x1403449E8 (StLcInitialize.c)
 *     PpmIdleSnapConcurrency @ 0x140346594 (PpmIdleSnapConcurrency.c)
 *     PpmPerfApplyProcessorState @ 0x14034F00C (PpmPerfApplyProcessorState.c)
 *     MiReassessZeroThreads @ 0x1403515FC (MiReassessZeroThreads.c)
 *     PpmPerfApplyDomainState @ 0x140352698 (PpmPerfApplyDomainState.c)
 *     RtlGetMultiTimePrecise @ 0x140364A80 (RtlGetMultiTimePrecise.c)
 *     HalpTimerDpcRoutine @ 0x14036A360 (HalpTimerDpcRoutine.c)
 *     HalpTimerReadTimerPairWithLatencyLimit @ 0x14037A1D0 (HalpTimerReadTimerPairWithLatencyLimit.c)
 *     HalpTimerDetermineValidTimerPairReadLatency @ 0x14037A7D8 (HalpTimerDetermineValidTimerPairReadLatency.c)
 *     BgpFwQueryPerformanceCounter @ 0x140384F70 (BgpFwQueryPerformanceCounter.c)
 *     MiZeroPageCalibrateLastDpcProcessorDone @ 0x14038DE7C (MiZeroPageCalibrateLastDpcProcessorDone.c)
 *     MiStartDpcZeroingRound @ 0x14038DF48 (MiStartDpcZeroingRound.c)
 *     PpmQueryTime @ 0x1403918A8 (PpmQueryTime.c)
 *     PpmInstallFeedbackCounters @ 0x140393078 (PpmInstallFeedbackCounters.c)
 *     PpmResetIdlePolicy @ 0x14039FB58 (PpmResetIdlePolicy.c)
 *     KiIpiGenericCallTarget @ 0x1403A6270 (KiIpiGenericCallTarget.c)
 *     EtwpFileModeCompress @ 0x1403A677C (EtwpFileModeCompress.c)
 *     PpmResetPerformanceAccumulation @ 0x1403A717C (PpmResetPerformanceAccumulation.c)
 *     ?SmInitialize@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z @ 0x1403A890C (-SmInitialize@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z.c)
 *     KiSetupTimeIncrement @ 0x1403ABA84 (KiSetupTimeIncrement.c)
 *     HalpTimerFinalizeAuxiliaryCounter @ 0x1403AC830 (HalpTimerFinalizeAuxiliaryCounter.c)
 *     HalpTimerCaptureCloestAuxiliaryQpcPair @ 0x1403AC8AC (HalpTimerCaptureCloestAuxiliaryQpcPair.c)
 *     HalWheaUpdateCmciPolicy @ 0x1403AD330 (HalWheaUpdateCmciPolicy.c)
 *     KiComputeDispatchInterruptCostDpcRoutine @ 0x1403B0320 (KiComputeDispatchInterruptCostDpcRoutine.c)
 *     HalpCmciLoadThresholdConfiguration @ 0x1403B0FC0 (HalpCmciLoadThresholdConfiguration.c)
 *     PpmIdleInstallConcurrency @ 0x1403B34E0 (PpmIdleInstallConcurrency.c)
 *     HalpTimerSchedulePeriodicQueries @ 0x1403B3AA4 (HalpTimerSchedulePeriodicQueries.c)
 *     PpmIdleSelectStates @ 0x1403B7470 (PpmIdleSelectStates.c)
 *     MiAllocateContiguousMemory @ 0x1403B9CD4 (MiAllocateContiguousMemory.c)
 *     KiUpdateSystemTime @ 0x1403C14F8 (KiUpdateSystemTime.c)
 *     KiUpdateTimeAssist @ 0x1403CF7B8 (KiUpdateTimeAssist.c)
 *     KiLogClockIncrementUpdate @ 0x1403D01D8 (KiLogClockIncrementUpdate.c)
 *     HalpScanForProfilingCorruption @ 0x14045B8C4 (HalpScanForProfilingCorruption.c)
 *     ?SmAsyncReadQueueWorker@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x140464C60 (-SmAsyncReadQueueWorker@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     EtwpGetDurationSince @ 0x14046798E (EtwpGetDurationSince.c)
 *     HalpTimerCaptureCurrentAuxiliaryQpcPair @ 0x1404FE230 (HalpTimerCaptureCurrentAuxiliaryQpcPair.c)
 *     HalpTimerRestorePerformanceCounter @ 0x1404FE83C (HalpTimerRestorePerformanceCounter.c)
 *     HalpCmciHandler @ 0x14050573C (HalpCmciHandler.c)
 *     HalpCollectProfileCorruptionStatus @ 0x14050730C (HalpCollectProfileCorruptionStatus.c)
 *     HalpTscFallback @ 0x14050A6A0 (HalpTscFallback.c)
 *     HalpQueryVirtualRtc @ 0x14050B920 (HalpQueryVirtualRtc.c)
 *     HalpTimerMeasureProcessorsWorker @ 0x14050CAF0 (HalpTimerMeasureProcessorsWorker.c)
 *     EmonAllocateCounter @ 0x14051CBD0 (EmonAllocateCounter.c)
 *     EmonOverflowHandler @ 0x14051D650 (EmonOverflowHandler.c)
 *     Amd64AllocateCounter @ 0x140528AF8 (Amd64AllocateCounter.c)
 *     Amd64OverflowHandler @ 0x140529AC0 (Amd64OverflowHandler.c)
 *     XmRdtscOp @ 0x1405344F0 (XmRdtscOp.c)
 *     CcWriteBehindAsync @ 0x14053A480 (CcWriteBehindAsync.c)
 *     IopLiveDumpGetMillisecondCounter @ 0x140559D3C (IopLiveDumpGetMillisecondCounter.c)
 *     KeRebaselineInterruptTime @ 0x14056AEAC (KeRebaselineInterruptTime.c)
 *     KeRebaselineSystemTime @ 0x14056AEDC (KeRebaselineSystemTime.c)
 *     KeSwitchFrozenProcessor @ 0x140576BA0 (KeSwitchFrozenProcessor.c)
 *     KiTimerExpiration @ 0x14057C7D4 (KiTimerExpiration.c)
 *     PoInitiateProcessorWake @ 0x140583D20 (PoInitiateProcessorWake.c)
 *     PpmIdleRemoveConcurrency @ 0x1405853B0 (PpmIdleRemoveConcurrency.c)
 *     PpmIdleSnapConcurrencyIdleTime @ 0x14058555C (PpmIdleSnapConcurrencyIdleTime.c)
 *     PpmIdleTransitionStall @ 0x140585650 (PpmIdleTransitionStall.c)
 *     PpmTraceExitLatency @ 0x140586050 (PpmTraceExitLatency.c)
 *     PopFxUpdateDeviceIRPhaseAccounting @ 0x14058C2D4 (PopFxUpdateDeviceIRPhaseAccounting.c)
 *     PopDeepSleepResiliencyPhaseAccountingBegin @ 0x1405985E0 (PopDeepSleepResiliencyPhaseAccountingBegin.c)
 *     PopDeepSleepResiliencyPhaseAccountingEnd @ 0x1405986FC (PopDeepSleepResiliencyPhaseAccountingEnd.c)
 *     PopUmpoSendFlushSleepStudyLoggerNotification @ 0x14059974C (PopUmpoSendFlushSleepStudyLoggerNotification.c)
 *     PdcPoCurrentPdcPhase @ 0x1405997B0 (PdcPoCurrentPdcPhase.c)
 *     ?SmReadPickStore@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAKPEAPEAU?$SMKM_STORE@USM_TRAITS@@@@2@Z @ 0x1405C0380 (-SmReadPickStore@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAKPEAPEAU-$SMKM_STO.c)
 *     ?StDeviceIoIssue@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_PF_QUEUE@@@Z @ 0x1405C4224 (-StDeviceIoIssue@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_PF_QUEUE@@@Z.c)
 *     ?StDmDeviceIoCompletion@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1405C53F8 (-StDmDeviceIoCompletion@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StNpLeafPageIn@?$ST_STORE@USM_TRAITS@@@@SAJPEAUNP_CTX@NP_CONTEXT@@PEAX_K@Z @ 0x1405C8FC0 (-StNpLeafPageIn@-$ST_STORE@USM_TRAITS@@@@SAJPEAUNP_CTX@NP_CONTEXT@@PEAX_K@Z.c)
 *     StEtaIoStart @ 0x1405CA958 (StEtaIoStart.c)
 *     StLcBucketsCopy @ 0x1405CAAC8 (StLcBucketsCopy.c)
 *     CarInitLogging @ 0x1405D3260 (CarInitLogging.c)
 *     WmiGetClock @ 0x1405FF720 (WmiGetClock.c)
 *     EtwpCompressPendingBuffers @ 0x1406024E4 (EtwpCompressPendingBuffers.c)
 *     BgpFwDisplayBugCheckProgressUpdate @ 0x140672F08 (BgpFwDisplayBugCheckProgressUpdate.c)
 *     BgpFwDisplayBugCheckScreen @ 0x1406730C4 (BgpFwDisplayBugCheckScreen.c)
 *     IpmiLibpKcsRequestAndReceive @ 0x1406783E0 (IpmiLibpKcsRequestAndReceive.c)
 *     IpmiLibpKcsSpinRegister @ 0x1406786C0 (IpmiLibpKcsSpinRegister.c)
 *     IpmiLibpTimeAfter @ 0x1406787B8 (IpmiLibpTimeAfter.c)
 *     NtQueryInformationProcess @ 0x1406FCA90 (NtQueryInformationProcess.c)
 *     NtQueryPerformanceCounter @ 0x140741ED0 (NtQueryPerformanceCounter.c)
 *     PspNotifyThreadCreation @ 0x14076F800 (PspNotifyThreadCreation.c)
 *     NtPowerInformation @ 0x140783F20 (NtPowerInformation.c)
 *     ExpAllocateUuids @ 0x1407E2038 (ExpAllocateUuids.c)
 *     RtlCapabilityCheck @ 0x1407ECD50 (RtlCapabilityCheck.c)
 *     EtwpAddLogHeader @ 0x1407F7574 (EtwpAddLogHeader.c)
 *     Phase1Initialization @ 0x140820F30 (Phase1Initialization.c)
 *     MiComputeCacheAttributeSpeeds @ 0x1408253A8 (MiComputeCacheAttributeSpeeds.c)
 *     PpmRegisterPerfStates @ 0x14082E54C (PpmRegisterPerfStates.c)
 *     MiNodeZeroConductor @ 0x14082F620 (MiNodeZeroConductor.c)
 *     EtwpInitializeSiloState @ 0x14083B364 (EtwpInitializeSiloState.c)
 *     RtlpCapChkTelemetryRunOnce @ 0x140865D40 (RtlpCapChkTelemetryRunOnce.c)
 *     IoCaptureLiveDump @ 0x14094B9E8 (IoCaptureLiveDump.c)
 *     PopExecutePowerAction @ 0x1409897F4 (PopExecutePowerAction.c)
 *     PopIssueActionRequest @ 0x140989CA4 (PopIssueActionRequest.c)
 *     PopResumeApps @ 0x14098A434 (PopResumeApps.c)
 *     PopResumeServices @ 0x14098A4AC (PopResumeServices.c)
 *     CmpRecordShutdownStopTime @ 0x140A1167C (CmpRecordShutdownStopTime.c)
 *     HalpCmciInit @ 0x140A8A70C (HalpCmciInit.c)
 *     HalpDpReplaceControl @ 0x140A978A0 (HalpDpReplaceControl.c)
 *     PnprGetMillisecondCounter @ 0x140A9C8B4 (PnprGetMillisecondCounter.c)
 *     KiCalibrateTimeAdjustment @ 0x140A9EF40 (KiCalibrateTimeAdjustment.c)
 *     PopDecompressHiberBlocks @ 0x140AA2334 (PopDecompressHiberBlocks.c)
 *     PopHiberCheckForDebugBreak @ 0x140AA2E54 (PopHiberCheckForDebugBreak.c)
 *     PopTransitionToSleep @ 0x140AA5340 (PopTransitionToSleep.c)
 *     PopWriteImageHeader @ 0x140AA5C98 (PopWriteImageHeader.c)
 *     PoBroadcastSystemState @ 0x140AA6A68 (PoBroadcastSystemState.c)
 *     PopDiagComputeEarlyHiberStats @ 0x140AA789C (PopDiagComputeEarlyHiberStats.c)
 *     PopHandleNextState @ 0x140AA811C (PopHandleNextState.c)
 *     PopInvokeSystemStateHandler @ 0x140AA859C (PopInvokeSystemStateHandler.c)
 *     PopTransitionSystemPowerStateEx @ 0x140AA90F0 (PopTransitionSystemPowerStateEx.c)
 *     PopSstDiagInitializeResumeTimer @ 0x140AAA664 (PopSstDiagInitializeResumeTimer.c)
 *     PopSstDiagQueryResumeTimestamp @ 0x140AAA750 (PopSstDiagQueryResumeTimestamp.c)
 *     KdpSendWaitContinue @ 0x140AB07C8 (KdpSendWaitContinue.c)
 *     KdInitSystem @ 0x140AB1040 (KdInitSystem.c)
 *     VfFillAllocatedMemory @ 0x140ADA03C (VfFillAllocatedMemory.c)
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
 *     HalpTimerGetInternalData @ 0x1402C4570 (HalpTimerGetInternalData.c)
 *     HalpTimerScaleCounter @ 0x1403C4524 (HalpTimerScaleCounter.c)
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
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
