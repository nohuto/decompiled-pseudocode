/*
 * XREFs of _winrt::impl::delegate_winrt::Windows::Foundation::AsyncActionCompletedHandler__lambda_cc934bcfcfb2415fd654dddf326e340e___::Invoke_::_1_::catch$3 @ 0x18041E07B
 * Callers:
 *     <none>
 * Callees:
 *     ?to_hresult@winrt@@YA?AUhresult@1@XZ @ 0x1802DA298 (-to_hresult@winrt@@YA-AUhresult@1@XZ.c)
 */

__int64 __fastcall winrt::impl::delegate_winrt::Windows::Foundation::AsyncActionCompletedHandler__lambda_cc934bcfcfb2415fd654dddf326e340e___::Invoke_::_1_::catch_3(
        __int64 a1,
        __int64 a2)
{
  *(_DWORD *)(a2 + 48) = *winrt::to_hresult((_DWORD *)(a2 + 48));
  return 0LL;
}
