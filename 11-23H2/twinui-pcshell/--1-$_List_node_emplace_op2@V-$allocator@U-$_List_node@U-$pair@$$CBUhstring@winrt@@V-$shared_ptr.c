/*
 * XREFs of ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBUhstring@winrt@@V?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180720210
 * Callers:
 *     ??$emplace@U?$pair@$$CBUhstring@winrt@@V?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@V?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@V?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@4@V?$allocator@U?$pair@$$CBUhstring@winrt@@V?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUhstring@winrt@@V?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@std@@@std@@@std@@_N@1@$$QEAU?$pair@$$CBUhstring@winrt@@V?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@@1@@Z @ 0x18071EFF4 (--$emplace@U-$pair@$$CBUhstring@winrt@@V-$shared_ptr@URemoteSessionInformation@implementation@Sh.c)
 *     _std::_Hash_std::_Umap_traits_winrt::hstring_std::shared_ptr_winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation__std::_Uhash_compare_winrt::hstring_std::hash_winrt::hstring__std::equal_to_winrt::hstring____std::allocator_std::pair_winrt::hstring_const__std::shared_ptr_winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation______0___::emplace_std::pair_winrt::hstring_const__std::shared_ptr_winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation______::_1_::dtor$0 @ 0x18071F179 (_std--_Hash_std--_Umap_traits_winrt--hstring_std--shared_ptr_winrt--Windows--Internal--Shell--im.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<winrt::hstring const,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation>>,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<winrt::hstring const,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation>>,void *>>>(
        __int64 a1)
{
  __int64 v1; // rbx
  std::_Ref_count_base *v3; // rcx
  void *v4; // rcx

  v1 = *(_QWORD *)(a1 + 8);
  if ( v1 )
  {
    v3 = *(std::_Ref_count_base **)(v1 + 32);
    if ( v3 )
      std::_Ref_count_base::_Decref(v3);
    winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)(v1 + 16));
  }
  v4 = *(void **)(a1 + 8);
  if ( v4 )
    std::_Deallocate<16,0>(v4, 0x28uLL);
}
