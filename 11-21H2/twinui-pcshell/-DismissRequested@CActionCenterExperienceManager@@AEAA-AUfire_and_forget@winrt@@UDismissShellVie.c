/*
 * XREFs of ?DismissRequested@CActionCenterExperienceManager@@AEAA?AUfire_and_forget@winrt@@UDismissShellViewRequestedEventArgs@Shell@UI@WindowsUdk@3@@Z @ 0x180192BE0
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::DismissShellViewRequestedEventArgs___lambda_f2975b9f064264dfcc4da68e52b330b2___::Invoke @ 0x180192FA0 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsUdk--UI--Shell.c)
 * Callees:
 *     ??1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ @ 0x180020128 (--1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 *     CActionCenterExperienceManager::DismissRequested$_InitCoro$2 @ 0x180192710 (CActionCenterExperienceManager--DismissRequested$_InitCoro$2.c)
 */

__int64 __fastcall CActionCenterExperienceManager::DismissRequested(
        __int64 a1,
        __int64 a2,
        winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *a3)
{
  _DWORD *v6; // rax
  int v8; // [rsp+368h] [rbp+10h] BYREF

  v6 = operator new(0x311uLL);
  v8 = 0;
  CActionCenterExperienceManager::DismissRequested__InitCoro_2((__int64)&v8, v6, a2, (__int64)a3, a1);
  winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2(a3);
  return a2;
}
