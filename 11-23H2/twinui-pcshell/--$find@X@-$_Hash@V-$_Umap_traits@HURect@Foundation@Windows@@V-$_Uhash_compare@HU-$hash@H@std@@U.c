/*
 * XREFs of ??$find@X@?$_Hash@V?$_Umap_traits@HURect@Foundation@Windows@@V?$_Uhash_compare@HU?$hash@H@std@@U?$equal_to@H@2@@std@@V?$allocator@U?$pair@$$CBHURect@Foundation@Windows@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBHURect@Foundation@Windows@@@std@@@std@@@std@@@1@AEBH@Z @ 0x18065EAA0
 * Callers:
 *     ?StartSnapLaunch@CShellSnapComponent@@UEAAJHHE@Z @ 0x180222160 (-StartSnapLaunch@CShellSnapComponent@@UEAAJHHE@Z.c)
 *     ?GetAndDeleteSnapId@CShellSnapComponent@@UEAAJHPEAURect@Foundation@Windows@@@Z @ 0x180660A40 (-GetAndDeleteSnapId@CShellSnapComponent@@UEAAJHPEAURect@Foundation@Windows@@@Z.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18014DC58 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ??$_Find_last@H@?$_Hash@V?$_Umap_traits@HV?$tip_test@V?$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@@tip2@@V?$_Uhash_compare@HU?$hash@H@std@@U?$equal_to@H@2@@std@@V?$allocator@U?$pair@$$CBHV?$tip_test@V?$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@@tip2@@@std@@@4@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBHV?$tip_test@V?$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@@tip2@@@std@@PEAX@std@@@1@AEBH_K@Z @ 0x1802204A4 (--$_Find_last@H@-$_Hash@V-$_Umap_traits@HV-$tip_test@V-$merged_data@U_tip_SnapLauncherTest@@U1@@.c)
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<int,Windows::Foundation::Rect,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>>,std::allocator<std::pair<int const,Windows::Foundation::Rect>>,0>>::find<void>(
        _QWORD *a1,
        _QWORD *a2,
        const unsigned __int8 *a3)
{
  __int64 appended; // rax
  _DWORD *v6; // r11
  __int64 v7; // r8
  _QWORD v9[3]; // [rsp+20h] [rbp-18h] BYREF

  appended = std::_Fnv1a_append_bytes((__int64)a1, a3, 4uLL);
  v7 = std::_Hash<std::_Umap_traits<int,tip2::tip_test<tip2::details::merged_data<_tip_SnapLauncherTest,_tip_SnapLauncherTest>>,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>>,std::allocator<std::pair<int const,tip2::tip_test<tip2::details::merged_data<_tip_SnapLauncherTest,_tip_SnapLauncherTest>>>>,0>>::_Find_last<int>(
         a1,
         v9,
         v6,
         appended)[1];
  if ( !v7 )
    v7 = a1[1];
  *a2 = v7;
  return a2;
}
