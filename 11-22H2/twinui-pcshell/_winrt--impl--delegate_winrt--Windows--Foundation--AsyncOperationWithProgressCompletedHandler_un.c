/*
 * XREFs of _winrt::impl::delegate_winrt::Windows::Foundation::AsyncOperationWithProgressCompletedHandler_unsigned_int_unsigned_int__winrt::impl::disconnect_aware_handler_winrt::impl::await_adapter_winrt::Windows::Foundation::IAsyncOperationWithProgress_unsigned_int_unsigned_int_______::Invoke_::_1_::catch$0 @ 0x18054F2B3
 * Callers:
 *     <none>
 * Callees:
 *     ?to_hresult@winrt@@YA?AUhresult@1@XZ @ 0x180390514 (-to_hresult@winrt@@YA-AUhresult@1@XZ.c)
 */

__int64 __fastcall winrt::impl::delegate_winrt::Windows::Foundation::AsyncOperationWithProgressCompletedHandler_unsigned_int_unsigned_int__winrt::impl::disconnect_aware_handler_winrt::impl::await_adapter_winrt::Windows::Foundation::IAsyncOperationWithProgress_unsigned_int_unsigned_int_______::Invoke_::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  *(_DWORD *)(a2 + 64) = *winrt::to_hresult((_DWORD *)(a2 + 64));
  return 0LL;
}
