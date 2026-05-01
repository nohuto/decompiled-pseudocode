/*
 * XREFs of _CActionCenterExperienceManager::ShowRequested$_ResumeCoro$1_::_1_::dtor$3 @ 0x1801DCF0E
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 */

void __fastcall CActionCenterExperienceManager::ShowRequested__ResumeCoro_1_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a2 + 72) = *(_QWORD *)(a2 + 40) + 64LL;
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>(*(winrt::Windows::Foundation::IUnknown **)(a2 + 72));
}
