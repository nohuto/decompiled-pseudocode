/*
 * XREFs of ?OpenMobileButtonDriver@MobileButtonDeviceCollection@@AEAAPEAXXZ @ 0x1800DE6DC
 * Callers:
 *     ?SendIOCTLMessage@MobileButtonDeviceCollection@@AEAAXW4_Button@@_N@Z @ 0x1800DE748 (-SendIOCTLMessage@MobileButtonDeviceCollection@@AEAAXW4_Button@@_N@Z.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x180056D48 (--_V@YAXPEAX@Z.c)
 *     ?GetDevicePath@MobileButtonDeviceCollection@@AEAAPEAGXZ @ 0x1800DD8A0 (-GetDevicePath@MobileButtonDeviceCollection@@AEAAPEAGXZ.c)
 */

__int64 __fastcall MobileButtonDeviceCollection::OpenMobileButtonDriver(MobileButtonDeviceCollection *this)
{
  const WCHAR *DevicePath; // rax
  WCHAR *v2; // rdi
  HANDLE FileW; // rbx

  DevicePath = MobileButtonDeviceCollection::GetDevicePath(this);
  v2 = (WCHAR *)DevicePath;
  if ( !DevicePath )
    return -1LL;
  FileW = CreateFileW(DevicePath, 0xC0000000, 3u, 0LL, 3u, 0, 0LL);
  operator delete[](v2);
  return (__int64)FileW;
}
