/*
 * XREFs of KiReleasePrcbLocksForIsolationUnit @ 0x140307B50
 * Callers:
 *     KiSetAffinityThread @ 0x14020327C (KiSetAffinityThread.c)
 *     KiRescheduleThreadAfterAffinityChange @ 0x140203570 (KiRescheduleThreadAfterAffinityChange.c)
 *     KiSetThreadSchedulingGroup @ 0x140204900 (KiSetThreadSchedulingGroup.c)
 *     KiRemoveThreadFromSchedulingGroup @ 0x140204C14 (KiRemoveThreadFromSchedulingGroup.c)
 *     KiUpdateCpuTargetByWeight @ 0x14020572C (KiUpdateCpuTargetByWeight.c)
 *     KiUpdateCpuTargetByRate @ 0x1402058E8 (KiUpdateCpuTargetByRate.c)
 *     KeSetSchedulingGroupRankBias @ 0x140205AD8 (KeSetSchedulingGroupRankBias.c)
 *     KiChooseTargetProcessor @ 0x1402393B0 (KiChooseTargetProcessor.c)
 *     KiSwapThread @ 0x14023F4C0 (KiSwapThread.c)
 *     KiSearchForNewThread @ 0x140240420 (KiSearchForNewThread.c)
 *     KiSearchForNewThreadOnProcessor @ 0x140240D60 (KiSearchForNewThreadOnProcessor.c)
 *     KeWaitForSingleObject @ 0x140243DB0 (KeWaitForSingleObject.c)
 *     KiExecuteAllDpcs @ 0x140244590 (KiExecuteAllDpcs.c)
 *     KeYieldExecution @ 0x140246AC0 (KeYieldExecution.c)
 *     KiQuantumEnd @ 0x1402487C0 (KiQuantumEnd.c)
 *     KeApplyWobBamQos @ 0x14025A000 (KeApplyWobBamQos.c)
 *     KiSetPriorityThread @ 0x1402B0860 (KiSetPriorityThread.c)
 *     KiAcquireThreadStateLockForWrite @ 0x1402B19C0 (KiAcquireThreadStateLockForWrite.c)
 *     KiDirectSwitchThread @ 0x1402B1B30 (KiDirectSwitchThread.c)
 *     KiExitThreadWait @ 0x1402BBF20 (KiExitThreadWait.c)
 *     KeQueryValuesThread @ 0x1402C2ED0 (KeQueryValuesThread.c)
 *     KiNormalPriorityReadyScan @ 0x140307080 (KiNormalPriorityReadyScan.c)
 *     KiSetSystemAffinityThread @ 0x1403073EC (KiSetSystemAffinityThread.c)
 *     KiIdleSchedule @ 0x1403076B0 (KiIdleSchedule.c)
 *     KiDeferGroupSchedulingPreemption @ 0x140307814 (KiDeferGroupSchedulingPreemption.c)
 *     KiGroupSchedulingQuantumEnd @ 0x1403081E4 (KiGroupSchedulingQuantumEnd.c)
 *     KiGroupSchedulingGenerationEnd @ 0x140308538 (KiGroupSchedulingGenerationEnd.c)
 *     KiHandleDeferredPreemption @ 0x140309458 (KiHandleDeferredPreemption.c)
 *     KeWaitForMultipleObjects @ 0x140311430 (KeWaitForMultipleObjects.c)
 *     KeQueryTotalCycleTimeThread @ 0x14032A040 (KeQueryTotalCycleTimeThread.c)
 *     KiApplyForegroundBoostThread @ 0x140350678 (KiApplyForegroundBoostThread.c)
 *     KeSetProcessPpmPolicy @ 0x140357250 (KeSetProcessPpmPolicy.c)
 *     KeSetThreadPpmPolicy @ 0x140359F1C (KeSetThreadPpmPolicy.c)
 *     KeUpdateThreadTag @ 0x140366D70 (KeUpdateThreadTag.c)
 *     KiCanSelectSoftParkedProcessor @ 0x14037293C (KiCanSelectSoftParkedProcessor.c)
 *     MiSwapStackPage @ 0x14039A11C (MiSwapStackPage.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x14039E0CC (KiUpdateGlobalCpuSetConfiguration.c)
 *     KiUpdateThreadCpuSets @ 0x14039EC20 (KiUpdateThreadCpuSets.c)
 *     KiSetIdealProcessorThread @ 0x1403CF1AC (KiSetIdealProcessorThread.c)
 *     KiSoftParkElectionUnparkProcessor @ 0x1404112D8 (KiSoftParkElectionUnparkProcessor.c)
 *     KiHeteroAttemptPreemptionSwap @ 0x140461BA8 (KiHeteroAttemptPreemptionSwap.c)
 *     KiHeteroChooseTargetProcessor @ 0x140461D16 (KiHeteroChooseTargetProcessor.c)
 *     KiSendHeteroRescheduleIntRequestHelper @ 0x140462644 (KiSendHeteroRescheduleIntRequestHelper.c)
 *     KeSetThreadSchedulerAssist @ 0x14056D8DC (KeSetThreadSchedulerAssist.c)
 *     KiUpdateVpBackingThreadPriorityFromTopLevel @ 0x14056EBDC (KiUpdateVpBackingThreadPriorityFromTopLevel.c)
 *     KeTryToFreezeThreadStack @ 0x14056F618 (KeTryToFreezeThreadStack.c)
 *     KiAcquirePrcbLocksForPreemptionAttemptSlowPath @ 0x14057722C (KiAcquirePrcbLocksForPreemptionAttemptSlowPath.c)
 *     KiReleaseThreadStateLock @ 0x140577B78 (KiReleaseThreadStateLock.c)
 *     KiSetHeteroPolicyThread @ 0x140577EFC (KiSetHeteroPolicyThread.c)
 *     KeAbCrossThreadDelete @ 0x140579A60 (KeAbCrossThreadDelete.c)
 *     KeTransitionProcessorParkState @ 0x14057DD5C (KeTransitionProcessorParkState.c)
 *     KiAttemptToUnparkIdleSoftParkedProcessorOnSchedule @ 0x14057E01C (KiAttemptToUnparkIdleSoftParkedProcessorOnSchedule.c)
 *     KiParkCurrentProcessor @ 0x14057E38C (KiParkCurrentProcessor.c)
 *     KiUnparkCurrentProcessor @ 0x14057EB44 (KiUnparkCurrentProcessor.c)
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
