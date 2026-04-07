/*
 * XREFs of GetErrorInfo_0 @ 0x18005E661
 * Callers:
 *     ??0hresult_error@winrt@@QEAA@Uhresult@1@Utake_ownership_from_abi_t@1@@Z @ 0x1800D6A5C (--0hresult_error@winrt@@QEAA@Uhresult@1@Utake_ownership_from_abi_t@1@@Z.c)
 *     ?originate@hresult_error@winrt@@AEAAXUhresult@2@PEAX@Z @ 0x1800D8850 (-originate@hresult_error@winrt@@AEAAXUhresult@2@PEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
HRESULT __stdcall GetErrorInfo_0(ULONG dwReserved, IErrorInfo **pperrinfo)
{
  return GetErrorInfo(dwReserved, pperrinfo);
}
