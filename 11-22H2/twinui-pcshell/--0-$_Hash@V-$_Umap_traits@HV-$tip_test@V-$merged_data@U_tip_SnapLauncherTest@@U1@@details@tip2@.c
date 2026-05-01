/*
 * XREFs of ??0?$_Hash@V?$_Umap_traits@HV?$tip_test@V?$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@@tip2@@V?$_Uhash_compare@HU?$hash@H@std@@U?$equal_to@H@2@@std@@V?$allocator@U?$pair@$$CBHV?$tip_test@V?$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@@tip2@@@std@@@4@$0A@@std@@@std@@IEAA@AEBV?$_Uhash_compare@HU?$hash@H@std@@U?$equal_to@H@2@@1@AEBV?$allocator@U?$pair@$$CBHV?$tip_test@V?$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@@tip2@@@std@@@1@@Z @ 0x1802212EC
 * Callers:
 *     ??0?$unordered_map@HV?$tip_test@V?$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@@tip2@@U?$hash@H@std@@U?$equal_to@H@4@V?$allocator@U?$pair@$$CBHV?$tip_test@V?$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@@tip2@@@std@@@4@@std@@QEAA@XZ @ 0x1802215DC (--0-$unordered_map@HV-$tip_test@V-$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@@tip2@@.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C4204 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBHV?$tip_test@V?$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@@tip2@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBHV?$tip_test@V?$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@@tip2@@@std@@@std@@@std@@@2@@Z @ 0x1802223A0 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_ea_1802223A0.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::_Hash<std::_Umap_traits<int,tip2::tip_test<tip2::details::merged_data<_tip_SnapLauncherTest,_tip_SnapLauncherTest>>,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>>,std::allocator<std::pair<int const,tip2::tip_test<tip2::details::merged_data<_tip_SnapLauncherTest,_tip_SnapLauncherTest>>>>,0>>::_Hash<std::_Umap_traits<int,tip2::tip_test<tip2::details::merged_data<_tip_SnapLauncherTest,_tip_SnapLauncherTest>>,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>>,std::allocator<std::pair<int const,tip2::tip_test<tip2::details::merged_data<_tip_SnapLauncherTest,_tip_SnapLauncherTest>>>>,0>>(
        __int64 a1,
        _DWORD *a2)
{
  _QWORD *v3; // rax

  *(_DWORD *)a1 = *a2;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  v3 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x20uLL);
  *v3 = v3;
  v3[1] = v3;
  *(_QWORD *)(a1 + 8) = v3;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 7LL;
  *(_QWORD *)(a1 + 56) = 8LL;
  *(_DWORD *)a1 = 1065353216;
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int const,tip2::tip_test<tip2::details::merged_data<_tip_SnapLauncherTest,_tip_SnapLauncherTest>>>>>>>>::_Assign_grow(
    a1 + 24,
    16LL,
    *(_QWORD *)(a1 + 8));
  return a1;
}
