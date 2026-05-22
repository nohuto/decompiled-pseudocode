/*
 * XREFs of _winrt::impl::delegate_winrt::Windows::System::Threading::WorkItemHandler__lambda_d47f631da3751d72c8a8e135519addbc___::Invoke_::_1_::catch$0 @ 0x1800CA04B
 * Callers:
 *     <none>
 * Callees:
 *     ?to_hresult@winrt@@YA?AUhresult@1@XZ @ 0x1800839C8 (-to_hresult@winrt@@YA-AUhresult@1@XZ.c)
 */

__int64 __fastcall winrt::impl::delegate_winrt::Windows::System::Threading::WorkItemHandler__lambda_d47f631da3751d72c8a8e135519addbc___::Invoke_::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  *(_DWORD *)(a2 + 48) = *winrt::to_hresult((_DWORD *)(a2 + 48));
  return 0LL;
}
