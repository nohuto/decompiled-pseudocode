/*
 * XREFs of _winrt::impl::produce_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncAction_::promise_type_winrt::Windows::Foundation::IAsyncAction_::put_Completed_::_1_::catch$4 @ 0x1802B9504
 * Callers:
 *     <none>
 * Callees:
 *     ?to_hresult@winrt@@YA?AUhresult@1@XZ @ 0x180390514 (-to_hresult@winrt@@YA-AUhresult@1@XZ.c)
 */

__int64 __fastcall winrt::impl::produce_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncAction_::promise_type_winrt::Windows::Foundation::IAsyncAction_::put_Completed_::_1_::catch_4(
        __int64 a1,
        __int64 a2)
{
  *(_DWORD *)(a2 + 32) = *(_DWORD *)winrt::to_hresult(a2 + 40);
  return 0LL;
}
