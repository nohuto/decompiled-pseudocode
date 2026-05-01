/*
 * XREFs of ?RmpPolicyComputeDesiredEmptyState@@YA?AT_RM_OPTIMIZATION_STATE@@PEAU_RM_POLICY@@PEAU_RM_ACTIVITY_HOST@@W4_RM_EMPTY_POLICY@@@Z @ 0x18005607C
 * Callers:
 *     ?RmpPolicyGetDesiredEmptyOptimizationsForHost@@YA?AT_RM_OPTIMIZATION_STATE@@PEAU_RM_POLICY@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001B0EC (-RmpPolicyGetDesiredEmptyOptimizationsForHost@@YA-AT_RM_OPTIMIZATION_STATE@@PEAU_RM_POLICY@@PEAU.c)
 *     ?RmpPolicyComputeDesiredState@@YA?AT_RM_OPTIMIZATION_STATE@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x180039634 (-RmpPolicyComputeDesiredState@@YA-AT_RM_OPTIMIZATION_STATE@@PEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpPolicyIsHostCommitSaveEligible@@YAKPEAU_RM_POLICY@@PEAU_RM_ACTIVITY_HOST@@K@Z @ 0x1800396E0 (-RmpPolicyIsHostCommitSaveEligible@@YAKPEAU_RM_POLICY@@PEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpPolicyActivityHostIsValidEmptyTarget@@YAEPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180055E58 (-RmpPolicyActivityHostIsValidEmptyTarget@@YAEPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpMemoryMonitorEmptyPolicyFilterCallback@@YAEPEAU_RM_ACTIVITY_HOST@@PEAX@Z @ 0x180056410 (-RmpMemoryMonitorEmptyPolicyFilterCallback@@YAEPEAU_RM_ACTIVITY_HOST@@PEAX@Z.c)
 *     ?RmpMemoryMonitorCompareActivityHostsForEmpty@@YAHPEBX0@Z @ 0x18008CAA0 (-RmpMemoryMonitorCompareActivityHostsForEmpty@@YAHPEBX0@Z.c)
 *     ?RmpMemoryMonitorEmptyPolicyActOnHosts@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_ACTIVITY_HOST_METRICS@@K_KKPEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@PEAE4@Z @ 0x18008CC20 (-RmpMemoryMonitorEmptyPolicyActOnHosts@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_ACTIVITY_HOST_ME.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpPolicyComputeDesiredEmptyState(__int64 a1, __int64 a2, int a3)
{
  int v3; // r9d
  int v4; // eax
  int v5; // edx
  int v6; // ecx
  int v7; // edx
  int v8; // ecx

  v3 = *(_DWORD *)(a2 + 1268);
  v4 = 0;
  v5 = *(_DWORD *)(a2 + 1456);
  v6 = *(_DWORD *)(a1 + 104);
  if ( (v3 & 0x10) == 0 && (v5 & 0x200) == 0 )
  {
    v4 = 2 * (v6 & 1);
    if ( (v5 & 0x100) == 0 )
      v4 |= 2 * (v6 & 2);
    if ( a3 > 0 )
    {
      v7 = v4 | 2;
      v8 = v6 & 4;
      if ( v8 )
        v7 = v4;
      v4 = v7;
      if ( a3 > 1 && !v8 )
        v4 = v7 | 0x20;
    }
  }
  return v3 & 0x27 | (unsigned int)v4;
}
