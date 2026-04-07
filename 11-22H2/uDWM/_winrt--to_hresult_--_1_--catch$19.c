/*
 * XREFs of _winrt::to_hresult_::_1_::catch$19 @ 0x1800EEE57
 * Callers:
 *     <none>
 * Callees:
 *     ?to_abi@hresult_error@winrt@@QEBA?AUhresult@2@XZ @ 0x18009E634 (-to_abi@hresult_error@winrt@@QEBA-AUhresult@2@XZ.c)
 */

__int64 __fastcall winrt::to_hresult_::_1_::catch_19(__int64 a1, __int64 a2)
{
  winrt::hresult_error::to_abi(*(_QWORD *)(a2 + 32), *(_DWORD **)(a2 + 144));
  return 0LL;
}
