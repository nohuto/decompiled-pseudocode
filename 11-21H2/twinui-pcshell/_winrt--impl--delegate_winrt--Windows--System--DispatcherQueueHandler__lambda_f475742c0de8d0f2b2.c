/*
 * XREFs of _winrt::impl::delegate_winrt::Windows::System::DispatcherQueueHandler__lambda_f475742c0de8d0f2b24fd9d946f0a567___::Invoke_::_1_::catch$0 @ 0x1805AF7D1
 * Callers:
 *     <none>
 * Callees:
 *     ?to_hresult@winrt@@YA?AUhresult@1@XZ @ 0x1802DA298 (-to_hresult@winrt@@YA-AUhresult@1@XZ.c)
 */

__int64 __fastcall winrt::impl::delegate_winrt::Windows::System::DispatcherQueueHandler__lambda_f475742c0de8d0f2b24fd9d946f0a567___::Invoke_::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  *(_DWORD *)(a2 + 48) = *winrt::to_hresult((_DWORD *)(a2 + 48));
  return 0LL;
}
