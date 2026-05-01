/*
 * XREFs of ?RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAV12@@Z @ 0x180037CC0
 * Callers:
 *     ?AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJW4Enum@PendType@2@PEA_N@Z @ 0x180018FC0 (-AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJW4Enum@PendType@2@PEA_N@Z.c)
 *     ?CheckAllPendingRequests@BaseResourceSet@ExecutionModel@@AEAAXXZ @ 0x1800322C0 (-CheckAllPendingRequests@BaseResourceSet@ExecutionModel@@AEAAXXZ.c)
 *     ?RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAV12@@Z @ 0x180037CC0 (-RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3P.c)
 *     ?AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@KPEBU_ResourceInfo@2@W4Enum@Priority@2@KW45PendType@2@PEA_NW4_RM_ACQUIRE_PEND_POLICY@@PEAVExternalResourceSet@2@@Z @ 0x180041408 (-AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@KPEBU_ResourceInfo.c)
 *     ?CheckPoolResources@BaseResourceSet@ExecutionModel@@AEAAJKPEBU_ResourceInfo@2@K_NPEA_N2PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@Z @ 0x18004188C (-CheckPoolResources@BaseResourceSet@ExecutionModel@@AEAAJKPEBU_ResourceInfo@2@K_NPEA_N2PEAV-$lis.c)
 *     ?CompleteAcquire@ResourceSet@ExecutionModel@@QEAAXK@Z @ 0x18008E3CC (-CompleteAcquire@ResourceSet@ExecutionModel@@QEAAXK@Z.c)
 * Callees:
 *     ?RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAV12@@Z @ 0x180037CC0 (-RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3P.c)
 *     ??0?$CComPtrBase@VBaseResourceSet@ExecutionModel@@@ATL@@IEAA@PEAVBaseResourceSet@ExecutionModel@@@Z @ 0x180041724 (--0-$CComPtrBase@VBaseResourceSet@ExecutionModel@@@ATL@@IEAA@PEAVBaseResourceSet@ExecutionModel@.c)
 *     ??1?$CComPtrBase@VResourceManagerServerProxy@@@ATL@@QEAA@XZ @ 0x18004DCD0 (--1-$CComPtrBase@VResourceManagerServerProxy@@@ATL@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18004F84C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18004F874 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180050280 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ExecutionModel::BaseResourceSet::RecursiveVisit(
        __int64 a1,
        int a2,
        unsigned int a3,
        int *a4,
        unsigned int a5,
        char a6,
        _BYTE *a7,
        _BYTE *a8,
        _QWORD *a9,
        __int64 a10)
{
  bool v10; // zf
  _BYTE *v12; // r15
  int v14; // r11d
  char v16; // r12
  unsigned int v17; // edi
  int *v18; // rbx
  __int64 v19; // rbp
  __int64 v20; // rcx
  __int64 v21; // rax
  _BYTE *v22; // r9
  char v23; // al
  unsigned __int64 v24; // r8
  __int64 v25; // r10
  unsigned __int64 v26; // rdx
  __int64 v27; // rdx
  _QWORD *v28; // rbp
  _QWORD *v29; // rax
  unsigned int v30; // ecx
  __int64 result; // rax
  __int64 v32; // rcx
  __int64 v33; // rax
  _QWORD *v34; // rbx
  _BYTE *v35; // rdi
  _QWORD *v36; // r12
  _QWORD *v37; // rax
  _QWORD *v38; // rbx
  _QWORD *v39; // rax
  _QWORD *v40; // rdi
  _QWORD *v41; // rax
  __int64 v42; // rax
  __int64 *v43; // rdi

  v10 = *(_DWORD *)(a1 + 1280) == 2;
  v12 = a8;
  v14 = a2;
  *a8 = 0;
  if ( !v10 )
    return 0LL;
  v16 = 0;
  v17 = 0;
  if ( !a3 )
  {
LABEL_24:
    *v12 = 1;
    *a7 = 0;
    return 0LL;
  }
  v18 = a4;
  do
  {
    v19 = *v18;
    if ( (unsigned int)v19 > 0x31 )
      goto LABEL_18;
    v20 = 24 * (v19 + 3);
    v21 = *(_QWORD *)(v20 + a1 + 8);
    v22 = (_BYTE *)(v20 + a1);
    a8 = (_BYTE *)(v20 + a1);
    if ( v21 )
    {
      if ( v18[4] < 101 )
      {
        if ( !a6 )
        {
LABEL_10:
          v24 = *((_QWORD *)v22 + 1);
          v25 = (1LL << v19) & *(_QWORD *)(a1 + 1272);
          v26 = *((_QWORD *)v18 + 1);
          if ( v24 < v26 )
            v26 = *((_QWORD *)v22 + 1);
          if ( v25 )
            v26 = *((_QWORD *)v18 + 1);
          if ( v14 )
          {
            if ( v14 != 1 )
              __fastfail(0xC0000001);
            if ( !v25 )
              *((_QWORD *)v22 + 1) = v24 - v26;
            v32 = a10;
            v33 = 3 * (*v18 + 3LL);
            *(_OWORD *)(a10 + 8 * v33) = *(_OWORD *)v18;
            *(_QWORD *)(v32 + 8 * v33 + 16) = *((_QWORD *)v18 + 2);
          }
          else if ( *(_QWORD *)(a1 + 64) )
          {
            v16 = 1;
          }
          *((_QWORD *)v18 + 1) -= v26;
          goto LABEL_18;
        }
        v23 = (*(__int64 (__fastcall **)(__int64, int *, _QWORD))(*(_QWORD *)a1 + 72LL))(a1, v18, a5);
        v14 = a2;
        if ( v23 )
        {
          v22 = a8;
          goto LABEL_10;
        }
      }
LABEL_18:
      v27 = a10;
      goto LABEL_19;
    }
    if ( *((_QWORD *)v18 + 1) )
      goto LABEL_18;
    v27 = a10;
    if ( v14 == 1 )
    {
      *(_OWORD *)(v20 + a10) = *(_OWORD *)v18;
      *(_QWORD *)(v20 + v27 + 16) = *((_QWORD *)v18 + 2);
    }
LABEL_19:
    ++v17;
    v18 += 6;
  }
  while ( v17 < a3 );
  v28 = a9;
  if ( !v16 || !a9 )
    goto LABEL_21;
  ATL::CComPtrBase<ExecutionModel::BaseResourceSet>::CComPtrBase<ExecutionModel::BaseResourceSet>(&a8, a1);
  v34 = (_QWORD *)*v28;
  v35 = a8;
  while ( v34 != v28 )
  {
    v36 = (_QWORD *)*v34;
    if ( (_BYTE *)v34[2] == v35 )
    {
      v37 = (_QWORD *)v34[1];
      *v37 = v36;
      v36[1] = v37;
      ATL::CComPtrBase<ResourceManagerServerProxy>::~CComPtrBase<ResourceManagerServerProxy>(v34 + 2);
      operator delete(v34);
      --v28[2];
    }
    v34 = v36;
  }
  ATL::CComPtrBase<ResourceManagerServerProxy>::~CComPtrBase<ResourceManagerServerProxy>(&a8);
  ATL::CComPtrBase<ExecutionModel::BaseResourceSet>::CComPtrBase<ExecutionModel::BaseResourceSet>(&a8, a1);
  v38 = (_QWORD *)*v28;
  v39 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v40 = v39;
  if ( v39 )
  {
    ATL::CComPtrBase<ExecutionModel::BaseResourceSet>::CComPtrBase<ExecutionModel::BaseResourceSet>(v39 + 2, a8);
    v41 = (_QWORD *)v38[1];
    v40[1] = v41;
    *v40 = v38;
    *v41 = v40;
    v38[1] = v40;
    ++v28[2];
    ATL::CComPtrBase<ResourceManagerServerProxy>::~CComPtrBase<ResourceManagerServerProxy>(&a8);
    v14 = a2;
    v27 = a10;
LABEL_21:
    v29 = a4 + 2;
    v30 = 0;
    while ( !*v29 )
    {
      ++v30;
      v29 += 3;
      if ( v30 >= a3 )
        goto LABEL_24;
    }
    *a7 = 1;
    v42 = a1 + 40;
    while ( v42 != *(_QWORD *)(a1 + 40) )
    {
      v43 = (__int64 *)(v42 + 8);
      result = ExecutionModel::BaseResourceSet::RecursiveVisit(
                 *(_QWORD *)(*(_QWORD *)(v42 + 8) + 16LL),
                 v14,
                 a3,
                 (_DWORD)a4,
                 a5,
                 a6,
                 (__int64)&a8,
                 (__int64)v12,
                 (__int64)v28,
                 v27);
      if ( (int)result < 0 )
        return result;
      if ( *v12 )
        break;
      v42 = *v43;
      v14 = a2;
      v27 = a10;
    }
    return 0LL;
  }
  else
  {
    ATL::CComPtrBase<ResourceManagerServerProxy>::~CComPtrBase<ResourceManagerServerProxy>(&a8);
    return 2147500037LL;
  }
}
