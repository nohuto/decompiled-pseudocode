/*
 * XREFs of ?DismissRequested@CControlCenterExperienceManager@@AEAA?AUfire_and_forget@winrt@@UDismissShellViewRequestedEventArgs@Shell@UI@WindowsUdk@3@@Z @ 0x180194FF8
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::DismissShellViewRequestedEventArgs___lambda_33df53f0a5c6c2e59bfdad46adf4b238___::Invoke @ 0x180195410 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsU_ea_180195410.c)
 * Callees:
 *     ??1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ @ 0x180020128 (--1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 *     CControlCenterExperienceManager::DismissRequested$_InitCoro$2 @ 0x180194B10 (CControlCenterExperienceManager--DismissRequested$_InitCoro$2.c)
 */

__int64 __fastcall CControlCenterExperienceManager::DismissRequested(
        __int64 a1,
        __int64 a2,
        winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *a3)
{
  _DWORD *v6; // rax
  int v8; // [rsp+388h] [rbp+10h] BYREF

  v6 = operator new(0x331uLL);
  v8 = 0;
  CControlCenterExperienceManager::DismissRequested__InitCoro_2((__int64)&v8, v6, a2, (__int64)a3, a1);
  winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2(a3);
  return a2;
}
