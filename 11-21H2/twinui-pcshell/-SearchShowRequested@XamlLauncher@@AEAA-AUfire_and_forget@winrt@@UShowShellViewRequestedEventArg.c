/*
 * XREFs of ?SearchShowRequested@XamlLauncher@@AEAA?AUfire_and_forget@winrt@@UShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@3@@Z @ 0x1801ACA00
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs___lambda_bdb7e0a8ebff4ddc8c702491ecdd9a07___::Invoke @ 0x1801AACE0 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsU_ea_1801AACE0.c)
 * Callees:
 *     ??1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ @ 0x180020128 (--1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 *     XamlLauncher::SearchShowRequested$_InitCoro$2 @ 0x1801AC350 (XamlLauncher--SearchShowRequested$_InitCoro$2.c)
 */

__int64 __fastcall XamlLauncher::SearchShowRequested(
        __int64 a1,
        __int64 a2,
        winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *a3)
{
  _DWORD *v6; // rax
  int v8; // [rsp+3A8h] [rbp+10h] BYREF

  v6 = operator new(0x351uLL);
  v8 = 0;
  XamlLauncher::SearchShowRequested__InitCoro_2((__int64)&v8, v6, a2, (__int64)a3, a1);
  winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2(a3);
  return a2;
}
