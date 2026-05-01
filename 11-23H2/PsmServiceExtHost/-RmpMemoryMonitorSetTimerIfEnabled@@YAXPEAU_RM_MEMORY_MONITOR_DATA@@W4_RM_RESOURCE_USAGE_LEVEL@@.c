/*
 * XREFs of ?RmpMemoryMonitorSetTimerIfEnabled@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@W4_RM_RESOURCE_USAGE_LEVEL@@@Z @ 0x180040E64
 * Callers:
 *     ?RmpMemoryMonitorWorker@@YAKPEAX@Z @ 0x180040A50 (-RmpMemoryMonitorWorker@@YAKPEAX@Z.c)
 * Callees:
 *     ?RmpMemoryMonitorSetTimer@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@W4_RM_MEMORY_MONITOR_PERIODIC_TIMER_STATE@@W4_RM_RESOURCE_USAGE_LEVEL@@@Z @ 0x1800116E8 (-RmpMemoryMonitorSetTimer@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@W4_RM_MEMORY_MONITOR_PERIODIC_TIMER_S.c)
 *     ?RmpMemoryMonitorGetIdealTimerState@@YA?AW4_RM_MEMORY_MONITOR_PERIODIC_TIMER_STATE@@T_RM_SYSTEM_STATE@@@Z @ 0x180040E9C (-RmpMemoryMonitorGetIdealTimerState@@YA-AW4_RM_MEMORY_MONITOR_PERIODIC_TIMER_STATE@@T_RM_SYSTEM_.c)
 */

__int64 __fastcall RmpMemoryMonitorSetTimerIfEnabled(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  char v3; // dl
  __int64 *v4; // r9

  result = RmpMemoryMonitorGetIdealTimerState(
             *(unsigned int *)(*(_QWORD *)(*(_QWORD *)a1 + 24LL) + 656LL),
             a2,
             *(_QWORD *)(*(_QWORD *)a1 + 24LL),
             a1);
  if ( (_DWORD)result )
    return RmpMemoryMonitorSetTimer(v4, result, v3);
  return result;
}
