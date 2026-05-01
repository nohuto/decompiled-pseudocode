/*
 * XREFs of ?IsValid@MonitorInformation@KeyboardHosting@@QEAA_NXZ @ 0x18047EF34
 * Callers:
 *     ?HandleDisplayChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x180481150 (-HandleDisplayChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAW4ShellRequestType@Text@Shell.c)
 * Callees:
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

bool __fastcall KeyboardHosting::MonitorInformation::IsValid(HMONITOR *this)
{
  HMONITOR v1; // rcx
  struct tagMONITORINFO mi; // [rsp+20h] [rbp-38h] BYREF

  v1 = *this;
  memset(&mi, 0, sizeof(mi));
  mi.cbSize = 40;
  return GetMonitorInfoW(v1, &mi);
}
