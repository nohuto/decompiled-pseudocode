/*
 * XREFs of SysStringLen_0 @ 0x180058FA1
 * Callers:
 *     ??0hresult_error@winrt@@QEAA@Uhresult@1@Utake_ownership_from_abi_t@1@@Z @ 0x1800AAEA0 (--0hresult_error@winrt@@QEAA@Uhresult@1@Utake_ownership_from_abi_t@1@@Z.c)
 *     ?message@hresult_error@winrt@@QEBA?AUhstring@2@XZ @ 0x1800F3690 (-message@hresult_error@winrt@@QEBA-AUhstring@2@XZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
UINT __stdcall SysStringLen_0(BSTR pbstr)
{
  return SysStringLen(pbstr);
}
