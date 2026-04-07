/*
 * XREFs of ?PreTransition@WindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@QEAAXW4ShellTransition@456@AEBUTransitionState@456@@Z @ 0x18003F290
 * Callers:
 *     ?PreTransition@?$produce@UWindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@UITransitionHandler@456@@impl@winrt@@UEAAHHPEAX@Z @ 0x180013C80 (-PreTransition@-$produce@UWindowMaximizeSnapTransitionHandler@implementation@Private@Transitions.c)
 * Callees:
 *     ?CaptureVisuals@WindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXW4ShellTransition@456@@Z @ 0x1800119AC (-CaptureVisuals@WindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winr.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z @ 0x1800126B0 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180037B78 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?CompleteState@WindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x18003F454 (-CompleteState@WindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt.c)
 *     ?ensure_data@?$tip_test@U_tip_WindowMaximizeSnapTest@Tip@Private@Transitions@Udwm@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_WindowMaximizeSnapTest@Tip@Private@Transitions@Udwm@@@details@tip@@@std@@XZ @ 0x18003F594 (-ensure_data@-$tip_test@U_tip_WindowMaximizeSnapTest@Tip@Private@Transitions@Udwm@@@tip@@AEBAAEA.c)
 *     ?reset@?$shared_ptr@V?$test_merged_data@U_tip_WindowMaximizeSnapTest@Tip@Private@Transitions@Udwm@@@details@tip@@@std@@QEAAXXZ @ 0x18003FEA4 (-reset@-$shared_ptr@V-$test_merged_data@U_tip_WindowMaximizeSnapTest@Tip@Private@Transitions@Udw.c)
 *     ?begin_update@?$test_common_data@$0A@@details@tip@@QEAA_NXZ @ 0x18003FFFC (-begin_update@-$test_common_data@$0A@@details@tip@@QEAA_NXZ.c)
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_ScreenRotationTest@Tip@Private@Transitions@Udwm@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x180040038 (--0-$shared_ptr@V-$test_merged_data@U_tip_ScreenRotationTest@Tip@Private@Transitions@Udwm@@@deta.c)
 *     ?end_update@?$test_common_data@$0A@@details@tip@@QEAAXXZ @ 0x1800400CC (-end_update@-$test_common_data@$0A@@details@tip@@QEAAXXZ.c)
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x1800401A0 (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180042010 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?start@?$test_common_data@$0A@@details@tip@@QEAA?AU_GUID@@XZ @ 0x1800444CC (-start@-$test_common_data@$0A@@details@tip@@QEAA-AU_GUID@@XZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::Udwm::Transitions::Private::implementation::WindowMaximizeSnapTransitionHandler::PreTransition(
        __int64 *a1,
        int a2,
        winrt::Windows::Foundation::IUnknown *a3)
{
  __int64 *v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rax
  _QWORD *v11; // rax
  _QWORD *v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // [rsp+20h] [rbp-50h] BYREF
  std::_Ref_count_base *v17; // [rsp+28h] [rbp-48h]
  void **v18; // [rsp+30h] [rbp-40h] BYREF
  _BYTE v19[24]; // [rsp+38h] [rbp-38h] BYREF
  int v20; // [rsp+50h] [rbp-20h]
  _BYTE v21[8]; // [rsp+60h] [rbp-10h] BYREF
  std::_Ref_count_base *v22; // [rsp+68h] [rbp-8h]

  winrt::Udwm::Transitions::Private::implementation::WindowMaximizeSnapTransitionHandler::CompleteState((winrt::Udwm::Transitions::Private::implementation::WindowMaximizeSnapTransitionHandler *)a1);
  v6 = a1 + 12;
  std::shared_ptr<tip::details::test_merged_data<Udwm::Transitions::Private::Tip::_tip_WindowMaximizeSnapTest>>::reset(a1 + 12);
  v7 = tip::tip_test<Udwm::Transitions::Private::Tip::_tip_WindowMaximizeSnapTest>::ensure_data(a1 + 12);
  std::shared_ptr<tip::details::test_merged_data<Udwm::Transitions::Private::Tip::_tip_ScreenRotationTest>>::shared_ptr<tip::details::test_merged_data<Udwm::Transitions::Private::Tip::_tip_ScreenRotationTest>>(
    &v16,
    v7);
  v8 = v16;
  tip::details::test_common_data<0>::begin_update(v16 + 8);
  v9 = v8 + 152;
  if ( !v8 )
    v9 = 8LL;
  *(_DWORD *)v9 = a2;
  if ( v8 )
  {
    tip::details::test_common_data<0>::end_update(v8 + 8);
    std::shared_ptr<tip::details::test_merged_data<Udwm::Transitions::Private::Tip::_tip_WindowMaximizeSnapTest>>::reset(&v16);
  }
  if ( v17 )
    std::_Ref_count_base::_Decref(v17);
  v10 = *v6;
  if ( *v6 && (*(_QWORD *)(v10 + 128) || (*(_DWORD *)(v10 + 32) & 0x100) != 0) )
    std::shared_ptr<tip::details::test_merged_data<Udwm::Transitions::Private::Tip::_tip_WindowMaximizeSnapTest>>::reset(a1 + 12);
  v11 = (_QWORD *)tip::tip_test<Udwm::Transitions::Private::Tip::_tip_WindowMaximizeSnapTest>::ensure_data(a1 + 12);
  tip::details::test_common_data<0>::start(*v11 + 8LL, &v16);
  v12 = (_QWORD *)tip::tip_test<Udwm::Transitions::Private::Tip::_tip_WindowMaximizeSnapTest>::ensure_data(a1 + 12);
  v18 = &tip::test_watcher<Udwm::Transitions::Private::Tip::_tip_WindowMaximizeSnapTest>::`vftable';
  wil::details::ThreadFailureCallbackHolder::ThreadFailureCallbackHolder(
    (wil::details::ThreadFailureCallbackHolder *)v19,
    (struct wil::details::IFailureCallback *)&v18,
    0LL,
    *v12 != 0LL);
  std::shared_ptr<tip::details::test_merged_data<Udwm::Transitions::Private::Tip::_tip_ScreenRotationTest>>::shared_ptr<tip::details::test_merged_data<Udwm::Transitions::Private::Tip::_tip_ScreenRotationTest>>(
    v21,
    v12);
  winrt::Windows::Foundation::IUnknown::operator=((winrt::Windows::Foundation::IUnknown *)(a1 + 3), a3);
  *((_DWORD *)a1 + 12) = a2;
  winrt::Udwm::Transitions::Private::implementation::WindowMaximizeSnapTransitionHandler::CaptureVisuals(
    (__int64)a1,
    a2);
  v13 = tip::tip_test<Udwm::Transitions::Private::Tip::_tip_WindowMaximizeSnapTest>::ensure_data(a1 + 12);
  std::shared_ptr<tip::details::test_merged_data<Udwm::Transitions::Private::Tip::_tip_ScreenRotationTest>>::shared_ptr<tip::details::test_merged_data<Udwm::Transitions::Private::Tip::_tip_ScreenRotationTest>>(
    &v16,
    v13);
  v14 = v16;
  tip::details::test_common_data<0>::begin_update(v16 + 8);
  v15 = v14 + 156;
  if ( !v14 )
    v15 = 12LL;
  ++*(_DWORD *)v15;
  if ( v14 )
  {
    tip::details::test_common_data<0>::end_update(v14 + 8);
    std::shared_ptr<tip::details::test_merged_data<Udwm::Transitions::Private::Tip::_tip_WindowMaximizeSnapTest>>::reset(&v16);
  }
  if ( v17 )
    std::_Ref_count_base::_Decref(v17);
  if ( v22 )
    std::_Ref_count_base::_Decref(v22);
  if ( v20 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v19);
}
