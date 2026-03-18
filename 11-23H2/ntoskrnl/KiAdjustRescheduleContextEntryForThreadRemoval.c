/*
 * XREFs of KiAdjustRescheduleContextEntryForThreadRemoval @ 0x140307F0C
 * Callers:
 *     KiRescheduleThreadAfterAffinityChange @ 0x140203570 (KiRescheduleThreadAfterAffinityChange.c)
 *     KiSearchForNewThread @ 0x140240350 (KiSearchForNewThread.c)
 *     KiSearchForNewThreadOnProcessor @ 0x140240C90 (KiSearchForNewThreadOnProcessor.c)
 *     KeWaitForSingleObject @ 0x140243CE0 (KeWaitForSingleObject.c)
 *     KiExecuteAllDpcs @ 0x1402444C0 (KiExecuteAllDpcs.c)
 *     KiQuantumEnd @ 0x1402486F0 (KiQuantumEnd.c)
 *     KiDirectSwitchThread @ 0x1402B18A0 (KiDirectSwitchThread.c)
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

__int64 __fastcall KiAdjustRescheduleContextEntryForThreadRemoval(__int64 *a1, __int64 a2, char a3, char a4)
{
  __int64 v4; // rdx
  __int64 result; // rax

  v4 = *a1;
  if ( a3 && (a1[4] & 0x20) == 0 )
    *((_BYTE *)a1 + 34) |= 1u;
  *((_BYTE *)a1 + 34) ^= (*((_BYTE *)a1 + 34) ^ (2 * a4)) & 2;
  a1[2] = *(_QWORD *)(v4 + 24);
  *((_BYTE *)a1 + 32) = a1[4] & 0xC0 | 5;
  result = *(_QWORD *)(v4 + 24);
  *((_BYTE *)a1 + 33) &= ~1u;
  a1[3] = result;
  return result;
}
