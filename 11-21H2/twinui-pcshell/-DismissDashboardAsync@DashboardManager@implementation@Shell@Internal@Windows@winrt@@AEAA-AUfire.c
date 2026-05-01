/*
 * XREFs of ?DismissDashboardAsync@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@UDismissShellViewRequestedEventArgs@3UI@WindowsUdk@6@@Z @ 0x1801C672C
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::DismissShellViewRequestedEventArgs___lambda_698b04a468171e1edcec7d7cafdd70ba___::Invoke @ 0x1805BD850 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsU_ea_1805BD850.c)
 * Callees:
 *     ??1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ @ 0x180020128 (--1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::DismissDashboardAsync$_InitCoro$2 @ 0x1801C6114 (winrt--Windows--Internal--Shell--implementation--DashboardManager--DismissDashboardAsync$_InitCo.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::Windows::Internal::Shell::implementation::DashboardManager::DismissDashboardAsync(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  _DWORD *v6; // rax
  int v8; // [rsp+3C8h] [rbp+10h] BYREF
  __int64 *v9; // [rsp+3D0h] [rbp+18h]

  v9 = a3;
  v6 = operator new(0x361uLL);
  v8 = 0;
  winrt::Windows::Internal::Shell::implementation::DashboardManager::DismissDashboardAsync__InitCoro_2(
    (__int64)&v8,
    v6,
    a2,
    a3,
    a1);
  winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)a3);
  return a2;
}
