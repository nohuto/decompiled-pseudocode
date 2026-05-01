/*
 * XREFs of _winrt::impl::produce_winrt::Windows::Internal::Shell::implementation::MeetAndChatInstallStatus_winrt::Windows::Internal::Shell::IMeetAndChatInstallStatus_::get_Progress_::_1_::catch$4 @ 0x1805CF6B2
 * Callers:
 *     <none>
 * Callees:
 *     ?to_hresult@winrt@@YA?AUhresult@1@XZ @ 0x1802DA298 (-to_hresult@winrt@@YA-AUhresult@1@XZ.c)
 */

__int64 __fastcall winrt::impl::produce_winrt::Windows::Internal::Shell::implementation::MeetAndChatInstallStatus_winrt::Windows::Internal::Shell::IMeetAndChatInstallStatus_::get_Progress_::_1_::catch_4(
        __int64 a1,
        __int64 a2)
{
  *(_DWORD *)(a2 + 32) = *winrt::to_hresult((_DWORD *)(a2 + 32));
  return 0LL;
}
