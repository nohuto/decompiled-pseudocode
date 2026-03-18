/*
 * XREFs of RtlStringCchPrintfW @ 0x1C000CF50
 * Callers:
 *     Controller_PopulateDeviceFlagsFromKse @ 0x1C001AB68 (Controller_PopulateDeviceFlagsFromKse.c)
 *     Counter_CreateTransferRingInstance @ 0x1C006E274 (Counter_CreateTransferRingInstance.c)
 *     Counter_CreateInterrupterInstance @ 0x1C006E9EC (Counter_CreateInterrupterInstance.c)
 *     Counter_CreateCommonBufferInstance @ 0x1C00737C4 (Counter_CreateCommonBufferInstance.c)
 * Callees:
 *     RtlStringVPrintfWorkerW @ 0x1C000CF8C (RtlStringVPrintfWorkerW.c)
 */

NTSTATUS RtlStringCchPrintfW(NTSTRSAFE_PWSTR pszDest, size_t cchDest, NTSTRSAFE_PCWSTR pszFormat, ...)
{
  NTSTATUS result; // eax
  va_list va; // [rsp+68h] [rbp+20h] BYREF

  va_start(va, pszFormat);
  if ( cchDest - 1 <= 0x7FFFFFFE )
    return RtlStringVPrintfWorkerW(pszDest, cchDest, (size_t *)pszFormat, pszFormat, va);
  result = -1073741811;
  if ( cchDest )
    *pszDest = 0;
  return result;
}
