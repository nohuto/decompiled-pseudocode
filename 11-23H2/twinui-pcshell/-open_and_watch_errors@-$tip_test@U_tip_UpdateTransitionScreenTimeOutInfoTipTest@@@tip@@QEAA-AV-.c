/*
 * XREFs of ?open_and_watch_errors@?$tip_test@U_tip_UpdateTransitionScreenTimeOutInfoTipTest@@@tip@@QEAA?AV?$test_watcher@U_tip_UpdateTransitionScreenTimeOutInfoTipTest@@@2@XZ @ 0x18072495C
 * Callers:
 *     _lambda_1cf95a55fff0866401cd411783285d2a_::operator() @ 0x1807203FC (_lambda_1cf95a55fff0866401cd411783285d2a_--operator().c)
 * Callees:
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x18008D2F8 (--0-$shared_ptr@V-$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QE.c)
 *     ??4?$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18009C4F4 (--4-$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x1800C8EDC (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     ?ensure_data@?$tip_test@U_tip_UpdateTransitionScreenTimeOutInfoTipTest@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_UpdateTransitionScreenTimeOutInfoTipTest@@@details@tip@@@std@@XZ @ 0x18071B200 (-ensure_data@-$tip_test@U_tip_UpdateTransitionScreenTimeOutInfoTipTest@@@tip@@AEBAAEAV-$shared_p.c)
 *     ??$?0$$TAEAW4TestRetrievalOptions@@@?$_Ref_count_obj2@V?$test_merged_data@U_tip_UpdateTransitionScreenTimeOutInfoTipTest@@@details@tip@@@std@@QEAA@$$QEA$$TAEAW4TestRetrievalOptions@@@Z @ 0x18071DBA4 (--$-0$$TAEAW4TestRetrievalOptions@@@-$_Ref_count_obj2@V-$test_merged_data@U_tip_UpdateTransition.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall tip::tip_test<_tip_UpdateTransitionScreenTimeOutInfoTipTest>::open_and_watch_errors(
        _QWORD *a1,
        __int64 a2)
{
  void *v4; // rax
  std::_Ref_count_base *updated; // rax
  _QWORD *v6; // rbx
  __int64 v8; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v9; // [rsp+28h] [rbp-10h]
  int v10; // [rsp+40h] [rbp+8h] BYREF
  __int64 v11; // [rsp+48h] [rbp+10h] BYREF

  v10 = 0;
  v11 = 0LL;
  v4 = operator new(0xD0uLL);
  updated = (std::_Ref_count_base *)std::_Ref_count_obj2<tip::details::test_merged_data<_tip_UpdateTransitionScreenTimeOutInfoTipTest>>::_Ref_count_obj2<tip::details::test_merged_data<_tip_UpdateTransitionScreenTimeOutInfoTipTest>>(
                                      (__int64)v4,
                                      &v11,
                                      &v10);
  v8 = (__int64)updated + 16;
  v9 = updated;
  std::shared_ptr<KBViewInfo>::operator=(a1, &v8);
  if ( v9 )
    std::_Ref_count_base::_Decref(v9);
  v6 = tip::tip_test<_tip_UpdateTransitionScreenTimeOutInfoTipTest>::ensure_data(a1);
  *(_QWORD *)a2 = &tip::test_watcher<winrt::TransitionScreenUI::implementation::_tip_WaitOnLocalPCTest>::`vftable';
  wil::details::ThreadFailureCallbackHolder::ThreadFailureCallbackHolder(
    (wil::details::ThreadFailureCallbackHolder *)(a2 + 8),
    (struct wil::details::IFailureCallback *)a2,
    0LL,
    *v6 != 0LL);
  std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
    (_QWORD *)(a2 + 48),
    v6);
  return a2;
}
