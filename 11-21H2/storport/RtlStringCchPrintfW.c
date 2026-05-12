/*
 * XREFs of RtlStringCchPrintfW @ 0x1C001FED0
 * Callers:
 *     RaidUnitGetDeviceId @ 0x1C001FD38 (RaidUnitGetDeviceId.c)
 *     RaidUnitGetInstanceId @ 0x1C001FE3C (RaidUnitGetInstanceId.c)
 *     StorpLogPhysicalTopologyInfo @ 0x1C0020490 (StorpLogPhysicalTopologyInfo.c)
 *     RaidCreateDeviceName @ 0x1C004E5BC (RaidCreateDeviceName.c)
 *     StorCreateScsiSymbolicLink @ 0x1C004FA1C (StorCreateScsiSymbolicLink.c)
 *     StorDeleteScsiSymbolicLink @ 0x1C004FD6C (StorDeleteScsiSymbolicLink.c)
 *     RaUnitQueryDeviceTextIrp @ 0x1C00879FC (RaUnitQueryDeviceTextIrp.c)
 * Callees:
 *     RtlStringVPrintfWorkerW_1 @ 0x1C001FF0C (RtlStringVPrintfWorkerW_1.c)
 */

NTSTATUS RtlStringCchPrintfW(NTSTRSAFE_PWSTR pszDest, size_t cchDest, NTSTRSAFE_PCWSTR pszFormat, ...)
{
  NTSTATUS result; // eax
  va_list va; // [rsp+68h] [rbp+20h] BYREF

  va_start(va, pszFormat);
  if ( cchDest - 1 <= 0x7FFFFFFE )
    return RtlStringVPrintfWorkerW_1(pszDest, cchDest, (size_t *)pszFormat, pszFormat, va);
  result = -1073741811;
  if ( cchDest )
    *pszDest = 0;
  return result;
}
