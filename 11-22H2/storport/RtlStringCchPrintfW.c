/*
 * XREFs of RtlStringCchPrintfW @ 0x1C001F9BC
 * Callers:
 *     RaidUnitGetDeviceId @ 0x1C001F798 (RaidUnitGetDeviceId.c)
 *     RaidUnitGetInstanceId @ 0x1C001F928 (RaidUnitGetInstanceId.c)
 *     RaidCreateDeviceName @ 0x1C005888C (RaidCreateDeviceName.c)
 *     StorCreateScsiSymbolicLink @ 0x1C005BF14 (StorCreateScsiSymbolicLink.c)
 *     StorDeleteScsiSymbolicLink @ 0x1C005C25C (StorDeleteScsiSymbolicLink.c)
 *     StorpLogPhysicalTopologyInfo @ 0x1C006CDD8 (StorpLogPhysicalTopologyInfo.c)
 *     RaUnitQueryDeviceTextIrp @ 0x1C00A245C (RaUnitQueryDeviceTextIrp.c)
 * Callees:
 *     RtlStringVPrintfWorkerW @ 0x1C001A190 (RtlStringVPrintfWorkerW.c)
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
