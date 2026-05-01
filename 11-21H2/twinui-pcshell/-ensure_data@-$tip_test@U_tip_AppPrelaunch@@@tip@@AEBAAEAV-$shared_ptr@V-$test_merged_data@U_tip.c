/*
 * XREFs of ?ensure_data@?$tip_test@U_tip_AppPrelaunch@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_AppPrelaunch@@@details@tip@@@std@@XZ @ 0x18011B350
 * Callers:
 *     ??$start_and_watch_errors@V?$tip_test@U_tip_AppPrelaunch@@@tip@@@tip@@YA?AV?$test_watcher@U_tip_AppPrelaunch@@@0@XZ @ 0x18011B2D0 (--$start_and_watch_errors@V-$tip_test@U_tip_AppPrelaunch@@@tip@@@tip@@YA-AV-$test_watcher@U_tip_.c)
 *     ??C?$tip_test@U_tip_AppPrelaunch@@@tip@@QEAA?AV?$test_data_control@U_tip_AppPrelaunch@@@1@XZ @ 0x1801C48B8 (--C-$tip_test@U_tip_AppPrelaunch@@@tip@@QEAA-AV-$test_data_control@U_tip_AppPrelaunch@@@1@XZ.c)
 * Callees:
 *     ??4?$shared_ptr@UViewEventRegistration@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180095E64 (--4-$shared_ptr@UViewEventRegistration@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$?0$$V@?$_Ref_count_obj2@V?$test_merged_data@U_tip_AppPrelaunch@@@details@tip@@@std@@QEAA@XZ @ 0x18011B3B0 (--$-0$$V@-$_Ref_count_obj2@V-$test_merged_data@U_tip_AppPrelaunch@@@details@tip@@@std@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall tip::tip_test<_tip_AppPrelaunch>::ensure_data(_QWORD *a1)
{
  void *v2; // rax
  std::_Ref_count_base *v3; // rax
  __int64 v5; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v6; // [rsp+28h] [rbp-10h]

  if ( !*a1 )
  {
    v2 = operator new(0xD8uLL);
    v3 = (std::_Ref_count_base *)std::_Ref_count_obj2<tip::details::test_merged_data<_tip_AppPrelaunch>>::_Ref_count_obj2<tip::details::test_merged_data<_tip_AppPrelaunch>>(v2);
    v5 = (__int64)v3 + 16;
    v6 = v3;
    std::shared_ptr<ViewEventRegistration>::operator=(a1, &v5);
    if ( v6 )
      std::_Ref_count_base::_Decref(v6);
  }
  return a1;
}
