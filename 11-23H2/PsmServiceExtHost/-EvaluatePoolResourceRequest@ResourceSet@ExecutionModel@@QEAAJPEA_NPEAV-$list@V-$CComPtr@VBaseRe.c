/*
 * XREFs of ?EvaluatePoolResourceRequest@ResourceSet@ExecutionModel@@QEAAJPEA_NPEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAW4_RM_REVOKE_POLICY@@@Z @ 0x180050BF4
 * Callers:
 *     ?EvaluateResourceRequest@ResourceSet@ExecutionModel@@QEAAJ_KPEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@PEAU_RM_INTERNAL_RESOURCE_REVOKE_CONTEXT@@PEA_N4@Z @ 0x180050CD0 (-EvaluateResourceRequest@ResourceSet@ExecutionModel@@QEAAJ_KPEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_.c)
 * Callees:
 *     ?CheckPoolResources@BaseResourceSet@ExecutionModel@@AEAAJKPEBU_ResourceInfo@2@K_NPEA_N2PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@Z @ 0x18003A0EC (-CheckPoolResources@BaseResourceSet@ExecutionModel@@AEAAJKPEBU_ResourceInfo@2@K_NPEA_N2PEAV-$lis.c)
 *     ?clear@?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@QEAAXXZ @ 0x18003D400 (-clear@-$list@V-$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V-$allocator@V-$CComPtr@VBaseRes.c)
 */

__int64 __fastcall ExecutionModel::ResourceSet::EvaluatePoolResourceRequest(__int64 a1, char *a2, __int64 *a3, int *a4)
{
  __int64 v4; // rbp
  int v9; // r8d
  char v10; // bl
  unsigned int v11; // edi
  int v12; // eax
  __int64 result; // rax
  char v14; // [rsp+70h] [rbp+8h] BYREF
  char v15; // [rsp+78h] [rbp+10h] BYREF

  v4 = a1 + 1464;
  if ( *(_DWORD *)(a1 + 1464) == 2 )
  {
    v10 = 1;
    v12 = ExecutionModel::BaseResourceSet::CheckPoolResources(*(_QWORD *)(a1 + 64), 1u, v4, 0, 1, &v14, &v15, a3);
    v9 = 0;
    v11 = v12;
    if ( v12 >= 0 )
    {
      if ( v15 )
      {
        v10 = v14;
        if ( !v14 )
          goto LABEL_11;
      }
      else
      {
        if ( *(_QWORD *)(v4 + 8) > *(_QWORD *)(*(_QWORD *)(a1 + 24) + 40LL) )
        {
          v10 = 0;
          v11 = -2147220992;
          goto LABEL_11;
        }
        utl::list<ATL::CComPtr<ExecutionModel::BaseResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>::clear((__int64)a3);
      }
      v9 = 2;
      goto LABEL_11;
    }
    v10 = v14;
  }
  else
  {
    v9 = 0;
    v10 = 0;
    v11 = 0;
  }
LABEL_11:
  *a2 = v10;
  result = v11;
  *a4 = v9;
  return result;
}
