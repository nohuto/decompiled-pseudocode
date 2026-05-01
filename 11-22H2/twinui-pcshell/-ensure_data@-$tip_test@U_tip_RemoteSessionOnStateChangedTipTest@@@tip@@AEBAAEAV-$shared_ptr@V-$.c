/*
 * XREFs of ?ensure_data@?$tip_test@U_tip_RemoteSessionOnStateChangedTipTest@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_RemoteSessionOnStateChangedTipTest@@@details@tip@@@std@@XZ @ 0x180724144
 * Callers:
 *     ??C?$tip_test@U_tip_RemoteSessionOnStateChangedTipTest@@@tip@@QEAA?AV?$test_data_control@U_tip_RemoteSessionOnStateChangedTipTest@@@1@XZ @ 0x1807203C4 (--C-$tip_test@U_tip_RemoteSessionOnStateChangedTipTest@@@tip@@QEAA-AV-$test_data_control@U_tip_R.c)
 *     ?start@?$tip_test@U_tip_RemoteSessionOnStateChangedTipTest@@@tip@@QEAA?AU_GUID@@XZ @ 0x180724DC8 (-start@-$tip_test@U_tip_RemoteSessionOnStateChangedTipTest@@@tip@@QEAA-AU_GUID@@XZ.c)
 *     ?watch_errors@?$tip_test@U_tip_RemoteSessionOnStateChangedTipTest@@@tip@@QEAA?AV?$test_watcher@U_tip_RemoteSessionOnStateChangedTipTest@@@2@XZ @ 0x180724E24 (-watch_errors@-$tip_test@U_tip_RemoteSessionOnStateChangedTipTest@@@tip@@QEAA-AV-$test_watcher@U.c)
 *     ?open_and_watch_errors@?$tip_test@U_tip_RemoteSessionOnStateChangedTipTest@@@tip@@QEAA?AV?$test_watcher@U_tip_RemoteSessionOnStateChangedTipTest@@@2@XZ @ 0x1807337D0 (-open_and_watch_errors@-$tip_test@U_tip_RemoteSessionOnStateChangedTipTest@@@tip@@QEAA-AV-$test_.c)
 * Callees:
 *     ??4?$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18009C4F4 (--4-$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     ??$?0$$V@?$_Ref_count_obj2@V?$test_merged_data@U_tip_RemoteSessionOnStateChangedTipTest@@@details@tip@@@std@@QEAA@XZ @ 0x18071DD78 (--$-0$$V@-$_Ref_count_obj2@V-$test_merged_data@U_tip_RemoteSessionOnStateChangedTipTest@@@detail.c)
 */

_QWORD *__fastcall tip::tip_test<_tip_RemoteSessionOnStateChangedTipTest>::ensure_data(_QWORD *a1)
{
  void *v2; // rax
  std::_Ref_count_base *v3; // rax
  __int64 v5; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v6; // [rsp+28h] [rbp-10h]

  if ( !*a1 )
  {
    v2 = operator new(0x138uLL);
    v3 = (std::_Ref_count_base *)std::_Ref_count_obj2<tip::details::test_merged_data<_tip_RemoteSessionOnStateChangedTipTest>>::_Ref_count_obj2<tip::details::test_merged_data<_tip_RemoteSessionOnStateChangedTipTest>>((__int64)v2);
    v5 = (__int64)v3 + 16;
    v6 = v3;
    std::shared_ptr<KBViewInfo>::operator=(a1, &v5);
    if ( v6 )
      std::_Ref_count_base::_Decref(v6);
  }
  return a1;
}
