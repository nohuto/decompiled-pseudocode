/*
 * XREFs of ?RmpMemoryMonitorGetIdealTimerState@@YA?AW4_RM_MEMORY_MONITOR_PERIODIC_TIMER_STATE@@T_RM_SYSTEM_STATE@@@Z @ 0x180040F1C
 * Callers:
 *     ?RmpMemoryMonitorSetTimerIfEnabled@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@W4_RM_RESOURCE_USAGE_LEVEL@@@Z @ 0x180040EE4 (-RmpMemoryMonitorSetTimerIfEnabled@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@W4_RM_RESOURCE_USAGE_LEVEL@@.c)
 *     ?RmpMemoryMonitorInstanceOnSystemStateChanged@@YAJPEAU_RM_PARTITION@@PEAX@Z @ 0x180056C40 (-RmpMemoryMonitorInstanceOnSystemStateChanged@@YAJPEAU_RM_PARTITION@@PEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpMemoryMonitorGetIdealTimerState(char a1)
{
  if ( (a1 & 1) != 0 )
    return 0LL;
  else
    return (unsigned int)((a1 & 2) != 0) + 1;
}
