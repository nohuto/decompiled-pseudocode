/*
 * XREFs of ?ensure_data@?$tip_test@U_tip_SnapAssistShowTest@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_SnapAssistShowTest@@@details@tip@@@std@@XZ @ 0x180604944
 * Callers:
 *     ??$start_and_watch_errors@V?$tip_test@U_tip_SnapAssistShowTest@@@tip@@@tip@@YA?AV?$test_watcher@U_tip_SnapAssistShowTest@@@0@XZ @ 0x1805FFFC8 (--$start_and_watch_errors@V-$tip_test@U_tip_SnapAssistShowTest@@@tip@@@tip@@YA-AV-$test_watcher@.c)
 *     ?Show@XamlSnapAssistViewHost@@UEAAJPEAUtagRECT@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x1806031D0 (-Show@XamlSnapAssistViewHost@@UEAAJPEAUtagRECT@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z.c)
 *     ?ViewLoaded@XamlSnapAssistViewHost@@UEAAJXZ @ 0x180604430 (-ViewLoaded@XamlSnapAssistViewHost@@UEAAJXZ.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 *     ??$?0$$V@?$_Ref_count_obj2@V?$test_merged_data@U_tip_SnapAssistShowTest@@@details@tip@@@std@@QEAA@XZ @ 0x1805FEFF4 (--$-0$$V@-$_Ref_count_obj2@V-$test_merged_data@U_tip_SnapAssistShowTest@@@details@tip@@@std@@QEA.c)
 */

_QWORD *__fastcall tip::tip_test<_tip_SnapAssistShowTest>::ensure_data(_QWORD *a1)
{
  void *v2; // rax
  __int64 v3; // rax
  std::_Ref_count_base *v4; // rcx

  if ( !*a1 )
  {
    v2 = operator new(0xB0uLL);
    v3 = std::_Ref_count_obj2<tip::details::test_merged_data<_tip_SnapAssistShowTest>>::_Ref_count_obj2<tip::details::test_merged_data<_tip_SnapAssistShowTest>>((__int64)v2);
    *a1 = v3 + 16;
    v4 = (std::_Ref_count_base *)a1[1];
    a1[1] = v3;
    if ( v4 )
      std::_Ref_count_base::_Decref(v4);
  }
  return a1;
}
