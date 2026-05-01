/*
 * XREFs of _lambda_2dae2f99b30523bdf650a32b001ab8be_::operator() @ 0x1801C4BD8
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_2dae2f99b30523bdf650a32b001ab8be__void_winrt::WindowsUdk::UI::Shell::Dashboard::DashboardExtension_::_Do_call @ 0x1801CE7D0 (std--_Func_impl_no_alloc__lambda_2dae2f99b30523bdf650a32b001ab8be__void_winrt--Wind_ea_1801CE7D0.c)
 * Callees:
 *     ??1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ @ 0x180020128 (--1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ?SetStartUpEvent@?$consume_WindowsUdk_UI_Shell_Dashboard_IDashboardExtension@UIDashboardExtension@Dashboard@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBAXAEBUguid@3@AEBW4StartUpEvent@Dashboard@Shell@UI@WindowsUdk@3@@Z @ 0x1805BDC08 (-SetStartUpEvent@-$consume_WindowsUdk_UI_Shell_Dashboard_IDashboardExtension@UIDashboardExtensio.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall lambda_2dae2f99b30523bdf650a32b001ab8be_::operator()(
        __int64 a1,
        winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *a2)
{
  HRESULT v4; // eax
  GUID pguid; // [rsp+28h] [rbp-28h] BYREF
  GUID v6; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+8h]

  v4 = CoCreateGuid(&pguid);
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x4F0,
      (__int64)"pcshell\\twinui\\dashboardmanager\\lib\\dashboardmanager.cpp",
      (const char *)(unsigned int)v4);
  v6 = pguid;
  winrt::impl::consume_WindowsUdk_UI_Shell_Dashboard_IDashboardExtension<winrt::WindowsUdk::UI::Shell::Dashboard::IDashboardExtension>::SetStartUpEvent(
    a2,
    &v6,
    a1);
  winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2(a2);
}
