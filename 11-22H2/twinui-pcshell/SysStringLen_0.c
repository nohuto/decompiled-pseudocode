/*
 * XREFs of SysStringLen_0 @ 0x1801C8758
 * Callers:
 *     ?message@hresult_error@winrt@@QEBA?AUhstring@2@XZ @ 0x1802CEE12 (-message@hresult_error@winrt@@QEBA-AUhstring@2@XZ.c)
 *     ??0hresult_error@winrt@@QEAA@Uhresult@1@Utake_ownership_from_abi_t@1@@Z @ 0x18039160C (--0hresult_error@winrt@@QEAA@Uhresult@1@Utake_ownership_from_abi_t@1@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
UINT __stdcall SysStringLen_0(BSTR pbstr)
{
  return SysStringLen(pbstr);
}
