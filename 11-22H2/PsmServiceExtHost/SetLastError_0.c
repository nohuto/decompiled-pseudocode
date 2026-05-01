/*
 * XREFs of SetLastError_0 @ 0x18004A43C
 * Callers:
 *     ?UtilRegisterErrorReportingDialog@@YAHPEAUHWND__@@KPEAI@Z @ 0x180097694 (-UtilRegisterErrorReportingDialog@@YAHPEAUHWND__@@KPEAI@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall SetLastError_0(DWORD dwErrCode)
{
  SetLastError(dwErrCode);
}
