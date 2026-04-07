/*
 * XREFs of ?PreTransition@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@QEAAXW4ShellTransition@456@AEBUTransitionState@456@@Z @ 0x1800F4790
 * Callers:
 *     ?PreTransition@?$produce@UScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@UITransitionHandler@456@@impl@winrt@@UEAAHHPEAX@Z @ 0x1800F4730 (-PreTransition@-$produce@UScreenRotationRejuvTransitionHandler@implementation@Private@Transition.c)
 * Callees:
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z @ 0x1800126B0 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z.c)
 *     ?Complete@?$consume_Udwm_Transitions_ITransitionState@UITransitionState@Transitions@Udwm@winrt@@@impl@winrt@@QEBAXXZ @ 0x180013F74 (-Complete@-$consume_Udwm_Transitions_ITransitionState@UITransitionState@Transitions@Udwm@winrt@@.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180037B78 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?reset@?$shared_ptr@V?$test_merged_data@U_tip_WindowMaximizeSnapTest@Tip@Private@Transitions@Udwm@@@details@tip@@@std@@QEAAXXZ @ 0x18003FEA4 (-reset@-$shared_ptr@V-$test_merged_data@U_tip_WindowMaximizeSnapTest@Tip@Private@Transitions@Udw.c)
 *     ?begin_update@?$test_common_data@$0A@@details@tip@@QEAA_NXZ @ 0x18003FFFC (-begin_update@-$test_common_data@$0A@@details@tip@@QEAA_NXZ.c)
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_ScreenRotationTest@Tip@Private@Transitions@Udwm@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x180040038 (--0-$shared_ptr@V-$test_merged_data@U_tip_ScreenRotationTest@Tip@Private@Transitions@Udwm@@@deta.c)
 *     ?ensure_data@?$tip_test@U_tip_ScreenRotationTest@Tip@Private@Transitions@Udwm@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_ScreenRotationTest@Tip@Private@Transitions@Udwm@@@details@tip@@@std@@XZ @ 0x180040068 (-ensure_data@-$tip_test@U_tip_ScreenRotationTest@Tip@Private@Transitions@Udwm@@@tip@@AEBAAEAV-$s.c)
 *     ?end_update@?$test_common_data@$0A@@details@tip@@QEAAXXZ @ 0x1800400CC (-end_update@-$test_common_data@$0A@@details@tip@@QEAAXXZ.c)
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x1800401A0 (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 *     ??8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x180040770 (--8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180042010 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?start@?$test_common_data@$0A@@details@tip@@QEAA?AU_GUID@@XZ @ 0x1800444CC (-start@-$test_common_data@$0A@@details@tip@@QEAA-AU_GUID@@XZ.c)
 *     ?Capture@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800F3A98 (-Capture@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEA.c)
 *     ?log@?$tip_test@U_tip_ScreenRotationTest@Tip@Private@Transitions@Udwm@@@tip@@QEAAXV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800F6208 (-log@-$tip_test@U_tip_ScreenRotationTest@Tip@Private@Transitions@Udwm@@@tip@@QEAAXV-$basic_strin.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::Udwm::Transitions::Private::implementation::ScreenRotationRejuvTransitionHandler::PreTransition(
        _QWORD *a1,
        int a2,
        winrt::Windows::Foundation::IUnknown *a3)
{
  __int64 v6; // rax
  _QWORD *v7; // rax
  _QWORD *v8; // rax
  std::_Ref_count_base *v9; // rbx
  __int64 v10; // rax
  _QWORD *v11; // rbx
  std::_Ref_count_base *v12[2]; // [rsp+20h] [rbp-50h] BYREF
  void **v13; // [rsp+30h] [rbp-40h] BYREF
  _BYTE v14[24]; // [rsp+38h] [rbp-38h] BYREF
  int v15; // [rsp+50h] [rbp-20h]
  __int64 v16; // [rsp+60h] [rbp-10h] BYREF
  std::_Ref_count_base *v17; // [rsp+68h] [rbp-8h]
  __int64 v18; // [rsp+A0h] [rbp+30h] BYREF

  v18 = 0LL;
  if ( winrt::Windows::Foundation::operator==((void (__fastcall ****)(_QWORD, __int64 *, __int64 *))a1 + 5, &v18) )
  {
    winrt::Windows::Foundation::IUnknown::operator=((winrt::Windows::Foundation::IUnknown *)(a1 + 5), a3);
    v6 = a1[17];
    if ( v6 && (*(_QWORD *)(v6 + 128) || (*(_DWORD *)(v6 + 32) & 0x100) != 0) )
      std::shared_ptr<tip::details::test_merged_data<Udwm::Transitions::Private::Tip::_tip_WindowMaximizeSnapTest>>::reset(a1 + 17);
    v7 = tip::tip_test<Udwm::Transitions::Private::Tip::_tip_ScreenRotationTest>::ensure_data(a1 + 17);
    tip::details::test_common_data<0>::start(*v7 + 8LL, v12);
    v8 = tip::tip_test<Udwm::Transitions::Private::Tip::_tip_ScreenRotationTest>::ensure_data(a1 + 17);
    std::shared_ptr<tip::details::test_merged_data<Udwm::Transitions::Private::Tip::_tip_ScreenRotationTest>>::shared_ptr<tip::details::test_merged_data<Udwm::Transitions::Private::Tip::_tip_ScreenRotationTest>>(
      v12,
      v8);
    v9 = v12[0];
    tip::details::test_common_data<0>::begin_update((__int64)v12[0] + 8);
    v10 = (__int64)v9 + 152;
    if ( !v9 )
      v10 = 8LL;
    *(_DWORD *)v10 = a2;
    if ( v9 )
    {
      tip::details::test_common_data<0>::end_update((__int64)v9 + 8);
      std::shared_ptr<tip::details::test_merged_data<Udwm::Transitions::Private::Tip::_tip_WindowMaximizeSnapTest>>::reset(v12);
    }
    if ( v12[1] )
      std::_Ref_count_base::_Decref(v12[1]);
    v12[0] = (std::_Ref_count_base *)L"TIP test started";
    v12[1] = (std::_Ref_count_base *)16;
    tip::tip_test<Udwm::Transitions::Private::Tip::_tip_ScreenRotationTest>::log(a1 + 17, v12);
  }
  else
  {
    winrt::impl::consume_Udwm_Transitions_ITransitionState<winrt::Udwm::Transitions::ITransitionState>::Complete(a3);
  }
  v11 = tip::tip_test<Udwm::Transitions::Private::Tip::_tip_ScreenRotationTest>::ensure_data(a1 + 17);
  v13 = &tip::test_watcher<Udwm::Transitions::Private::Tip::_tip_WindowMaximizeSnapTest>::`vftable';
  wil::details::ThreadFailureCallbackHolder::ThreadFailureCallbackHolder(
    (wil::details::ThreadFailureCallbackHolder *)v14,
    (struct wil::details::IFailureCallback *)&v13,
    0LL,
    *v11 != 0LL);
  std::shared_ptr<tip::details::test_merged_data<Udwm::Transitions::Private::Tip::_tip_ScreenRotationTest>>::shared_ptr<tip::details::test_merged_data<Udwm::Transitions::Private::Tip::_tip_ScreenRotationTest>>(
    &v16,
    v11);
  winrt::Udwm::Transitions::Private::implementation::ScreenRotationRejuvTransitionHandler::Capture((winrt::Udwm::Transitions::Private::implementation::ScreenRotationRejuvTransitionHandler *)a1);
  if ( v17 )
    std::_Ref_count_base::_Decref(v17);
  if ( v15 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v14);
}
