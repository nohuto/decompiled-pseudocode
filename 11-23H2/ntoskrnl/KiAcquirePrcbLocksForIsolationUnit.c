/*
 * XREFs of KiAcquirePrcbLocksForIsolationUnit @ 0x140246770
 * Callers:
 *     KiSetAffinityThread @ 0x14020327C (KiSetAffinityThread.c)
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
 *     KeYieldExecution @ 0x1402469F0 (KeYieldExecution.c)
 *     KiQuantumEnd @ 0x1402486F0 (KiQuantumEnd.c)
 *     KeApplyWobBamQos @ 0x140259D70 (KeApplyWobBamQos.c)
 *     KeRemoveQueueEx @ 0x1402AA040 (KeRemoveQueueEx.c)
 *     KiSetPriorityThread @ 0x1402B05D0 (KiSetPriorityThread.c)
 *     KiAcquireThreadStateLockForWrite @ 0x1402B1730 (KiAcquireThreadStateLockForWrite.c)
 *     KiRemoveBoostThread @ 0x1402BB250 (KiRemoveBoostThread.c)
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
 *     KiUpdateGlobalCpuSetConfiguration @ 0x14039DEEC (KiUpdateGlobalCpuSetConfiguration.c)
 *     KiUpdateThreadCpuSets @ 0x14039EA40 (KiUpdateThreadCpuSets.c)
 *     KiSetIdealProcessorThread @ 0x1403CEFCC (KiSetIdealProcessorThread.c)
 *     KiSoftParkElectionUnparkProcessor @ 0x1404110CC (KiSoftParkElectionUnparkProcessor.c)
 *     KiHeteroChooseTargetProcessor @ 0x140461916 (KiHeteroChooseTargetProcessor.c)
 *     KiSendHeteroRescheduleIntRequestHelper @ 0x140462244 (KiSendHeteroRescheduleIntRequestHelper.c)
 *     KeSetThreadSchedulerAssist @ 0x14056D21C (KeSetThreadSchedulerAssist.c)
 *     KiUpdateVpBackingThreadPriorityFromTopLevel @ 0x14056E69C (KiUpdateVpBackingThreadPriorityFromTopLevel.c)
 *     KeTryToFreezeThreadStack @ 0x14056F0D8 (KeTryToFreezeThreadStack.c)
 *     KiAcquirePrcbLocksForPreemptionAttemptSlowPath @ 0x140576D3C (KiAcquirePrcbLocksForPreemptionAttemptSlowPath.c)
 *     KiSetHeteroPolicyThread @ 0x140577A0C (KiSetHeteroPolicyThread.c)
 *     KeAbCrossThreadDelete @ 0x140579570 (KeAbCrossThreadDelete.c)
 *     KeTransitionProcessorParkState @ 0x14057D86C (KeTransitionProcessorParkState.c)
 *     KiAttemptToUnparkIdleSoftParkedProcessorOnSchedule @ 0x14057DB2C (KiAttemptToUnparkIdleSoftParkedProcessorOnSchedule.c)
 *     KiCompleteKernelInit @ 0x140A8CAE0 (KiCompleteKernelInit.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140242E40 (KeYieldProcessorEx.c)
 */

__int64 __fastcall KiAcquirePrcbLocksForIsolationUnit(__int64 a1, int a2, __int64 *a3)
{
  __int64 result; // rax
  __int64 *v4; // rdi
  unsigned __int8 *v5; // rax
  __int64 v6; // rsi
  __int64 v7; // rbx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF
  int v9; // [rsp+38h] [rbp+10h] BYREF

  v8 = a1;
  result = a1 ^ ((unsigned __int8)a1 ^ (unsigned __int8)a2) & 1;
  *a3 = result;
  if ( a2 )
  {
    if ( a2 != 1 )
      return result;
    v5 = *(unsigned __int8 **)(a1 + 34904);
    v4 = (__int64 *)(v5 + 8);
    result = *v5;
    if ( !(_DWORD)result )
      return result;
  }
  else
  {
    v4 = &v8;
    result = 1LL;
  }
  v6 = (unsigned int)result;
  do
  {
    v7 = *v4;
    v9 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 48), 0LL) )
    {
      do
      {
        KeYieldProcessorEx(&v9);
        result = *(_QWORD *)(v7 + 48);
      }
      while ( result );
    }
    ++v4;
    --v6;
  }
  while ( v6 );
  return result;
}
