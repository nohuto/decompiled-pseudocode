/*
 * XREFs of KeRevertToUserGroupAffinityThread @ 0x140305CD0
 * Callers:
 *     ExpWorkerThread @ 0x1402BEB60 (ExpWorkerThread.c)
 *     HalpTimerStallExecutionProcessor @ 0x1402C4380 (HalpTimerStallExecutionProcessor.c)
 *     KeGenericProcessorCallback @ 0x140305A04 (KeGenericProcessorCallback.c)
 *     KeMaskInterrupt @ 0x14031F3D4 (KeMaskInterrupt.c)
 *     KiDisconnectInterruptCommon @ 0x14031F540 (KiDisconnectInterruptCommon.c)
 *     KiConnectInterrupt @ 0x140320AAC (KiConnectInterrupt.c)
 *     PnpSendIrp @ 0x1403225B8 (PnpSendIrp.c)
 *     HalGetEnvironmentVariableEx @ 0x14035E2D0 (HalGetEnvironmentVariableEx.c)
 *     PpmInstallFeedbackCounters @ 0x1403914F8 (PpmInstallFeedbackCounters.c)
 *     KiInitMachineDependent @ 0x14039A528 (KiInitMachineDependent.c)
 *     HalpEnumerateEnvironmentVariablesWithFilter @ 0x14039C450 (HalpEnumerateEnvironmentVariablesWithFilter.c)
 *     KiInterruptDispatchCommon @ 0x1403A2804 (KiInterruptDispatchCommon.c)
 *     IopPassiveInterruptWorker @ 0x1403A2C00 (IopPassiveInterruptWorker.c)
 *     ExAllocateCacheAwarePushLock @ 0x1403A7860 (ExAllocateCacheAwarePushLock.c)
 *     MakeGdtReadOnly @ 0x1403ADE1C (MakeGdtReadOnly.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x1403C577C (ExpSaPageGroupDescriptorAllocate.c)
 *     KeRevertToUserAffinityThreadEx @ 0x14045F860 (KeRevertToUserAffinityThreadEx.c)
 *     HalpCreateMachineCheckErrorRecord @ 0x140502810 (HalpCreateMachineCheckErrorRecord.c)
 *     HalQueryEnvironmentVariableInfoEx @ 0x140504990 (HalQueryEnvironmentVariableInfoEx.c)
 *     HalSetEnvironmentVariableEx @ 0x140504B70 (HalSetEnvironmentVariableEx.c)
 *     HalpAllocatePmcCounterSetEx @ 0x140507060 (HalpAllocatePmcCounterSetEx.c)
 *     HalpFreePmcCounterSet @ 0x140507760 (HalpFreePmcCounterSet.c)
 *     HalpQueryCapsuleCapabilities @ 0x140521380 (HalpQueryCapsuleCapabilities.c)
 *     HalpUpdateCapsule @ 0x140521460 (HalpUpdateCapsule.c)
 *     Amd64InitializeUncoreProfiling @ 0x140529980 (Amd64InitializeUncoreProfiling.c)
 *     KiDynamicProcessorInitialization @ 0x14056BD08 (KiDynamicProcessorInitialization.c)
 *     KiDeregisterNmiSxCallback @ 0x14056CB34 (KiDeregisterNmiSxCallback.c)
 *     KeRevertToUserAffinityThread @ 0x14056F010 (KeRevertToUserAffinityThread.c)
 *     KiDeferredBugcheckRecoveryWorker @ 0x14057AE70 (KiDeferredBugcheckRecoveryWorker.c)
 *     KiStallBugcheckThread @ 0x14057B648 (KiStallBugcheckThread.c)
 *     PpmClearSimulatedIdle @ 0x1405840DC (PpmClearSimulatedIdle.c)
 *     PpmIdleInstallNewVetoList @ 0x140585108 (PpmIdleInstallNewVetoList.c)
 *     PpmSetSimulatedIdle @ 0x140585CFC (PpmSetSimulatedIdle.c)
 *     MiSetIdealProcessorThread @ 0x1406670DC (MiSetIdealProcessorThread.c)
 *     PnpCallAddDevice @ 0x140792B3C (PnpCallAddDevice.c)
 *     HalpCmcWorkerRoutine @ 0x140820C70 (HalpCmcWorkerRoutine.c)
 *     PpmIdleInitializeConcurrency @ 0x14082D954 (PpmIdleInitializeConcurrency.c)
 *     HalpLoadMicrocodeSerialized @ 0x140934D88 (HalpLoadMicrocodeSerialized.c)
 *     PnpReplacePartitionUnit @ 0x140964BA0 (PnpReplacePartitionUnit.c)
 *     CmInitializeProcessor @ 0x140A0F9BC (CmInitializeProcessor.c)
 *     HalpCmciInit @ 0x140A8AF6C (HalpCmciInit.c)
 *     HalpMceInit @ 0x140A8B178 (HalpMceInit.c)
 *     HalpHandlePreviousMcaErrors @ 0x140A950A4 (HalpHandlePreviousMcaErrors.c)
 *     IopLiveDumpUncorralProcessors @ 0x140A9C6C8 (IopLiveDumpUncorralProcessors.c)
 *     ViIsBTSSupported @ 0x140AD4ADC (ViIsBTSSupported.c)
 *     ViSetupBTSPerProcNoEnable @ 0x140AD4C10 (ViSetupBTSPerProcNoEnable.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x140B3A520 (CmpInitializeMachineDependentConfiguration.c)
 *     KiComputeNumaCosts @ 0x140B76CB4 (KiComputeNumaCosts.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140242E20 (KeYieldProcessorEx.c)
 *     KiProcessDeferredReadyList @ 0x1402B0E40 (KiProcessDeferredReadyList.c)
 *     KiSetSystemAffinityThread @ 0x14030702C (KiSetSystemAffinityThread.c)
 *     EtwTraceThreadAffinity @ 0x1404670B0 (EtwTraceThreadAffinity.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 */

void __stdcall KeRevertToUserGroupAffinityThread(PGROUP_AFFINITY PreviousAffinity)
{
  _KAFFINITY_EX *UserAffinity; // rbp
  PGROUP_AFFINITY v2; // r14
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int8 CurrentIrql; // si
  struct _KPRCB *CurrentPrcb; // r15
  struct _SINGLE_LIST_ENTRY *Next; // rcx
  int UserIdealProcessor; // r9d
  _DWORD *SchedulerAssist; // r9
  __int64 v10; // rax
  int Group; // ecx
  __int64 v12; // rax
  bool v13; // zf
  unsigned __int8 v14; // al
  struct _KPRCB *v15; // r9
  _DWORD *v16; // r8
  int v17; // eax
  int v18; // [rsp+68h] [rbp+10h] BYREF
  __int64 v19; // [rsp+70h] [rbp+18h] BYREF

  v19 = 0LL;
  UserAffinity = 0LL;
  v2 = 0LL;
  KeGetCurrentIrql();
  CurrentThread = KeGetCurrentThread();
  if ( (CurrentThread->MiscFlags & 8) == 0
    || PreviousAffinity->Reserved[0] | (unsigned __int16)(PreviousAffinity->Reserved[1] | PreviousAffinity->Reserved[2]) )
  {
    return;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    LODWORD(v10) = 4;
    if ( CurrentIrql != 2 )
      v10 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v10;
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
  if ( (unsigned __int16)Group < (unsigned __int16)KeActiveProcessors )
  {
    v12 = qword_140D1EFE8[Group];
    v13 = (v12 & PreviousAffinity->Mask) == 0;
    PreviousAffinity->Mask &= v12;
    if ( !v13 )
    {
      v2 = PreviousAffinity;
LABEL_7:
      v18 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        do
          KeYieldProcessorEx(&v18);
        while ( CurrentThread->ThreadLock );
      }
      if ( UserAffinity || v2 )
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
        (_DWORD)v2,
        UserIdealProcessor,
        (__int64)&v19);
      if ( (WORD2(PerfGlobalGroupMask) & 0x1000) != 0 )
        EtwTraceThreadAffinity(CurrentThread, PreviousAffinity);
      KiProcessDeferredReadyList((__int64)CurrentPrcb, &v19, CurrentIrql);
      return;
    }
  }
  if ( (_DWORD)KiIrqlFlags )
  {
    v14 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v14 <= 0xFu && CurrentIrql <= 0xFu && v14 >= 2u )
    {
      v15 = KeGetCurrentPrcb();
      v16 = v15->SchedulerAssist;
      v17 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v13 = (v17 & v16[5]) == 0;
      v16[5] &= v17;
      if ( v13 )
        KiRemoveSystemWorkPriorityKick(v15);
    }
  }
  __writecr8(CurrentIrql);
}
