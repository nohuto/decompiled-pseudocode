/*
 * XREFs of ?EvaluateResourceRequest@ResourceSet@ExecutionModel@@QEAAJ_KPEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@PEAU_RM_INTERNAL_RESOURCE_REVOKE_CONTEXT@@PEA_N4@Z @ 0x180050ED0
 * Callers:
 *     ?ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAJPEAU_RM_PARTITION@@PEAX@Z @ 0x18000B420 (-ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAJPEAU_RM_PARTITION@@PEAX@Z.c)
 *     ?AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJXZ @ 0x180050828 (-AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJXZ.c)
 * Callees:
 *     ?HigherPriorityPending@BaseResourceSet@ExecutionModel@@AEAA_NKPEBU_ResourceInfo@2@W4Enum@Priority@2@@Z @ 0x180039930 (-HigherPriorityPending@BaseResourceSet@ExecutionModel@@AEAA_NKPEBU_ResourceInfo@2@W4Enum@Priorit.c)
 *     ?RmpCommitValuesAdd@@YAJ_K0PEA_K@Z @ 0x18003C5E0 (-RmpCommitValuesAdd@@YAJ_K0PEA_K@Z.c)
 *     ?RmpPolicyGenerateRevokeListForQueryableResources@@YAJPEAU_RM_POLICY@@_KPEAU_RM_RESOURCE_USAGE_LIMITS@@W4Enum@Priority@ExecutionModel@@PEAU_RM_SYSTEM_MEMORY_METRICS@@PEAU_RM_ACTIVITY_HOST@@PEAU_RM_POLICY_WORK_BUFFER@@EPEAU_RM_INTERNAL_RESOURCE_REVOKE_CONTEXT@@@Z @ 0x180050540 (-RmpPolicyGenerateRevokeListForQueryableResources@@YAJPEAU_RM_POLICY@@_KPEAU_RM_RESOURCE_USAGE_L.c)
 *     ?EvaluatePoolResourceRequest@ResourceSet@ExecutionModel@@QEAAJPEA_NPEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAW4_RM_REVOKE_POLICY@@@Z @ 0x180050DF4 (-EvaluatePoolResourceRequest@ResourceSet@ExecutionModel@@QEAAJPEA_NPEAV-$list@V-$CComPtr@VBaseRe.c)
 */

int __fastcall ExecutionModel::ResourceSet::EvaluateResourceRequest(
        ExecutionModel::ResourceSet *this,
        __int64 a2,
        struct _RM_RESOURCE_USAGE_LIMITS *a3,
        struct _RM_SYSTEM_MEMORY_METRICS *a4,
        struct _RM_INTERNAL_RESOURCE_REVOKE_CONTEXT *a5,
        bool *a6,
        bool *a7)
{
  struct _RM_INTERNAL_RESOURCE_REVOKE_CONTEXT *v7; // rsi
  bool *v9; // r14
  int result; // eax
  int RevokeListForQueryableResources; // eax
  __int64 v15; // r8
  __int64 v16; // rbp
  bool v17; // al
  bool *v18; // rdi

  v7 = a5;
  v9 = a6;
  result = ExecutionModel::ResourceSet::EvaluatePoolResourceRequest(
             (__int64)this,
             (char *)a6,
             *((__int64 **)a5 + 1),
             (int *)a5 + 8);
  if ( result >= 0 )
  {
    RevokeListForQueryableResources = RmpCommitValuesAdd(*((_QWORD *)this + 181), a2, (unsigned __int64 *)&a5);
    if ( RevokeListForQueryableResources < 0 )
      return RevokeListForQueryableResources | 0x10000000;
    v15 = *((_QWORD *)this + 165);
    v16 = *(_QWORD *)(v15 + 56) + 160LL;
    RevokeListForQueryableResources = RmpPolicyGenerateRevokeListForQueryableResources(
                                        *(_QWORD *)(*((_QWORD *)this + 3) + 128LL) + 400LL,
                                        (unsigned __int64)a5,
                                        (__int64)a3,
                                        *((_DWORD *)this + 336),
                                        a4,
                                        v15,
                                        v16,
                                        *((_BYTE *)this + 1378) >> 7,
                                        (__int64)v7);
    if ( RevokeListForQueryableResources == -1073741670 )
    {
      *a7 = 0;
      return -2147220992;
    }
    else
    {
      if ( RevokeListForQueryableResources )
      {
        if ( RevokeListForQueryableResources != 259 )
          return RevokeListForQueryableResources | 0x10000000;
        v17 = 1;
      }
      else
      {
        v17 = 0;
      }
      v18 = a7;
      *a7 = v17;
      if ( *v9 )
      {
        *(_DWORD *)(v16 + 40) = 0;
        *((_DWORD *)v7 + 9) = 0;
        *v18 = 0;
      }
      else if ( !v17 )
      {
        if ( ExecutionModel::BaseResourceSet::HigherPriorityPending(
               *((_QWORD *)this + 8),
               1u,
               (unsigned int *)this + 366,
               *((_DWORD *)this + 336)) )
        {
          *v9 = 1;
        }
        else if ( ExecutionModel::BaseResourceSet::HigherPriorityPending(
                    *((_QWORD *)this + 8),
                    1u,
                    (unsigned int *)this + 360,
                    *((_DWORD *)this + 336)) )
        {
          *v18 = 1;
        }
      }
      return 0;
    }
  }
  return result;
}
