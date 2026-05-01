/*
 * XREFs of _lambda_b057d2eecf04af11f3f014dd266c7d19_::operator() @ 0x1801EA6B8
 * Callers:
 *     CAsyncCallbackWithLambda__lambda_1dc6729d9ad27942be7b6a7593c66a88___::Invoke @ 0x1801EA960 (CAsyncCallbackWithLambda__lambda_1dc6729d9ad27942be7b6a7593c66a88___--Invoke.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ??1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ @ 0x180020128 (--1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GSAVTest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18005F5A4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GSAVTest@@@details@wil@@QEAAX_NW4Reportin.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180082930 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x1800F6DA0 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     winrt::Windows::System::Threading::TimerElapsedHandler::TimerElapsedHandler__lambda_e5041e3efe5dfcfff3a6fe9f3f91f36f___ @ 0x1801E9FB4 (winrt--Windows--System--Threading--TimerElapsedHandler--TimerElapsedHandler__lambda_e5041e3efe5d.c)
 *     ??$make_unique@VSuppressViewTransition@@AEAPEAUHWND__@@AEAV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@$0A@@std@@YA?AV?$unique_ptr@VSuppressViewTransition@@U?$default_delete@VSuppressViewTransition@@@std@@@0@AEAPEAUHWND__@@AEAV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1801EA308 (--$make_unique@VSuppressViewTransition@@AEAPEAUHWND__@@AEAV-$com_ptr_t@UIApplicationView@@Uerr_e.c)
 *     ??0?$com_ptr_t@UIMultitaskingViewForegroundStaging@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x1801EA478 (--0-$com_ptr_t@UIMultitaskingViewForegroundStaging@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01.c)
 *     ??1?$unique_ptr@VSuppressViewTransition@@U?$default_delete@VSuppressViewTransition@@@std@@@std@@QEAA@XZ @ 0x1801EA62C (--1-$unique_ptr@VSuppressViewTransition@@U-$default_delete@VSuppressViewTransition@@@std@@@std@@.c)
 *     ??R?$default_delete@VSuppressViewTransition@@@std@@QEBAXPEAVSuppressViewTransition@@@Z @ 0x1801EA8AC (--R-$default_delete@VSuppressViewTransition@@@std@@QEBAXPEAVSuppressViewTransition@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CreateTimer@ThreadPoolTimer@Threading@System@Windows@winrt@@SA@AEBUTimerElapsedHandler@2345@AEBV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z @ 0x18032DF74 (-CreateTimer@ThreadPoolTimer@Threading@System@Windows@winrt@@SA@AEBUTimerElapsedHandler@2345@AEB.c)
 *     ?TryGetApplicationViewForItem@AppViewDataSourceHelpers@@YA?AV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x180420E04 (-TryGetApplicationViewForItem@AppViewDataSourceHelpers@@YA-AV-$com_ptr_t@UIApplicationView@@Uerr.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_b057d2eecf04af11f3f014dd266c7d19_::operator()(__int64 a1)
{
  struct IApplicationView *v2; // rdx
  unsigned int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned __int64 v7; // r9
  __int64 *v8; // rax
  __int64 *v9; // r8
  __int64 v10; // rcx
  __int64 v11; // rdx
  winrt::Windows::Foundation::IUnknown *v12; // rax
  const char *v13; // r9
  __int64 (*v14)(void); // rax
  int v15; // eax
  __int64 v17; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v18[32]; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 WindowForView; // [rsp+50h] [rbp+8h] BYREF
  ApplicationViewHelpers *v21; // [rsp+58h] [rbp+10h] BYREF
  __int64 v22; // [rsp+60h] [rbp+18h] BYREF
  __int64 v23; // [rsp+68h] [rbp+20h] BYREF

  AppViewDataSourceHelpers::TryGetApplicationViewForItem(&v21, *(_QWORD *)(a1 + 8));
  if ( !v21 )
  {
    v3 = -2147418113;
    v4 = 84LL;
LABEL_5:
    v7 = v3;
    goto LABEL_6;
  }
  WindowForView = ApplicationViewHelpers::GetWindowForView(
                    (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64))v21,
                    v2);
  if ( !WindowForView )
  {
    v3 = -2147024809;
    v4 = 87LL;
    goto LABEL_5;
  }
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_GSAVTest>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_GSAVTest>::GetImpl'::`2'::impl,
    1u,
    v5,
    v6);
  try
  {
    v8 = std::make_unique<SuppressViewTransition,HWND__ * &,wil::com_ptr_t<IApplicationView,wil::err_exception_policy> &,0>(
           &v23,
           &WindowForView,
           (__int64)&v21);
    v9 = (__int64 *)(*(_QWORD *)(a1 + 16) + 400LL);
    if ( v9 != v8 )
    {
      v10 = *v8;
      *v8 = 0LL;
      v11 = *v9;
      *v9 = v10;
      if ( v11 )
        std::default_delete<SuppressViewTransition>::operator()();
    }
    std::unique_ptr<SuppressViewTransition>::~unique_ptr<SuppressViewTransition>(&v23);
    wil::com_ptr_t<IMultitaskingViewForegroundStaging,wil::err_exception_policy>::com_ptr_t<IMultitaskingViewForegroundStaging,wil::err_exception_policy>(
      &v23,
      (__int64 *)(*(_QWORD *)(a1 + 16) + 80LL));
    wil::com_ptr_t<IMultitaskingViewForegroundStaging,wil::err_exception_policy>::com_ptr_t<IMultitaskingViewForegroundStaging,wil::err_exception_policy>(
      &WindowForView,
      &v23);
    winrt::Windows::System::Threading::TimerElapsedHandler::TimerElapsedHandler__lambda_e5041e3efe5dfcfff3a6fe9f3f91f36f___(
      &v22,
      &WindowForView);
    v17 = 5000000LL;
    v12 = (winrt::Windows::Foundation::IUnknown *)winrt::Windows::System::Threading::ThreadPoolTimer::CreateTimer(
                                                    v18,
                                                    &v22,
                                                    &v17);
    winrt::Windows::Foundation::IUnknown::operator=(
      (winrt::Windows::Foundation::IUnknown *)(*(_QWORD *)(a1 + 16) + 408LL),
      v12);
    winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)v18);
    winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)&v22);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v23);
    v14 = *(__int64 (**)(void))(**(_QWORD **)(*(_QWORD *)(a1 + 16) + 168LL) + 24LL);
  }
  catch ( ... )
  {
    LODWORD(WindowForView) = wil::details::in1diag3::Return_CaughtException(
                               retaddr,
                               (void *)0x6C,
                               (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlsnapassistviewcontroller.cpp",
                               v13);
    v3 = WindowForView;
    goto LABEL_15;
  }
  v15 = v14();
  v3 = v15;
  if ( v15 >= 0 )
  {
    v3 = 0;
    goto LABEL_15;
  }
  v7 = (unsigned int)v15;
  v4 = 115LL;
LABEL_6:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v4,
    (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlsnapassistviewcontroller.cpp",
    (const char *)v7);
LABEL_15:
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v21);
  return v3;
}
