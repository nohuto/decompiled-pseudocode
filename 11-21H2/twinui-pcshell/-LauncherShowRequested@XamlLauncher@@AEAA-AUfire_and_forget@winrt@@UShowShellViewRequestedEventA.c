/*
 * XREFs of ?LauncherShowRequested@XamlLauncher@@AEAA?AUfire_and_forget@winrt@@UShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@3@@Z @ 0x1801AB9E8
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs___lambda_a8ca138aaba118cea10a4636885b9ac9___::Invoke @ 0x1801AAC70 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsU_ea_1801AAC70.c)
 * Callees:
 *     ??1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ @ 0x180020128 (--1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 *     XamlLauncher::LauncherShowRequested$_InitCoro$2 @ 0x1801AB2D8 (XamlLauncher--LauncherShowRequested$_InitCoro$2.c)
 */

__int64 __fastcall XamlLauncher::LauncherShowRequested(
        __int64 a1,
        __int64 a2,
        winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *a3)
{
  _DWORD *v6; // rax
  int v8; // [rsp+468h] [rbp+10h] BYREF

  v6 = operator new(0x411uLL);
  v8 = 0;
  XamlLauncher::LauncherShowRequested__InitCoro_2((__int64)&v8, v6, a2, (__int64)a3, a1);
  winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2(a3);
  return a2;
}
