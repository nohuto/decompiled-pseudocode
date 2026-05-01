/*
 * XREFs of ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBW4CloudPCState@Shell@Internal@Windows@winrt@@V?$shared_ptr@UConnectionStateBase@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18009326C
 * Callers:
 *     ??$emplace@AEBU?$pair@$$CBW4CloudPCState@Shell@Internal@Windows@winrt@@V?$shared_ptr@UConnectionStateBase@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@?$_Hash@V?$_Umap_traits@W4CloudPCState@Shell@Internal@Windows@winrt@@V?$shared_ptr@UConnectionStateBase@implementation@Shell@Internal@Windows@winrt@@@std@@V?$_Uhash_compare@W4CloudPCState@Shell@Internal@Windows@winrt@@U?$hash@W4CloudPCState@Shell@Internal@Windows@winrt@@@std@@U?$equal_to@W4CloudPCState@Shell@Internal@Windows@winrt@@@7@@7@V?$allocator@U?$pair@$$CBW4CloudPCState@Shell@Internal@Windows@winrt@@V?$shared_ptr@UConnectionStateBase@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@7@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4CloudPCState@Shell@Internal@Windows@winrt@@V?$shared_ptr@UConnectionStateBase@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@std@@@std@@@std@@_N@1@AEBU?$pair@$$CBW4CloudPCState@Shell@Internal@Windows@winrt@@V?$shared_ptr@UConnectionStateBase@implementation@Shell@Internal@Windows@winrt@@@std@@@1@@Z @ 0x180093090 (--$emplace@AEBU-$pair@$$CBW4CloudPCState@Shell@Internal@Windows@winrt@@V-$shared_ptr@UConnection.c)
 *     _std::_Hash_std::_Umap_traits_enum_winrt::Windows::Internal::Shell::CloudPCState_std::shared_ptr_winrt::Windows::Internal::Shell::implementation::ConnectionStateBase__std::_Uhash_compare_enum_winrt::Windows::Internal::Shell::CloudPCState_std::hash_enum_winrt::Windows::Internal::Shell::CloudPCState__std::equal_to_enum_winrt::Windows::Internal::Shell::CloudPCState____std::allocator_std::pair_enum_winrt::Windows::Internal::Shell::CloudPCState_const__std::shared_ptr_winrt::Windows::Internal::Shell::implementation::ConnectionStateBase______0___::emplace_std::pair_enum_winrt::Windows::Internal::Shell::CloudPCState_const__std::shared_ptr_winrt::Windows::Internal::Shell::implementation::ConnectionStateBase____const_&__::_1_::dtor$0 @ 0x1802B677F (_std--_Hash_std--_Umap_traits_enum_winrt--Windows--Internal--Shell--CloudPCState_std--shared_ptr.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<enum winrt::Windows::Internal::Shell::CloudPCState const,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::ConnectionStateBase>>,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<enum winrt::Windows::Internal::Shell::CloudPCState const,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::ConnectionStateBase>>,void *>>>(
        __int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  std::_Ref_count_base *v4; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
  {
    v4 = *(std::_Ref_count_base **)(v2 + 32);
    if ( v4 )
      std::_Ref_count_base::_Decref(v4);
  }
  v3 = *(_QWORD *)(a1 + 8);
  if ( v3 )
    std::_Deallocate<16,0>(v3, 40LL);
}
