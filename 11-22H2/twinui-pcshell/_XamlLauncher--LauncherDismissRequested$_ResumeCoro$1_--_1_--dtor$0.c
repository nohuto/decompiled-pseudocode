/*
 * XREFs of _XamlLauncher::LauncherDismissRequested$_ResumeCoro$1_::_1_::dtor$0 @ 0x1801FFBBC
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 */

void __fastcall XamlLauncher::LauncherDismissRequested__ResumeCoro_1_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a2 + 96) = *(_QWORD *)(a2 + 64) + 16LL;
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>(*(winrt::Windows::Foundation::IUnknown **)(a2 + 96));
}
