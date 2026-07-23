/*
 * XREFs of KeSetSystemGroupAffinityThread @ 0x140306EE0
 * Callers:
 *     HalpTimerStallExecutionProcessor @ 0x1402C4640 (HalpTimerStallExecutionProcessor.c)
 *     KeGenericProcessorCallback @ 0x140305DC4 (KeGenericProcessorCallback.c)
 *     KiAcquireInterruptConnectLock @ 0x140321130 (KiAcquireInterruptConnectLock.c)
 *     PnpSetDeviceAffinityThread @ 0x140322AD0 (PnpSetDeviceAffinityThread.c)
 *     HalGetEnvironmentVariableEx @ 0x14035EAC0 (HalGetEnvironmentVariableEx.c)
 *     PpmInstallFeedbackCounters @ 0x140393258 (PpmInstallFeedbackCounters.c)
 *     KiSetSystemAffinityThreadToProcessor @ 0x14039ACA0 (KiSetSystemAffinityThreadToProcessor.c)
 *     HalpEnumerateEnvironmentVariablesWithFilter @ 0x14039C920 (HalpEnumerateEnvironmentVariablesWithFilter.c)
 *     KiInterruptDispatchCommon @ 0x1403A3124 (KiInterruptDispatchCommon.c)
 *     IopPassiveInterruptWorker @ 0x1403A3520 (IopPassiveInterruptWorker.c)
 *     ExAllocateCacheAwarePushLock @ 0x1403A81D0 (ExAllocateCacheAwarePushLock.c)
 *     MakeGdtReadOnly @ 0x1403AE68C (MakeGdtReadOnly.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x1403C5FBC (ExpSaPageGroupDescriptorAllocate.c)
 *     HalpCreateMachineCheckErrorRecord @ 0x140502C50 (HalpCreateMachineCheckErrorRecord.c)
 *     HalQueryEnvironmentVariableInfoEx @ 0x140504DD0 (HalQueryEnvironmentVariableInfoEx.c)
 *     HalSetEnvironmentVariableEx @ 0x140504FB0 (HalSetEnvironmentVariableEx.c)
 *     HalpAllocatePmcCounterSetEx @ 0x1405074B0 (HalpAllocatePmcCounterSetEx.c)
 *     HalpFreePmcCounterSet @ 0x140507BB0 (HalpFreePmcCounterSet.c)
 *     HalpQueryCapsuleCapabilities @ 0x140521810 (HalpQueryCapsuleCapabilities.c)
 *     HalpUpdateCapsule @ 0x1405218F0 (HalpUpdateCapsule.c)
 *     Amd64InitializeUncoreProfiling @ 0x140529E20 (Amd64InitializeUncoreProfiling.c)
 *     KiDynamicProcessorInitialization @ 0x14056C328 (KiDynamicProcessorInitialization.c)
 *     KeSetSystemAffinityThreadEx @ 0x14056F580 (KeSetSystemAffinityThreadEx.c)
 *     KiDeferredBugcheckRecoveryWorker @ 0x14057B2D0 (KiDeferredBugcheckRecoveryWorker.c)
 *     KiStallBugcheckThread @ 0x14057BAA8 (KiStallBugcheckThread.c)
 *     PpmClearSimulatedIdle @ 0x14058453C (PpmClearSimulatedIdle.c)
 *     PpmIdleInstallNewVetoList @ 0x140585568 (PpmIdleInstallNewVetoList.c)
 *     PpmSetSimulatedIdle @ 0x14058615C (PpmSetSimulatedIdle.c)
 *     MiSetIdealProcessorThread @ 0x1406675BC (MiSetIdealProcessorThread.c)
 *     HalpCmcWorkerRoutine @ 0x14081E9C0 (HalpCmcWorkerRoutine.c)
 *     PpmIdleInitializeConcurrency @ 0x14082C104 (PpmIdleInitializeConcurrency.c)
 *     HalpLoadMicrocodeSerialized @ 0x140934ED8 (HalpLoadMicrocodeSerialized.c)
 *     PnpReplacePartitionUnit @ 0x140964CF0 (PnpReplacePartitionUnit.c)
 *     CmInitializeProcessor @ 0x140A0FBBC (CmInitializeProcessor.c)
 *     HalpCmciInit @ 0x140A8A70C (HalpCmciInit.c)
 *     HalpMceInit @ 0x140A8A918 (HalpMceInit.c)
 *     HalpInitializeMce @ 0x140A8ADA0 (HalpInitializeMce.c)
 *     HalpHandlePreviousMcaErrors @ 0x140A94E60 (HalpHandlePreviousMcaErrors.c)
 *     IopLiveDumpCorralProcessors @ 0x140A9AD20 (IopLiveDumpCorralProcessors.c)
 *     PopEndMirroring @ 0x140AA2690 (PopEndMirroring.c)
 *     PopInvokeSystemStateHandler @ 0x140AA840C (PopInvokeSystemStateHandler.c)
 *     ViIsBTSSupported @ 0x140AD3AFC (ViIsBTSSupported.c)
 *     ViSetupBTSPerProcNoEnable @ 0x140AD3C30 (ViSetupBTSPerProcNoEnable.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x140B36E28 (CmpInitializeMachineDependentConfiguration.c)
 *     KiComputeNumaCosts @ 0x140B75D24 (KiComputeNumaCosts.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140242F10 (KeYieldProcessorEx.c)
 *     KiProcessDeferredReadyList @ 0x1402B1100 (KiProcessDeferredReadyList.c)
 *     KiSetSystemAffinityThread @ 0x1403073EC (KiSetSystemAffinityThread.c)
 *     KeFirstGroupAffinityEx @ 0x140309370 (KeFirstGroupAffinityEx.c)
 *     EtwTraceThreadAffinity @ 0x140467B10 (EtwTraceThreadAffinity.c)
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
