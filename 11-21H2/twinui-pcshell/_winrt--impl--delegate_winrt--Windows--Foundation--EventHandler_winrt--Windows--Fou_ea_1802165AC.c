/*
 * XREFs of _winrt::impl::delegate_winrt::Windows::Foundation::EventHandler_winrt::Windows::Foundation::IInspectable___lambda_7d98499c6cec3547b2371cefd2f8849f___::Invoke_::_1_::catch$1 @ 0x1802165AC
 * Callers:
 *     <none>
 * Callees:
 *     ?to_hresult@winrt@@YA?AUhresult@1@XZ @ 0x1802DA298 (-to_hresult@winrt@@YA-AUhresult@1@XZ.c)
 */

__int64 __fastcall winrt::impl::delegate_winrt::Windows::Foundation::EventHandler_winrt::Windows::Foundation::IInspectable___lambda_7d98499c6cec3547b2371cefd2f8849f___::Invoke_::_1_::catch_1(
        __int64 a1,
        __int64 a2)
{
  *(_DWORD *)(a2 + 48) = *(_DWORD *)winrt::to_hresult(a2 + 48);
  return 0LL;
}
