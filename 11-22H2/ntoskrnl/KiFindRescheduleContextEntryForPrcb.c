/*
 * XREFs of KiFindRescheduleContextEntryForPrcb @ 0x140243B50
 * Callers:
 *     KiRescheduleThreadAfterAffinityChange @ 0x140203570 (KiRescheduleThreadAfterAffinityChange.c)
 *     KiSearchForNewThread @ 0x140240330 (KiSearchForNewThread.c)
 *     KiSearchForNewThreadOnProcessor @ 0x140240C70 (KiSearchForNewThreadOnProcessor.c)
 *     KeWaitForSingleObject @ 0x140243CC0 (KeWaitForSingleObject.c)
 *     KiExecuteAllDpcs @ 0x1402444A0 (KiExecuteAllDpcs.c)
 *     KeYieldExecution @ 0x1402469D0 (KeYieldExecution.c)
 *     KiQuantumEnd @ 0x1402486D0 (KiQuantumEnd.c)
 *     KiExitThreadWait @ 0x1402BBC60 (KiExitThreadWait.c)
 *     KiSetSystemAffinityThread @ 0x14030702C (KiSetSystemAffinityThread.c)
 *     KiDeferGroupSchedulingPreemption @ 0x140307454 (KiDeferGroupSchedulingPreemption.c)
 *     KiGroupSchedulingQuantumEnd @ 0x140307E24 (KiGroupSchedulingQuantumEnd.c)
 *     KiGroupSchedulingGenerationEnd @ 0x140308178 (KiGroupSchedulingGenerationEnd.c)
 *     KiHandleDeferredPreemption @ 0x140309098 (KiHandleDeferredPreemption.c)
 *     KeWaitForMultipleObjects @ 0x140310FC0 (KeWaitForMultipleObjects.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x14039DBFC (KiUpdateGlobalCpuSetConfiguration.c)
 *     KiAdjustRescheduleContextForParking @ 0x1405800CC (KiAdjustRescheduleContextForParking.c)
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
