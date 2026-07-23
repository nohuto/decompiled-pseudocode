/*
 * XREFs of KiFindRescheduleContextEntryForPrcb @ 0x140243C40
 * Callers:
 *     KiRescheduleThreadAfterAffinityChange @ 0x140203570 (KiRescheduleThreadAfterAffinityChange.c)
 *     KiSearchForNewThread @ 0x140240420 (KiSearchForNewThread.c)
 *     KiSearchForNewThreadOnProcessor @ 0x140240D60 (KiSearchForNewThreadOnProcessor.c)
 *     KeWaitForSingleObject @ 0x140243DB0 (KeWaitForSingleObject.c)
 *     KiExecuteAllDpcs @ 0x140244590 (KiExecuteAllDpcs.c)
 *     KeYieldExecution @ 0x140246AC0 (KeYieldExecution.c)
 *     KiQuantumEnd @ 0x1402487C0 (KiQuantumEnd.c)
 *     KiExitThreadWait @ 0x1402BBF20 (KiExitThreadWait.c)
 *     KiSetSystemAffinityThread @ 0x1403073EC (KiSetSystemAffinityThread.c)
 *     KiDeferGroupSchedulingPreemption @ 0x140307814 (KiDeferGroupSchedulingPreemption.c)
 *     KiGroupSchedulingQuantumEnd @ 0x1403081E4 (KiGroupSchedulingQuantumEnd.c)
 *     KiGroupSchedulingGenerationEnd @ 0x140308538 (KiGroupSchedulingGenerationEnd.c)
 *     KiHandleDeferredPreemption @ 0x140309458 (KiHandleDeferredPreemption.c)
 *     KeWaitForMultipleObjects @ 0x140311430 (KeWaitForMultipleObjects.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x14039E0CC (KiUpdateGlobalCpuSetConfiguration.c)
 *     KiAdjustRescheduleContextForParking @ 0x14058052C (KiAdjustRescheduleContextForParking.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall KiFindRescheduleContextEntryForPrcb(_BYTE *a1, __int64 a2)
{
  int v2; // r9d
  _QWORD *result; // rax

  v2 = 0;
  if ( !*a1 )
    return 0LL;
  for ( result = a1 + 16; *result != a2; result += 5 )
  {
    if ( ++v2 >= (unsigned int)(unsigned __int8)*a1 )
      return 0LL;
  }
  return result;
}
