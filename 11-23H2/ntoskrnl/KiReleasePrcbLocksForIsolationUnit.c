/*
 * XREFs of KiReleasePrcbLocksForIsolationUnit @ 0x1403078C0
 * Callers:
 *     KiSetAffinityThread @ 0x14020327C (KiSetAffinityThread.c)
 *     KiRescheduleThreadAfterAffinityChange @ 0x140203570 (KiRescheduleThreadAfterAffinityChange.c)
 *     KiSetThreadSchedulingGroup @ 0x140204900 (KiSetThreadSchedulingGroup.c)
 *     KiRemoveThreadFromSchedulingGroup @ 0x140204C14 (KiRemoveThreadFromSchedulingGroup.c)
 *     KiUpdateCpuTargetByWeight @ 0x14020572C (KiUpdateCpuTargetByWeight.c)
 *     KiUpdateCpuTargetByRate @ 0x1402058E8 (KiUpdateCpuTargetByRate.c)
 *     KeSetSchedulingGroupRankBias @ 0x140205AD8 (KeSetSchedulingGroupRankBias.c)
 *     KiChooseTargetProcessor @ 0x1402392E0 (KiChooseTargetProcessor.c)
 *     KiSwapThread @ 0x14023F3F0 (KiSwapThread.c)
 *     KiSearchForNewThread @ 0x140240350 (KiSearchForNewThread.c)
 *     KiSearchForNewThreadOnProcessor @ 0x140240C90 (KiSearchForNewThreadOnProcessor.c)
 *     KeWaitForSingleObject @ 0x140243CE0 (KeWaitForSingleObject.c)
 *     KiExecuteAllDpcs @ 0x1402444C0 (KiExecuteAllDpcs.c)
 *     KeYieldExecution @ 0x1402469F0 (KeYieldExecution.c)
 *     KiQuantumEnd @ 0x1402486F0 (KiQuantumEnd.c)
 *     KeApplyWobBamQos @ 0x140259D70 (KeApplyWobBamQos.c)
 *     KiSetPriorityThread @ 0x1402B05D0 (KiSetPriorityThread.c)
 *     KiAcquireThreadStateLockForWrite @ 0x1402B1730 (KiAcquireThreadStateLockForWrite.c)
 *     KiDirectSwitchThread @ 0x1402B18A0 (KiDirectSwitchThread.c)
 *     KiExitThreadWait @ 0x1402BBC90 (KiExitThreadWait.c)
 *     KeQueryValuesThread @ 0x1402C2C40 (KeQueryValuesThread.c)
 *     KiNormalPriorityReadyScan @ 0x140306DF0 (KiNormalPriorityReadyScan.c)
 *     KiSetSystemAffinityThread @ 0x14030715C (KiSetSystemAffinityThread.c)
 *     KiIdleSchedule @ 0x140307420 (KiIdleSchedule.c)
 *     KiDeferGroupSchedulingPreemption @ 0x140307584 (KiDeferGroupSchedulingPreemption.c)
 *     KiGroupSchedulingQuantumEnd @ 0x140307F54 (KiGroupSchedulingQuantumEnd.c)
 *     KiGroupSchedulingGenerationEnd @ 0x1403082A8 (KiGroupSchedulingGenerationEnd.c)
 *     KiHandleDeferredPreemption @ 0x1403091C8 (KiHandleDeferredPreemption.c)
 *     KeWaitForMultipleObjects @ 0x1403111A0 (KeWaitForMultipleObjects.c)
 *     KeQueryTotalCycleTimeThread @ 0x140329DB0 (KeQueryTotalCycleTimeThread.c)
 *     KiApplyForegroundBoostThread @ 0x1403504D8 (KiApplyForegroundBoostThread.c)
 *     KeSetProcessPpmPolicy @ 0x1403570B0 (KeSetProcessPpmPolicy.c)
 *     KeSetThreadPpmPolicy @ 0x140359D7C (KeSetThreadPpmPolicy.c)
 *     KeUpdateThreadTag @ 0x140366BD0 (KeUpdateThreadTag.c)
 *     KiCanSelectSoftParkedProcessor @ 0x14037279C (KiCanSelectSoftParkedProcessor.c)
 *     MiSwapStackPage @ 0x140399F3C (MiSwapStackPage.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x14039DEEC (KiUpdateGlobalCpuSetConfiguration.c)
 *     KiUpdateThreadCpuSets @ 0x14039EA40 (KiUpdateThreadCpuSets.c)
 *     KiSetIdealProcessorThread @ 0x1403CEFCC (KiSetIdealProcessorThread.c)
 *     KiSoftParkElectionUnparkProcessor @ 0x1404110CC (KiSoftParkElectionUnparkProcessor.c)
 *     KiHeteroAttemptPreemptionSwap @ 0x1404617A8 (KiHeteroAttemptPreemptionSwap.c)
 *     KiHeteroChooseTargetProcessor @ 0x140461916 (KiHeteroChooseTargetProcessor.c)
 *     KiSendHeteroRescheduleIntRequestHelper @ 0x140462244 (KiSendHeteroRescheduleIntRequestHelper.c)
 *     KeSetThreadSchedulerAssist @ 0x14056D21C (KeSetThreadSchedulerAssist.c)
 *     KiUpdateVpBackingThreadPriorityFromTopLevel @ 0x14056E69C (KiUpdateVpBackingThreadPriorityFromTopLevel.c)
 *     KeTryToFreezeThreadStack @ 0x14056F0D8 (KeTryToFreezeThreadStack.c)
 *     KiAcquirePrcbLocksForPreemptionAttemptSlowPath @ 0x140576D3C (KiAcquirePrcbLocksForPreemptionAttemptSlowPath.c)
 *     KiReleaseThreadStateLock @ 0x140577688 (KiReleaseThreadStateLock.c)
 *     KiSetHeteroPolicyThread @ 0x140577A0C (KiSetHeteroPolicyThread.c)
 *     KeAbCrossThreadDelete @ 0x140579570 (KeAbCrossThreadDelete.c)
 *     KeTransitionProcessorParkState @ 0x14057D86C (KeTransitionProcessorParkState.c)
 *     KiAttemptToUnparkIdleSoftParkedProcessorOnSchedule @ 0x14057DB2C (KiAttemptToUnparkIdleSoftParkedProcessorOnSchedule.c)
 *     KiParkCurrentProcessor @ 0x14057DE9C (KiParkCurrentProcessor.c)
 *     KiUnparkCurrentProcessor @ 0x14057E654 (KiUnparkCurrentProcessor.c)
 *     KiCompleteKernelInit @ 0x140A8CAE0 (KiCompleteKernelInit.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiReleasePrcbLocksForIsolationUnit(__int64 *a1)
{
  __int64 v1; // r9
  unsigned __int64 v3; // rcx
  unsigned __int64 *v4; // r8
  int v5; // eax
  __int64 result; // rax
  unsigned __int8 *v7; // rax
  unsigned __int64 v8; // [rsp+8h] [rbp+8h] BYREF

  v1 = *a1;
  v3 = *a1 & 0xFFFFFFFFFFFFFFFEuLL;
  v8 = v3;
  if ( (v1 & 1) != 0 )
  {
    v7 = *(unsigned __int8 **)(v3 + 34904);
    v4 = (unsigned __int64 *)(v7 + 8);
    v5 = *v7;
    if ( !v5 )
    {
      result = 0LL;
      *a1 = 0LL;
      return result;
    }
  }
  else
  {
    v4 = &v8;
    v5 = 1;
  }
  do
    _InterlockedAnd64((volatile signed __int64 *)(v4[--v5] + 48), 0LL);
  while ( v5 );
  result = 0LL;
  *a1 = 0LL;
  return result;
}
