/*
 * XREFs of KeSetSystemGroupAffinityThread @ 0x140306B20
 * Callers:
 *     HalpTimerStallExecutionProcessor @ 0x1402C4380 (HalpTimerStallExecutionProcessor.c)
 *     KeGenericProcessorCallback @ 0x140305A04 (KeGenericProcessorCallback.c)
 *     KiAcquireInterruptConnectLock @ 0x140320CC0 (KiAcquireInterruptConnectLock.c)
 *     PnpSetDeviceAffinityThread @ 0x140322660 (PnpSetDeviceAffinityThread.c)
 *     HalGetEnvironmentVariableEx @ 0x14035E2D0 (HalGetEnvironmentVariableEx.c)
 *     PpmInstallFeedbackCounters @ 0x1403914F8 (PpmInstallFeedbackCounters.c)
 *     KiSetSystemAffinityThreadToProcessor @ 0x14039A7D0 (KiSetSystemAffinityThreadToProcessor.c)
 *     HalpEnumerateEnvironmentVariablesWithFilter @ 0x14039C450 (HalpEnumerateEnvironmentVariablesWithFilter.c)
 *     KiInterruptDispatchCommon @ 0x1403A2804 (KiInterruptDispatchCommon.c)
 *     IopPassiveInterruptWorker @ 0x1403A2C00 (IopPassiveInterruptWorker.c)
 *     ExAllocateCacheAwarePushLock @ 0x1403A7860 (ExAllocateCacheAwarePushLock.c)
 *     MakeGdtReadOnly @ 0x1403ADE1C (MakeGdtReadOnly.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x1403C577C (ExpSaPageGroupDescriptorAllocate.c)
 *     HalpCreateMachineCheckErrorRecord @ 0x140502810 (HalpCreateMachineCheckErrorRecord.c)
 *     HalQueryEnvironmentVariableInfoEx @ 0x140504990 (HalQueryEnvironmentVariableInfoEx.c)
 *     HalSetEnvironmentVariableEx @ 0x140504B70 (HalSetEnvironmentVariableEx.c)
 *     HalpAllocatePmcCounterSetEx @ 0x140507060 (HalpAllocatePmcCounterSetEx.c)
 *     HalpFreePmcCounterSet @ 0x140507760 (HalpFreePmcCounterSet.c)
 *     HalpQueryCapsuleCapabilities @ 0x140521380 (HalpQueryCapsuleCapabilities.c)
 *     HalpUpdateCapsule @ 0x140521460 (HalpUpdateCapsule.c)
 *     Amd64InitializeUncoreProfiling @ 0x140529980 (Amd64InitializeUncoreProfiling.c)
 *     KiDynamicProcessorInitialization @ 0x14056BD08 (KiDynamicProcessorInitialization.c)
 *     KeSetSystemAffinityThreadEx @ 0x14056F0E0 (KeSetSystemAffinityThreadEx.c)
 *     KiDeferredBugcheckRecoveryWorker @ 0x14057AE70 (KiDeferredBugcheckRecoveryWorker.c)
 *     KiStallBugcheckThread @ 0x14057B648 (KiStallBugcheckThread.c)
 *     PpmClearSimulatedIdle @ 0x1405840DC (PpmClearSimulatedIdle.c)
 *     PpmIdleInstallNewVetoList @ 0x140585108 (PpmIdleInstallNewVetoList.c)
 *     PpmSetSimulatedIdle @ 0x140585CFC (PpmSetSimulatedIdle.c)
 *     MiSetIdealProcessorThread @ 0x1406670DC (MiSetIdealProcessorThread.c)
 *     HalpCmcWorkerRoutine @ 0x140820C70 (HalpCmcWorkerRoutine.c)
 *     PpmIdleInitializeConcurrency @ 0x14082D954 (PpmIdleInitializeConcurrency.c)
 *     HalpLoadMicrocodeSerialized @ 0x140934D88 (HalpLoadMicrocodeSerialized.c)
 *     PnpReplacePartitionUnit @ 0x140964BA0 (PnpReplacePartitionUnit.c)
 *     CmInitializeProcessor @ 0x140A0F9BC (CmInitializeProcessor.c)
 *     HalpCmciInit @ 0x140A8AF6C (HalpCmciInit.c)
 *     HalpMceInit @ 0x140A8B178 (HalpMceInit.c)
 *     HalpInitializeMce @ 0x140A8B600 (HalpInitializeMce.c)
 *     HalpHandlePreviousMcaErrors @ 0x140A950A4 (HalpHandlePreviousMcaErrors.c)
 *     IopLiveDumpCorralProcessors @ 0x140A9AF70 (IopLiveDumpCorralProcessors.c)
 *     PopEndMirroring @ 0x140AA28E0 (PopEndMirroring.c)
 *     PopInvokeSystemStateHandler @ 0x140AA865C (PopInvokeSystemStateHandler.c)
 *     ViIsBTSSupported @ 0x140AD4ADC (ViIsBTSSupported.c)
 *     ViSetupBTSPerProcNoEnable @ 0x140AD4C10 (ViSetupBTSPerProcNoEnable.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x140B3A520 (CmpInitializeMachineDependentConfiguration.c)
 *     KiComputeNumaCosts @ 0x140B76CB4 (KiComputeNumaCosts.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140242E20 (KeYieldProcessorEx.c)
 *     KiProcessDeferredReadyList @ 0x1402B0E40 (KiProcessDeferredReadyList.c)
 *     KiSetSystemAffinityThread @ 0x14030702C (KiSetSystemAffinityThread.c)
 *     KeFirstGroupAffinityEx @ 0x140308FB0 (KeFirstGroupAffinityEx.c)
 *     EtwTraceThreadAffinity @ 0x1404670B0 (EtwTraceThreadAffinity.c)
 */

void __stdcall KeSetSystemGroupAffinityThread(PGROUP_AFFINITY Affinity, PGROUP_AFFINITY PreviousAffinity)
{
  __int64 Group; // rcx
  char v5; // bp
  unsigned __int8 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // rsi
  _KTHREAD *CurrentThread; // rbx
  int MiscFlags; // eax
  _DWORD *SchedulerAssist; // r9
  __int64 v11; // rax
  struct _SINGLE_LIST_ENTRY *Next; // rdx
  _GROUP_AFFINITY v13; // [rsp+30h] [rbp-38h] BYREF
  int v14; // [rsp+70h] [rbp+8h] BYREF
  __int64 v15; // [rsp+78h] [rbp+10h] BYREF

  Group = Affinity->Group;
  v15 = 0LL;
  v13 = 0LL;
  if ( (unsigned __int16)Group >= LOWORD(KeActiveProcessors[0])
    || (*(_QWORD *)&KeActiveProcessors[2 * Group + 2] & Affinity->Mask) == 0
    || Affinity->Reserved[0] | (unsigned __int16)(Affinity->Reserved[1] | Affinity->Reserved[2]) )
  {
    v5 = 0;
  }
  else
  {
    v5 = 1;
    Affinity->Mask &= *(_QWORD *)&KeActiveProcessors[2 * Affinity->Group + 2];
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    LODWORD(v11) = 4;
    if ( CurrentIrql != 2 )
      v11 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v11;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v14 = 0;
  CurrentThread = CurrentPrcb->CurrentThread;
  while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
  {
    do
      KeYieldProcessorEx(&v14);
    while ( CurrentThread->ThreadLock );
  }
  MiscFlags = CurrentThread->MiscFlags;
  if ( (MiscFlags & 8) == 0 )
  {
    CurrentThread->MiscFlags = MiscFlags | 8;
    goto LABEL_10;
  }
  Next = CurrentThread->SystemAffinityTokenListHead.Next;
  if ( !Next )
    goto LABEL_23;
  if ( BYTE2(Next[2].Next) )
  {
    if ( BYTE2(Next[2].Next) == 1 )
    {
LABEL_23:
      KeFirstGroupAffinityEx(&v13, CurrentThread->Affinity);
      goto LABEL_10;
    }
    if ( BYTE2(Next[2].Next) != 2 )
    {
LABEL_10:
      if ( v5 )
      {
LABEL_11:
        KiSetSystemAffinityThread((_DWORD)CurrentPrcb, 0, (_DWORD)Affinity, 2048, (__int64)&v15);
        goto LABEL_12;
      }
      goto LABEL_32;
    }
  }
  if ( v5 )
  {
    BYTE2(Next[2].Next) = 1;
    goto LABEL_11;
  }
LABEL_32:
  CurrentThread->ThreadLock = 0LL;
LABEL_12:
  if ( (WORD2(PerfGlobalGroupMask) & 0x1000) != 0 )
    EtwTraceThreadAffinity(CurrentThread, Affinity);
  KiProcessDeferredReadyList((__int64)CurrentPrcb, &v15, CurrentIrql);
  if ( PreviousAffinity )
    *PreviousAffinity = v13;
  KeGetCurrentIrql();
}
