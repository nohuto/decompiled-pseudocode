/*
 * XREFs of VidSchiMarkTdrFaultingDevice @ 0x1C010A134
 * Callers:
 *     VidSchiReportHwHang @ 0x1C00474B8 (VidSchiReportHwHang.c)
 * Callees:
 *     VidSchMarkDeviceAsError @ 0x1C00019F0 (VidSchMarkDeviceAsError.c)
 */

void __fastcall VidSchiMarkTdrFaultingDevice(__int64 a1)
{
  if ( a1 != *(_QWORD *)(*(_QWORD *)(a1 + 32) + 240LL) )
  {
    *(_BYTE *)(a1 + 204) = 1;
    VidSchMarkDeviceAsError(a1, 7, 0LL);
  }
}
