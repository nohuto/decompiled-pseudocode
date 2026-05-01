/*
 * XREFs of ?ShowRequested@CActionCenterExperienceManager@@AEAA?AUfire_and_forget@winrt@@UShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@3@@Z @ 0x1801939B8
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs___lambda_0ebb5ce6db39d52aeb4a09466381d186___::Invoke @ 0x180193040 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsU_ea_180193040.c)
 * Callees:
 *     ??1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ @ 0x180020128 (--1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 *     CActionCenterExperienceManager::ShowRequested$_InitCoro$2 @ 0x1801934DC (CActionCenterExperienceManager--ShowRequested$_InitCoro$2.c)
 */

__int64 __fastcall CActionCenterExperienceManager::ShowRequested(
        __int64 a1,
        __int64 a2,
        winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *a3)
{
  _DWORD *v6; // rax
  int v8; // [rsp+378h] [rbp+10h] BYREF

  v6 = operator new(0x321uLL);
  v8 = 0;
  CActionCenterExperienceManager::ShowRequested__InitCoro_2((__int64)&v8, v6, a2, (__int64)a3, a1);
  winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2(a3);
  return a2;
}
