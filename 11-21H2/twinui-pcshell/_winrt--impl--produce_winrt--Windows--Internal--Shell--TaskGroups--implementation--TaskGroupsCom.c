/*
 * XREFs of _winrt::impl::produce_winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent_winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupHost_::add_WindowStateChange_::_1_::catch$7 @ 0x180223D4C
 * Callers:
 *     <none>
 * Callees:
 *     ?to_hresult@winrt@@YA?AUhresult@1@XZ @ 0x1802DA298 (-to_hresult@winrt@@YA-AUhresult@1@XZ.c)
 */

__int64 __fastcall winrt::impl::produce_winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent_winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupHost_::add_WindowStateChange_::_1_::catch_7(
        __int64 a1,
        __int64 a2)
{
  *(_DWORD *)(a2 + 48) = *(_DWORD *)winrt::to_hresult(a2 + 48);
  return 0LL;
}
