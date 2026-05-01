/*
 * XREFs of _winrt::impl::delegate_winrt::Windows::System::Threading::TimerElapsedHandler__lambda_663ef704f9ce02801a8eb52a4a423678___::Invoke_::_1_::catch$6 @ 0x180789757
 * Callers:
 *     <none>
 * Callees:
 *     ?to_hresult@winrt@@YA?AUhresult@1@XZ @ 0x180390514 (-to_hresult@winrt@@YA-AUhresult@1@XZ.c)
 */

__int64 __fastcall winrt::impl::delegate_winrt::Windows::System::Threading::TimerElapsedHandler__lambda_663ef704f9ce02801a8eb52a4a423678___::Invoke_::_1_::catch_6(
        __int64 a1,
        __int64 a2)
{
  *(_DWORD *)(a2 + 48) = *winrt::to_hresult((_DWORD *)(a2 + 48));
  return 0LL;
}
