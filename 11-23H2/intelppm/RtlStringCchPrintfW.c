/*
 * XREFs of RtlStringCchPrintfW @ 0x1C0003048
 * Callers:
 *     EmiProcessIoctl @ 0x1C00254B0 (EmiProcessIoctl.c)
 *     ReadEnergyEquation @ 0x1C0048A8C (ReadEnergyEquation.c)
 *     PopulateEnergyEstimationModel @ 0x1C0048B64 (PopulateEnergyEstimationModel.c)
 *     ReadPowerCurve @ 0x1C00499A4 (ReadPowerCurve.c)
 * Callees:
 *     RtlStringVPrintfWorkerW @ 0x1C0003084 (RtlStringVPrintfWorkerW.c)
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
