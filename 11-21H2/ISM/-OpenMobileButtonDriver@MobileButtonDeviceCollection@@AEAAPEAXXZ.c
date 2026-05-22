/*
 * XREFs of ?OpenMobileButtonDriver@MobileButtonDeviceCollection@@AEAAPEAXXZ @ 0x1800C55D4
 * Callers:
 *     ?SendIOCTLMessage@MobileButtonDeviceCollection@@AEAAXW4_Button@@_N@Z @ 0x1800C5640 (-SendIOCTLMessage@MobileButtonDeviceCollection@@AEAAXW4_Button@@_N@Z.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x18004AF4C (--_V@YAXPEAX@Z.c)
 *     ?GetDevicePath@MobileButtonDeviceCollection@@AEAAPEAGXZ @ 0x1800C47B8 (-GetDevicePath@MobileButtonDeviceCollection@@AEAAPEAGXZ.c)
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
