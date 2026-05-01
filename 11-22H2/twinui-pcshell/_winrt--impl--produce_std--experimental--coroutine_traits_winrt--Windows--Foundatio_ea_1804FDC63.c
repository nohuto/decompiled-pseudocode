/*
 * XREFs of _winrt::impl::produce_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncAction_TaskViewFrame___IImmersiveMonitor___::promise_type_winrt::Windows::Foundation::IAsyncInfo_::get_ErrorCode_::_1_::catch$5 @ 0x1804FDC63
 * Callers:
 *     <none>
 * Callees:
 *     ?to_hresult@winrt@@YA?AUhresult@1@XZ @ 0x180390514 (-to_hresult@winrt@@YA-AUhresult@1@XZ.c)
 */

__int64 __fastcall winrt::impl::produce_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncAction_TaskViewFrame___IImmersiveMonitor___::promise_type_winrt::Windows::Foundation::IAsyncInfo_::get_ErrorCode_::_1_::catch_5(
        __int64 a1,
        __int64 a2)
{
  *(_DWORD *)(a2 + 32) = *winrt::to_hresult((_DWORD *)(a2 + 32));
  return 0LL;
}
