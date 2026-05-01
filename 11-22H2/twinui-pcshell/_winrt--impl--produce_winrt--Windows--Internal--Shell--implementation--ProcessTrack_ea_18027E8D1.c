/*
 * XREFs of _winrt::impl::produce_winrt::Windows::Internal::Shell::implementation::ProcessTracker_winrt::Windows::Internal::Shell::IProcessTracker_::StopTrackingProcesses_::_1_::catch$2 @ 0x18027E8D1
 * Callers:
 *     <none>
 * Callees:
 *     ?to_hresult@winrt@@YA?AUhresult@1@XZ @ 0x180390514 (-to_hresult@winrt@@YA-AUhresult@1@XZ.c)
 */

__int64 __fastcall winrt::impl::produce_winrt::Windows::Internal::Shell::implementation::ProcessTracker_winrt::Windows::Internal::Shell::IProcessTracker_::StopTrackingProcesses_::_1_::catch_2(
        __int64 a1,
        __int64 a2)
{
  *(_DWORD *)(a2 + 48) = *(_DWORD *)winrt::to_hresult(a2 + 48);
  return 0LL;
}
