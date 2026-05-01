/*
 * XREFs of ?RmpMemoryMonitorEmptyPolicyProcessHostArray@@YAXPEAU_RM_ACTIVITY_HOST_METRICS@@KK@Z @ 0x1800914B0
 * Callers:
 *     ?RmpMemoryMonitorEmptyWorkingSets@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1K@Z @ 0x1800915A8 (-RmpMemoryMonitorEmptyWorkingSets@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PE.c)
 * Callees:
 *     ?RmpPolicyActivityHostIsValidEmptyTarget@@YAEPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18008D124 (-RmpPolicyActivityHostIsValidEmptyTarget@@YAEPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpPolicyComputeDesiredEmptyState@@YA?AT_RM_OPTIMIZATION_STATE@@PEAU_RM_POLICY@@PEAU_RM_ACTIVITY_HOST@@W4_RM_EMPTY_POLICY@@@Z @ 0x18008D18C (-RmpPolicyComputeDesiredEmptyState@@YA-AT_RM_OPTIMIZATION_STATE@@PEAU_RM_POLICY@@PEAU_RM_ACTIVIT.c)
 *     ?RmpMemoryMonitorIsLargeAppTerminationTarget@@YAEPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ACTIVITY_HOST_METRICS@@@Z @ 0x180091924 (-RmpMemoryMonitorIsLargeAppTerminationTarget@@YAEPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ACTIVITY_HOST_ME.c)
 */

void __fastcall RmpMemoryMonitorEmptyPolicyProcessHostArray(
        struct _RM_ACTIVITY_HOST_METRICS *a1,
        unsigned int a2,
        char a3)
{
  size_t v3; // rsi
  __int64 v4; // r11
  char v5; // r12
  char v6; // r14
  _WORD *v9; // rbx
  __int64 v10; // r15
  __int64 v11; // rbp
  unsigned __int8 IsLargeAppTerminationTarget; // al
  int v13; // eax
  int (__cdecl *v14)(const void *, const void *); // r9

  v3 = a2;
  v4 = 1LL;
  v5 = 0;
  v6 = a3 & 1;
  if ( a2 )
  {
    v9 = (_WORD *)((char *)a1 + 60);
    v10 = a2;
    do
    {
      v11 = *(_QWORD *)(v9 - 6);
      if ( v6
        && (IsLargeAppTerminationTarget = RmpMemoryMonitorIsLargeAppTerminationTarget(
                                            *(struct _RM_ACTIVITY_HOST **)(v9 - 6),
                                            (struct _RM_ACTIVITY_HOST_METRICS *)(v9 - 30)),
            v4 = 1LL,
            IsLargeAppTerminationTarget) )
      {
        *v9 |= 0x8000u;
      }
      else if ( !v5 && RmpPolicyActivityHostIsValidEmptyTarget((struct _RM_ACTIVITY_HOST *)v11) )
      {
        v13 = RmpPolicyComputeDesiredEmptyState(*(_QWORD *)(v11 + 48) + 400LL, v11, v4);
        if ( (v13 & *(_DWORD *)(v11 + 1260)) != v13 )
          v5 = v4;
      }
      v9 += 32;
      v10 -= v4;
    }
    while ( v10 );
  }
  v14 = (int (__cdecl *)(const void *, const void *))RmpMemoryMonitorCompareActivityHostsForCommitSave;
  if ( (a3 & 0x10) == 0 )
    v14 = (int (__cdecl *)(const void *, const void *))RmpMemoryMonitorCompareActivityHostsForEmpty;
  qsort(a1, v3, 0x40uLL, v14);
}
