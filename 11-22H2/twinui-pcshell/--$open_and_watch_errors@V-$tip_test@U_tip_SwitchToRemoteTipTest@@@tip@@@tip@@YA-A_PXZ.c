/*
 * XREFs of ??$open_and_watch_errors@V?$tip_test@U_tip_SwitchToRemoteTipTest@@@tip@@@tip@@YA?A_PXZ @ 0x18070CD84
 * Callers:
 *     ?SwitchToRemoteDesktop@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUhstring@6@@Z @ 0x180718E60 (-SwitchToRemoteDesktop@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt.c)
 * Callees:
 *     ??4?$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18009C4F4 (--4-$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     ??0?$test_watcher@U_tip_VDSlideAnimationPerfTest@@@tip@@IEAA@AEAV?$shared_ptr@V?$test_merged_data@U_tip_VDSlideAnimationPerfTest@@@details@tip@@@std@@@Z @ 0x1805FFFF4 (--0-$test_watcher@U_tip_VDSlideAnimationPerfTest@@@tip@@IEAA@AEAV-$shared_ptr@V-$test_merged_dat.c)
 *     ??$?0$$TAEAW4TestRetrievalOptions@@@?$_Ref_count_obj2@V?$test_merged_data@U_tip_SwitchToRemoteTipTest@@@details@tip@@@std@@QEAA@$$QEA$$TAEAW4TestRetrievalOptions@@@Z @ 0x180708974 (--$-0$$TAEAW4TestRetrievalOptions@@@-$_Ref_count_obj2@V-$test_merged_data@U_tip_SwitchToRemoteTi.c)
 *     ?ensure_data@?$tip_test@U_tip_SwitchToRemoteTipTest@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_SwitchToRemoteTipTest@@@details@tip@@@std@@XZ @ 0x18071B1A4 (-ensure_data@-$tip_test@U_tip_SwitchToRemoteTipTest@@@tip@@AEBAAEAV-$shared_ptr@V-$test_merged_d.c)
 */

struct wil::details::IFailureCallback *__fastcall tip::open_and_watch_errors<tip::tip_test<_tip_SwitchToRemoteTipTest>>(
        struct wil::details::IFailureCallback *a1)
{
  void *v2; // rax
  std::_Ref_count_base *v3; // rax
  _QWORD *v4; // rax
  __int64 v6; // [rsp+20h] [rbp-20h] BYREF
  std::_Ref_count_base *v7; // [rsp+28h] [rbp-18h]
  std::_Ref_count_base *v8[2]; // [rsp+30h] [rbp-10h] BYREF
  int v9; // [rsp+50h] [rbp+10h] BYREF
  __int64 v10; // [rsp+58h] [rbp+18h] BYREF

  *(_OWORD *)v8 = 0LL;
  v9 = 0;
  v10 = 0LL;
  v2 = operator new(0x140uLL);
  v3 = (std::_Ref_count_base *)std::_Ref_count_obj2<tip::details::test_merged_data<_tip_SwitchToRemoteTipTest>>::_Ref_count_obj2<tip::details::test_merged_data<_tip_SwitchToRemoteTipTest>>(
                                 (__int64)v2,
                                 &v10,
                                 &v9);
  v6 = (__int64)v3 + 16;
  v7 = v3;
  std::shared_ptr<KBViewInfo>::operator=(v8, &v6);
  if ( v7 )
    std::_Ref_count_base::_Decref(v7);
  v4 = (_QWORD *)tip::tip_test<_tip_SwitchToRemoteTipTest>::ensure_data(v8);
  tip::test_watcher<_tip_VDSlideAnimationPerfTest>::test_watcher<_tip_VDSlideAnimationPerfTest>(a1, v4);
  if ( v8[1] )
    std::_Ref_count_base::_Decref(v8[1]);
  return a1;
}
