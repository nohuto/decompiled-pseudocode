/*
 * XREFs of ?DismissRequested@CMultitaskingViewManager@@AEAA?AUfire_and_forget@winrt@@UDismissShellViewRequestedEventArgs@Shell@UI@WindowsUdk@3@@Z @ 0x1801B2338
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::DismissShellViewRequestedEventArgs___lambda_32f157739168c79ab57409b91cf50ef0___::Invoke @ 0x18049A8D0 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsU_ea_18049A8D0.c)
 * Callees:
 *     ??1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ @ 0x180020128 (--1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 *     CMultitaskingViewManager::DismissRequested$_InitCoro$2 @ 0x1801B1E6C (CMultitaskingViewManager--DismissRequested$_InitCoro$2.c)
 */

__int64 __fastcall CMultitaskingViewManager::DismissRequested(
        __int64 a1,
        __int64 a2,
        winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *a3)
{
  void *v6; // rax
  int v8; // [rsp+268h] [rbp+10h] BYREF

  v6 = operator new(0x211uLL);
  v8 = 0;
  CMultitaskingViewManager::DismissRequested__InitCoro_2((__int64)&v8, (__int64)v6, a2, (__int64)a3, a1);
  winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2(a3);
  return a2;
}
