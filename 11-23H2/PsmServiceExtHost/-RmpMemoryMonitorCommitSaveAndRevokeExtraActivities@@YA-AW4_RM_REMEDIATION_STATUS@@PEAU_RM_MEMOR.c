/*
 * XREFs of ?RmpMemoryMonitorCommitSaveAndRevokeExtraActivities@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1@Z @ 0x180056396
 * Callers:
 *     ?RmpMemoryMonitorCheckMetricsAndRemediateSingleStep@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_RM_RESOURCE_USAGE_STATS@@@Z @ 0x18002B070 (-RmpMemoryMonitorCheckMetricsAndRemediateSingleStep@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMOR.c)
 * Callees:
 *     ?RmpMemoryMonitorCheckQueueDecommitRepurposedMemory@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@@Z @ 0x1800562EE (-RmpMemoryMonitorCheckQueueDecommitRepurposedMemory@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@@Z.c)
 *     ?RmpMemoryMonitorEmptyWorkingSets@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1K@Z @ 0x180056758 (-RmpMemoryMonitorEmptyWorkingSets@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PE.c)
 *     ?RmpMemoryMonitorRevokeExtraActivities@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@_K@Z @ 0x180056AD0 (-RmpMemoryMonitorRevokeExtraActivities@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DAT.c)
 */

__int64 __fastcall RmpMemoryMonitorCommitSaveAndRevokeExtraActivities(
        struct _RM_MEMORY_MONITOR_DATA *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 result; // rax

  RmpMemoryMonitorCheckQueueDecommitRepurposedMemory(a1);
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)a1 + 24LL) + 508LL) & 2) == 0 )
    return RmpMemoryMonitorRevokeExtraActivities(a1, *(_QWORD *)(a3 + 16));
  result = RmpMemoryMonitorEmptyWorkingSets(a1, a2, a3, 31LL);
  if ( (_DWORD)result == 2 )
    return RmpMemoryMonitorRevokeExtraActivities(a1, *(_QWORD *)(a3 + 16));
  return result;
}
