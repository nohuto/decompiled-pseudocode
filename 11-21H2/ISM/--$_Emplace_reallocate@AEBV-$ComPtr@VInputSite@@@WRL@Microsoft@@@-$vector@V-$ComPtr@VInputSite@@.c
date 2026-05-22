/*
 * XREFs of ??$_Emplace_reallocate@AEBV?$ComPtr@VInputSite@@@WRL@Microsoft@@@?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@VInputSite@@@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x180002FB4
 * Callers:
 *     ?GetInputSiteListToRoot@InputSiteHierarchyManager@@UEAA?AV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@_K@Z @ 0x180002BB0 (-GetInputSiteListToRoot@InputSiteHierarchyManager@@UEAA-AV-$vector@V-$ComPtr@VInputSite@@@WRL@Mi.c)
 *     ?GetInputSiteForEvaluationListFromDITCallbackStruct@InputSiteManager@@QEAA?AV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@AEBUtagDITCALLBACKSTRUCT@@@Z @ 0x18004DBD8 (-GetInputSiteForEvaluationListFromDITCallbackStruct@InputSiteManager@@QEAA-AV-$vector@V-$ComPtr@.c)
 *     ?GetAllInputSites@InputSiteHierarchyManager@@UEAA?AV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@XZ @ 0x1801237D0 (-GetAllInputSites@InputSiteHierarchyManager@@UEAA-AV-$vector@V-$ComPtr@VInputSite@@@WRL@Microsof.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000E6AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18004AF08 (--2@YAPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800804A0 (--$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x180080E10 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     ?_Xlength@?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@CAXXZ @ 0x180080E88 (-_Xlength@-$vector@UINPUT_SPACE_PAYLOAD@@V-$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@CAXXZ.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@VInputSite@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@0@@Z @ 0x180084064 (--$_Destroy_range@V-$allocator@V-$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@YAXPEAV-$ComPtr.c)
 *     ??$_Uninitialized_move@PEAV?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@VInputSite@@@WRL@Microsoft@@QEAV123@0PEAV123@AEAV?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@0@@Z @ 0x180123478 (--$_Uninitialized_move@PEAV-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VInputSit.c)
 */

// Hidden C++ exception states: #wind=2
char *__fastcall std::vector<Microsoft::WRL::ComPtr<InputSite>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<InputSite> const &>(
        _QWORD *a1,
        _QWORD *a2,
        __int64 *a3)
{
  __int64 v6; // r15
  __int64 v7; // rax
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rsi
  __int64 v11; // r14
  _QWORD *v12; // rbx
  __int64 *v13; // rsi
  __int64 v14; // rcx
  _QWORD *v15; // r8
  _QWORD *v16; // rcx
  _QWORD *v17; // rdx
  __int64 v19; // [rsp+20h] [rbp-48h]
  __int64 v20; // [rsp+70h] [rbp+8h]
  _QWORD *v21; // [rsp+78h] [rbp+10h]
  __int64 v22; // [rsp+88h] [rbp+20h]

  v6 = ((__int64)a2 - *a1) >> 3;
  v7 = (__int64)(a1[1] - *a1) >> 3;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::vector<INPUT_SPACE_PAYLOAD>::_Xlength();
  v19 = v7 + 1;
  v8 = (__int64)(a1[2] - *a1) >> 3;
  v9 = v8 >> 1;
  if ( v8 > 0x1FFFFFFFFFFFFFFFLL - (v8 >> 1) )
  {
    v20 = 0x1FFFFFFFFFFFFFFFLL;
    v11 = 0x1FFFFFFFFFFFFFFFLL;
LABEL_20:
    v12 = (_QWORD *)std::_Allocate_manually_vector_aligned<std::_Default_allocate_traits>(v11 * 8);
    v21 = v12;
    goto LABEL_10;
  }
  v10 = v7 + 1;
  if ( v9 + v8 >= v7 + 1 )
    v10 = v9 + v8;
  if ( v10 > 0x1FFFFFFFFFFFFFFFLL )
    std::_Throw_bad_array_new_length();
  v11 = v10;
  v20 = v10;
  if ( 8 * v10 >= 0x1000 )
    goto LABEL_20;
  if ( v11 * 8 )
  {
    v12 = operator new(8 * v10);
    v21 = v12;
  }
  else
  {
    v12 = 0LL;
    v21 = 0LL;
  }
  v20 = v10;
LABEL_10:
  v13 = &v12[v6];
  v14 = *a3;
  *v13 = *a3;
  if ( v14 )
  {
    try
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
    }
    catch ( ... )
    {
      std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<InputSite>>>(v22, v13 + 1);
      std::_Deallocate<16,0>(v21, 8 * v20);
      throw;
    }
  }
  v15 = (_QWORD *)a1[1];
  v16 = (_QWORD *)*a1;
  if ( a2 == v15 )
  {
    v17 = v12;
    while ( v16 != v15 )
    {
      *v17 = 0LL;
      if ( v17 != v16 )
      {
        *v17 = *v16;
        *v16 = 0LL;
      }
      ++v17;
      ++v16;
    }
  }
  else
  {
    std::_Uninitialized_move<Microsoft::WRL::ComPtr<InputSite> *,std::allocator<Microsoft::WRL::ComPtr<InputSite>>>(
      v16,
      a2,
      v12);
    std::_Uninitialized_move<Microsoft::WRL::ComPtr<InputSite> *,std::allocator<Microsoft::WRL::ComPtr<InputSite>>>(
      a2,
      a1[1],
      v13 + 1);
  }
  if ( *a1 )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<InputSite>>>(*a1, a1[1]);
    std::_Deallocate<16,0>(*a1, (a1[2] - *a1) & 0xFFFFFFFFFFFFFFF8uLL);
  }
  *a1 = v12;
  a1[1] = &v12[v19];
  a1[2] = &v12[v11];
  return (char *)&v12[v6];
}
