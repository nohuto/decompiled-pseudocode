/*
 * XREFs of ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBW4EdgeLocation@Animations@Shell@Internal@Windows@winrt@@V?$vector@W4ShellView@Shell@UI@WindowsUdk@winrt@@V?$allocator@W4ShellView@Shell@UI@WindowsUdk@winrt@@@std@@@std@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180093C5C
 * Callers:
 *     ??$emplace@AEBU?$pair@$$CBW4EdgeLocation@Animations@Shell@Internal@Windows@winrt@@V?$vector@W4ShellView@Shell@UI@WindowsUdk@winrt@@V?$allocator@W4ShellView@Shell@UI@WindowsUdk@winrt@@@std@@@std@@@std@@@?$_Hash@V?$_Umap_traits@W4EdgeLocation@Animations@Shell@Internal@Windows@winrt@@V?$vector@W4ShellView@Shell@UI@WindowsUdk@winrt@@V?$allocator@W4ShellView@Shell@UI@WindowsUdk@winrt@@@std@@@std@@V?$_Uhash_compare@W4EdgeLocation@Animations@Shell@Internal@Windows@winrt@@U?$hash@W4EdgeLocation@Animations@Shell@Internal@Windows@winrt@@@std@@U?$equal_to@W4EdgeLocation@Animations@Shell@Internal@Windows@winrt@@@8@@8@V?$allocator@U?$pair@$$CBW4EdgeLocation@Animations@Shell@Internal@Windows@winrt@@V?$vector@W4ShellView@Shell@UI@WindowsUdk@winrt@@V?$allocator@W4ShellView@Shell@UI@WindowsUdk@winrt@@@std@@@std@@@std@@@8@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4EdgeLocation@Animations@Shell@Internal@Windows@winrt@@V?$vector@W4ShellView@Shell@UI@WindowsUdk@winrt@@V?$allocator@W4ShellView@Shell@UI@WindowsUdk@winrt@@@std@@@std@@@std@@@std@@@std@@@std@@_N@1@AEBU?$pair@$$CBW4EdgeLocation@Animations@Shell@Internal@Windows@winrt@@V?$vector@W4ShellView@Shell@UI@WindowsUdk@winrt@@V?$allocator@W4ShellView@Shell@UI@WindowsUdk@winrt@@@std@@@std@@@1@@Z @ 0x18009389C (--$emplace@AEBU-$pair@$$CBW4EdgeLocation@Animations@Shell@Internal@Windows@winrt@@V-$vector@W4Sh.c)
 *     _std::_Hash_std::_Umap_traits_enum_winrt::Windows::Internal::Shell::Animations::EdgeLocation_std::vector_enum_winrt::WindowsUdk::UI::Shell::ShellView_std::allocator_enum_winrt::WindowsUdk::UI::Shell::ShellView____std::_Uhash_compare_enum_winrt::Windows::Internal::Shell::Animations::EdgeLocation_std::hash_enum_winrt::Windows::Internal::Shell::Animations::EdgeLocation__std::equal_to_enum_winrt::Windows::Internal::Shell::Animations::EdgeLocation____std::allocator_std::pair_enum_winrt::Windows::Internal::Shell::Animations::EdgeLocation_const__std::vector_enum_winrt::WindowsUdk::UI::Shell::ShellView_std::allocator_enum_winrt::WindowsUdk::UI::Shell::ShellView________0___::emplace_std::pair_enum_winrt::Windows::Internal::Shell::Animations::EdgeLocation_const__std::vector_enum_winrt::WindowsUdk::UI::Shell::ShellView_std::allocator_enum_winrt::WindowsUdk::UI::Shell::ShellView______const_&__::_1_::dtor$0 @ 0x1802B697B (_std--_Hash_std--_Umap_traits_enum_winrt--Windows--Internal--Shell--Animations--EdgeLocation_std.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Tidy@?$vector@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@V?$allocator@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@std@@@std@@AEAAXXZ @ 0x1801C5F74 (-_Tidy@-$vector@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@.c)
 */

__int64 __fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<enum winrt::Windows::Internal::Shell::Animations::EdgeLocation const,std::vector<enum winrt::WindowsUdk::UI::Shell::ShellView>>,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<enum winrt::Windows::Internal::Shell::Animations::EdgeLocation const,std::vector<enum winrt::WindowsUdk::UI::Shell::ShellView>>,void *>>>(
        __int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    result = std::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU>::_Tidy(v2 + 24);
  v3 = *(_QWORD *)(a1 + 8);
  if ( v3 )
    return std::_Deallocate<16,0>(v3, 48LL);
  return result;
}
