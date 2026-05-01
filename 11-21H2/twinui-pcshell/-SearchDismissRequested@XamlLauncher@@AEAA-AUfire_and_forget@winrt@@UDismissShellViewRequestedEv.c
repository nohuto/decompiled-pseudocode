/*
 * XREFs of ?SearchDismissRequested@XamlLauncher@@AEAA?AUfire_and_forget@winrt@@UDismissShellViewRequestedEventArgs@Shell@UI@WindowsUdk@3@@Z @ 0x1801AC2D0
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::DismissShellViewRequestedEventArgs___lambda_39129eee30c1706cd30cd4009e5b3567___::Invoke @ 0x1801AAB90 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsU_ea_1801AAB90.c)
 * Callees:
 *     ??1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ @ 0x180020128 (--1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 *     XamlLauncher::SearchDismissRequested$_InitCoro$2 @ 0x1801ABC4C (XamlLauncher--SearchDismissRequested$_InitCoro$2.c)
 */

__int64 __fastcall XamlLauncher::SearchDismissRequested(__int64 a1, __int64 a2, __int64 *a3)
{
  _DWORD *v6; // rax
  int v8; // [rsp+398h] [rbp+10h] BYREF

  v6 = operator new(0x341uLL);
  v8 = 0;
  XamlLauncher::SearchDismissRequested__InitCoro_2((__int64)&v8, v6, a2, a3, a1);
  winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)a3);
  return a2;
}
