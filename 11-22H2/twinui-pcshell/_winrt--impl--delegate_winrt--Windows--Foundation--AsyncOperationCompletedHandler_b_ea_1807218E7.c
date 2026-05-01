/*
 * XREFs of _winrt::impl::delegate_winrt::Windows::Foundation::AsyncOperationCompletedHandler_bool___lambda_3c80e9c975032e734688017ffb7e5be0___::Invoke_::_1_::catch$0 @ 0x1807218E7
 * Callers:
 *     <none>
 * Callees:
 *     ?to_hresult@winrt@@YA?AUhresult@1@XZ @ 0x180390514 (-to_hresult@winrt@@YA-AUhresult@1@XZ.c)
 */

__int64 __fastcall winrt::impl::delegate_winrt::Windows::Foundation::AsyncOperationCompletedHandler_bool___lambda_3c80e9c975032e734688017ffb7e5be0___::Invoke_::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  *(_DWORD *)(a2 + 48) = *winrt::to_hresult((_DWORD *)(a2 + 48));
  return 0LL;
}
