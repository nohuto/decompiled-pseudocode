/*
 * XREFs of KeRevertToUserGroupAffinityThread @ 0x14035BE00
 * Callers:
 *     PnpSendIrp @ 0x1402D2F74 (PnpSendIrp.c)
 *     KeStallExecutionProcessor @ 0x140303560 (KeStallExecutionProcessor.c)
 *     ExpWorkerThread @ 0x14033CBF0 (ExpWorkerThread.c)
 *     KeGenericProcessorCallback @ 0x14035BB4C (KeGenericProcessorCallback.c)
 *     MiSetIdealProcessorThread @ 0x14035CA04 (MiSetIdealProcessorThread.c)
 *     ExAllocateCacheAwarePushLock @ 0x140389430 (ExAllocateCacheAwarePushLock.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x1403A61E8 (ExpSaPageGroupDescriptorAllocate.c)
 *     KeMaskInterrupt @ 0x1403AED64 (KeMaskInterrupt.c)
 *     KiDisconnectInterruptCommon @ 0x1403AF3B4 (KiDisconnectInterruptCommon.c)
 *     KiConnectInterrupt @ 0x1403AF7F0 (KiConnectInterrupt.c)
 *     HalpTimerStallExecutionProcessor @ 0x1403BC8C4 (HalpTimerStallExecutionProcessor.c)
 *     MakeGdtReadOnly @ 0x1403C205C (MakeGdtReadOnly.c)
 *     KiInitMachineDependent @ 0x1403CB7F4 (KiInitMachineDependent.c)
 *     PpmInstallFeedbackCounters @ 0x1403CE4FC (PpmInstallFeedbackCounters.c)
 *     MiTimeSingleLargePageZero @ 0x1403D4314 (MiTimeSingleLargePageZero.c)
 *     HalGetEnvironmentVariableEx @ 0x1403DAAF0 (HalGetEnvironmentVariableEx.c)
 *     KeRevertToUserAffinityThreadEx @ 0x14045A010 (KeRevertToUserAffinityThreadEx.c)
 *     HalpCreateMachineCheckErrorRecord @ 0x140506410 (HalpCreateMachineCheckErrorRecord.c)
 *     HalQueryEnvironmentVariableInfoEx @ 0x140508620 (HalQueryEnvironmentVariableInfoEx.c)
 *     HalSetEnvironmentVariableEx @ 0x140508800 (HalSetEnvironmentVariableEx.c)
 *     HalpEnumerateEnvironmentVariablesWithFilter @ 0x140508990 (HalpEnumerateEnvironmentVariablesWithFilter.c)
 *     HalpAllocatePmcCounterSetEx @ 0x14050ADB0 (HalpAllocatePmcCounterSetEx.c)
 *     HalpFreePmcCounterSet @ 0x14050B600 (HalpFreePmcCounterSet.c)
 *     EmonMarkCountersReserved @ 0x1405206E4 (EmonMarkCountersReserved.c)
 *     EmonReleaseReservedCounters @ 0x1405214A8 (EmonReleaseReservedCounters.c)
 *     HalpQueryCapsuleCapabilities @ 0x1405246D0 (HalpQueryCapsuleCapabilities.c)
 *     HalpUpdateCapsule @ 0x1405247B0 (HalpUpdateCapsule.c)
 *     Amd64InitializeUncoreProfiling @ 0x14052BFC0 (Amd64InitializeUncoreProfiling.c)
 *     IopPassiveInterruptWorker @ 0x140560BB0 (IopPassiveInterruptWorker.c)
 *     KiDynamicProcessorInitialization @ 0x14056918C (KiDynamicProcessorInitialization.c)
 *     KiDeregisterNmiSxCallback @ 0x14056A8C4 (KiDeregisterNmiSxCallback.c)
 *     KeRevertToUserAffinityThread @ 0x14056B3D0 (KeRevertToUserAffinityThread.c)
 *     KiInterruptDispatchCommon @ 0x140575CD8 (KiInterruptDispatchCommon.c)
 *     KiDeferredBugcheckRecoveryWorker @ 0x140579150 (KiDeferredBugcheckRecoveryWorker.c)
 *     KiStallBugcheckThread @ 0x1405798A8 (KiStallBugcheckThread.c)
 *     PpmClearSimulatedIdle @ 0x1405C70FC (PpmClearSimulatedIdle.c)
 *     PpmIdleInstallNewVetoList @ 0x1405C8024 (PpmIdleInstallNewVetoList.c)
 *     PpmSetSimulatedIdle @ 0x1405C8BDC (PpmSetSimulatedIdle.c)
 *     PnpCallAddDevice @ 0x140749DA0 (PnpCallAddDevice.c)
 *     MiCombineAllPhysicalMemory @ 0x1407F8FE0 (MiCombineAllPhysicalMemory.c)
 *     PpmIdleInitializeConcurrency @ 0x140849A30 (PpmIdleInitializeConcurrency.c)
 *     HalpCmcWorkerRoutine @ 0x140908680 (HalpCmcWorkerRoutine.c)
 *     HalpLoadMicrocodeSerialized @ 0x14090A314 (HalpLoadMicrocodeSerialized.c)
 *     CmInitializeProcessor @ 0x140919E48 (CmInitializeProcessor.c)
 *     PnpReplacePartitionUnit @ 0x140950E30 (PnpReplacePartitionUnit.c)
 *     HalpMceInit @ 0x140A5A7C8 (HalpMceInit.c)
 *     HalpCmciInit @ 0x140A5AAF0 (HalpCmciInit.c)
 *     HalpHandlePreviousMcaErrors @ 0x140A61424 (HalpHandlePreviousMcaErrors.c)
 *     IopLiveDumpUncorralProcessors @ 0x140A67A68 (IopLiveDumpUncorralProcessors.c)
 *     ViIsBTSSupported @ 0x140A930EC (ViIsBTSSupported.c)
 *     ViSetupBTSPerProcNoEnable @ 0x140A93220 (ViSetupBTSPerProcNoEnable.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x140B17304 (CmpInitializeMachineDependentConfiguration.c)
 *     KiComputeNumaCosts @ 0x140B31500 (KiComputeNumaCosts.c)
 * Callees:
 *     KiReleaseThreadLockSafe @ 0x140224100 (KiReleaseThreadLockSafe.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     KiProcessDeferredReadyList @ 0x140344800 (KiProcessDeferredReadyList.c)
 *     KiSetSystemAffinityThread @ 0x14035C1C0 (KiSetSystemAffinityThread.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTraceIdealProcessor @ 0x14062DAE4 (EtwTraceIdealProcessor.c)
 *     EtwTraceThreadAffinity @ 0x14062E5D0 (EtwTraceThreadAffinity.c)
 */

void __stdcall KeRevertToUserGroupAffinityThread(PGROUP_AFFINITY PreviousAffinity)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  _DWORD *SchedulerAssist; // r9
  _KAFFINITY_EX *UserAffinity; // r14
  PGROUP_AFFINITY v5; // r15
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int8 CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // r12
  struct _SINGLE_LIST_ENTRY *Next; // rcx
  struct _KPRCB *v11; // rdi
  _DWORD *v12; // rcx
  unsigned int IdealProcessor; // edi
  int UserIdealProcessor; // r9d
  unsigned int v15; // r14d
  int Group; // ecx
  __int64 v17; // rax
  bool v18; // zf
  unsigned __int8 v19; // al
  struct _KPRCB *v20; // r9
  _DWORD *v21; // r8
  int v22; // eax
  int v23; // eax
  _DWORD *v24; // rcx
  int v25; // eax
  int v26; // [rsp+68h] [rbp+10h] BYREF
  __int64 v27; // [rsp+70h] [rbp+18h] BYREF

  v27 = 0LL;
  UserAffinity = 0LL;
  v5 = 0LL;
  KeGetCurrentIrql();
  CurrentThread = KeGetCurrentThread();
  if ( (CurrentThread->MiscFlags & 8) == 0
    || PreviousAffinity->Reserved[0] | (unsigned __int16)(PreviousAffinity->Reserved[1] | PreviousAffinity->Reserved[2]) )
  {
    return;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    v1 = (-1LL << (CurrentIrql + 1)) & 4;
    v2 = (unsigned int)v1 | SchedulerAssist[5];
    SchedulerAssist[5] = v2;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  if ( !PreviousAffinity->Mask )
  {
    Next = CurrentThread->SystemAffinityTokenListHead.Next;
    if ( Next )
    {
      UserAffinity = (_KAFFINITY_EX *)Next[3].Next;
      BYTE2(Next[2].Next) = BYTE3(Next[2].Next) & 2;
    }
    goto LABEL_7;
  }
  Group = PreviousAffinity->Group;
  if ( (unsigned __int16)Group < LOWORD(KeActiveProcessors[0]) )
  {
    v17 = qword_140D06E48[Group];
    v18 = (v17 & PreviousAffinity->Mask) == 0;
    PreviousAffinity->Mask &= v17;
    if ( !v18 )
    {
      v5 = PreviousAffinity;
LABEL_7:
      v11 = KeGetCurrentPrcb();
      v26 = 0;
      while ( 1 )
      {
        v12 = v11->SchedulerAssist;
        if ( v12 )
        {
          if ( v11->NestingLevel <= 1u )
          {
            v23 = v12[6];
            v12[6] = v23 + 1;
            if ( v23 == -1 )
              KiRemoveSystemWorkPriorityKick(v11);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
          break;
        v24 = v11->SchedulerAssist;
        if ( v24 )
        {
          if ( v11->NestingLevel <= 1u )
          {
            v25 = v24[6] - 1;
            v24[6] = v25;
            if ( !v25 )
              KiRemoveSystemWorkPriorityKick(v11);
          }
        }
        do
          KeYieldProcessorEx(&v26, v1, v2, (__int64)SchedulerAssist);
        while ( CurrentThread->ThreadLock );
      }
      IdealProcessor = CurrentThread->IdealProcessor;
      if ( UserAffinity || v5 )
      {
        UserIdealProcessor = 2048;
      }
      else
      {
        UserAffinity = CurrentThread->UserAffinity;
        UserIdealProcessor = CurrentThread->UserIdealProcessor;
        CurrentThread->MiscFlags &= ~8u;
      }
      KiSetSystemAffinityThread(
        (_DWORD)CurrentPrcb,
        (_DWORD)UserAffinity,
        (_DWORD)v5,
        UserIdealProcessor,
        (__int64)&v27);
      v15 = CurrentThread->IdealProcessor;
      KiReleaseThreadLockSafe((__int64)CurrentThread);
      if ( (xmmword_140D06910 & 0x8000000) != 0 )
        EtwTraceIdealProcessor(CurrentThread, 1350LL, IdealProcessor, v15);
      if ( (WORD2(PerfGlobalGroupMask) & 0x1000) != 0 )
        EtwTraceThreadAffinity(CurrentThread, PreviousAffinity);
      KiProcessDeferredReadyList((__int64)CurrentPrcb, &v27, CurrentIrql);
      return;
    }
  }
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v19 = KeGetCurrentIrql();
      if ( v19 <= 0xFu && CurrentIrql <= 0xFu && v19 >= 2u )
      {
        v20 = KeGetCurrentPrcb();
        v21 = v20->SchedulerAssist;
        v22 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v18 = (v22 & v21[5]) == 0;
        v21[5] &= v22;
        if ( v18 )
          KiRemoveSystemWorkPriorityKick(v20);
      }
    }
  }
  __writecr8(CurrentIrql);
}
