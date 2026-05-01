/*
 * XREFs of ?RmpMemoryMonitorConvertResourceUsageLevel@@YA?AW4_RM_MEMORY_MONITOR_USAGE_LEVEL@@W4_RM_RESOURCE_USAGE_LEVEL@@@Z @ 0x180010CE8
 * Callers:
 *     ?RmpMemoryMonitorUpdateMemoryUsageMetrics@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_STATS@@@Z @ 0x180010BE4 (-RmpMemoryMonitorUpdateMemoryUsageMetrics@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAG.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpMemoryMonitorConvertResourceUsageLevel(char a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( a1 )
  {
    switch ( a1 )
    {
      case 1:
        return 1LL;
      case 2:
        return 2LL;
      case 3:
        return 3LL;
      case 4:
        return 4LL;
    }
  }
  return result;
}
