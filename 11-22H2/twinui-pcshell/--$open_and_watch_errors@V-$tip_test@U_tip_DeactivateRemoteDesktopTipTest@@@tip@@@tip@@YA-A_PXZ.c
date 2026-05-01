/*
 * XREFs of ??$open_and_watch_errors@V?$tip_test@U_tip_DeactivateRemoteDesktopTipTest@@@tip@@@tip@@YA?A_PXZ @ 0x18070CD04
 * Callers:
 *     _lambda_66e3247105c53d232400c257ddcfd6f2_::operator() @ 0x180282544 (_lambda_66e3247105c53d232400c257ddcfd6f2_--operator().c)
 *     _lambda_c08ce6a39495b94ac81d1bf94c809a99_::operator() @ 0x180282678 (_lambda_c08ce6a39495b94ac81d1bf94c809a99_--operator().c)
 *     _lambda_d5554fb7d1d16b7c69ea1af45fa7d089_::operator() @ 0x1802827AC (_lambda_d5554fb7d1d16b7c69ea1af45fa7d089_--operator().c)
 *     winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::CloseCloudPCConnection$_ResumeCoro$1 @ 0x1802829E0 (winrt--Windows--Internal--Shell--implementation--SwitchConnectionHandler--CloseClou_ea_1802829E0.c)
 *     ?DisconnectProvider@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SAXAEBUhstring@6@@Z @ 0x1807110E8 (-DisconnectProvider@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SAXAEBUhs.c)
 *     ?DeactivateRemoteDesktop@SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEBAXAEBUguid@6@@Z @ 0x180731570 (-DeactivateRemoteDesktop@SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UE.c)
 * Callees:
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x18008D2F8 (--0-$shared_ptr@V-$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QE.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x1800C8EDC (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 *     ?ensure_data@?$tip_test@U_tip_DeactivateRemoteDesktopTipTest@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@XZ @ 0x18071B148 (-ensure_data@-$tip_test@U_tip_DeactivateRemoteDesktopTipTest@@@tip@@AEBAAEAV-$shared_ptr@V-$test.c)
 *     ?open@?$tip_test@U_tip_DeactivateRemoteDesktopTipTest@@@tip@@QEAA_NW4TestRetrievalOptions@@@Z @ 0x18071C20C (-open@-$tip_test@U_tip_DeactivateRemoteDesktopTipTest@@@tip@@QEAA_NW4TestRetrievalOptions@@@Z.c)
 */

struct wil::details::IFailureCallback *__fastcall tip::open_and_watch_errors<tip::tip_test<_tip_DeactivateRemoteDesktopTipTest>>(
        struct wil::details::IFailureCallback *a1)
{
  _QWORD *v2; // rbx
  std::_Ref_count_base *v4[2]; // [rsp+20h] [rbp-18h] BYREF

  *(_OWORD *)v4 = 0LL;
  tip::tip_test<_tip_DeactivateRemoteDesktopTipTest>::open(v4);
  v2 = (_QWORD *)tip::tip_test<_tip_DeactivateRemoteDesktopTipTest>::ensure_data(v4);
  *(_QWORD *)a1 = &tip::test_watcher<winrt::TransitionScreenUI::implementation::_tip_WaitOnLocalPCTest>::`vftable';
  wil::details::ThreadFailureCallbackHolder::ThreadFailureCallbackHolder(
    (struct wil::details::IFailureCallback *)((char *)a1 + 8),
    a1,
    0LL,
    *v2 != 0LL);
  std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
    (_QWORD *)a1 + 6,
    v2);
  if ( v4[1] )
    std::_Ref_count_base::_Decref(v4[1]);
  return a1;
}
