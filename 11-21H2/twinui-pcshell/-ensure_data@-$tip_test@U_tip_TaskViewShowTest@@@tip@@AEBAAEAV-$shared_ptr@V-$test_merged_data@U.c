/*
 * XREFs of ?ensure_data@?$tip_test@U_tip_TaskViewShowTest@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_TaskViewShowTest@@@details@tip@@@std@@XZ @ 0x180016E14
 * Callers:
 *     ?ViewLoaded@TaskViewHost@@UEAAJXZ @ 0x180016BB0 (-ViewLoaded@TaskViewHost@@UEAAJXZ.c)
 *     ?Show@TaskViewHost@@UEAAJPEAUIImmersiveMonitorManager@@PEAUIImmersiveMonitor@@W4ALL_UP_VIEW_FLAGS@@@Z @ 0x180017E30 (-Show@TaskViewHost@@UEAAJPEAUIImmersiveMonitorManager@@PEAUIImmersiveMonitor@@W4ALL_UP_VIEW_FLAG.c)
 *     ?RuntimeClassInitialize@TaskViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z @ 0x1800507F8 (-RuntimeClassInitialize@TaskViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z.c)
 * Callees:
 *     ??$?0$$V@?$_Ref_count_obj2@V?$test_merged_data@U_tip_TaskViewShowTest@@@details@tip@@@std@@QEAA@XZ @ 0x180016E60 (--$-0$$V@-$_Ref_count_obj2@V-$test_merged_data@U_tip_TaskViewShowTest@@@details@tip@@@std@@QEAA@.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall tip::tip_test<_tip_TaskViewShowTest>::ensure_data(_QWORD *a1)
{
  void *v3; // rax
  __int64 v4; // rax
  std::_Ref_count_base *v5; // rcx

  if ( !*a1 )
  {
    v3 = operator new(0xB0uLL);
    v4 = std::_Ref_count_obj2<tip::details::test_merged_data<_tip_TaskViewShowTest>>::_Ref_count_obj2<tip::details::test_merged_data<_tip_TaskViewShowTest>>(v3);
    *a1 = v4 + 16;
    v5 = (std::_Ref_count_base *)a1[1];
    a1[1] = v4;
    if ( v5 )
      std::_Ref_count_base::_Decref(v5);
  }
  return a1;
}
