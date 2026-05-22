/*
 * XREFs of ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBKV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18013D408
 * Callers:
 *     ??$_Try_emplace@AEBK$$V@?$_Hash@V?$_Umap_traits@KV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBKV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@PEAX@std@@_N@1@AEBK@Z @ 0x18013C358 (--$_Try_emplace@AEBK$$V@-$_Hash@V-$_Umap_traits@KV-$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@.c)
 *     _std::_Hash_std::_Umap_traits_unsigned_long_Microsoft::WRL::ComPtr_DataSourcePrincipal__std::_Uhash_compare_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long____std::allocator_std::pair_unsigned_long_const__Microsoft::WRL::ComPtr_DataSourcePrincipal______0___::_Try_emplace_unsigned_long_const_&__::_1_::dtor$0 @ 0x18013C4D5 (_std--_Hash_std--_Umap_traits_unsigned_long_Microsoft--WRL--ComPtr_DataSourcePrinci_ea_18013C4D5.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000E6AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned long const,Microsoft::WRL::ComPtr<DataSourcePrincipal>>,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned long const,Microsoft::WRL::ComPtr<DataSourcePrincipal>>,void *>>>(
        __int64 a1)
{
  _QWORD *v2; // rcx
  __int64 v3; // rdx

  v2 = *(_QWORD **)(a1 + 8);
  if ( v2 )
  {
    v3 = v2[3];
    if ( v3 )
    {
      v2[3] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
      v2 = *(_QWORD **)(a1 + 8);
    }
    if ( v2 )
      std::_Deallocate<16,0>(v2, 0x20uLL);
  }
}
