/*
 * XREFs of ?open_and_watch_errors@?$tip_test@U_tip_SwipeDashboard@@@tip@@QEAA?AV?$test_watcher@U_tip_SwipeDashboard@@@2@XZ @ 0x1805BE5FC
 * Callers:
 *     ??$open_and_watch_errors@V?$tip_test@U_tip_SwipeDashboard@@@tip@@@tip@@YA?AV?$test_watcher@U_tip_SwipeDashboard@@@0@XZ @ 0x1805BC138 (--$open_and_watch_errors@V-$tip_test@U_tip_SwipeDashboard@@@tip@@@tip@@YA-AV-$test_watcher@U_tip.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 *     ??4?$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18034D32C (--4-$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??0?$test_watcher@U_tip_SnapFlyoutShowTest@@@tip@@IEAA@AEAV?$shared_ptr@V?$test_merged_data@U_tip_SnapFlyoutShowTest@@@details@tip@@@std@@@Z @ 0x1805AE504 (--0-$test_watcher@U_tip_SnapFlyoutShowTest@@@tip@@IEAA@AEAV-$shared_ptr@V-$test_merged_data@U_ti.c)
 *     ??0?$test_merged_data@U_tip_SwipeDashboard@@@details@tip@@QEAA@PEAU_GUID@@W4TestRetrievalOptions@@@Z @ 0x1805BC9E4 (--0-$test_merged_data@U_tip_SwipeDashboard@@@details@tip@@QEAA@PEAU_GUID@@W4TestRetrievalOptions.c)
 *     ?ensure_data@?$tip_test@U_tip_SwipeDashboard@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_SwipeDashboard@@@details@tip@@@std@@XZ @ 0x1805BE364 (-ensure_data@-$tip_test@U_tip_SwipeDashboard@@@tip@@AEBAAEAV-$shared_ptr@V-$test_merged_data@U_t.c)
 */

// Hidden C++ exception states: #wind=1
struct wil::details::IFailureCallback *__fastcall tip::tip_test<_tip_SwipeDashboard>::open_and_watch_errors(
        _QWORD *a1,
        struct wil::details::IFailureCallback *a2)
{
  _DWORD *v4; // rdi
  _QWORD *v5; // rax
  _DWORD *v7; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v8; // [rsp+28h] [rbp-10h]

  v4 = operator new(0xB0uLL);
  v4[2] = 1;
  v4[3] = 1;
  *(_QWORD *)v4 = &std::_Ref_count_obj2<tip::details::test_merged_data<_tip_SwipeDashboard>>::`vftable';
  tip::details::test_merged_data<_tip_SwipeDashboard>::test_merged_data<_tip_SwipeDashboard>((_QWORD *)v4 + 2, 0LL, 0LL);
  v7 = v4 + 4;
  v8 = (std::_Ref_count_base *)v4;
  std::shared_ptr<KBViewInfo>::operator=(a1, (__int64 *)&v7);
  if ( v8 )
    std::_Ref_count_base::_Decref(v8);
  v5 = tip::tip_test<_tip_SwipeDashboard>::ensure_data(a1);
  tip::test_watcher<_tip_SnapFlyoutShowTest>::test_watcher<_tip_SnapFlyoutShowTest>(a2, v5);
  return a2;
}
