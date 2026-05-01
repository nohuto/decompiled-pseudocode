/*
 * XREFs of ?start_and_watch_errors@?$tip_test@U_tip_OnLaunchedTest_WASDK@XamlExplorerHostTipTests@@@tip@@QEAA?AV?$test_watcher@U_tip_OnLaunchedTest_WASDK@XamlExplorerHostTipTests@@@2@XZ @ 0x1800489D0
 * Callers:
 *     ?OnLaunched@XamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAAXULaunchActivatedEventArgs@Xaml@UI@Microsoft@8@@Z @ 0x180048694 (-OnLaunched@XamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@w.c)
 * Callees:
 *     ??$?0$$V@?$_Ref_count_obj2@V?$test_merged_data@U_tip_OnLaunchedTest_WASDK@XamlExplorerHostTipTests@@@details@tip@@@std@@QEAA@XZ @ 0x180048A74 (--$-0$$V@-$_Ref_count_obj2@V-$test_merged_data@U_tip_OnLaunchedTest_WASDK@XamlExplorerHostTipTes.c)
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x18008D2F8 (--0-$shared_ptr@V-$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QE.c)
 *     ?reset@?$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ @ 0x180098ACC (-reset@-$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ.c)
 *     ?start@?$test_common_data@$0A@@details@tip@@QEAA?AU_GUID@@XZ @ 0x180098DD0 (-start@-$test_common_data@$0A@@details@tip@@QEAA-AU_GUID@@XZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x1800C8EDC (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     ?has_ever_started@?$test_common_data@$0A@@details@tip@@QEAA_NXZ @ 0x1804F6CEC (-has_ever_started@-$test_common_data@$0A@@details@tip@@QEAA_NXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall tip::tip_test<XamlExplorerHostTipTests::_tip_OnLaunchedTest_WASDK>::start_and_watch_errors(
        __int64 *a1,
        __int64 a2)
{
  __int64 v4; // rcx
  void *v5; // rax
  __int64 v6; // rax
  std::_Ref_count_base *v7; // rcx
  _BYTE v9[24]; // [rsp+20h] [rbp-18h] BYREF

  v4 = *a1;
  if ( v4 && (unsigned __int8)tip::details::test_common_data<0>::has_ever_started(v4 + 8) )
    std::shared_ptr<PeoplePaneViewInfo>::reset(a1);
  if ( !*a1 )
  {
    v5 = operator new(0xD0uLL);
    v6 = std::_Ref_count_obj2<tip::details::test_merged_data<XamlExplorerHostTipTests::_tip_OnLaunchedTest_WASDK>>::_Ref_count_obj2<tip::details::test_merged_data<XamlExplorerHostTipTests::_tip_OnLaunchedTest_WASDK>>(v5);
    *a1 = v6 + 16;
    v7 = (std::_Ref_count_base *)a1[1];
    a1[1] = v6;
    if ( v7 )
      std::_Ref_count_base::_Decref(v7);
  }
  tip::details::test_common_data<0>::start(*a1 + 8, v9);
  *(_QWORD *)a2 = &tip::test_watcher<XamlExplorerHostTipTests::_tip_OnLaunchedTest>::`vftable';
  wil::details::ThreadFailureCallbackHolder::ThreadFailureCallbackHolder(
    (wil::details::ThreadFailureCallbackHolder *)(a2 + 8),
    (struct wil::details::IFailureCallback *)a2,
    0LL,
    *a1 != 0);
  std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
    a2 + 48,
    a1);
  return a2;
}
