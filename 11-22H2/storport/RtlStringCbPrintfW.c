/*
 * XREFs of RtlStringCbPrintfW @ 0x1C001A150
 * Callers:
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C000FC84 (RaUnitScsiGetDumpPointersIoctl.c)
 *     PortMapDeleteLunEntry @ 0x1C001D648 (PortMapDeleteLunEntry.c)
 *     PortMapDeleteAdapterEntry @ 0x1C0078350 (PortMapDeleteAdapterEntry.c)
 *     RaidAdapterCreateDriverInfo @ 0x1C00A55C8 (RaidAdapterCreateDriverInfo.c)
 *     PortOpenDeviceKey @ 0x1C00AF880 (PortOpenDeviceKey.c)
 * Callees:
 *     RtlStringVPrintfWorkerW @ 0x1C001A190 (RtlStringVPrintfWorkerW.c)
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
