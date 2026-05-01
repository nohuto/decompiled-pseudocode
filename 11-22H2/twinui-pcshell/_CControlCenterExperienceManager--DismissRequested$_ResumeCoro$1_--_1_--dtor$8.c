/*
 * XREFs of _CControlCenterExperienceManager::DismissRequested$_ResumeCoro$1_::_1_::dtor$8 @ 0x1801DEC62
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 */

void __fastcall CControlCenterExperienceManager::DismissRequested__ResumeCoro_1_::_1_::dtor_8(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a2 + 104) = *(_QWORD *)(a2 + 40) + 96LL;
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>(*(winrt::Windows::Foundation::IUnknown **)(a2 + 104));
}
