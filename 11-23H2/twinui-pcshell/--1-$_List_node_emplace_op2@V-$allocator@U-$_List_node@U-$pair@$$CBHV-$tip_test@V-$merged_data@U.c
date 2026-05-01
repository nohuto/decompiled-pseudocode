/*
 * XREFs of ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBHV?$tip_test@V?$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@@tip2@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1802217DC
 * Callers:
 *     ??$emplace@U?$pair@HV?$tip_test@V?$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@@tip2@@@std@@@?$_Hash@V?$_Umap_traits@HV?$tip_test@V?$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@@tip2@@V?$_Uhash_compare@HU?$hash@H@std@@U?$equal_to@H@2@@std@@V?$allocator@U?$pair@$$CBHV?$tip_test@V?$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@@tip2@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBHV?$tip_test@V?$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@@tip2@@@std@@@std@@@std@@@std@@_N@1@$$QEAU?$pair@HV?$tip_test@V?$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@@tip2@@@1@@Z @ 0x180220A24 (--$emplace@U-$pair@HV-$tip_test@V-$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@@tip2@@.c)
 *     _std::_Hash_std::_Umap_traits_int_tip2::tip_test_tip2::details::merged_data__tip_SnapLauncherTest__tip_SnapLauncherTest____std::_Uhash_compare_int_std::hash_int__std::equal_to_int____std::allocator_std::pair_int_const__tip2::tip_test_tip2::details::merged_data__tip_SnapLauncherTest__tip_SnapLauncherTest________0___::emplace_std::pair_int_tip2::tip_test_tip2::details::merged_data__tip_SnapLauncherTest__tip_SnapLauncherTest________::_1_::dtor$0 @ 0x180220BB7 (_std--_Hash_std--_Umap_traits_int_tip2--tip_test_tip2--details--merged_data__tip_Sn_ea_180220BB7.c)
 * Callees:
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18022185C (--1-$com_ptr_t@V-$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@Uerr_returncode_policy@w.c)
 */

void __fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<int const,tip2::tip_test<tip2::details::merged_data<_tip_SnapLauncherTest,_tip_SnapLauncherTest>>>,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<int const,tip2::tip_test<tip2::details::merged_data<_tip_SnapLauncherTest,_tip_SnapLauncherTest>>>,void *>>>(
        __int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    wil::com_ptr_t<tip2::details::merged_data<_tip_SnapLauncherTest,_tip_SnapLauncherTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_SnapLauncherTest,_tip_SnapLauncherTest>,wil::err_returncode_policy>(v2 + 24);
  std::_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<winrt::hstring const,bool>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<winrt::hstring const,bool>,void *>>>(a1);
}
