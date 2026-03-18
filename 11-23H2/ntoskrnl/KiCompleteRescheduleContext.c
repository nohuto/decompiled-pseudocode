/*
 * XREFs of KiCompleteRescheduleContext @ 0x140201EB0
 * Callers:
 *     KiRescheduleThreadAfterAffinityChange @ 0x140203570 (KiRescheduleThreadAfterAffinityChange.c)
 *     KiSearchForNewThread @ 0x140240350 (KiSearchForNewThread.c)
 *     KiSearchForNewThreadOnProcessor @ 0x140240C90 (KiSearchForNewThreadOnProcessor.c)
 *     KeWaitForSingleObject @ 0x140243CE0 (KeWaitForSingleObject.c)
 *     KiExecuteAllDpcs @ 0x1402444C0 (KiExecuteAllDpcs.c)
 *     KeYieldExecution @ 0x1402469F0 (KeYieldExecution.c)
 *     KiEnterLongDpcProcessing @ 0x140247A00 (KiEnterLongDpcProcessing.c)
 *     KiQuantumEnd @ 0x1402486F0 (KiQuantumEnd.c)
 *     KiSetPriorityThread @ 0x1402B05D0 (KiSetPriorityThread.c)
 *     KiDirectSwitchThread @ 0x1402B18A0 (KiDirectSwitchThread.c)
 *     KiRemoveBoostThread @ 0x1402BB250 (KiRemoveBoostThread.c)
 *     KiExitThreadWait @ 0x1402BBC90 (KiExitThreadWait.c)
 *     KiSetSystemAffinityThread @ 0x14030715C (KiSetSystemAffinityThread.c)
 *     KiDeferGroupSchedulingPreemption @ 0x140307584 (KiDeferGroupSchedulingPreemption.c)
 *     KiGroupSchedulingQuantumEnd @ 0x140307F54 (KiGroupSchedulingQuantumEnd.c)
 *     KiGroupSchedulingGenerationEnd @ 0x1403082A8 (KiGroupSchedulingGenerationEnd.c)
 *     KiHandleDeferredPreemption @ 0x1403091C8 (KiHandleDeferredPreemption.c)
 *     KeWaitForMultipleObjects @ 0x1403111A0 (KeWaitForMultipleObjects.c)
 *     KiApplyForegroundBoostThread @ 0x1403504D8 (KiApplyForegroundBoostThread.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x14039DEEC (KiUpdateGlobalCpuSetConfiguration.c)
 *     KiSoftParkElectionUnparkProcessor @ 0x1404110CC (KiSoftParkElectionUnparkProcessor.c)
 *     KiParkCurrentProcessor @ 0x14057DE9C (KiParkCurrentProcessor.c)
 * Callees:
 *     KiCompleteRescheduleContextEntry @ 0x140307D90 (KiCompleteRescheduleContextEntry.c)
 */

__int64 __fastcall KiCompleteRescheduleContext(_BYTE *a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 result; // rax

  v2 = 0LL;
  if ( *a1 )
  {
    do
    {
      KiCompleteRescheduleContextEntry(&a1[32 * v2 + 16 + 8 * (unsigned int)v2], a2);
      result = (unsigned __int8)*a1;
      v2 = (unsigned int)(v2 + 1);
    }
    while ( (unsigned int)v2 < (unsigned int)result );
  }
  return result;
}
