/*
 * XREFs of KiAdjustRescheduleContextEntryForThreadRemoval @ 0x14030819C
 * Callers:
 *     KiRescheduleThreadAfterAffinityChange @ 0x140203570 (KiRescheduleThreadAfterAffinityChange.c)
 *     KiSearchForNewThread @ 0x140240420 (KiSearchForNewThread.c)
 *     KiSearchForNewThreadOnProcessor @ 0x140240D60 (KiSearchForNewThreadOnProcessor.c)
 *     KeWaitForSingleObject @ 0x140243DB0 (KeWaitForSingleObject.c)
 *     KiExecuteAllDpcs @ 0x140244590 (KiExecuteAllDpcs.c)
 *     KiQuantumEnd @ 0x1402487C0 (KiQuantumEnd.c)
 *     KiDirectSwitchThread @ 0x1402B1B30 (KiDirectSwitchThread.c)
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
