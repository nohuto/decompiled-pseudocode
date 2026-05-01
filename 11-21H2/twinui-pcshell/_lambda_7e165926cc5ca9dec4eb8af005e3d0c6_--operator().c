/*
 * XREFs of _lambda_7e165926cc5ca9dec4eb8af005e3d0c6_::operator() @ 0x1801C51CC
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_7e165926cc5ca9dec4eb8af005e3d0c6__void_winrt::WindowsUdk::UI::Shell::Dashboard::DashboardExtension_::_Do_call @ 0x1801CE930 (std--_Func_impl_no_alloc__lambda_7e165926cc5ca9dec4eb8af005e3d0c6__void_winrt--Wind_ea_1801CE930.c)
 * Callees:
 *     ??1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ @ 0x180020128 (--1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ.c)
 *     ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x1800E2CB4 (-_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     ??$try_as@UIDashboardExtension2@Dashboard@Shell@UI@WindowsUdk@winrt@@@IUnknown@Foundation@Windows@winrt@@QEBA?AUIDashboardExtension2@Dashboard@Shell@UI@WindowsUdk@3@XZ @ 0x18017F76C (--$try_as@UIDashboardExtension2@Dashboard@Shell@UI@WindowsUdk@winrt@@@IUnknown@Foundation@Window.c)
 *     ?IsPrelaunchEnabled@?$consume_WindowsUdk_UI_Shell_Dashboard_IDashboardExtension2@UDashboardExtension@Dashboard@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA_NXZ @ 0x1805BD92C (-IsPrelaunchEnabled@-$consume_WindowsUdk_UI_Shell_Dashboard_IDashboardExtension2@UDashboardExten.c)
 *     ?PrelaunchDelay@?$consume_WindowsUdk_UI_Shell_Dashboard_IDashboardExtension2@UDashboardExtension@Dashboard@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA?AV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@XZ @ 0x1805BDB74 (-PrelaunchDelay@-$consume_WindowsUdk_UI_Shell_Dashboard_IDashboardExtension2@UDashboardExtension.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall lambda_7e165926cc5ca9dec4eb8af005e3d0c6_::operator()(
        __int64 a1,
        winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *a2)
{
  __int64 v3; // rbx
  unsigned int v4; // eax
  unsigned int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 Data; // [rsp+50h] [rbp+8h] BYREF
  winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *v8; // [rsp+58h] [rbp+10h]
  __int64 lpData; // [rsp+60h] [rbp+18h] BYREF
  char v10; // [rsp+68h] [rbp+20h] BYREF

  v8 = a2;
  Data = a1;
  v3 = *winrt::Windows::Foundation::IUnknown::try_as<winrt::WindowsUdk::UI::Shell::Dashboard::IDashboardExtension2>(
          (void (__fastcall ****)(_QWORD, void *, __int64 *))a2,
          &Data);
  winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)&Data);
  if ( v3 )
  {
    LODWORD(Data) = (unsigned __int8)winrt::impl::consume_WindowsUdk_UI_Shell_Dashboard_IDashboardExtension2<winrt::WindowsUdk::UI::Shell::Dashboard::DashboardExtension>::IsPrelaunchEnabled(a2) != 0;
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
        (void *)0x511,
        (int)"pcshell\\twinui\\dashboardmanager\\lib\\dashboardmanager.cpp",
        (const char *)v4);
    lpData = *(_QWORD *)winrt::impl::consume_WindowsUdk_UI_Shell_Dashboard_IDashboardExtension2<winrt::WindowsUdk::UI::Shell::Dashboard::DashboardExtension>::PrelaunchDelay(
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
        (void *)0x515,
        (int)"pcshell\\twinui\\dashboardmanager\\lib\\dashboardmanager.cpp",
        (const char *)v5);
  }
  winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2(a2);
}
