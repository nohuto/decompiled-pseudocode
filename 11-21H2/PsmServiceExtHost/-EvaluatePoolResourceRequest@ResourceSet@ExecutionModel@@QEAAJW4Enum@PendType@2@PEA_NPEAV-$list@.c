/*
 * XREFs of ?EvaluatePoolResourceRequest@ResourceSet@ExecutionModel@@QEAAJW4Enum@PendType@2@PEA_NPEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAW4_RM_REVOKE_POLICY@@@Z @ 0x18008E4E4
 * Callers:
 *     ?EvaluateResourceRequest@ResourceSet@ExecutionModel@@QEAAJ_KW4Enum@PendType@2@PEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@PEAU_RM_INTERNAL_RESOURCE_REVOKE_CONTEXT@@PEA_N5@Z @ 0x18008E5D0 (-EvaluateResourceRequest@ResourceSet@ExecutionModel@@QEAAJ_KW4Enum@PendType@2@PEAU_RM_RESOURCE_U.c)
 * Callees:
 *     ?CheckPoolResources@BaseResourceSet@ExecutionModel@@AEAAJKPEBU_ResourceInfo@2@K_NPEA_N2PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@Z @ 0x18004188C (-CheckPoolResources@BaseResourceSet@ExecutionModel@@AEAAJKPEBU_ResourceInfo@2@K_NPEA_N2PEAV-$lis.c)
 *     ?clear@?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@QEAAXXZ @ 0x18004292C (-clear@-$list@V-$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V-$allocator@V-$CComPtr@VBaseRes.c)
 */

__int64 __fastcall ExecutionModel::ResourceSet::EvaluatePoolResourceRequest(
        __int64 a1,
        int a2,
        char *a3,
        _QWORD *a4,
        int *a5)
{
  __int64 v5; // rbp
  int v10; // edx
  char v11; // bl
  unsigned int v12; // edi
  int v13; // eax
  int *v14; // rax
  char v16; // [rsp+70h] [rbp+8h] BYREF
  char v17; // [rsp+80h] [rbp+18h] BYREF

  v5 = a1 + 1464;
  if ( *(_DWORD *)(a1 + 1464) == 2 )
  {
    v11 = 1;
    v13 = ExecutionModel::BaseResourceSet::CheckPoolResources(*(_QWORD *)(a1 + 64), 1u, v5, 0, 1, &v16, &v17, a4);
    v10 = 0;
    v12 = v13;
    if ( v13 >= 0 )
    {
      if ( v17 )
      {
        v11 = v16;
        if ( !v16 )
          goto LABEL_12;
      }
      else
      {
        if ( a2 != 1 || *(_QWORD *)(v5 + 8) > *(_QWORD *)(*(_QWORD *)(a1 + 24) + 40LL) )
        {
          v11 = 0;
          v12 = -2147220992;
          goto LABEL_12;
        }
        utl::list<ATL::CComPtr<ExecutionModel::BaseResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>::clear((__int64)a4);
      }
      v10 = 2;
      goto LABEL_12;
    }
    v11 = v16;
  }
  else
  {
    v10 = 0;
    v11 = 0;
    v12 = 0;
  }
LABEL_12:
  v14 = a5;
  *a3 = v11;
  *v14 = v10;
  return v12;
}
