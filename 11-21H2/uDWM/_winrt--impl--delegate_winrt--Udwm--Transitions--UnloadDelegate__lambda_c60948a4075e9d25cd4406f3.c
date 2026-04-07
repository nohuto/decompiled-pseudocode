/*
 * XREFs of _winrt::impl::delegate_winrt::Udwm::Transitions::UnloadDelegate__lambda_c60948a4075e9d25cd4406f3dd63722d___::Invoke_::_1_::catch$0 @ 0x1800F7DAB
 * Callers:
 *     <none>
 * Callees:
 *     ?to_hresult@winrt@@YA?AUhresult@1@XZ @ 0x1800F1978 (-to_hresult@winrt@@YA-AUhresult@1@XZ.c)
 */

__int64 __fastcall winrt::impl::delegate_winrt::Udwm::Transitions::UnloadDelegate__lambda_c60948a4075e9d25cd4406f3dd63722d___::Invoke_::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  *(_DWORD *)(a2 + 48) = *winrt::to_hresult((_DWORD *)(a2 + 48));
  return 0LL;
}
