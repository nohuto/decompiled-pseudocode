/*
 * XREFs of ?ShowDashboardAsync@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@UShowShellViewRequestedEventArgs@3UI@WindowsUdk@6@@Z @ 0x1801CB6F8
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs___lambda_df68147c6dfee85e97755cbe2cb862f5___::Invoke @ 0x1805BD8C0 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsU_ea_1805BD8C0.c)
 * Callees:
 *     ??1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ @ 0x180020128 (--1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::ShowDashboardAsync$_InitCoro$2 @ 0x1801CAE34 (winrt--Windows--Internal--Shell--implementation--DashboardManager--ShowDashboardAsync$_InitCoro$.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::Windows::Internal::Shell::implementation::DashboardManager::ShowDashboardAsync(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  _DWORD *v6; // rax
  int v8; // [rsp+598h] [rbp+10h] BYREF
  __int64 *v9; // [rsp+5A0h] [rbp+18h]

  v9 = a3;
  v6 = operator new(0x531uLL);
  v8 = 0;
  winrt::Windows::Internal::Shell::implementation::DashboardManager::ShowDashboardAsync__InitCoro_2(
    (__int64)&v8,
    v6,
    a2,
    a3,
    a1);
  winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)a3);
  return a2;
}
