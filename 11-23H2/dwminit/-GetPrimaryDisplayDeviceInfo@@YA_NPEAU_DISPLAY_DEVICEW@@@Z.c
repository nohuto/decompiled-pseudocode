/*
 * XREFs of ?GetPrimaryDisplayDeviceInfo@@YA_NPEAU_DISPLAY_DEVICEW@@@Z @ 0x18000AD88
 * Callers:
 *     ?CleanupOldDwmProcess@@YAJXZ @ 0x18000A454 (-CleanupOldDwmProcess@@YAJXZ.c)
 * Callees:
 *     IsEnumDisplayDevicesWPresent @ 0x180002904 (IsEnumDisplayDevicesWPresent.c)
 */

char __fastcall GetPrimaryDisplayDeviceInfo(PDISPLAY_DEVICEW lpDisplayDevice)
{
  DWORD v2; // edi
  DWORD i; // edx

  if ( IsEnumDisplayDevicesWPresent() )
  {
    v2 = 0;
    lpDisplayDevice->cb = 840;
    for ( i = 0; EnumDisplayDevicesW(0LL, i, lpDisplayDevice, 2u); i = v2 )
    {
      if ( (lpDisplayDevice->StateFlags & 5) == 5 )
        return 1;
      ++v2;
    }
  }
  return 0;
}
