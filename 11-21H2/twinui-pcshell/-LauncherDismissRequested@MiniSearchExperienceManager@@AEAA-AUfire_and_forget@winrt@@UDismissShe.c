/*
 * XREFs of ?LauncherDismissRequested@MiniSearchExperienceManager@@AEAA?AUfire_and_forget@winrt@@UDismissShellViewRequestedEventArgs@Shell@UI@WindowsUdk@3@@Z @ 0x1801A79AC
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::DismissShellViewRequestedEventArgs___lambda_a2db3816d0ee8ed84d797564a48f2892___::Invoke @ 0x1803A1D60 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsU_ea_1803A1D60.c)
 * Callees:
 *     ??1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ @ 0x180020128 (--1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 *     MiniSearchExperienceManager::LauncherDismissRequested$_InitCoro$2 @ 0x1801A75EC (MiniSearchExperienceManager--LauncherDismissRequested$_InitCoro$2.c)
 */

__int64 __fastcall MiniSearchExperienceManager::LauncherDismissRequested(
        __int64 a1,
        __int64 a2,
        winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *a3)
{
  _DWORD *v6; // rax
  int v8; // [rsp+198h] [rbp+10h] BYREF

  v6 = operator new(0x141uLL);
  v8 = 0;
  MiniSearchExperienceManager::LauncherDismissRequested__InitCoro_2((__int64)&v8, v6, a2, (__int64)a3, a1);
  winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2(a3);
  return a2;
}
