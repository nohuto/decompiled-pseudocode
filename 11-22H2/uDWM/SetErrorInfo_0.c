/*
 * XREFs of SetErrorInfo_0 @ 0x18005E63D
 * Callers:
 *     ?to_abi@hresult_error@winrt@@QEBA?AUhresult@2@XZ @ 0x18009E634 (-to_abi@hresult_error@winrt@@QEBA-AUhresult@2@XZ.c)
 *     ?fallback_RoOriginateLanguageException@hresult_error@winrt@@CAHHPEAX0@Z @ 0x1800D87D0 (-fallback_RoOriginateLanguageException@hresult_error@winrt@@CAHHPEAX0@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
HRESULT __stdcall SetErrorInfo_0(ULONG dwReserved, IErrorInfo *perrinfo)
{
  return SetErrorInfo(dwReserved, perrinfo);
}
