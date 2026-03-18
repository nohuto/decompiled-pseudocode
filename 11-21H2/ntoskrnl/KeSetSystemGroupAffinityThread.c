/*
 * XREFs of KeSetSystemGroupAffinityThread @ 0x14035BFE0
 * Callers:
 *     PnpSetDeviceAffinityThread @ 0x1402D301C (PnpSetDeviceAffinityThread.c)
 *     KeStallExecutionProcessor @ 0x140303560 (KeStallExecutionProcessor.c)
 *     KeGenericProcessorCallback @ 0x14035BB4C (KeGenericProcessorCallback.c)
 *     MiSetIdealProcessorThread @ 0x14035CA04 (MiSetIdealProcessorThread.c)
 *     ExAllocateCacheAwarePushLock @ 0x140389430 (ExAllocateCacheAwarePushLock.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x1403A61E8 (ExpSaPageGroupDescriptorAllocate.c)
 *     KiAcquireInterruptConnectLock @ 0x1403AF9E8 (KiAcquireInterruptConnectLock.c)
 *     HalpTimerStallExecutionProcessor @ 0x1403BC8C4 (HalpTimerStallExecutionProcessor.c)
 *     MakeGdtReadOnly @ 0x1403C205C (MakeGdtReadOnly.c)
 *     KiSetSystemAffinityThreadToProcessor @ 0x1403CBB10 (KiSetSystemAffinityThreadToProcessor.c)
 *     PpmInstallFeedbackCounters @ 0x1403CE4FC (PpmInstallFeedbackCounters.c)
 *     MiTimeSingleLargePageZero @ 0x1403D4314 (MiTimeSingleLargePageZero.c)
 *     HalGetEnvironmentVariableEx @ 0x1403DAAF0 (HalGetEnvironmentVariableEx.c)
 *     KeSetSystemAffinityThreadEx @ 0x1403DEA20 (KeSetSystemAffinityThreadEx.c)
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
 *     KiInterruptDispatchCommon @ 0x140575CD8 (KiInterruptDispatchCommon.c)
 *     KiDeferredBugcheckRecoveryWorker @ 0x140579150 (KiDeferredBugcheckRecoveryWorker.c)
 *     KiStallBugcheckThread @ 0x1405798A8 (KiStallBugcheckThread.c)
 *     PpmClearSimulatedIdle @ 0x1405C70FC (PpmClearSimulatedIdle.c)
 *     PpmIdleInstallNewVetoList @ 0x1405C8024 (PpmIdleInstallNewVetoList.c)
 *     PpmSetSimulatedIdle @ 0x1405C8BDC (PpmSetSimulatedIdle.c)
 *     MiCombineAllPhysicalMemory @ 0x1407F8FE0 (MiCombineAllPhysicalMemory.c)
 *     PpmIdleInitializeConcurrency @ 0x140849A30 (PpmIdleInitializeConcurrency.c)
 *     HalpCmcWorkerRoutine @ 0x140908680 (HalpCmcWorkerRoutine.c)
 *     HalpLoadMicrocodeSerialized @ 0x14090A314 (HalpLoadMicrocodeSerialized.c)
 *     CmInitializeProcessor @ 0x140919E48 (CmInitializeProcessor.c)
 *     PnpReplacePartitionUnit @ 0x140950E30 (PnpReplacePartitionUnit.c)
 *     PopInvokeSystemStateHandler @ 0x140A4AF0C (PopInvokeSystemStateHandler.c)
 *     PopEndMirroring @ 0x140A4E4B0 (PopEndMirroring.c)
 *     HalpInitializeMce @ 0x140A5A6CC (HalpInitializeMce.c)
 *     HalpMceInit @ 0x140A5A7C8 (HalpMceInit.c)
 *     HalpCmciInit @ 0x140A5AAF0 (HalpCmciInit.c)
 *     HalpHandlePreviousMcaErrors @ 0x140A61424 (HalpHandlePreviousMcaErrors.c)
 *     IopLiveDumpCorralProcessors @ 0x140A660C0 (IopLiveDumpCorralProcessors.c)
 *     ViIsBTSSupported @ 0x140A930EC (ViIsBTSSupported.c)
 *     ViSetupBTSPerProcNoEnable @ 0x140A93220 (ViSetupBTSPerProcNoEnable.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x140B17304 (CmpInitializeMachineDependentConfiguration.c)
 *     KiComputeNumaCosts @ 0x140B31500 (KiComputeNumaCosts.c)
 * Callees:
 *     KiReleaseThreadLockSafe @ 0x140224100 (KiReleaseThreadLockSafe.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     KiProcessDeferredReadyList @ 0x140344800 (KiProcessDeferredReadyList.c)
 *     KiSetSystemAffinityThread @ 0x14035C1C0 (KiSetSystemAffinityThread.c)
 *     KeFirstGroupAffinityEx @ 0x14035C9C0 (KeFirstGroupAffinityEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTraceIdealProcessor @ 0x14062DAE4 (EtwTraceIdealProcessor.c)
 *     EtwTraceThreadAffinity @ 0x14062E5D0 (EtwTraceThreadAffinity.c)
 */

void __stdcall KeSetSystemGroupAffinityThread(PGROUP_AFFINITY Affinity, PGROUP_AFFINITY PreviousAffinity)
{
  __int64 v2; // r8
  _DWORD *SchedulerAssist; // r9
  __int64 Group; // rcx
  PGROUP_AFFINITY v6; // r12
  char v7; // bp
  unsigned __int8 CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // r13
  __int64 CurrentThread; // rbx
  _DWORD *v11; // rcx
  int v12; // eax
  unsigned int v13; // r14d
  unsigned int v14; // edi
  __int64 v15; // rdx
  int v16; // eax
  _DWORD *v17; // rcx
  int v18; // eax
  struct _GROUP_AFFINITY v19; // [rsp+30h] [rbp-48h] BYREF
  int v20; // [rsp+80h] [rbp+8h] BYREF
  __int64 v21; // [rsp+88h] [rbp+10h] BYREF

  v21 = 0LL;
  v19 = 0LL;
  Group = Affinity->Group;
  v6 = PreviousAffinity;
  if ( (unsigned __int16)Group >= LOWORD(KeActiveProcessors[0])
    || (PreviousAffinity = (PGROUP_AFFINITY)KeActiveProcessors,
        (*(_QWORD *)&KeActiveProcessors[2 * Group + 2] & Affinity->Mask) == 0)
    || Affinity->Reserved[0] | (unsigned __int16)(Affinity->Reserved[1] | Affinity->Reserved[2]) )
  {
    v7 = 0;
  }
  else
  {
    v7 = 1;
    Affinity->Mask &= *(_QWORD *)&KeActiveProcessors[2 * Affinity->Group + 2];
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    PreviousAffinity = (PGROUP_AFFINITY)((-1LL << (CurrentIrql + 1)) & 4);
    v2 = (unsigned int)PreviousAffinity | SchedulerAssist[5];
    SchedulerAssist[5] = v2;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v20 = 0;
  CurrentThread = (__int64)CurrentPrcb->CurrentThread;
  while ( 1 )
  {
    v11 = CurrentPrcb->SchedulerAssist;
    if ( v11 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v16 = v11[6];
        v11[6] = v16 + 1;
        if ( v16 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(CurrentThread + 64), 0LL) )
      break;
    v17 = CurrentPrcb->SchedulerAssist;
    if ( v17 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v18 = v17[6] - 1;
        v17[6] = v18;
        if ( !v18 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v20, (__int64)PreviousAffinity, v2, (__int64)SchedulerAssist);
    while ( *(_QWORD *)(CurrentThread + 64) );
  }
  v12 = *(_DWORD *)(CurrentThread + 116);
  v13 = *(_DWORD *)(CurrentThread + 588);
  if ( (v12 & 8) == 0 )
  {
    *(_DWORD *)(CurrentThread + 116) = v12 | 8;
    goto LABEL_11;
  }
  v15 = *(_QWORD *)(CurrentThread + 1104);
  if ( !v15 )
    goto LABEL_24;
  switch ( *(_BYTE *)(v15 + 18) )
  {
    case 0:
      goto LABEL_38;
    case 1:
LABEL_24:
      KeFirstGroupAffinityEx(&v19, *(_QWORD *)(CurrentThread + 576));
      break;
    case 2:
LABEL_38:
      if ( !v7 )
        goto LABEL_13;
      *(_BYTE *)(v15 + 18) = 1;
      break;
  }
LABEL_11:
  if ( v7 )
    KiSetSystemAffinityThread((_DWORD)CurrentPrcb, 0, (_DWORD)Affinity, 2048, (__int64)&v21);
LABEL_13:
  v14 = *(_DWORD *)(CurrentThread + 588);
  KiReleaseThreadLockSafe(CurrentThread);
  if ( (xmmword_140D06910 & 0x8000000) != 0 )
    EtwTraceIdealProcessor(CurrentThread, 1350LL, v13, v14);
  if ( (WORD2(PerfGlobalGroupMask) & 0x1000) != 0 )
    EtwTraceThreadAffinity(CurrentThread, Affinity);
  KiProcessDeferredReadyList((__int64)CurrentPrcb, &v21, CurrentIrql);
  if ( v6 )
    *v6 = v19;
}
