/*
 * XREFs of _winrt::impl::delegate_winrt::Windows::System::Threading::TimerElapsedHandler__lambda_b9ce315f83a5c088afafe0d2d1441397___::Invoke_::_1_::catch$1 @ 0x18060A4C3
 * Callers:
 *     <none>
 * Callees:
 *     ?to_hresult@winrt@@YA?AUhresult@1@XZ @ 0x1802DA298 (-to_hresult@winrt@@YA-AUhresult@1@XZ.c)
 */

__int64 __fastcall winrt::impl::delegate_winrt::Windows::System::Threading::TimerElapsedHandler__lambda_b9ce315f83a5c088afafe0d2d1441397___::Invoke_::_1_::catch_1(
        __int64 a1,
        __int64 a2)
{
  *(_DWORD *)(a2 + 48) = *winrt::to_hresult((_DWORD *)(a2 + 48));
  return 0LL;
}
