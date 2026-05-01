/*
 * XREFs of ?ensure_data@?$tip_test@U_tip_AltTabShowTest@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_AltTabShowTest@@@details@tip@@@std@@XZ @ 0x1805FDD54
 * Callers:
 *     ??C?$tip_test@U_tip_AltTabShowTest@@@tip@@QEAA?AV?$test_data_control@U_tip_AltTabShowTest@@@1@XZ @ 0x1805F9A08 (--C-$tip_test@U_tip_AltTabShowTest@@@tip@@QEAA-AV-$test_data_control@U_tip_AltTabShowTest@@@1@XZ.c)
 *     ?RuntimeClassInitialize@XamlAltTabViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z @ 0x1805FB4D8 (-RuntimeClassInitialize@XamlAltTabViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z.c)
 *     ?Show@XamlAltTabViewHost@@UEAAJPEAUIImmersiveMonitor@@W4ALT_TAB_VIEW_FLAGS@@PEAUIApplicationView@@@Z @ 0x1805FBBA0 (-Show@XamlAltTabViewHost@@UEAAJPEAUIImmersiveMonitor@@W4ALT_TAB_VIEW_FLAGS@@PEAUIApplicationView.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 *     ??$?0$$V@?$_Ref_count_obj2@V?$test_merged_data@U_tip_AltTabShowTest@@@details@tip@@@std@@QEAA@XZ @ 0x1805F86C0 (--$-0$$V@-$_Ref_count_obj2@V-$test_merged_data@U_tip_AltTabShowTest@@@details@tip@@@std@@QEAA@XZ.c)
 */

_QWORD *__fastcall tip::tip_test<_tip_AltTabShowTest>::ensure_data(_QWORD *a1)
{
  void *v2; // rax
  __int64 v3; // rax
  std::_Ref_count_base *v4; // rcx

  if ( !*a1 )
  {
    v2 = operator new(0xB0uLL);
    v3 = std::_Ref_count_obj2<tip::details::test_merged_data<_tip_AltTabShowTest>>::_Ref_count_obj2<tip::details::test_merged_data<_tip_AltTabShowTest>>((__int64)v2);
    *a1 = v3 + 16;
    v4 = (std::_Ref_count_base *)a1[1];
    a1[1] = v3;
    if ( v4 )
      std::_Ref_count_base::_Decref(v4);
  }
  return a1;
}
