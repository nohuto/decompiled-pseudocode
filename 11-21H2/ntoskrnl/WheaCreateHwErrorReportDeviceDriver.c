/*
 * XREFs of WheaCreateHwErrorReportDeviceDriver @ 0x140644220
 * Callers:
 *     WheaReportFatalHwErrorDeviceDriverEx @ 0x140644510 (WheaReportFatalHwErrorDeviceDriverEx.c)
 *     WheaReportHwErrorDeviceDriverEx @ 0x140644630 (WheaReportHwErrorDeviceDriverEx.c)
 * Callees:
 *     sub_140644930 @ 0x140644930 (sub_140644930.c)
 */

__int64 __fastcall WheaCreateHwErrorReportDeviceDriver(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // [rsp+40h] [rbp+18h] BYREF

  v1 = 0LL;
  v3 = 0LL;
  if ( (int)sub_140644930(a1, &v3) >= 0 )
    return v3;
  return v1;
}
