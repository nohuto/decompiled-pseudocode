/*
 * XREFs of _winrt::impl::delegate_winrt::Windows::Foundation::EventHandler_unsigned_int___lambda_59a2c452c266c39cf2d30705a14a3598___::Invoke_::_1_::catch$1 @ 0x18027BC5E
 * Callers:
 *     <none>
 * Callees:
 *     ?to_hresult@winrt@@YA?AUhresult@1@XZ @ 0x180390514 (-to_hresult@winrt@@YA-AUhresult@1@XZ.c)
 */

__int64 __fastcall winrt::impl::delegate_winrt::Windows::Foundation::EventHandler_unsigned_int___lambda_59a2c452c266c39cf2d30705a14a3598___::Invoke_::_1_::catch_1(
        __int64 a1,
        __int64 a2)
{
  *(_DWORD *)(a2 + 48) = *(_DWORD *)winrt::to_hresult(a2 + 48);
  return 0LL;
}
