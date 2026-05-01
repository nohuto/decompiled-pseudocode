/*
 * XREFs of _lambda_50eab521f3249b7fa1c207805ae80cf1_::operator() @ 0x1801C4DA0
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_50eab521f3249b7fa1c207805ae80cf1__void_winrt::WindowsUdk::UI::Shell::Dashboard::DashboardExtension_::_Do_call @ 0x1801CE830 (std--_Func_impl_no_alloc__lambda_50eab521f3249b7fa1c207805ae80cf1__void_winrt--Wind_ea_1801CE830.c)
 * Callees:
 *     ??1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ @ 0x180020128 (--1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ.c)
 *     ??C?$test_watcher@U_tip_SwipeDashboard@@@tip@@QEAA?AV?$test_data_control@U_tip_SwipeDashboard@@@1@XZ @ 0x180033F74 (--C-$test_watcher@U_tip_SwipeDashboard@@@tip@@QEAA-AV-$test_data_control@U_tip_SwipeDashboard@@@.c)
 *     ??1?$test_watcher@U_tip_SwipeDashboard@@@tip@@QEAA@XZ @ 0x18004319C (--1-$test_watcher@U_tip_SwipeDashboard@@@tip@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z @ 0x1800F4B7C (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z.c)
 *     ??8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x1800F9DD8 (--8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ?IsDashboardVisible@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA_NXZ @ 0x18017F7C4 (-IsDashboardVisible@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA_NXZ.c)
 *     ?DisableWindowHardeningPolicy@DashboardManager@implementation@Shell@Internal@Windows@winrt@@CAJXZ @ 0x1801806C8 (-DisableWindowHardeningPolicy@DashboardManager@implementation@Shell@Internal@Windows@winrt@@CAJX.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??1?$test_data_control@U_tip_SnapFlyoutShowTest@@@tip@@QEAA@XZ @ 0x1801C4700 (--1-$test_data_control@U_tip_SnapFlyoutShowTest@@@tip@@QEAA@XZ.c)
 *     ??$DashboardInteracted@Uguid@winrt@@IAEA_N@DashboardManagerTelemetry@@SAX$$QEAUguid@winrt@@$$QEAIAEA_N@Z @ 0x1805BBE84 (--$DashboardInteracted@Uguid@winrt@@IAEA_N@DashboardManagerTelemetry@@SAX$$QEAUguid@winrt@@$$QEA.c)
 *     ??$start_and_watch_errors@V?$tip_test@U_tip_SwipeDashboard@@@tip@@@tip@@YA?AV?$test_watcher@U_tip_SwipeDashboard@@@0@XZ @ 0x1805BC838 (--$start_and_watch_errors@V-$tip_test@U_tip_SwipeDashboard@@@tip@@@tip@@YA-AV-$test_watcher@U_ti.c)
 *     ?StartSwipe@?$consume_WindowsUdk_UI_Shell_Dashboard_IDashboardExtension@UIDashboardExtension@Dashboard@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBAXAEBUguid@3@AEBUPoint@Foundation@Windows@3@@Z @ 0x1805BDC50 (-StartSwipe@-$consume_WindowsUdk_UI_Shell_Dashboard_IDashboardExtension@UIDashboardExtension@Das.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall lambda_50eab521f3249b7fa1c207805ae80cf1_::operator()(__int64 a1, IUnknown **a2)
{
  HRESULT v4; // eax
  winrt::Windows::Internal::Shell::implementation::DashboardManager *v5; // r14
  char IsDashboardVisible; // si
  int v7; // eax
  HRESULT v8; // eax
  float v9; // xmm1_4
  char v10; // bl
  _QWORD *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // r8
  __int64 v16; // rax
  char v17[8]; // [rsp+20h] [rbp-49h] BYREF
  _QWORD v18[3]; // [rsp+28h] [rbp-41h] BYREF
  _BYTE v19[64]; // [rsp+40h] [rbp-29h] BYREF
  GUID v20; // [rsp+80h] [rbp+17h] BYREF
  GUID pguid; // [rsp+90h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  v18[1] = a2;
  tip::start_and_watch_errors<tip::tip_test<_tip_SwipeDashboard>>((struct wil::details::IFailureCallback *)v19);
  v4 = CoCreateGuid(&pguid);
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x2E3,
      (__int64)"pcshell\\twinui\\dashboardmanager\\lib\\dashboardmanager.cpp",
      (const char *)(unsigned int)v4);
  v5 = *(winrt::Windows::Internal::Shell::implementation::DashboardManager **)a1;
  IsDashboardVisible = winrt::Windows::Internal::Shell::implementation::DashboardManager::IsDashboardVisible(*(winrt::Windows::Internal::Shell::implementation::DashboardManager **)a1);
  v17[0] = IsDashboardVisible;
  LODWORD(v18[0]) = 3;
  v20 = pguid;
  DashboardManagerTelemetry::DashboardInteracted<winrt::guid,unsigned int,bool &>(&v20, v18, v17);
  v7 = winrt::Windows::Internal::Shell::implementation::DashboardManager::DisableWindowHardeningPolicy();
  if ( v7 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x2E9,
      (__int64)"pcshell\\twinui\\dashboardmanager\\lib\\dashboardmanager.cpp",
      (const char *)(unsigned int)v7);
  v8 = CoAllowSetForegroundWindow(*a2, 0LL);
  if ( v8 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x2EA,
      (__int64)"pcshell\\twinui\\dashboardmanager\\lib\\dashboardmanager.cpp",
      (const char *)(unsigned int)v8);
  v9 = (float)*(int *)(a1 + 12);
  *(float *)v18 = (float)*(int *)(a1 + 8);
  *((float *)v18 + 1) = v9;
  v20 = pguid;
  winrt::impl::consume_WindowsUdk_UI_Shell_Dashboard_IDashboardExtension<winrt::WindowsUdk::UI::Shell::Dashboard::IDashboardExtension>::StartSwipe(
    a2,
    &v20,
    v18);
  winrt::Windows::Foundation::IUnknown::operator=(
    (winrt::Windows::Internal::Shell::implementation::DashboardManager *)((char *)v5 + 128),
    (winrt::Windows::Foundation::IUnknown *)a2);
  v18[0] = 0LL;
  v10 = winrt::Windows::Foundation::operator==((void (__fastcall ****)(_QWORD, __int64 *, __int64 *))v5 + 16, v18);
  v11 = tip::test_watcher<_tip_SwipeDashboard>::operator->((__int64)v19, &v20);
  v12 = *v11 + 155LL;
  if ( !*v11 )
    v12 = 11LL;
  *(_BYTE *)v12 = v10;
  tip::test_data_control<_tip_SnapFlyoutShowTest>::~test_data_control<_tip_SnapFlyoutShowTest>((__int64 *)&v20);
  v13 = *tip::test_watcher<_tip_SwipeDashboard>::operator->((__int64)v19, &v20);
  v14 = v13 + 153;
  if ( !v13 )
    v14 = 9LL;
  *(_BYTE *)v14 = IsDashboardVisible;
  tip::test_data_control<_tip_SnapFlyoutShowTest>::~test_data_control<_tip_SnapFlyoutShowTest>((__int64 *)&v20);
  v15 = *tip::test_watcher<_tip_SwipeDashboard>::operator->((__int64)v19, &v20);
  v16 = v15 + 154;
  if ( !v15 )
    v16 = 10LL;
  *(_BYTE *)v16 = IsDashboardVisible == 0;
  tip::test_data_control<_tip_SnapFlyoutShowTest>::~test_data_control<_tip_SnapFlyoutShowTest>((__int64 *)&v20);
  tip::test_watcher<_tip_SwipeDashboard>::~test_watcher<_tip_SwipeDashboard>((__int64)v19);
  winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)a2);
}
