/*
 * XREFs of ?ensure_data@?$tip_test@U_tip_SwipeDashboard@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_SwipeDashboard@@@details@tip@@@std@@XZ @ 0x1805BE364
 * Callers:
 *     ??$start_and_watch_errors@V?$tip_test@U_tip_SwipeDashboard@@@tip@@@tip@@YA?AV?$test_watcher@U_tip_SwipeDashboard@@@0@XZ @ 0x1805BC838 (--$start_and_watch_errors@V-$tip_test@U_tip_SwipeDashboard@@@tip@@@tip@@YA-AV-$test_watcher@U_ti.c)
 *     ?open_and_watch_errors@?$tip_test@U_tip_SwipeDashboard@@@tip@@QEAA?AV?$test_watcher@U_tip_SwipeDashboard@@@2@XZ @ 0x1805BE5FC (-open_and_watch_errors@-$tip_test@U_tip_SwipeDashboard@@@tip@@QEAA-AV-$test_watcher@U_tip_SwipeD.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 *     ??4?$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18034D32C (--4-$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??$?0$$V@?$_Ref_count_obj2@V?$test_merged_data@U_tip_SwipeDashboard@@@details@tip@@@std@@QEAA@XZ @ 0x1805BBC0C (--$-0$$V@-$_Ref_count_obj2@V-$test_merged_data@U_tip_SwipeDashboard@@@details@tip@@@std@@QEAA@XZ.c)
 */

_QWORD *__fastcall tip::tip_test<_tip_SwipeDashboard>::ensure_data(_QWORD *a1)
{
  void *v2; // rax
  std::_Ref_count_base *v3; // rax
  __int64 v5; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v6; // [rsp+28h] [rbp-10h]

  if ( !*a1 )
  {
    v2 = operator new(0xB0uLL);
    v3 = (std::_Ref_count_base *)std::_Ref_count_obj2<tip::details::test_merged_data<_tip_SwipeDashboard>>::_Ref_count_obj2<tip::details::test_merged_data<_tip_SwipeDashboard>>((__int64)v2);
    v5 = (__int64)v3 + 16;
    v6 = v3;
    std::shared_ptr<KBViewInfo>::operator=(a1, &v5);
    if ( v6 )
      std::_Ref_count_base::_Decref(v6);
  }
  return a1;
}
