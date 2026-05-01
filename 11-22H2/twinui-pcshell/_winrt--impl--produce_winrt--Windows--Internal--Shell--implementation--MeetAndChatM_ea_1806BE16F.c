/*
 * XREFs of _winrt::impl::produce_winrt::Windows::Internal::Shell::implementation::MeetAndChatManager_winrt::Windows::Internal::Shell::IMeetAndChatManager_::InstallForCurrentUserAsync_::_1_::catch$7 @ 0x1806BE16F
 * Callers:
 *     <none>
 * Callees:
 *     ?to_hresult@winrt@@YA?AUhresult@1@XZ @ 0x180390514 (-to_hresult@winrt@@YA-AUhresult@1@XZ.c)
 */

__int64 __fastcall winrt::impl::produce_winrt::Windows::Internal::Shell::implementation::MeetAndChatManager_winrt::Windows::Internal::Shell::IMeetAndChatManager_::InstallForCurrentUserAsync_::_1_::catch_7(
        __int64 a1,
        __int64 a2)
{
  *(_DWORD *)(a2 + 48) = *winrt::to_hresult((_DWORD *)(a2 + 48));
  return 0LL;
}
