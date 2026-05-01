/*
 * XREFs of ?EvaluateResourceRequest@ResourceSet@ExecutionModel@@QEAAJ_KW4Enum@PendType@2@PEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@PEAU_RM_INTERNAL_RESOURCE_REVOKE_CONTEXT@@PEA_N5@Z @ 0x18008E5D0
 * Callers:
 *     ?ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAJPEAU_RM_PARTITION@@PEAX@Z @ 0x180035090 (-ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAJPEAU_RM_PARTITION@@PEAX@Z.c)
 * Callees:
 *     ?RmpCommitValuesAdd@@YAJ_K0PEA_K@Z @ 0x18002AB3C (-RmpCommitValuesAdd@@YAJ_K0PEA_K@Z.c)
 *     ?HigherPriorityPending@BaseResourceSet@ExecutionModel@@AEAA_NKPEBU_ResourceInfo@2@W4Enum@Priority@2@@Z @ 0x18004183C (-HigherPriorityPending@BaseResourceSet@ExecutionModel@@AEAA_NKPEBU_ResourceInfo@2@W4Enum@Priorit.c)
 *     ?RmpPolicyGenerateRevokeListForQueryableResources@@YAJPEAU_RM_POLICY@@_KPEAU_RM_RESOURCE_USAGE_LIMITS@@W4Enum@Priority@ExecutionModel@@W4_RM_PEND_TYPE@@PEAU_RM_SYSTEM_MEMORY_METRICS@@PEAU_RM_ACTIVITY_HOST@@PEAU_RM_POLICY_WORK_BUFFER@@EPEAU_RM_INTERNAL_RESOURCE_REVOKE_CONTEXT@@@Z @ 0x18008D604 (-RmpPolicyGenerateRevokeListForQueryableResources@@YAJPEAU_RM_POLICY@@_KPEAU_RM_RESOURCE_USAGE_L.c)
 *     ?EvaluatePoolResourceRequest@ResourceSet@ExecutionModel@@QEAAJW4Enum@PendType@2@PEA_NPEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAW4_RM_REVOKE_POLICY@@@Z @ 0x18008E4E4 (-EvaluatePoolResourceRequest@ResourceSet@ExecutionModel@@QEAAJW4Enum@PendType@2@PEA_NPEAV-$list@.c)
 */

int __fastcall ExecutionModel::ResourceSet::EvaluateResourceRequest(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        struct _RM_SYSTEM_MEMORY_METRICS *a5,
        unsigned __int64 a6,
        char *a7,
        char *a8)
{
  unsigned __int64 v8; // r15
  char *v10; // r14
  int result; // eax
  int RevokeListForQueryableResources; // eax
  __int64 v16; // rbp
  int v17; // edx
  char v18; // al
  char *v19; // rdi
  int v20; // ebp

  v8 = a6;
  v10 = a7;
  result = ExecutionModel::ResourceSet::EvaluatePoolResourceRequest(a1, a3, a7, *(_QWORD **)(a6 + 8), (int *)(a6 + 32));
  if ( result >= 0 )
  {
    RevokeListForQueryableResources = RmpCommitValuesAdd(*(_QWORD *)(a1 + 1448), a2, &a6);
    if ( RevokeListForQueryableResources < 0 )
      return RevokeListForQueryableResources | 0x10000000;
    v16 = *(_QWORD *)(*(_QWORD *)(a1 + 1312) + 64LL) + 160LL;
    if ( a3 )
    {
      if ( a3 == 1 )
      {
        v17 = 1;
      }
      else if ( a3 == 2 )
      {
        v17 = 2;
      }
      else
      {
        v17 = -1;
      }
    }
    else
    {
      v17 = 0;
    }
    RevokeListForQueryableResources = RmpPolicyGenerateRevokeListForQueryableResources(
                                        *(_QWORD *)(*(_QWORD *)(a1 + 24) + 128LL) + 400LL,
                                        a6,
                                        a4,
                                        *(_DWORD *)(a1 + 1288),
                                        v17,
                                        a5,
                                        *(_QWORD *)(a1 + 1320),
                                        v16,
                                        *(_BYTE *)(a1 + 1378) >> 7,
                                        v8);
    if ( RevokeListForQueryableResources == -1073741670 )
    {
      *a8 = 0;
    }
    else
    {
      if ( RevokeListForQueryableResources )
      {
        if ( RevokeListForQueryableResources != 259 )
          return RevokeListForQueryableResources | 0x10000000;
        v18 = 1;
      }
      else
      {
        v18 = 0;
      }
      v19 = a8;
      *a8 = v18;
      if ( *v10 )
      {
        *(_DWORD *)(v16 + 40) = 0;
        *(_DWORD *)(v8 + 36) = 0;
        *v19 = 0;
        return 0;
      }
      if ( v18 )
        return 0;
      v20 = *(_DWORD *)(a1 + 1288);
      if ( ExecutionModel::BaseResourceSet::HigherPriorityPending(
             *(_QWORD *)(a1 + 64),
             1u,
             (unsigned int *)(a1 + 1464),
             v20) )
      {
        if ( a3 == 1 )
        {
          *v10 = 1;
          return 0;
        }
      }
      else
      {
        if ( !ExecutionModel::BaseResourceSet::HigherPriorityPending(
                *(_QWORD *)(a1 + 64),
                1u,
                (unsigned int *)(a1 + 1440),
                v20) )
          return 0;
        if ( a3 == 1 )
        {
          *v19 = 1;
          return 0;
        }
      }
    }
    return -2147220992;
  }
  return result;
}
