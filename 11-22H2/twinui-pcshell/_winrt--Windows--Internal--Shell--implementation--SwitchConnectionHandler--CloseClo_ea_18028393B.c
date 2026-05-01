/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::CloseCloudPCConnection$_ResumeCoro$1_::_1_::dtor$24 @ 0x18028393B
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::CloseCloudPCConnection__ResumeCoro_1_::_1_::dtor_24(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 320) = *(_QWORD *)(a2 + 144) + 792LL;
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>(*(winrt::Windows::Foundation::IUnknown **)(a2 + 320));
}
