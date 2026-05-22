/*
 * XREFs of ??$_Emplace_reallocate@AEBV?$ComPtr@UIAttachableInputObjectSampleProxy@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIAttachableInputObjectSampleProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIAttachableInputObjectSampleProxy@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@UIAttachableInputObjectSampleProxy@@@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x1801BD49C
 * Callers:
 *     ??$GetAllAttachedObjectsByType@UIAttachableInputObjectSampleProxy@@@InputSite@@QEAA?AV?$vector@V?$ComPtr@UIAttachableInputObjectSampleProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIAttachableInputObjectSampleProxy@@@WRL@Microsoft@@@std@@@std@@XZ @ 0x1801BD39C (--$GetAllAttachedObjectsByType@UIAttachableInputObjectSampleProxy@@@InputSite@@QEAA-AV-$vector@V.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001DBCC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x18003E448 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Uninitialized_move@PEAV?$ComPtr@UIAttachableInputObjectSampleProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIAttachableInputObjectSampleProxy@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@UIAttachableInputObjectSampleProxy@@@WRL@Microsoft@@QEAV123@0PEAV123@AEAV?$allocator@V?$ComPtr@UIAttachableInputObjectSampleProxy@@@WRL@Microsoft@@@0@@Z @ 0x18009B34C (--$_Uninitialized_move@PEAV-$ComPtr@UIAttachableInputObjectSampleProxy@@@WRL@Microsoft@@V-$alloc.c)
 *     ?_Change_array@?$vector@V?$ComPtr@UCUIWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UCUIWindow@@@WRL@Microsoft@@@std@@@std@@AEAAXQEAV?$ComPtr@UCUIWindow@@@WRL@Microsoft@@_K1@Z @ 0x18009DC50 (-_Change_array@-$vector@V-$ComPtr@UCUIWindow@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UCUIWindow@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall std::vector<Microsoft::WRL::ComPtr<IAttachableInputObjectSampleProxy>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<IAttachableInputObjectSampleProxy> const &>(
        __int64 **a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 v5; // r14
  __int64 v6; // rax
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  size_t size_of; // rax
  __int64 *v12; // rax
  __int64 *v13; // rsi
  __int64 *v14; // r14
  __int64 v15; // rcx
  __int64 *v16; // rdx
  __int64 *v17; // r8
  __int64 *v18; // rcx
  __int64 *result; // rax
  __int64 *v20; // [rsp+20h] [rbp-48h]
  __int64 *v21; // [rsp+70h] [rbp+8h]

  v5 = a2 - *a1;
  v6 = a1[1] - *a1;
  v7 = 0x1FFFFFFFFFFFFFFFLL;
  if ( v6 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v8 = v6 + 1;
  v9 = a1[2] - *a1;
  v10 = v9 >> 1;
  if ( v9 <= 0x1FFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v7 = v10 + v9;
    if ( v10 + v9 < v8 )
      v7 = v6 + 1;
  }
  size_of = std::_Get_size_of_n<8>(v7);
  v12 = (__int64 *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v13 = v12;
  v20 = v12;
  v14 = &v12[v5];
  try
  {
    v15 = *a3;
    *v14 = *a3;
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
    v21 = v14;
    v16 = a1[1];
    v17 = v13;
    v18 = *a1;
    if ( a2 != v16 )
    {
      std::_Uninitialized_move<Microsoft::WRL::ComPtr<IAttachableInputObjectSampleProxy> *,std::allocator<Microsoft::WRL::ComPtr<IAttachableInputObjectSampleProxy>>>(
        v18,
        a2,
        v13);
      v21 = v13;
      v17 = v14 + 1;
      v16 = a1[1];
      v18 = a2;
    }
    std::_Uninitialized_move<Microsoft::WRL::ComPtr<IAttachableInputObjectSampleProxy> *,std::allocator<Microsoft::WRL::ComPtr<IAttachableInputObjectSampleProxy>>>(
      v18,
      v16,
      v17);
    std::vector<Microsoft::WRL::ComPtr<CUIWindow>>::_Change_array((__int64)a1, (__int64)v13, v8, v7);
    result = v14;
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<CUIWindow>>>(v21, v14 + 1);
    std::_Deallocate<16,0>(v20, 8 * v7);
    throw;
  }
  return result;
}
