/*
 * XREFs of ?ensure_data@?$tip_test@U_tip_MiniSearchActivationTest@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_MiniSearchActivationTest@@@details@tip@@@std@@XZ @ 0x1803A4B94
 * Callers:
 *     ?Hide@MiniSearchExperienceManager@@UEAAJXZ @ 0x1803A1920 (-Hide@MiniSearchExperienceManager@@UEAAJXZ.c)
 *     ?OnClientWindowReadyForPresentationChanged@MiniSearchExperienceManager@@AEAAJPEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@3456@@Z @ 0x1803A23E0 (-OnClientWindowReadyForPresentationChanged@MiniSearchExperienceManager@@AEAAJPEAUIClientWindowSt.c)
 *     ?OnMiniSearchActivationTestTimeoutTimer@MiniSearchExperienceManager@@AEAAXXZ @ 0x1803A25D8 (-OnMiniSearchActivationTestTimeoutTimer@MiniSearchExperienceManager@@AEAAXXZ.c)
 *     ?OnViewConsolidationRequested@MiniSearchExperienceManager@@AEAAJXZ @ 0x1803A2698 (-OnViewConsolidationRequested@MiniSearchExperienceManager@@AEAAJXZ.c)
 *     ?OnViewCreated@MiniSearchExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1803A27C8 (-OnViewCreated@MiniSearchExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Inter.c)
 *     ?OnViewDestroyed@MiniSearchExperienceManager@@AEAAJXZ @ 0x1803A2C4C (-OnViewDestroyed@MiniSearchExperienceManager@@AEAAJXZ.c)
 *     ?OnViewRequestNavigate@MiniSearchExperienceManager@@AEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1803A2E38 (-OnViewRequestNavigate@MiniSearchExperienceManager@@AEAAJPEAUIPropertySet@Collections@Foundation.c)
 *     ?PositionSearchAppWindow@MiniSearchExperienceManager@@AEAAJXZ @ 0x1803A30C8 (-PositionSearchAppWindow@MiniSearchExperienceManager@@AEAAJXZ.c)
 *     ?StartMiniSearchActivationTest@MiniSearchExperienceManager@@AEAAXXZ @ 0x1803A38B8 (-StartMiniSearchActivationTest@MiniSearchExperienceManager@@AEAAXXZ.c)
 *     ?watch_errors@?$tip_test@U_tip_MiniSearchActivationTest@@@tip@@QEAA?AV?$test_watcher@U_tip_MiniSearchActivationTest@@@2@XZ @ 0x1803A4E3C (-watch_errors@-$tip_test@U_tip_MiniSearchActivationTest@@@tip@@QEAA-AV-$test_watcher@U_tip_MiniS.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 *     ??$?0$$V@?$_Ref_count_obj2@V?$test_merged_data@U_tip_MiniSearchActivationTest@@@details@tip@@@std@@QEAA@XZ @ 0x1803A0788 (--$-0$$V@-$_Ref_count_obj2@V-$test_merged_data@U_tip_MiniSearchActivationTest@@@details@tip@@@st.c)
 */

_QWORD *__fastcall tip::tip_test<_tip_MiniSearchActivationTest>::ensure_data(_QWORD *a1)
{
  void *v2; // rax
  __int64 v3; // rax
  std::_Ref_count_base *v4; // rcx

  if ( !*a1 )
  {
    v2 = operator new(0xB0uLL);
    v3 = std::_Ref_count_obj2<tip::details::test_merged_data<_tip_MiniSearchActivationTest>>::_Ref_count_obj2<tip::details::test_merged_data<_tip_MiniSearchActivationTest>>((__int64)v2);
    *a1 = v3 + 16;
    v4 = (std::_Ref_count_base *)a1[1];
    a1[1] = v3;
    if ( v4 )
      std::_Ref_count_base::_Decref(v4);
  }
  return a1;
}
