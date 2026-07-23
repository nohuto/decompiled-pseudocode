/*
 * XREFs of WheaHwErrorReportAbandonDeviceDriver @ 0x140644250
 * Callers:
 *     WheaReportFatalHwErrorDeviceDriverEx @ 0x140644510 (WheaReportFatalHwErrorDeviceDriverEx.c)
 *     WheaReportHwErrorDeviceDriverEx @ 0x140644630 (WheaReportHwErrorDeviceDriverEx.c)
 * Callees:
 *     sub_1406447EC @ 0x1406447EC (sub_1406447EC.c)
 *     sub_140644808 @ 0x140644808 (sub_140644808.c)
 */

__int64 WheaHwErrorReportAbandonDeviceDriver()
{
  ULONG_PTR v0; // rcx

  if ( !(unsigned __int8)sub_1406447EC() )
    return 3221225480LL;
  sub_140644808(v0);
  return 0LL;
}
