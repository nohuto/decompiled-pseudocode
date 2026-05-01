/*
 * XREFs of ??$start_and_watch_errors@V?$tip_test@U_tip_InputSwitcherHideTest@@@tip@@@tip@@YA?A_PXZ @ 0x1802EB052
 * Callers:
 *     ?InsertActionToQueue@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QEAAXW4InputSwitcherActionKind@23456@@Z @ 0x1806FFDB8 (-InsertActionToQueue@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QEAAXW4I.c)
 * Callees:
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x18008D2F8 (--0-$shared_ptr@V-$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QE.c)
 *     ?start@?$test_common_data@$00@details@tip@@QEAA?AU_GUID@@XZ @ 0x180098400 (-start@-$test_common_data@$00@details@tip@@QEAA-AU_GUID@@XZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x1800C8EDC (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 *     ?ensure_data@?$tip_test@U_tip_InputSwitcherHideTest@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_InputSwitcherHideTest@@@details@tip@@@std@@XZ @ 0x1802EB356 (-ensure_data@-$tip_test@U_tip_InputSwitcherHideTest@@@tip@@AEBAAEAV-$shared_ptr@V-$test_merged_d.c)
 */

struct wil::details::IFailureCallback *__fastcall tip::start_and_watch_errors<tip::tip_test<_tip_InputSwitcherHideTest>>(
        struct wil::details::IFailureCallback *a1)
{
  _QWORD *v2; // rax
  bool v3; // zf
  std::_Ref_count_base *v5[2]; // [rsp+20h] [rbp-28h] BYREF
  __int128 v6; // [rsp+30h] [rbp-18h] BYREF

  *(_OWORD *)v5 = 0LL;
  v2 = (_QWORD *)tip::tip_test<_tip_InputSwitcherHideTest>::ensure_data(v5);
  tip::details::test_common_data<1>::start(*v2 + 8LL, &v6);
  v3 = v5[0] == 0LL;
  *(_QWORD *)a1 = &tip::test_watcher<winrt::TransitionScreenUI::implementation::_tip_WaitOnLocalPCTest>::`vftable';
  wil::details::ThreadFailureCallbackHolder::ThreadFailureCallbackHolder(
    (struct wil::details::IFailureCallback *)((char *)a1 + 8),
    a1,
    0LL,
    !v3);
  std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
    (_QWORD *)a1 + 6,
    v5);
  if ( v5[1] )
    std::_Ref_count_base::_Decref(v5[1]);
  return a1;
}
