/*
 * XREFs of _winrt::impl::produce_winrt::Windows::Internal::Shell::implementation::MeetAndChatManager_winrt::Windows::Internal::Shell::IMeetAndChatManager_::GetFlyoutRect_::_1_::catch$7 @ 0x1806BDAD6
 * Callers:
 *     <none>
 * Callees:
 *     ?to_hresult@winrt@@YA?AUhresult@1@XZ @ 0x180390514 (-to_hresult@winrt@@YA-AUhresult@1@XZ.c)
 */

__int64 __fastcall winrt::impl::produce_winrt::Windows::Internal::Shell::implementation::MeetAndChatManager_winrt::Windows::Internal::Shell::IMeetAndChatManager_::GetFlyoutRect_::_1_::catch_7(
        __int64 a1,
        __int64 a2)
{
  *(_DWORD *)(a2 + 64) = *winrt::to_hresult((_DWORD *)(a2 + 64));
  return 0LL;
}
