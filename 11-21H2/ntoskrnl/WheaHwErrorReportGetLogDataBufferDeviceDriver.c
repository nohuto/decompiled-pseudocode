/*
 * XREFs of WheaHwErrorReportGetLogDataBufferDeviceDriver @ 0x140644280
 * Callers:
 *     WheaReportFatalHwErrorDeviceDriverEx @ 0x140644510 (WheaReportFatalHwErrorDeviceDriverEx.c)
 *     WheaReportHwErrorDeviceDriverEx @ 0x140644630 (WheaReportHwErrorDeviceDriverEx.c)
 * Callees:
 *     sub_1406447EC @ 0x1406447EC (sub_1406447EC.c)
 */

__int64 WheaHwErrorReportGetLogDataBufferDeviceDriver()
{
  unsigned int v0; // edx
  __int64 v1; // rcx
  _QWORD *v2; // r8

  if ( !(unsigned __int8)sub_1406447EC() )
    return 3221225480LL;
  if ( v0 > 0x24 )
    return 3221225626LL;
  if ( !v2 )
    return 3221225713LL;
  *(_DWORD *)(v1 + 100) = v0;
  *v2 = v1 + 64;
  return 0LL;
}
