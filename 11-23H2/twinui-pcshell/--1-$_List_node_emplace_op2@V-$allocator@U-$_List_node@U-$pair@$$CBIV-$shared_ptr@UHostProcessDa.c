/*
 * XREFs of ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBIV?$shared_ptr@UHostProcessData@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180727870
 * Callers:
 *     ??$emplace@U?$pair@IV?$shared_ptr@UHostProcessData@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@?$_Hash@V?$_Umap_traits@IV?$shared_ptr@UHostProcessData@implementation@Shell@Internal@Windows@winrt@@@std@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@2@V?$allocator@U?$pair@$$CBIV?$shared_ptr@UHostProcessData@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIV?$shared_ptr@UHostProcessData@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@std@@@std@@@std@@_N@1@$$QEAU?$pair@IV?$shared_ptr@UHostProcessData@implementation@Shell@Internal@Windows@winrt@@@std@@@1@@Z @ 0x180727420 (--$emplace@U-$pair@IV-$shared_ptr@UHostProcessData@implementation@Shell@Internal@Windows@winrt@@.c)
 *     _std::_Hash_std::_Umap_traits_unsigned_int_std::shared_ptr_winrt::Windows::Internal::Shell::implementation::HostProcessData__std::_Uhash_compare_unsigned_int_std::hash_unsigned_int__std::equal_to_unsigned_int____std::allocator_std::pair_unsigned_int_const__std::shared_ptr_winrt::Windows::Internal::Shell::implementation::HostProcessData______0___::emplace_std::pair_unsigned_int_std::shared_ptr_winrt::Windows::Internal::Shell::implementation::HostProcessData______::_1_::dtor$0 @ 0x180727511 (_std--_Hash_std--_Umap_traits_unsigned_int_std--shared_ptr_winrt--Windows--Internal--Shell--impl.c)
 *     ??$emplace@U?$pair@KV?$shared_ptr@UHostProcessData@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@?$_Hash@V?$_Umap_traits@IV?$shared_ptr@UHostProcessData@implementation@Shell@Internal@Windows@winrt@@@std@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@2@V?$allocator@U?$pair@$$CBIV?$shared_ptr@UHostProcessData@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIV?$shared_ptr@UHostProcessData@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@std@@@std@@@std@@_N@1@$$QEAU?$pair@KV?$shared_ptr@UHostProcessData@implementation@Shell@Internal@Windows@winrt@@@std@@@1@@Z @ 0x180727524 (--$emplace@U-$pair@KV-$shared_ptr@UHostProcessData@implementation@Shell@Internal@Windows@winrt@@.c)
 *     _std::_Hash_std::_Umap_traits_unsigned_int_std::shared_ptr_winrt::Windows::Internal::Shell::implementation::HostProcessData__std::_Uhash_compare_unsigned_int_std::hash_unsigned_int__std::equal_to_unsigned_int____std::allocator_std::pair_unsigned_int_const__std::shared_ptr_winrt::Windows::Internal::Shell::implementation::HostProcessData______0___::emplace_std::pair_unsigned_long_std::shared_ptr_winrt::Windows::Internal::Shell::implementation::HostProcessData______::_1_::dtor$0 @ 0x18072765E (_std--_Hash_std--_Umap_traits_unsigned_int_std--shared_ptr_winrt--Windows--Internal_ea_18072765E.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned int const,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::HostProcessData>>,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned int const,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::HostProcessData>>,void *>>>(
        __int64 a1)
{
  __int64 v2; // rcx
  std::_Ref_count_base *v3; // rcx
  void *v4; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
  {
    v3 = *(std::_Ref_count_base **)(v2 + 32);
    if ( v3 )
      std::_Ref_count_base::_Decref(v3);
  }
  v4 = *(void **)(a1 + 8);
  if ( v4 )
    std::_Deallocate<16,0>(v4, 0x28uLL);
}
