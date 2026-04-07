/*
 * XREFs of SysStringLen_0 @ 0x18005E649
 * Callers:
 *     ?message@hresult_error@winrt@@QEBA?AUhstring@2@XZ @ 0x18009E440 (-message@hresult_error@winrt@@QEBA-AUhstring@2@XZ.c)
 *     ??0hresult_error@winrt@@QEAA@Uhresult@1@Utake_ownership_from_abi_t@1@@Z @ 0x1800D6A5C (--0hresult_error@winrt@@QEAA@Uhresult@1@Utake_ownership_from_abi_t@1@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
UINT __stdcall SysStringLen_0(BSTR pbstr)
{
  return SysStringLen(pbstr);
}
