/*
 * XREFs of KiInsertDeferredReadyList @ 0x1402B9C54
 * Callers:
 *     KiSearchForNewThreadOnProcessor @ 0x140240C90 (KiSearchForNewThreadOnProcessor.c)
 *     KiSearchForNewThreadsForRescheduleContext @ 0x1402425A0 (KiSearchForNewThreadsForRescheduleContext.c)
 *     KiScheduleThreadToRescheduleContext @ 0x140243A40 (KiScheduleThreadToRescheduleContext.c)
 *     KiExecuteAllDpcs @ 0x1402444C0 (KiExecuteAllDpcs.c)
 *     KiEnterLongDpcProcessing @ 0x140247A00 (KiEnterLongDpcProcessing.c)
 *     KiQuantumEnd @ 0x1402486F0 (KiQuantumEnd.c)
 *     KiDirectSwitchThread @ 0x1402B18A0 (KiDirectSwitchThread.c)
 *     KiPrepareReadyThreadForRescheduling @ 0x1402BD250 (KiPrepareReadyThreadForRescheduling.c)
 *     KiNormalPriorityReadyScan @ 0x140306DF0 (KiNormalPriorityReadyScan.c)
 *     KiDeferGroupSchedulingPreemption @ 0x140307584 (KiDeferGroupSchedulingPreemption.c)
 *     KiGroupSchedulingGenerationEnd @ 0x1403082A8 (KiGroupSchedulingGenerationEnd.c)
 *     KiMoveScbThreadsToNewReadylist @ 0x14030897C (KiMoveScbThreadsToNewReadylist.c)
 *     KiFlushReadyLists @ 0x14057DDB4 (KiFlushReadyLists.c)
 * Callees:
 *     KiEnterDeferredReadyState @ 0x1402B9190 (KiEnterDeferredReadyState.c)
 */

__int64 __fastcall KiInsertDeferredReadyList(__int64 a1, __int64 a2)
{
  __int64 *v2; // r9
  __int64 result; // rax
  __int64 *v4; // r8

  KiEnterDeferredReadyState(a2);
  result = *v2;
  v4 += 27;
  *v4 = *v2;
  *v2 = (__int64)v4;
  return result;
}
