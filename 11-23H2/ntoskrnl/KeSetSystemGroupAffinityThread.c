/*
 * XREFs of KeSetSystemGroupAffinityThread @ 0x140306C50
 * Callers:
 *     HalpTimerStallExecutionProcessor @ 0x1402C43B0 (HalpTimerStallExecutionProcessor.c)
 *     KeGenericProcessorCallback @ 0x140305B34 (KeGenericProcessorCallback.c)
 *     KiAcquireInterruptConnectLock @ 0x140320EA0 (KiAcquireInterruptConnectLock.c)
 *     PnpSetDeviceAffinityThread @ 0x140322840 (PnpSetDeviceAffinityThread.c)
 *     HalGetEnvironmentVariableEx @ 0x14035E920 (HalGetEnvironmentVariableEx.c)
 *     PpmInstallFeedbackCounters @ 0x140393078 (PpmInstallFeedbackCounters.c)
 *     KiSetSystemAffinityThreadToProcessor @ 0x14039AAC0 (KiSetSystemAffinityThreadToProcessor.c)
 *     HalpEnumerateEnvironmentVariablesWithFilter @ 0x14039C740 (HalpEnumerateEnvironmentVariablesWithFilter.c)
 *     KiInterruptDispatchCommon @ 0x1403A2F44 (KiInterruptDispatchCommon.c)
 *     IopPassiveInterruptWorker @ 0x1403A3340 (IopPassiveInterruptWorker.c)
 *     ExAllocateCacheAwarePushLock @ 0x1403A7FF0 (ExAllocateCacheAwarePushLock.c)
 *     MakeGdtReadOnly @ 0x1403AE4AC (MakeGdtReadOnly.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x1403C5DDC (ExpSaPageGroupDescriptorAllocate.c)
 *     HalpCreateMachineCheckErrorRecord @ 0x140502700 (HalpCreateMachineCheckErrorRecord.c)
 *     HalQueryEnvironmentVariableInfoEx @ 0x140504880 (HalQueryEnvironmentVariableInfoEx.c)
 *     HalSetEnvironmentVariableEx @ 0x140504A60 (HalSetEnvironmentVariableEx.c)
 *     HalpAllocatePmcCounterSetEx @ 0x140506F60 (HalpAllocatePmcCounterSetEx.c)
 *     HalpFreePmcCounterSet @ 0x140507660 (HalpFreePmcCounterSet.c)
 *     HalpQueryCapsuleCapabilities @ 0x1405212C0 (HalpQueryCapsuleCapabilities.c)
 *     HalpUpdateCapsule @ 0x1405213A0 (HalpUpdateCapsule.c)
 *     Amd64InitializeUncoreProfiling @ 0x1405298D0 (Amd64InitializeUncoreProfiling.c)
 *     KiDynamicProcessorInitialization @ 0x14056BC68 (KiDynamicProcessorInitialization.c)
 *     KeSetSystemAffinityThreadEx @ 0x14056F040 (KeSetSystemAffinityThreadEx.c)
 *     KiDeferredBugcheckRecoveryWorker @ 0x14057ADE0 (KiDeferredBugcheckRecoveryWorker.c)
 *     KiStallBugcheckThread @ 0x14057B5B8 (KiStallBugcheckThread.c)
 *     PpmClearSimulatedIdle @ 0x14058404C (PpmClearSimulatedIdle.c)
 *     PpmIdleInstallNewVetoList @ 0x140585078 (PpmIdleInstallNewVetoList.c)
 *     PpmSetSimulatedIdle @ 0x140585C6C (PpmSetSimulatedIdle.c)
 *     MiSetIdealProcessorThread @ 0x14066706C (MiSetIdealProcessorThread.c)
 *     HalpCmcWorkerRoutine @ 0x14081E6F0 (HalpCmcWorkerRoutine.c)
 *     PpmIdleInitializeConcurrency @ 0x14082BE04 (PpmIdleInitializeConcurrency.c)
 *     HalpLoadMicrocodeSerialized @ 0x140934CD8 (HalpLoadMicrocodeSerialized.c)
 *     PnpReplacePartitionUnit @ 0x140964AF0 (PnpReplacePartitionUnit.c)
 *     CmInitializeProcessor @ 0x140A0F90C (CmInitializeProcessor.c)
 *     HalpCmciInit @ 0x140A8A70C (HalpCmciInit.c)
 *     HalpMceInit @ 0x140A8A918 (HalpMceInit.c)
 *     HalpInitializeMce @ 0x140A8ADA0 (HalpInitializeMce.c)
 *     HalpHandlePreviousMcaErrors @ 0x140A94FF0 (HalpHandlePreviousMcaErrors.c)
 *     IopLiveDumpCorralProcessors @ 0x140A9AEB0 (IopLiveDumpCorralProcessors.c)
 *     PopEndMirroring @ 0x140AA2820 (PopEndMirroring.c)
 *     PopInvokeSystemStateHandler @ 0x140AA859C (PopInvokeSystemStateHandler.c)
 *     ViIsBTSSupported @ 0x140AD3B0C (ViIsBTSSupported.c)
 *     ViSetupBTSPerProcNoEnable @ 0x140AD3C40 (ViSetupBTSPerProcNoEnable.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x140B36E28 (CmpInitializeMachineDependentConfiguration.c)
 *     KiComputeNumaCosts @ 0x140B75D24 (KiComputeNumaCosts.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140242E40 (KeYieldProcessorEx.c)
 *     KiProcessDeferredReadyList @ 0x1402B0E70 (KiProcessDeferredReadyList.c)
 *     KiSetSystemAffinityThread @ 0x14030715C (KiSetSystemAffinityThread.c)
 *     KeFirstGroupAffinityEx @ 0x1403090E0 (KeFirstGroupAffinityEx.c)
 *     EtwTraceThreadAffinity @ 0x140467710 (EtwTraceThreadAffinity.c)
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
  struct _GROUP_AFFINITY v13; // [rsp+30h] [rbp-38h] BYREF
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
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
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
