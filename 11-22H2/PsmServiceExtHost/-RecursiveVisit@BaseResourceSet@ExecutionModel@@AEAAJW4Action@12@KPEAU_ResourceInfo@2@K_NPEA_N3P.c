/*
 * XREFs of ?RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAV12@@Z @ 0x18000DA70
 * Callers:
 *     ?CheckAllPendingRequests@BaseResourceSet@ExecutionModel@@AEAAXXZ @ 0x1800080A0 (-CheckAllPendingRequests@BaseResourceSet@ExecutionModel@@AEAAXXZ.c)
 *     ?RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAV12@@Z @ 0x18000DA70 (-RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3P.c)
 *     ?CompleteAcquire@ResourceSet@ExecutionModel@@QEAAXK@Z @ 0x180029AE8 (-CompleteAcquire@ResourceSet@ExecutionModel@@QEAAXK@Z.c)
 *     ?AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@KPEBU_ResourceInfo@2@W4Enum@Priority@2@KW45PendType@2@PEA_NW4_RM_ACQUIRE_PEND_POLICY@@PEAVExternalResourceSet@2@@Z @ 0x180039C90 (-AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@KPEBU_ResourceInfo.c)
 *     ?CheckPoolResources@BaseResourceSet@ExecutionModel@@AEAAJKPEBU_ResourceInfo@2@K_NPEA_N2PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@Z @ 0x18003A16C (-CheckPoolResources@BaseResourceSet@ExecutionModel@@AEAAJKPEBU_ResourceInfo@2@K_NPEA_N2PEAV-$lis.c)
 * Callees:
 *     ?RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAV12@@Z @ 0x18000DA70 (-RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3P.c)
 *     ??1?$CComPtrBase@UIModernResourceEnforcerCallback@@@ATL@@QEAA@XZ @ 0x180013CF4 (--1-$CComPtrBase@UIModernResourceEnforcerCallback@@@ATL@@QEAA@XZ.c)
 *     ??0?$CComPtrBase@VBaseResourceSet@ExecutionModel@@@ATL@@IEAA@PEAVBaseResourceSet@ExecutionModel@@@Z @ 0x18003B010 (--0-$CComPtrBase@VBaseResourceSet@ExecutionModel@@@ATL@@IEAA@PEAVBaseResourceSet@ExecutionModel@.c)
 *     ??1?$_UninitializedAllocation@V?$allocator@U?$_HashNode@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@utl@@@utl@@QEAA@XZ @ 0x18004F840 (--1-$_UninitializedAllocation@V-$allocator@U-$_HashNode@U-$pair@QEAUResourceHandle__@ExecutionMo.c)
 *     ??$_NewNode@U?$_DlistNode@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@?$_ContainerBase@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@IEAA?AU?$_UninitializedAllocation@V?$allocator@U?$_DlistNode@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@1@XZ @ 0x1800512E4 (--$_NewNode@U-$_DlistNode@V-$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@-$_ContainerB.c)
 *     ??$_NewNodeCommit@U?$_DlistNode@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@?$_ContainerBase@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@IEAAPEAU?$_DlistNode@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@1@AEAU?$_UninitializedAllocation@V?$allocator@U?$_DlistNode@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@1@_N@Z @ 0x180051318 (--$_NewNodeCommit@U-$_DlistNode@V-$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@-$_Cont.c)
 *     ?remove@?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@QEAA_KAEBV?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@Z @ 0x180051368 (-remove@-$list@V-$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V-$allocator@V-$CComPtr@VBaseRe.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180053740 (_guard_xfg_dispatch_icall_nop.c)
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
        __int64 *a9,
        __int64 a10)
{
  bool v10; // zf
  _BYTE *v12; // r13
  int v13; // r8d
  char v15; // si
  unsigned int v16; // ebp
  int *v17; // rbx
  __int64 v18; // rdi
  __int64 v19; // r15
  char v20; // al
  unsigned __int64 v21; // rcx
  __int64 v22; // r9
  unsigned __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 *v27; // r15
  __int64 v28; // rbx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // r8
  _QWORD *v32; // rcx
  _QWORD *v33; // rax
  unsigned int v34; // eax
  __int64 result; // rax
  int v36; // edx
  _QWORD *v37; // rcx
  _BYTE *v38; // rax
  _QWORD *v39; // rdi
  int v40; // esi
  __int64 v41; // rbp
  char v42; // r14
  _QWORD *v43; // rax
  _QWORD *v44; // rbx
  __int64 v45; // [rsp+90h] [rbp+8h] BYREF
  int v46; // [rsp+98h] [rbp+10h]
  int *v47; // [rsp+A8h] [rbp+20h]

  v47 = a4;
  v46 = a2;
  v10 = *(_DWORD *)(a1 + 1280) == 2;
  v12 = a8;
  v13 = a2;
  *a8 = 0;
  if ( v10 )
  {
    v15 = 0;
    v16 = 0;
    if ( a3 )
    {
      v17 = a4;
      do
      {
        v18 = *v17;
        if ( (unsigned int)v18 <= 0x31 )
        {
          v19 = 24 * (v18 + 3);
          if ( *(_QWORD *)(v19 + a1 + 8) )
          {
            if ( v17[4] < 101 )
            {
              if ( !a6
                || (v20 = (*(__int64 (__fastcall **)(__int64, int *, _QWORD))(*(_QWORD *)a1 + 72LL))(a1, v17, a5),
                    v13 = v46,
                    v20) )
              {
                v21 = *(_QWORD *)(v19 + a1 + 8);
                v22 = (1LL << v18) & *(_QWORD *)(a1 + 1272);
                v23 = v21;
                if ( v21 >= *((_QWORD *)v17 + 1) )
                  v23 = *((_QWORD *)v17 + 1);
                if ( v22 )
                  v23 = *((_QWORD *)v17 + 1);
                if ( v13 )
                {
                  if ( v13 != 1 )
                    __fastfail(0xC0000001);
                  if ( !v22 )
                    *(_QWORD *)(v19 + a1 + 8) = v21 - v23;
                  v24 = a10;
                  v13 = v46;
                  v25 = 3 * (*v17 + 3LL);
                  *(_OWORD *)(a10 + 8 * v25) = *(_OWORD *)v17;
                  *(_QWORD *)(v24 + 8 * v25 + 16) = *((_QWORD *)v17 + 2);
                  *((_QWORD *)v17 + 1) -= v23;
                }
                else
                {
                  v13 = v46;
                  if ( *(_QWORD *)(a1 + 64) )
                    v15 = 1;
                  *((_QWORD *)v17 + 1) -= v23;
                }
              }
            }
          }
          else if ( !*((_QWORD *)v17 + 1) && v13 == 1 )
          {
            v26 = a10;
            *(_OWORD *)(v19 + a10) = *(_OWORD *)v17;
            *(_QWORD *)(v19 + v26 + 16) = *((_QWORD *)v17 + 2);
          }
        }
        ++v16;
        v17 += 6;
      }
      while ( v16 < a3 );
      v27 = a9;
      if ( v15 && a9 )
      {
        ATL::CComPtrBase<ExecutionModel::BaseResourceSet>::CComPtrBase<ExecutionModel::BaseResourceSet>(&a8, a1);
        utl::list<ATL::CComPtr<ExecutionModel::BaseResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>::remove(
          v27,
          &a8);
        ATL::CComPtrBase<IModernResourceEnforcerCallback>::~CComPtrBase<IModernResourceEnforcerCallback>(&a8);
        ATL::CComPtrBase<ExecutionModel::BaseResourceSet>::CComPtrBase<ExecutionModel::BaseResourceSet>(&v45, a1);
        v28 = *v27;
        utl::_ContainerBase<ATL::CComPtr<ExecutionModel::BaseResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>::_NewNode<utl::_DlistNode<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>(
          v29,
          &a8);
        if ( a8 )
        {
          ATL::CComPtrBase<ExecutionModel::BaseResourceSet>::CComPtrBase<ExecutionModel::BaseResourceSet>(a8 + 16, v45);
          LOBYTE(v31) = 1;
        }
        else
        {
          LOBYTE(v31) = 0;
        }
        v32 = (_QWORD *)utl::_ContainerBase<ATL::CComPtr<ExecutionModel::BaseResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>::_NewNodeCommit<utl::_DlistNode<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>(
                          v30,
                          &a8,
                          v31);
        if ( !v32 )
        {
          utl::_UninitializedAllocation<utl::allocator<utl::_HashNode<utl::pair<ExecutionModel::ResourceHandle__ * const,ATL::CComPtr<ExecutionModel::ExternalResourceSet>>>>>::~_UninitializedAllocation<utl::allocator<utl::_HashNode<utl::pair<ExecutionModel::ResourceHandle__ * const,ATL::CComPtr<ExecutionModel::ExternalResourceSet>>>>>(&a8);
          ATL::CComPtrBase<IModernResourceEnforcerCallback>::~CComPtrBase<IModernResourceEnforcerCallback>(&v45);
          return 2147500037LL;
        }
        v33 = *(_QWORD **)(v28 + 8);
        v32[1] = v33;
        *v32 = v28;
        *v33 = v32;
        *(_QWORD *)(v28 + 8) = v32;
        ++v27[2];
        utl::_UninitializedAllocation<utl::allocator<utl::_HashNode<utl::pair<ExecutionModel::ResourceHandle__ * const,ATL::CComPtr<ExecutionModel::ExternalResourceSet>>>>>::~_UninitializedAllocation<utl::allocator<utl::_HashNode<utl::pair<ExecutionModel::ResourceHandle__ * const,ATL::CComPtr<ExecutionModel::ExternalResourceSet>>>>>(&a8);
        ATL::CComPtrBase<IModernResourceEnforcerCallback>::~CComPtrBase<IModernResourceEnforcerCallback>(&v45);
        v34 = 0;
        goto LABEL_37;
      }
    }
    else
    {
      v27 = a9;
    }
    v34 = 0;
    if ( a3 )
    {
LABEL_37:
      v36 = (int)v47;
      v37 = v47 + 2;
      while ( !*v37 )
      {
        ++v34;
        v37 += 3;
        if ( v34 >= a3 )
          goto LABEL_40;
      }
      v39 = (_QWORD *)(a1 + 40);
      v40 = v46;
      v41 = a10;
      v42 = a6;
      *a7 = 1;
      v43 = v39;
      while ( v43 != (_QWORD *)*v39 )
      {
        v44 = v43 + 1;
        result = ExecutionModel::BaseResourceSet::RecursiveVisit(
                   *(_QWORD *)(v43[1] + 16LL),
                   v40,
                   a3,
                   v36,
                   a5,
                   v42,
                   (__int64)&a8,
                   (__int64)v12,
                   (__int64)v27,
                   v41);
        if ( (int)result < 0 )
          return result;
        if ( *v12 )
          break;
        v43 = (_QWORD *)*v44;
        v36 = (int)v47;
      }
      return 0LL;
    }
LABEL_40:
    v38 = a7;
    *v12 = 1;
    *v38 = 0;
  }
  return 0LL;
}
