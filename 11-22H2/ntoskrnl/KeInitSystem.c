/*
 * XREFs of KeInitSystem @ 0x140B53548
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140B4F014 (IoInitSystemPreDrivers.c)
 *     Phase1InitializationDiscard @ 0x140B4FF9C (Phase1InitializationDiscard.c)
 *     InitBootProcessor @ 0x140B52774 (InitBootProcessor.c)
 *     Phase1InitializationIoReady @ 0x140B532AC (Phase1InitializationIoReady.c)
 * Callees:
 *     _tlgKeywordOn @ 0x140212E84 (_tlgKeywordOn.c)
 *     KeQueryActiveProcessorCountEx @ 0x140222070 (KeQueryActiveProcessorCountEx.c)
 *     KeExpandKernelStackAndCalloutInternal @ 0x14022E6F0 (KeExpandKernelStackAndCalloutInternal.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402F6B24 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ExReleaseFastMutexUnsafe @ 0x1403025F0 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x140302660 (ExAcquireFastMutexUnsafe.c)
 *     HviIsAnyHypervisorPresent @ 0x140382EA0 (HviIsAnyHypervisorPresent.c)
 *     KeInitializeCatRegisters @ 0x1403874E8 (KeInitializeCatRegisters.c)
 *     KiDetectTsx @ 0x14038774C (KiDetectTsx.c)
 *     KiInitMachineDependent @ 0x14039A528 (KiInitMachineDependent.c)
 *     KiInitializeNormalPriorityAntiStarvationPolicies @ 0x1403B27FC (KiInitializeNormalPriorityAntiStarvationPolicies.c)
 *     KiInitializeIdealProcessorRebalancer @ 0x1403B4088 (KiInitializeIdealProcessorRebalancer.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     SymCryptInitEnvWindowsKernelmodeWin8_1nLater @ 0x1403F2CE0 (SymCryptInitEnvWindowsKernelmodeWin8_1nLater.c)
 *     Feature_SchedulerAggressiveForegroundBoost__private_ReportDeviceUsage @ 0x14040F8CC (Feature_SchedulerAggressiveForegroundBoost__private_ReportDeviceUsage.c)
 *     Feature_SchedulerRemoveForegroundBoostDecay__private_ReportDeviceUsage @ 0x14040FA04 (Feature_SchedulerRemoveForegroundBoostDecay__private_ReportDeviceUsage.c)
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 *     HvlSetupPhysicalFaultNotificationQueue @ 0x140540680 (HvlSetupPhysicalFaultNotificationQueue.c)
 *     KeRelaxTimingConstraints @ 0x14056AFAC (KeRelaxTimingConstraints.c)
 *     KiApplyDpcVerificationScaleSettings @ 0x14056B674 (KiApplyDpcVerificationScaleSettings.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     KiEpfDrainCompletionQueue @ 0x14057901C (KiEpfDrainCompletionQueue.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1408034B4 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     KeInitializeTimerTable @ 0x14081FF44 (KeInitializeTimerTable.c)
 *     KiStartDpcThread @ 0x140822D08 (KiStartDpcThread.c)
 *     KiInitializeProcessor @ 0x140A8F178 (KiInitializeProcessor.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 *     KeFreeInitializationCode @ 0x140B18BF4 (KeFreeInitializationCode.c)
 *     KiIntSteerInit @ 0x140B53C08 (KiIntSteerInit.c)
 *     KiInitializeDpcRuntimeHistoryHashTables @ 0x140B542B4 (KiInitializeDpcRuntimeHistoryHashTables.c)
 *     KiInitSupervisorStateExtensionHost @ 0x140B545D4 (KiInitSupervisorStateExtensionHost.c)
 *     KiComputeDispatchInterruptCost @ 0x140B54AFC (KiComputeDispatchInterruptCost.c)
 *     MmFreeLoaderBlock @ 0x140B5E8D4 (MmFreeLoaderBlock.c)
 *     KiInitDpcThresholds @ 0x140B71ED0 (KiInitDpcThresholds.c)
 *     KiInitializeReservedCpuSets @ 0x140B7430C (KiInitializeReservedCpuSets.c)
 *     KiInitDynamicTraceSupport @ 0x140B769B8 (KiInitDynamicTraceSupport.c)
 *     KeInitializeSchedulerAssist @ 0x140B76A20 (KeInitializeSchedulerAssist.c)
 *     KiComputeNumaCosts @ 0x140B76CB4 (KiComputeNumaCosts.c)
 */

char __fastcall KeInitSystem(int a1)
{
  struct _KPRCB *v1; // r10
  unsigned __int64 v2; // rdx
  __int64 v3; // r10
  __int64 v4; // r10
  int v5; // eax
  ULONG ActiveProcessorCount; // eax
  __int64 v7; // rcx
  ULONG v8; // r14d
  __int64 v9; // rdx
  int v10; // ecx
  unsigned int v11; // eax
  ULONG v12; // edi
  __int64 *v13; // rsi
  __int64 v14; // r15
  __int64 v15; // r8
  unsigned __int64 v16; // rcx
  int v17; // edx
  __int64 v18; // rcx
  __int64 v19; // r9
  __int64 *v20; // rdx
  int v21; // r8d
  int v22; // eax
  int v24; // r9d
  __int64 Pool2; // rax
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rcx
  unsigned __int8 CurrentIrql; // si
  _DWORD *SchedulerAssist; // r9
  int v31; // eax
  unsigned __int8 v32; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v34; // r8
  int v35; // eax
  bool v36; // zf
  int v37; // [rsp+38h] [rbp-19h] BYREF
  __int64 v38; // [rsp+40h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v39; // [rsp+48h] [rbp-9h] BYREF
  int *v40; // [rsp+68h] [rbp+17h]
  __int64 v41; // [rsp+70h] [rbp+1Fh]
  __int64 *v42; // [rsp+78h] [rbp+27h]
  __int64 v43; // [rsp+80h] [rbp+2Fh]

  if ( a1 )
  {
    if ( a1 != 1 )
    {
      if ( a1 == 2 )
      {
        TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(
          (char *)&dword_140C02F98,
          (__int64)KiTraceLogControlCallback,
          (__int64)&dword_140C02F98);
        TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((char *)&dword_140C02F60, 0LL, 0LL);
        if ( KiDisablePointerParameterAlignmentValidation
          && (unsigned int)dword_140C02F98 > 5
          && tlgKeywordOn((__int64)&dword_140C02F98, 0x400000000000LL) )
        {
          v37 = v24;
          v40 = &v37;
          v42 = &v38;
          v41 = 4LL;
          v38 = 0x1000000LL;
          v43 = 8LL;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_140C02F98,
            (unsigned __int8 *)byte_14003A7B9,
            0LL,
            0LL,
            4u,
            &v39);
        }
        KiIntSteerInit(2LL);
      }
      else if ( a1 == 3 )
      {
        KiInitializeReservedCpuSets();
      }
      else
      {
        ExAcquireFastMutexUnsafe(&KiDynamicProcessorLock);
        MmFreeLoaderBlock();
        KeLoaderBlock_0 = 0LL;
        ExReleaseFastMutexUnsafe(&KiDynamicProcessorLock);
        Feature_SchedulerAggressiveForegroundBoost__private_ReportDeviceUsage();
        KiForegroundBoostTicks = 1;
        if ( KiSchedulerForegroundBoostDecayPolicy != 1 )
        {
          Feature_SchedulerRemoveForegroundBoostDecay__private_ReportDeviceUsage();
          KiVelocityFlags |= 0x8000u;
        }
        KiInitializeNormalPriorityAntiStarvationPolicies();
        if ( KiForceBugcheckForDpcWatchdog || !HviIsAnyHypervisorPresent() )
          KeEnableWatchdogTimeout = 1;
        v38 = 0LL;
        v37 = 0;
        if ( (HvlpFlags & 0x100000) != 0 )
        {
          Pool2 = ExAllocatePool2(64LL, 0x4A0uLL, 0x4850654Bu);
          KiEpfHashTable = Pool2;
          if ( Pool2 )
          {
            v28 = 37LL;
            do
            {
              *(_QWORD *)(Pool2 + 8) = Pool2;
              *(_QWORD *)Pool2 = Pool2;
              *(_QWORD *)(Pool2 + 16) = 0LL;
              *(_DWORD *)(Pool2 + 24) = 0;
              Pool2 += 32LL;
              --v28;
            }
            while ( v28 );
            LODWORD(KiEpfCompletionDpc) = 275;
            qword_140C417B8 = (__int64)KiEpfCompletionDpcRoutine;
            qword_140C417C0 = 0LL;
            qword_140C417D8 = 0LL;
            qword_140C417B0 = 0LL;
            if ( (int)HvlSetupPhysicalFaultNotificationQueue(&v38, &v37, v26, v27) >= 0 )
            {
              KiEpfCompletionQueueSize = (unsigned int)(v37 - 16) >> 3;
              KiEpfCompletionQueue = v38;
              CurrentIrql = KeGetCurrentIrql();
              __writecr8(2uLL);
              if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
              {
                SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
                v31 = 4;
                if ( CurrentIrql != 2 )
                  v31 = (-1LL << (CurrentIrql + 1)) & 4;
                SchedulerAssist[5] |= v31;
              }
              KiEpfDrainCompletionQueue();
              if ( (_DWORD)KiIrqlFlags )
              {
                v32 = KeGetCurrentIrql();
                if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v32 <= 0xFu && CurrentIrql <= 0xFu && v32 >= 2u )
                {
                  CurrentPrcb = KeGetCurrentPrcb();
                  v34 = CurrentPrcb->SchedulerAssist;
                  v35 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
                  v36 = (v35 & v34[5]) == 0;
                  v34[5] &= v35;
                  if ( v36 )
                    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
                }
              }
              __writecr8(CurrentIrql);
            }
          }
        }
        KeFreeInitializationCode();
      }
      return 1;
    }
    KiInitDynamicTraceSupport();
    ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
    v7 = KeMaximumIncrement;
    v8 = ActiveProcessorCount;
    KiDpcWatchdogConfigurationLock = 0LL;
    v9 = (ActiveProcessorCount + (KeMaximumIncrement + 29999999) / KeMaximumIncrement - 1) % ActiveProcessorCount;
    KiClockKeepAliveCycle = (ActiveProcessorCount + (KeMaximumIncrement + 29999999) / KeMaximumIncrement - 1)
                          / ActiveProcessorCount;
    if ( !KiForceBugcheckForDpcWatchdog && HviIsAnyHypervisorPresent() )
    {
      if ( !HvlHypervisorConnected || (HvlEnlightenments & 0x20) != 0 )
      {
        v10 = 1;
        KeDpcWatchdogPeriodMs = 0;
        KeDpcTimeoutMs = 0;
        KeDpcSoftTimeoutMs = 0;
        KeDpcCumulativeSoftTimeoutMs = 0;
        KeDpcWatchdogProfileCumulativeDpcThresholdMs = 0;
        KeDpcWatchdogProfileSingleDpcThresholdMs = 0;
      }
      else
      {
        v10 = 0;
      }
      KeRelaxTimingConstraints(v10);
    }
    KiInitDpcThresholds(v7, v9);
    if ( ViVerifierEnabled )
    {
      v11 = KeVerifierDpcScalingFactor;
      if ( !KeVerifierDpcScalingFactor )
      {
        v11 = 1;
        KeVerifierDpcScalingFactor = 1;
      }
      if ( v11 > 0x64 )
        KeVerifierDpcScalingFactor = 100;
      KiApplyDpcVerificationScaleSettings();
    }
    v12 = 0;
    if ( v8 )
    {
      v13 = KiProcessorBlock;
      while ( 1 )
      {
        v14 = *v13;
        KiInitializeProcessor(*v13);
        if ( KeThreadDpcEnable )
        {
          if ( (int)KiStartDpcThread(v14) < 0 )
            break;
        }
        ++v12;
        ++v13;
        if ( v12 >= v8 )
          goto LABEL_27;
      }
    }
    else
    {
LABEL_27:
      if ( (unsigned __int8)KiComputeNumaCosts()
        && (int)KiComputeDispatchInterruptCost() >= 0
        && (int)KiInitializeDpcRuntimeHistoryHashTables() >= 0 )
      {
        if ( (_BYTE)KiKernelCetEnabled )
        {
          LOBYTE(KiKernelCetLogging) = 1;
          dword_140D1F230 = 10;
        }
        SymCryptInitEnvWindowsKernelmodeWin8_1nLater(0x650000u);
        KiIntSteerInit(1LL);
        KiInitSupervisorStateExtensionHost();
        if ( KiInitMachineDependent() )
        {
          v15 = *(unsigned int *)(KiProcessorBlock[0] + 68);
          v16 = v15 * (unsigned __int64)KeMaximumIncrement / 0xA;
          KiShortExecutionCycles = v16 / 0xF0;
          KiCyclesPerClockQuantum = v16 / 3;
          KiDirectQuantumTarget = v16 / 3;
          v17 = KiLongDpcRuntimeThreshold;
          KiLockQuantumTarget = 3 * KiCyclesPerClockQuantum;
          _BitScanReverse64(&v16, 6000000 * v15);
          KiFavoredCoreCycleTimeBits = v16;
          if ( (unsigned int)KiLongDpcRuntimeThreshold < 0x32 )
          {
            v17 = 50;
            KiLongDpcRuntimeThreshold = 50;
          }
          if ( (unsigned int)KiLongDpcQueueThreshold < 2 )
            KiLongDpcQueueThreshold = 2;
          v18 = *(unsigned int *)(KiProcessorBlock[0] + 68);
          KiLongDpcRuntimeThresholdCycles = v17 * *(_DWORD *)(KiProcessorBlock[0] + 68);
          qword_140D1D368 = v18 * HIDWORD(KiHgsPlusConfiguration);
          qword_140D1D378 = *(unsigned int *)(KiProcessorBlock[0] + 68)
                          * (unsigned __int64)(unsigned int)dword_140D1D370;
          if ( KdpBootedNodebug )
          {
            v19 = KiWaitNever;
            v20 = (__int64 *)&KdDebuggerDataBlock;
            KdpDataBlockEncoded = 1;
            v21 = 116;
            do
            {
              *v20 = v19 ^ __ROR8__((unsigned __int64)&KdpDataBlockEncoded ^ _byteswap_uint64(KiWaitAlways ^ *v20), v19);
              ++v20;
              --v21;
            }
            while ( v21 );
          }
          v22 = KeExpandKernelStackAndCalloutInternal(
                  (void (__fastcall *)(ULONG_PTR))KiVerifyScopesExecute,
                  0LL,
                  49152,
                  2,
                  0LL);
          if ( v22 < 0 )
            KeBugCheckEx(0x32u, v22, 0x5356694BuLL, 0LL, 0LL);
          KiInitializeIdealProcessorRebalancer();
          KiPristineTriageDumpSize = 268288;
          qword_140C41478 = (__int64)KiPristineTriageDumpAllocationWorker;
          LODWORD(KiPristineTriageDumpAllocationDpc) = 275;
          qword_140C41480 = 0LL;
          qword_140C41498 = 0LL;
          qword_140C41470 = 0LL;
          return 1;
        }
      }
    }
    return 0;
  }
  v1 = KeGetCurrentPrcb();
  if ( (KeFeatureBits2 & 0x8000) != 0 && KiDisableTsx && (v1->MsrIa32TsxCtrl & 3) != 3 )
  {
    v2 = v1->MsrIa32TsxCtrl | 3;
    v1->MsrIa32TsxCtrl = v2;
    __writemsr(0x122u, v2);
  }
  KiTsxSupported = KiDetectTsx();
  KeInitializeSchedulerAssist(v3);
  KeInitializeCatRegisters();
  v5 = KeInitializeTimerTable(v4);
  if ( v5 < 0 )
    KeBugCheckEx(0x31u, v5, 1uLL, 0LL, 0LL);
  return 1;
}
