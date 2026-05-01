/*
 * XREFs of ?RmpMemoryMonitorCompareActivityHostsForEmpty@@YAHPEBX0@Z @ 0x18008CE00
 * Callers:
 *     <none>
 * Callees:
 *     ?RmpPolicyActivityHostIsValidEmptyTarget@@YAEPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180056098 (-RmpPolicyActivityHostIsValidEmptyTarget@@YAEPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpPolicyComputeDesiredEmptyState@@YA?AT_RM_OPTIMIZATION_STATE@@PEAU_RM_POLICY@@PEAU_RM_ACTIVITY_HOST@@W4_RM_EMPTY_POLICY@@@Z @ 0x1800562BC (-RmpPolicyComputeDesiredEmptyState@@YA-AT_RM_OPTIMIZATION_STATE@@PEAU_RM_POLICY@@PEAU_RM_ACTIVIT.c)
 *     ?RmpMemoryMonitorCompareActivityHostMetricsForLargeHostAndEmpty@@YAHPEAU_RM_ACTIVITY_HOST_METRICS@@0@Z @ 0x18008CCD4 (-RmpMemoryMonitorCompareActivityHostMetricsForLargeHostAndEmpty@@YAHPEAU_RM_ACTIVITY_HOST_METRIC.c)
 */

__int64 __fastcall RmpMemoryMonitorCompareActivityHostsForEmpty(
        struct _RM_ACTIVITY_HOST_METRICS *a1,
        struct _RM_ACTIVITY_HOST_METRICS *a2)
{
  __int64 v2; // rbx
  __int64 v4; // rdi
  __int64 result; // rax
  int v7; // r11d
  unsigned int v8; // r12d
  __int64 v9; // r15
  int v10; // eax
  int v11; // r8d
  int v12; // r14d
  int v13; // eax
  int v14; // eax
  int v15; // r8d
  __int64 v16; // r10
  int v17; // eax
  char v18; // di
  int v19; // eax
  char v20; // r10
  unsigned int v21; // r11d
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rcx

  v2 = *((_QWORD *)a1 + 6);
  v4 = *((_QWORD *)a2 + 6);
  result = RmpMemoryMonitorCompareActivityHostMetricsForLargeHostAndEmpty(a1, a2);
  if ( !(_DWORD)result )
  {
    if ( RmpPolicyActivityHostIsValidEmptyTarget((struct _RM_ACTIVITY_HOST *)v2) )
    {
      v8 = v7 + 1;
      v9 = *(_QWORD *)(v2 + 48) + 400LL;
      v10 = RmpPolicyComputeDesiredEmptyState(v9, v2, v7 + 1);
      v12 = *(_DWORD *)(v2 + 1268);
      if ( (v10 & v12) == v10
        || (v13 = RmpPolicyComputeDesiredEmptyState(*(_QWORD *)(v4 + 48) + 400LL, v4, v11),
            (v13 & *(_DWORD *)(v4 + 1268)) != v13) )
      {
        v14 = RmpPolicyComputeDesiredEmptyState(v9, v2, v8);
        if ( (v14 & v12) == v14 )
        {
          v17 = RmpPolicyComputeDesiredEmptyState(v16 + *(_QWORD *)(v4 + 48), v4, v15);
          if ( (*(_DWORD *)(v4 + 1268) & v17) != v17 )
            return v8;
        }
        v18 = v8 & *(_BYTE *)(v4 + 1457);
        v19 = RmpPolicyComputeDesiredEmptyState(v9, v2, v8);
        if ( (v19 & v12) == v19 )
        {
          v24 = *((_QWORD *)a1 + 4) >> 1;
          if ( !v20 )
            v24 = *((_QWORD *)a1 + 4);
          v25 = *((_QWORD *)a2 + 4) >> 1;
          if ( !v18 )
            v25 = *((_QWORD *)a2 + 4);
          if ( v24 <= v25 )
          {
            LOBYTE(v21) = v24 < v25;
            return v21;
          }
        }
        else
        {
          v22 = *((_QWORD *)a1 + 3) >> 1;
          if ( !v20 )
            v22 = *((_QWORD *)a1 + 3);
          v23 = *((_QWORD *)a2 + 3) >> 1;
          if ( !v18 )
            v23 = *((_QWORD *)a2 + 3);
          if ( v22 <= v23 )
          {
            if ( v22 < v23 )
              return v8;
            return 0LL;
          }
        }
      }
      return 0xFFFFFFFFLL;
    }
    return 0LL;
  }
  return result;
}
