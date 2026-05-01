/*
 * XREFs of _winrt::impl::delegate_winrt::Windows::Foundation::EventHandler_unsigned_int___lambda_3455f9b640c774812c562936cfdab1ef___::Invoke_::_1_::catch$4 @ 0x18027E584
 * Callers:
 *     <none>
 * Callees:
 *     ?to_hresult@winrt@@YA?AUhresult@1@XZ @ 0x180390514 (-to_hresult@winrt@@YA-AUhresult@1@XZ.c)
 */

__int64 __fastcall winrt::impl::delegate_winrt::Windows::Foundation::EventHandler_unsigned_int___lambda_3455f9b640c774812c562936cfdab1ef___::Invoke_::_1_::catch_4(
        __int64 a1,
        __int64 a2)
{
  *(_DWORD *)(a2 + 48) = *(_DWORD *)winrt::to_hresult(a2 + 48);
  return 0LL;
}
