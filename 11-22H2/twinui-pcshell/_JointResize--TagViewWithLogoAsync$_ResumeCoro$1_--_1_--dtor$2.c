/*
 * XREFs of _JointResize::TagViewWithLogoAsync$_ResumeCoro$1_::_1_::dtor$2 @ 0x1802141DC
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 */

void __fastcall JointResize::TagViewWithLogoAsync__ResumeCoro_1_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a2 + 144) = *(_QWORD *)(a2 + 56) + 40LL;
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>(*(winrt::Windows::Foundation::IUnknown **)(a2 + 144));
}
