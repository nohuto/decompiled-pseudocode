/*
 * XREFs of _CControlCenterExperienceManager::ShowRequested$_ResumeCoro$1_::_1_::dtor$0 @ 0x1801E0158
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 */

void __fastcall CControlCenterExperienceManager::ShowRequested__ResumeCoro_1_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a2 + 96) = *(_QWORD *)(a2 + 88) + 16LL;
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>(*(winrt::Windows::Foundation::IUnknown **)(a2 + 96));
}
