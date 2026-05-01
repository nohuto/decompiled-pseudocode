/*
 * XREFs of _lambda_60b8aa6facbf2fdf4ec9aef88bd8d45a_::operator() @ 0x18023693C
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_60b8aa6facbf2fdf4ec9aef88bd8d45a__void_winrt::WindowsUdk::UI::Shell::Dashboard::DashboardExtension_::_Do_call @ 0x180248280 (std--_Func_impl_no_alloc__lambda_60b8aa6facbf2fdf4ec9aef88bd8d45a__void_winrt--Wind_ea_180248280.c)
 * Callees:
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 *     ?IsPrelaunchEnabled@?$consume_WindowsUdk_UI_Shell_Dashboard_IDashboardExtension2@UDashboardExtension@Dashboard@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x1801AFB74 (-IsPrelaunchEnabled@-$consume_WindowsUdk_UI_Shell_Dashboard_IDashboardExtension2@UDashboardExten.c)
 *     ?PrelaunchDelay@?$consume_WindowsUdk_UI_Shell_Dashboard_IDashboardExtension2@UDashboardExtension@Dashboard@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x1801AFBF4 (-PrelaunchDelay@-$consume_WindowsUdk_UI_Shell_Dashboard_IDashboardExtension2@UDashboardExtension.c)
 *     ??$try_as@UIDashboardExtension2@Dashboard@Shell@UI@WindowsUdk@winrt@@@IUnknown@Foundation@Windows@winrt@@QEBA?A_PXZ @ 0x1801AFC78 (--$try_as@UIDashboardExtension2@Dashboard@Shell@UI@WindowsUdk@winrt@@@IUnknown@Foundation@Window.c)
 *     ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x1801DBA20 (-_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall lambda_60b8aa6facbf2fdf4ec9aef88bd8d45a_::operator()(__int64 a1, __int64 *a2)
{
  __int64 v3; // rbx
  unsigned int v4; // eax
  unsigned int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 Data; // [rsp+50h] [rbp+8h] BYREF
  __int64 *v8; // [rsp+58h] [rbp+10h]
  __int64 lpData; // [rsp+60h] [rbp+18h] BYREF
  __int64 v10; // [rsp+68h] [rbp+20h] BYREF

  v8 = a2;
  Data = a1;
  v3 = *winrt::Windows::Foundation::IUnknown::try_as<winrt::WindowsUdk::UI::Shell::Dashboard::IDashboardExtension2>(
          (void (__fastcall ****)(_QWORD, void *, __int64 *))a2,
          &Data);
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)&Data);
  if ( v3 )
  {
    LODWORD(Data) = winrt::impl::consume_WindowsUdk_UI_Shell_Dashboard_IDashboardExtension2<winrt::WindowsUdk::UI::Shell::Dashboard::DashboardExtension>::IsPrelaunchEnabled(a2) != 0;
    v4 = RegSetKeyValueW(
           HKEY_CURRENT_USER,
           L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Dsh",
           L"IsPrelaunchEnabled",
           4u,
           &Data,
           4u);
    if ( v4 )
      wil::details::in1diag3::_Log_Win32(
        retaddr,
        (void *)0x9AA,
        (int)"pcshell\\twinui\\dashboardmanager\\lib\\dashboardmanager.cpp",
        (const char *)v4);
    lpData = *winrt::impl::consume_WindowsUdk_UI_Shell_Dashboard_IDashboardExtension2<winrt::WindowsUdk::UI::Shell::Dashboard::DashboardExtension>::PrelaunchDelay(
                a2,
                &v10)
           / 10000LL;
    v5 = RegSetKeyValueW(
           HKEY_CURRENT_USER,
           L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Dsh",
           L"PrelaunchDelay",
           0xBu,
           &lpData,
           8u);
    if ( v5 )
      wil::details::in1diag3::_Log_Win32(
        retaddr,
        (void *)0x9AE,
        (int)"pcshell\\twinui\\dashboardmanager\\lib\\dashboardmanager.cpp",
        (const char *)v5);
  }
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)a2);
}
