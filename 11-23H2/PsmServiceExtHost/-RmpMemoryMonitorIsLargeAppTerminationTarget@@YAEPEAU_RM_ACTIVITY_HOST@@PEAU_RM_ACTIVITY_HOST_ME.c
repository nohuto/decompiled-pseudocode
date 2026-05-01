/*
 * XREFs of ?RmpMemoryMonitorIsLargeAppTerminationTarget@@YAEPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ACTIVITY_HOST_METRICS@@@Z @ 0x18008D094
 * Callers:
 *     ?RmpMemoryMonitorEmptyPolicyFilterCallback@@YAEPEAU_RM_ACTIVITY_HOST@@PEAX@Z @ 0x180056410 (-RmpMemoryMonitorEmptyPolicyFilterCallback@@YAEPEAU_RM_ACTIVITY_HOST@@PEAX@Z.c)
 *     ?RmpMemoryMonitorEmptyPolicyProcessHostArray@@YAXPEAU_RM_ACTIVITY_HOST_METRICS@@KK@Z @ 0x18008CF20 (-RmpMemoryMonitorEmptyPolicyProcessHostArray@@YAXPEAU_RM_ACTIVITY_HOST_METRICS@@KK@Z.c)
 * Callees:
 *     ?RmpEmPriorityCompare@@YAJW4Enum@Priority@ExecutionModel@@0@Z @ 0x18000DEDC (-RmpEmPriorityCompare@@YAJW4Enum@Priority@ExecutionModel@@0@Z.c)
 *     ?RmpActivityHostIsRevocable@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002D3D0 (-RmpActivityHostIsRevocable@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 */

unsigned __int8 __fastcall RmpMemoryMonitorIsLargeAppTerminationTarget(
        struct _RM_ACTIVITY_HOST *a1,
        struct _RM_ACTIVITY_HOST_METRICS *a2)
{
  if ( RmpActivityHostIsRevocable(a1) )
  {
    if ( !a2 )
      return 1;
    if ( ((*((_BYTE *)a2 + 62) & 1) == 0
       || (int)RmpEmPriorityCompare(*((_DWORD *)a2 + 14), *(_DWORD *)(*((_QWORD *)a1 + 6) + 516LL)) <= 0)
      && (*((_BYTE *)a2 + 62) & 0x10) != 0 )
    {
      return *((_BYTE *)a2 + 60) & 1;
    }
  }
  return 0;
}
