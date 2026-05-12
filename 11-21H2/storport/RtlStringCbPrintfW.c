/*
 * XREFs of RtlStringCbPrintfW @ 0x1C001E1EC
 * Callers:
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C0015F84 (RaUnitScsiGetDumpPointersIoctl.c)
 *     PortMapDeleteLunEntry @ 0x1C001F270 (PortMapDeleteLunEntry.c)
 *     PortMapDeleteAdapterEntry @ 0x1C0068B20 (PortMapDeleteAdapterEntry.c)
 *     RaidAdapterCreateDriverInfo @ 0x1C00852F0 (RaidAdapterCreateDriverInfo.c)
 *     PortOpenDeviceKey @ 0x1C0092F54 (PortOpenDeviceKey.c)
 * Callees:
 *     RtlStringVPrintfWorkerW @ 0x1C001E22C (RtlStringVPrintfWorkerW.c)
 */

NTSTATUS RtlStringCbPrintfW(NTSTRSAFE_PWSTR pszDest, size_t cbDest, NTSTRSAFE_PCWSTR pszFormat, ...)
{
  size_t v3; // rdx
  NTSTATUS result; // eax
  va_list va; // [rsp+68h] [rbp+20h] BYREF

  va_start(va, pszFormat);
  v3 = cbDest >> 1;
  if ( v3 - 1 <= 0x7FFFFFFE )
    return RtlStringVPrintfWorkerW(pszDest, v3, (size_t *)pszFormat, pszFormat, va);
  result = -1073741811;
  if ( v3 )
    *pszDest = 0;
  return result;
}
