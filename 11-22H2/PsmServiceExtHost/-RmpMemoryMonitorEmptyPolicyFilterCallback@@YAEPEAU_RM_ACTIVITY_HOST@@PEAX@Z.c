/*
 * XREFs of ?RmpMemoryMonitorEmptyPolicyFilterCallback@@YAEPEAU_RM_ACTIVITY_HOST@@PEAX@Z @ 0x180056650
 * Callers:
 *     <none>
 * Callees:
 *     ?RmpPolicyActivityHostIsValidEmptyTarget@@YAEPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180056098 (-RmpPolicyActivityHostIsValidEmptyTarget@@YAEPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpPolicyComputeDesiredEmptyState@@YA?AT_RM_OPTIMIZATION_STATE@@PEAU_RM_POLICY@@PEAU_RM_ACTIVITY_HOST@@W4_RM_EMPTY_POLICY@@@Z @ 0x1800562BC (-RmpPolicyComputeDesiredEmptyState@@YA-AT_RM_OPTIMIZATION_STATE@@PEAU_RM_POLICY@@PEAU_RM_ACTIVIT.c)
 *     ?RmpMemoryMonitorIsLargeAppTerminationTarget@@YAEPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ACTIVITY_HOST_METRICS@@@Z @ 0x18008D3F4 (-RmpMemoryMonitorIsLargeAppTerminationTarget@@YAEPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ACTIVITY_HOST_ME.c)
 */

bool __fastcall RmpMemoryMonitorEmptyPolicyFilterCallback(struct _RM_ACTIVITY_HOST *a1, void *a2)
{
  char v2; // si
  int v4; // edi
  int v5; // r11d

  v2 = (char)a2;
  if ( *((_DWORD *)a1 + 318) )
    return 0;
  v4 = *((_DWORD *)a1 + 317) & RmpPolicyComputeDesiredEmptyState(*((_QWORD *)a1 + 6) + 400LL, (__int64)a1, 1);
  if ( RmpPolicyActivityHostIsValidEmptyTarget(a1) && (v4 != v5 || (v2 & 0x20) == 0) )
    return 1;
  return (v2 & 1) != 0 && v4 != v5 && RmpMemoryMonitorIsLargeAppTerminationTarget(a1, 0LL) != 0;
}
