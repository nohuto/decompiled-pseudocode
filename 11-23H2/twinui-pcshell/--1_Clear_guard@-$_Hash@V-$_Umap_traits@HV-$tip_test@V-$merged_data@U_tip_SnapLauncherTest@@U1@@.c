/*
 * XREFs of ??1_Clear_guard@?$_Hash@V?$_Umap_traits@HV?$tip_test@V?$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@@tip2@@V?$_Uhash_compare@HU?$hash@H@std@@U?$equal_to@H@2@@std@@V?$allocator@U?$pair@$$CBHV?$tip_test@V?$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@@tip2@@@std@@@4@$0A@@std@@@std@@QEAA@XZ @ 0x180221A04
 * Callers:
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@HV?$tip_test@V?$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@@tip2@@V?$_Uhash_compare@HU?$hash@H@std@@U?$equal_to@H@2@@std@@V?$allocator@U?$pair@$$CBHV?$tip_test@V?$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@@tip2@@@std@@@4@$0A@@std@@@std@@IEAAX_K@Z @ 0x180222704 (-_Forced_rehash@-$_Hash@V-$_Umap_traits@HV-$tip_test@V-$merged_data@U_tip_SnapLauncherTest@@U1@@.c)
 * Callees:
 *     ?clear@?$_Hash@V?$_Umap_traits@HV?$tip_test@V?$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@@tip2@@V?$_Uhash_compare@HU?$hash@H@std@@U?$equal_to@H@2@@std@@V?$allocator@U?$pair@$$CBHV?$tip_test@V?$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@@tip2@@@std@@@4@$0A@@std@@@std@@QEAAXXZ @ 0x18022304C (-clear@-$_Hash@V-$_Umap_traits@HV-$tip_test@V-$merged_data@U_tip_SnapLauncherTest@@U1@@details@t.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<int,tip2::tip_test<tip2::details::merged_data<_tip_SnapLauncherTest,_tip_SnapLauncherTest>>,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>>,std::allocator<std::pair<int const,tip2::tip_test<tip2::details::merged_data<_tip_SnapLauncherTest,_tip_SnapLauncherTest>>>>,0>>::_Clear_guard::~_Clear_guard(
        _QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return std::_Hash<std::_Umap_traits<int,tip2::tip_test<tip2::details::merged_data<_tip_SnapLauncherTest,_tip_SnapLauncherTest>>,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>>,std::allocator<std::pair<int const,tip2::tip_test<tip2::details::merged_data<_tip_SnapLauncherTest,_tip_SnapLauncherTest>>>>,0>>::clear();
  return result;
}
