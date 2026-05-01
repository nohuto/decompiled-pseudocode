/*
 * XREFs of _RequestNotificationPinConsentAsync$_ResumeCoro$1_::_1_::dtor$17 @ 0x180254034
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 */

void __fastcall RequestNotificationPinConsentAsync__ResumeCoro_1_::_1_::dtor_17(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a2 + 240) = *(_QWORD *)(a2 + 48) + 400LL;
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>(*(winrt::Windows::Foundation::IUnknown **)(a2 + 240));
}
