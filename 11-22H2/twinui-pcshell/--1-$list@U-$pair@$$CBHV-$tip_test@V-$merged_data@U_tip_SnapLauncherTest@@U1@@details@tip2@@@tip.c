/*
 * XREFs of ??1?$list@U?$pair@$$CBHV?$tip_test@V?$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@@tip2@@@std@@V?$allocator@U?$pair@$$CBHV?$tip_test@V?$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@@tip2@@@std@@@2@@std@@QEAA@XZ @ 0x1802218A8
 * Callers:
 *     _std::_Hash_std::_Umap_traits_int_tip2::tip_test_tip2::details::merged_data__tip_SnapLauncherTest__tip_SnapLauncherTest____std::_Uhash_compare_int_std::hash_int__std::equal_to_int____std::allocator_std::pair_int_const__tip2::tip_test_tip2::details::merged_data__tip_SnapLauncherTest__tip_SnapLauncherTest________0___::_Hash_std::_Umap_traits_int_tip2::tip_test_tip2::details::merged_data__tip_SnapLauncherTest__tip_SnapLauncherTest____std::_Uhash_compare_int_std::hash_int__std::equal_to_int____std::allocator_std::pair_int_const__tip2::tip_test_tip2::details::merged_data__tip_SnapLauncherTest__tip_SnapLauncherTest________0____::_1_::dtor$0 @ 0x18022135D (_std--_Hash_std--_Umap_traits_int_tip2--tip_test_tip2--details--merged_data__tip_Sn_ea_18022135D.c)
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBHV?$tip_test@V?$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@@tip2@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBHV?$tip_test@V?$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@@tip2@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBHV?$tip_test@V?$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@@tip2@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1802205C4 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBHV-$tip_test@V-$merged_data@U_tip_SnapL.c)
 */

void __fastcall std::list<std::pair<int const,tip2::tip_test<tip2::details::merged_data<_tip_SnapLauncherTest,_tip_SnapLauncherTest>>>>::~list<std::pair<int const,tip2::tip_test<tip2::details::merged_data<_tip_SnapLauncherTest,_tip_SnapLauncherTest>>>>(
        __int64 *a1)
{
  std::_List_node<std::pair<int const,tip2::tip_test<tip2::details::merged_data<_tip_SnapLauncherTest,_tip_SnapLauncherTest>>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<int const,tip2::tip_test<tip2::details::merged_data<_tip_SnapLauncherTest,_tip_SnapLauncherTest>>>,void *>>>(
    (__int64)a1,
    *a1);
  std::_Deallocate<16,0>((void *)*a1, 0x20uLL);
}
