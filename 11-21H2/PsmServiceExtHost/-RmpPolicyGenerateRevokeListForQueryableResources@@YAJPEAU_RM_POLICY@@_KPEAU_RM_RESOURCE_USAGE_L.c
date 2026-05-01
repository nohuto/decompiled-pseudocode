/*
 * XREFs of ?RmpPolicyGenerateRevokeListForQueryableResources@@YAJPEAU_RM_POLICY@@_KPEAU_RM_RESOURCE_USAGE_LIMITS@@W4Enum@Priority@ExecutionModel@@W4_RM_PEND_TYPE@@PEAU_RM_SYSTEM_MEMORY_METRICS@@PEAU_RM_ACTIVITY_HOST@@PEAU_RM_POLICY_WORK_BUFFER@@EPEAU_RM_INTERNAL_RESOURCE_REVOKE_CONTEXT@@@Z @ 0x18008D604
 * Callers:
 *     ?EvaluateResourceRequest@ResourceSet@ExecutionModel@@QEAAJ_KW4Enum@PendType@2@PEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@PEAU_RM_INTERNAL_RESOURCE_REVOKE_CONTEXT@@PEA_N5@Z @ 0x18008E5D0 (-EvaluateResourceRequest@ResourceSet@ExecutionModel@@QEAAJ_KW4Enum@PendType@2@PEAU_RM_RESOURCE_U.c)
 * Callees:
 *     ?RmpEmPriorityCompare@@YAJW4Enum@Priority@ExecutionModel@@0@Z @ 0x180083D1C (-RmpEmPriorityCompare@@YAJW4Enum@Priority@ExecutionModel@@0@Z.c)
 *     ?RmpPolicyEnsureMetricsForAcquire@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x18008D1F0 (-RmpPolicyEnsureMetricsForAcquire@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z.c)
 *     ?RmpPolicyGenerateReclaimListForCommit@@YAEPEAU_RM_PARTITION@@PEAU_RM_POLICY_WORK_BUFFER@@PEAU_RM_ACTIVITY_HOST@@_KW4Enum@Priority@ExecutionModel@@W4_RM_REVOKE_POLICY@@@Z @ 0x18008D3D4 (-RmpPolicyGenerateReclaimListForCommit@@YAEPEAU_RM_PARTITION@@PEAU_RM_POLICY_WORK_BUFFER@@PEAU_R.c)
 */

__int64 __fastcall RmpPolicyGenerateRevokeListForQueryableResources(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        struct _RM_SYSTEM_MEMORY_METRICS *a6,
        __int64 a7,
        __int64 a8,
        char a9,
        __int64 a10)
{
  unsigned int v10; // ebx
  unsigned __int64 v15; // r15
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // r14
  unsigned __int64 v18; // r9
  unsigned __int64 v19; // r9

  v10 = 0;
  if ( a2 )
  {
    if ( a2 + *((_QWORD *)a6 + 2) + 1 < a2 )
    {
      *(_DWORD *)(a8 + 40) = 0;
      return (unsigned int)-1073741670;
    }
    if ( *((_QWORD *)a6 + 1) < a2 && !a9 )
      return (unsigned int)-1073741670;
    v15 = *(_QWORD *)(a3 + 48);
    if ( (int)RmpEmPriorityCompare(a4, *(_DWORD *)(a1 + 116)) >= 0 )
      v17 = v15;
    else
      v17 = *(_QWORD *)(a3 + 32);
    if ( v16 < v15 && v16 < v17 )
      goto LABEL_2;
    RmpPolicyEnsureMetricsForAcquire(*(struct _RM_PARTITION **)(a10 + 16), a6);
    if ( (int)RmpEmPriorityCompare(a4, *(_DWORD *)(a1 + 116)) >= 0
      || (v18 = a2 + *((_QWORD *)a6 + 2) - *((_QWORD *)a6 + 4), v18 < v17) )
    {
      v19 = a2 + *((_QWORD *)a6 + 2);
      if ( v19 < v15 )
      {
        *(_DWORD *)(a10 + 36) = 0;
        goto LABEL_3;
      }
      if ( a5 == 2 )
        return (unsigned int)-1073741670;
      RmpPolicyGenerateReclaimListForCommit(*(_QWORD *)(a10 + 16), a8, a7, v19 - v15 + 1, a4, 2u);
      *(_DWORD *)(a10 + 36) = 2;
    }
    else
    {
      if ( a5 == 2 )
        return (unsigned int)-1073741670;
      RmpPolicyGenerateReclaimListForCommit(*(_QWORD *)(a10 + 16), a8, a7, v18 - v17, a4, 1u);
      *(_DWORD *)(a10 + 36) = 1;
    }
    return 259;
  }
LABEL_2:
  *(_DWORD *)(a10 + 36) = 0;
LABEL_3:
  *(_DWORD *)(a8 + 40) = 0;
  return v10;
}
