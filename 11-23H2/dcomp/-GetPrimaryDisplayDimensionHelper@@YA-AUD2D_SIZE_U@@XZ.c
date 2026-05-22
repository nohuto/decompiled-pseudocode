/*
 * XREFs of ?GetPrimaryDisplayDimensionHelper@@YA?AUD2D_SIZE_U@@XZ @ 0x180085840
 * Callers:
 *     ?Initialize@CDxDevice@DirectComposition@@IEAAJPEAUIUnknown@@@Z @ 0x18009BA98 (-Initialize@CDxDevice@DirectComposition@@IEAAJPEAUIUnknown@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 */

struct D2D_SIZE_U GetPrimaryDisplayDimensionHelper(void)
{
  DWORD dmPelsWidth; // ebx
  DWORD dmPelsHeight; // edi
  DWORD i; // esi
  DEVMODEW DevMode; // [rsp+38h] [rbp-D0h] BYREF
  _DISPLAY_DEVICEW DisplayDevice; // [rsp+118h] [rbp+10h] BYREF

  memset_0(DisplayDevice.DeviceName, 0, 0x344uLL);
  dmPelsWidth = 0;
  DisplayDevice.cb = 840;
  dmPelsHeight = 0;
  for ( i = 0; EnumDisplayDevicesW(0LL, i, &DisplayDevice, 2u); ++i )
  {
    if ( (DisplayDevice.StateFlags & 1) != 0 )
    {
      if ( (DisplayDevice.StateFlags & 0x2000000) != 0
        || (DisplayDevice.StateFlags & 8) != 0
        || (DisplayDevice.StateFlags & 0x40) != 0 )
      {
        continue;
      }
      memset_0(&DevMode, 0, sizeof(DevMode));
      DevMode.dmSize = 220;
      if ( EnumDisplaySettingsW(DisplayDevice.DeviceName, 0xFFFFFFFF, &DevMode) && (DisplayDevice.StateFlags & 4) != 0 )
      {
        dmPelsWidth = DevMode.dmPelsWidth;
        dmPelsHeight = DevMode.dmPelsHeight;
      }
    }
    DisplayDevice.cb = 840;
  }
  return (struct D2D_SIZE_U)__PAIR64__(dmPelsHeight, dmPelsWidth);
}
