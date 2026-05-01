/*
 * XREFs of _winrt::impl::produce_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncAction_XamlExplorerHostShellComponent___::promise_type_winrt::Windows::Foundation::IAsyncAction_::put_Completed_::_1_::catch$4 @ 0x18021E2B7
 * Callers:
 *     <none>
 * Callees:
 *     ?to_hresult@winrt@@YA?AUhresult@1@XZ @ 0x1802DA298 (-to_hresult@winrt@@YA-AUhresult@1@XZ.c)
 */

__int64 __fastcall winrt::impl::produce_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncAction_XamlExplorerHostShellComponent___::promise_type_winrt::Windows::Foundation::IAsyncAction_::put_Completed_::_1_::catch_4(
        __int64 a1,
        __int64 a2)
{
  *(_DWORD *)(a2 + 80) = *(_DWORD *)winrt::to_hresult(a2 + 96);
  return 0LL;
}
