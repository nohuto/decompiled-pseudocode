/*
 * XREFs of KiFindRescheduleContextEntryForPrcb @ 0x140243B70
 * Callers:
 *     KiRescheduleThreadAfterAffinityChange @ 0x140203570 (KiRescheduleThreadAfterAffinityChange.c)
 *     KiSearchForNewThread @ 0x140240350 (KiSearchForNewThread.c)
 *     KiSearchForNewThreadOnProcessor @ 0x140240C90 (KiSearchForNewThreadOnProcessor.c)
 *     KeWaitForSingleObject @ 0x140243CE0 (KeWaitForSingleObject.c)
 *     KiExecuteAllDpcs @ 0x1402444C0 (KiExecuteAllDpcs.c)
 *     KeYieldExecution @ 0x1402469F0 (KeYieldExecution.c)
 *     KiQuantumEnd @ 0x1402486F0 (KiQuantumEnd.c)
 *     KiExitThreadWait @ 0x1402BBC90 (KiExitThreadWait.c)
 *     KiSetSystemAffinityThread @ 0x14030715C (KiSetSystemAffinityThread.c)
 *     KiDeferGroupSchedulingPreemption @ 0x140307584 (KiDeferGroupSchedulingPreemption.c)
 *     KiGroupSchedulingQuantumEnd @ 0x140307F54 (KiGroupSchedulingQuantumEnd.c)
 *     KiGroupSchedulingGenerationEnd @ 0x1403082A8 (KiGroupSchedulingGenerationEnd.c)
 *     KiHandleDeferredPreemption @ 0x1403091C8 (KiHandleDeferredPreemption.c)
 *     KeWaitForMultipleObjects @ 0x1403111A0 (KeWaitForMultipleObjects.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x14039DEEC (KiUpdateGlobalCpuSetConfiguration.c)
 *     KiAdjustRescheduleContextForParking @ 0x14058003C (KiAdjustRescheduleContextForParking.c)
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
