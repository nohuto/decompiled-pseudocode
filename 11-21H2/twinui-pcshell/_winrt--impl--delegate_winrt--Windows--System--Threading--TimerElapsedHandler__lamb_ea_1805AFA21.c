/*
 * XREFs of _winrt::impl::delegate_winrt::Windows::System::Threading::TimerElapsedHandler__lambda_1bc1847c493029b672944d3b25fbdd02___::Invoke_::_1_::catch$11 @ 0x1805AFA21
 * Callers:
 *     <none>
 * Callees:
 *     ?to_hresult@winrt@@YA?AUhresult@1@XZ @ 0x1802DA298 (-to_hresult@winrt@@YA-AUhresult@1@XZ.c)
 */

__int64 __fastcall winrt::impl::delegate_winrt::Windows::System::Threading::TimerElapsedHandler__lambda_1bc1847c493029b672944d3b25fbdd02___::Invoke_::_1_::catch_11(
        __int64 a1,
        __int64 a2)
{
  *(_DWORD *)(a2 + 48) = *winrt::to_hresult((_DWORD *)(a2 + 48));
  return 0LL;
}
