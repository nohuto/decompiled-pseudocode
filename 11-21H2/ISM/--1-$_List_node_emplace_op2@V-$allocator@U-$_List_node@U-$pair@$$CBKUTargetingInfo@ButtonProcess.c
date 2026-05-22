/*
 * XREFs of ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBKUTargetingInfo@ButtonProcessor@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800DDF50
 * Callers:
 *     _std::_Hash_std::_Umap_traits_unsigned_long_Win32kInterop::TargetingInfo_std::_Uhash_compare_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long____std::allocator_std::pair_unsigned_long_const__Win32kInterop::TargetingInfo____0___::_Try_emplace_unsigned_long_const_&__::_1_::dtor$0 @ 0x180054630 (_std--_Hash_std--_Umap_traits_unsigned_long_Win32kInterop--TargetingInfo_std--_Uhash_compare_uns.c)
 *     ??$emplace@AEAKUTargetingInfo@ButtonProcessor@@@?$_Hash@V?$_Umap_traits@KUTargetingInfo@ButtonProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUTargetingInfo@ButtonProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUTargetingInfo@ButtonProcessor@@@std@@@std@@@std@@@std@@_N@1@AEAK$$QEAUTargetingInfo@ButtonProcessor@@@Z @ 0x1801B9A58 (--$emplace@AEAKUTargetingInfo@ButtonProcessor@@@-$_Hash@V-$_Umap_traits@KUTargetingInfo@ButtonPr.c)
 *     _std::_Hash_std::_Umap_traits_unsigned_long_ButtonProcessor::TargetingInfo_std::_Uhash_compare_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long____std::allocator_std::pair_unsigned_long_const__ButtonProcessor::TargetingInfo____0___::emplace_unsigned_long_&_ButtonProcessor::TargetingInfo__::_1_::dtor$0 @ 0x1801B9BC1 (_std--_Hash_std--_Umap_traits_unsigned_long_ButtonProcessor--TargetingInfo_std--_Uhash_compare_u.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002474 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x18000BC64 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000E6AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned long const,ButtonProcessor::TargetingInfo>,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned long const,ButtonProcessor::TargetingInfo>,void *>>>(
        __int64 a1)
{
  __int64 v2; // rcx
  __int64 *v3; // rbx
  void *v4; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
  {
    v3 = (__int64 *)(v2 + 24);
    Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)(v2 + 32));
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(v3);
    v4 = *(void **)(a1 + 8);
    if ( v4 )
      std::_Deallocate<16,0>(v4, 0x28uLL);
  }
}
