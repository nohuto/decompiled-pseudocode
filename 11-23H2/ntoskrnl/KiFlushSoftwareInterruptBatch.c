/*
 * XREFs of KiFlushSoftwareInterruptBatch @ 0x140252820
 * Callers:
 *     KiSetLegacyAffinityThread @ 0x140201F04 (KiSetLegacyAffinityThread.c)
 *     KeSetUserAffinityThread @ 0x1402028C4 (KeSetUserAffinityThread.c)
 *     KiRescheduleThreadAfterAffinityChange @ 0x140203570 (KiRescheduleThreadAfterAffinityChange.c)
 *     KeBoostPriorityThread @ 0x1402039B4 (KeBoostPriorityThread.c)
 *     KeSetSchedulingGroupRankBias @ 0x140205AD8 (KeSetSchedulingGroupRankBias.c)
 *     KiExitDispatcher @ 0x14023CE40 (KiExitDispatcher.c)
 *     KiSearchForNewThread @ 0x140240420 (KiSearchForNewThread.c)
 *     KiSearchForNewThreadOnProcessor @ 0x140240D60 (KiSearchForNewThreadOnProcessor.c)
 *     KeWaitForSingleObject @ 0x140243DB0 (KeWaitForSingleObject.c)
 *     KiExecuteAllDpcs @ 0x140244590 (KiExecuteAllDpcs.c)
 *     KeYieldExecution @ 0x140246AC0 (KeYieldExecution.c)
 *     KiEnterLongDpcProcessing @ 0x140247AD0 (KiEnterLongDpcProcessing.c)
 *     KiQuantumEnd @ 0x1402487C0 (KiQuantumEnd.c)
 *     KiReadyDeferredReadyList @ 0x140249D60 (KiReadyDeferredReadyList.c)
 *     KiProcessThreadWaitList @ 0x140253E80 (KiProcessThreadWaitList.c)
 *     KiSetPriorityThread @ 0x1402B0860 (KiSetPriorityThread.c)
 *     KiProcessDeferredReadyList @ 0x1402B1100 (KiProcessDeferredReadyList.c)
 *     KiDirectSwitchThread @ 0x1402B1B30 (KiDirectSwitchThread.c)
 *     KeSetBasePriorityThread @ 0x1402BA030 (KeSetBasePriorityThread.c)
 *     KiRemoveBoostThread @ 0x1402BB4E0 (KiRemoveBoostThread.c)
 *     KiDeferredReadyThread @ 0x1402BBCF0 (KiDeferredReadyThread.c)
 *     KiAbDeferredProcessingWorker @ 0x1402BBD80 (KiAbDeferredProcessingWorker.c)
 *     KiExitThreadWait @ 0x1402BBF20 (KiExitThreadWait.c)
 *     KiNormalPriorityReadyScan @ 0x140307080 (KiNormalPriorityReadyScan.c)
 *     KiSetSystemAffinityThread @ 0x1403073EC (KiSetSystemAffinityThread.c)
 *     KiDeferGroupSchedulingPreemption @ 0x140307814 (KiDeferGroupSchedulingPreemption.c)
 *     KiGroupSchedulingQuantumEnd @ 0x1403081E4 (KiGroupSchedulingQuantumEnd.c)
 *     KiGroupSchedulingGenerationEnd @ 0x140308538 (KiGroupSchedulingGenerationEnd.c)
 *     KiHandleDeferredPreemption @ 0x140309458 (KiHandleDeferredPreemption.c)
 *     KeWaitForMultipleObjects @ 0x140311430 (KeWaitForMultipleObjects.c)
 *     KiAbThreadUnboostCpuPriority @ 0x140318150 (KiAbThreadUnboostCpuPriority.c)
 *     KiInswapAndReadyThread @ 0x14034DBDC (KiInswapAndReadyThread.c)
 *     KiApplyForegroundBoostThread @ 0x140350678 (KiApplyForegroundBoostThread.c)
 *     KeRevertToUserMultipleGroupAffinityThread @ 0x14036C2B8 (KeRevertToUserMultipleGroupAffinityThread.c)
 *     KeSetSystemMultipleGroupAffinityThread @ 0x14036CD14 (KeSetSystemMultipleGroupAffinityThread.c)
 *     KeSetCpuSetsProcess @ 0x14039CD04 (KeSetCpuSetsProcess.c)
 *     KeCpuSetReportParkedProcessors @ 0x14039D894 (KeCpuSetReportParkedProcessors.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x14039E0CC (KiUpdateGlobalCpuSetConfiguration.c)
 *     KeUpdateThreadCpuSets @ 0x14039E2C8 (KeUpdateThreadCpuSets.c)
 *     KeSetUserGroupAffinityThread @ 0x1403AAF8C (KeSetUserGroupAffinityThread.c)
 *     KiProcessPendingForegroundBoosts @ 0x1403D0A80 (KiProcessPendingForegroundBoosts.c)
 *     KiSendHeteroRescheduleIntRequestHelper @ 0x140462644 (KiSendHeteroRescheduleIntRequestHelper.c)
 *     KeSetThreadSchedulerAssist @ 0x14056D8DC (KeSetThreadSchedulerAssist.c)
 *     KiUpdateVpBackingThreadPriorityDpcRoutine @ 0x14056E580 (KiUpdateVpBackingThreadPriorityDpcRoutine.c)
 *     KeRecomputeCpuSetAffinityProcess @ 0x140575794 (KeRecomputeCpuSetAffinityProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x140576070 (KeSetSelectedCpuSetsThread.c)
 *     KiSetHeteroPolicyThread @ 0x140577EFC (KiSetHeteroPolicyThread.c)
 *     KiParkCurrentProcessor @ 0x14057E38C (KiParkCurrentProcessor.c)
 *     KiSoftParkElectionDpcRoutine @ 0x14057E740 (KiSoftParkElectionDpcRoutine.c)
 * Callees:
 *     HalRequestIpiSpecifyVector @ 0x140254750 (HalRequestIpiSpecifyVector.c)
 *     HalSendSoftwareInterrupt @ 0x1402547F0 (HalSendSoftwareInterrupt.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall KiFlushSoftwareInterruptBatch(unsigned __int8 *a1)
{
  __int64 result; // rax
  bool v3; // zf
  struct _KPRCB *CurrentPrcb; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  _QWORD *v7; // rdi
  __int64 v8; // r8

  result = a1[1];
  if ( (_BYTE)result )
  {
    v3 = (_BYTE)result == 1;
    CurrentPrcb = KeGetCurrentPrcb();
    if ( v3 )
    {
      v5 = *a1;
      v6 = *((unsigned int *)a1 + 1);
      ++CurrentPrcb->SynchCounters.IpiSendSoftwareInterruptCount;
      result = HalSendSoftwareInterrupt(v6, v5);
      v7 = a1 + 8;
    }
    else
    {
      v7 = a1 + 8;
      v8 = 47LL;
      if ( *a1 == 1 )
        v8 = 31LL;
      ++CurrentPrcb->SynchCounters.IpiSendSoftwareInterruptCount;
      result = HalRequestIpiSpecifyVector(0LL, a1 + 8, v8);
    }
    if ( a1[1] == 2 )
    {
      *v7 = 2097153LL;
      result = (__int64)memset(v7 + 1, 0, 0x100uLL);
    }
    a1[1] = 0;
    *((_DWORD *)a1 + 1) = 0xFFFF;
  }
  return result;
}
