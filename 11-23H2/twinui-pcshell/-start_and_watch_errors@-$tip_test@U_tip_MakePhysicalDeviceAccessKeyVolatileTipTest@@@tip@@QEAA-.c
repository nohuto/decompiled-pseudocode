/*
 * XREFs of ?start_and_watch_errors@?$tip_test@U_tip_MakePhysicalDeviceAccessKeyVolatileTipTest@@@tip@@QEAA?AV?$test_watcher@U_tip_MakePhysicalDeviceAccessKeyVolatileTipTest@@@2@XZ @ 0x180278CD4
 * Callers:
 *     ?HandlePhysicalDeviceAccess@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x180277CEC (-HandlePhysicalDeviceAccess@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@AEAAXX.c)
 * Callees:
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x18008D2F8 (--0-$shared_ptr@V-$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QE.c)
 *     ?has_ever_started@?$test_common_data@$00@details@tip@@QEAA_NXZ @ 0x18008D6C8 (-has_ever_started@-$test_common_data@$00@details@tip@@QEAA_NXZ.c)
 *     ?start@?$test_common_data@$00@details@tip@@QEAA?AU_GUID@@XZ @ 0x180098400 (-start@-$test_common_data@$00@details@tip@@QEAA-AU_GUID@@XZ.c)
 *     ?reset@?$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ @ 0x180098ACC (-reset@-$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x1800C8EDC (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     ??$?0$$V@?$_Ref_count_obj2@V?$test_merged_data@U_tip_MakePhysicalDeviceAccessKeyVolatileTipTest@@@details@tip@@@std@@QEAA@XZ @ 0x1802766D0 (--$-0$$V@-$_Ref_count_obj2@V-$test_merged_data@U_tip_MakePhysicalDeviceAccessKeyVolatileTipTest@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall tip::tip_test<_tip_MakePhysicalDeviceAccessKeyVolatileTipTest>::start_and_watch_errors(
        __int64 *a1,
        __int64 a2)
{
  __int64 v4; // rcx
  void *v5; // rax
  __int64 PhysicalDeviceAccessKeyVolatileTip; // rax
  std::_Ref_count_base *v7; // rcx
  __int128 v9; // [rsp+20h] [rbp-18h] BYREF

  v4 = *a1;
  if ( v4 && tip::details::test_common_data<1>::has_ever_started(v4 + 8) )
    std::shared_ptr<PeoplePaneViewInfo>::reset(a1);
  if ( !*a1 )
  {
    v5 = operator new(0xD0uLL);
    PhysicalDeviceAccessKeyVolatileTip = std::_Ref_count_obj2<tip::details::test_merged_data<_tip_MakePhysicalDeviceAccessKeyVolatileTipTest>>::_Ref_count_obj2<tip::details::test_merged_data<_tip_MakePhysicalDeviceAccessKeyVolatileTipTest>>((__int64)v5);
    *a1 = PhysicalDeviceAccessKeyVolatileTip + 16;
    v7 = (std::_Ref_count_base *)a1[1];
    a1[1] = PhysicalDeviceAccessKeyVolatileTip;
    if ( v7 )
      std::_Ref_count_base::_Decref(v7);
  }
  tip::details::test_common_data<1>::start(*a1 + 8, &v9);
  *(_QWORD *)a2 = &tip::test_watcher<_tip_MakePhysicalDeviceAccessKeyVolatileTipTest>::`vftable';
  wil::details::ThreadFailureCallbackHolder::ThreadFailureCallbackHolder(
    (wil::details::ThreadFailureCallbackHolder *)(a2 + 8),
    (struct wil::details::IFailureCallback *)a2,
    0LL,
    *a1 != 0);
  std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
    (_QWORD *)(a2 + 48),
    a1);
  return a2;
}
