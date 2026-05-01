/*
 * XREFs of ?RmpPolicyGenerateRevokeListForQueryableResources@@YAJPEAU_RM_POLICY@@_KPEAU_RM_RESOURCE_USAGE_LIMITS@@W4Enum@Priority@ExecutionModel@@PEAU_RM_SYSTEM_MEMORY_METRICS@@PEAU_RM_ACTIVITY_HOST@@PEAU_RM_POLICY_WORK_BUFFER@@EPEAU_RM_INTERNAL_RESOURCE_REVOKE_CONTEXT@@@Z @ 0x180050340
 * Callers:
 *     ?EvaluateResourceRequest@ResourceSet@ExecutionModel@@QEAAJ_KPEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@PEAU_RM_INTERNAL_RESOURCE_REVOKE_CONTEXT@@PEA_N4@Z @ 0x180050CD0 (-EvaluateResourceRequest@ResourceSet@ExecutionModel@@QEAAJ_KPEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_.c)
 * Callees:
 *     ?RmpEmPriorityCompare@@YAJW4Enum@Priority@ExecutionModel@@0@Z @ 0x18000DEDC (-RmpEmPriorityCompare@@YAJW4Enum@Priority@ExecutionModel@@0@Z.c)
 *     ?RmpPolicyEnsureMetricsForAcquire@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x18008A848 (-RmpPolicyEnsureMetricsForAcquire@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z.c)
 *     ?RmpPolicyGenerateReclaimListForCommit@@YAEPEAU_RM_PARTITION@@PEAU_RM_POLICY_WORK_BUFFER@@PEAU_RM_ACTIVITY_HOST@@_KW4Enum@Priority@ExecutionModel@@W4_RM_REVOKE_POLICY@@@Z @ 0x18008A89C (-RmpPolicyGenerateReclaimListForCommit@@YAEPEAU_RM_PARTITION@@PEAU_RM_POLICY_WORK_BUFFER@@PEAU_R.c)
 */

__int64 __fastcall RmpPolicyGenerateRevokeListForQueryableResources(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        int a4,
        struct _RM_SYSTEM_MEMORY_METRICS *a5,
        __int64 a6,
        __int64 a7,
        char a8,
        __int64 a9)
{
  unsigned int v9; // ebx
  unsigned __int64 v14; // r15
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // r14
  unsigned __int64 v17; // r9
  unsigned __int64 v18; // r9

  v9 = 0;
  if ( !a2 )
    goto LABEL_2;
  if ( a2 + *((_QWORD *)a5 + 2) + 1 < a2 )
  {
    *(_DWORD *)(a7 + 40) = 0;
    return (unsigned int)-1073741670;
  }
  if ( *((_QWORD *)a5 + 1) < a2 && !a8 )
    return (unsigned int)-1073741670;
  v14 = *(_QWORD *)(a3 + 48);
  if ( (int)RmpEmPriorityCompare(a4, *(_DWORD *)(a1 + 116)) >= 0 )
    v16 = v14;
  else
    v16 = *(_QWORD *)(a3 + 32);
  if ( v15 >= v14 || v15 >= v16 )
  {
    RmpPolicyEnsureMetricsForAcquire(*(struct _RM_PARTITION **)(a9 + 16), a5);
    if ( (int)RmpEmPriorityCompare(a4, *(_DWORD *)(a1 + 116)) >= 0
      || (v17 = *((_QWORD *)a5 + 2) + a2 - *((_QWORD *)a5 + 4), v17 < v16) )
    {
      v18 = a2 + *((_QWORD *)a5 + 2);
      if ( v18 < v14 )
      {
        *(_DWORD *)(a9 + 36) = 0;
        goto LABEL_3;
      }
      RmpPolicyGenerateReclaimListForCommit(*(_QWORD *)(a9 + 16), a7, a6, v18 - v14 + 1, a4, 2);
      *(_DWORD *)(a9 + 36) = 2;
    }
    else
    {
      RmpPolicyGenerateReclaimListForCommit(*(_QWORD *)(a9 + 16), a7, a6, v17 - v16, a4, 1);
      *(_DWORD *)(a9 + 36) = 1;
    }
    return 259;
  }
LABEL_2:
  *(_DWORD *)(a9 + 36) = 0;
LABEL_3:
  *(_DWORD *)(a7 + 40) = 0;
  return v9;
}
