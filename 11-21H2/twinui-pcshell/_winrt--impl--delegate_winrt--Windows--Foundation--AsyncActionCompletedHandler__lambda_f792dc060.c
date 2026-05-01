/*
 * XREFs of _winrt::impl::delegate_winrt::Windows::Foundation::AsyncActionCompletedHandler__lambda_f792dc060f2f4a2e1ed0f6aa4fd4e86d___::Invoke_::_1_::catch$0 @ 0x1801D25F5
 * Callers:
 *     <none>
 * Callees:
 *     ?to_hresult@winrt@@YA?AUhresult@1@XZ @ 0x1802DA298 (-to_hresult@winrt@@YA-AUhresult@1@XZ.c)
 */

__int64 __fastcall winrt::impl::delegate_winrt::Windows::Foundation::AsyncActionCompletedHandler__lambda_f792dc060f2f4a2e1ed0f6aa4fd4e86d___::Invoke_::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  *(_DWORD *)(a2 + 48) = *(_DWORD *)winrt::to_hresult(a2 + 48);
  return 0LL;
}
