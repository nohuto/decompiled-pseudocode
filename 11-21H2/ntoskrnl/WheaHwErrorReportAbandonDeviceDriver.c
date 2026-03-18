/*
 * XREFs of WheaHwErrorReportAbandonDeviceDriver @ 0x140644250
 * Callers:
 *     WheaReportFatalHwErrorDeviceDriverEx @ 0x140644510 (WheaReportFatalHwErrorDeviceDriverEx.c)
 *     WheaReportHwErrorDeviceDriverEx @ 0x140644630 (WheaReportHwErrorDeviceDriverEx.c)
 * Callees:
 *     WheapErrorHandleIsValid @ 0x1406447EC (WheapErrorHandleIsValid.c)
 *     WheapFreeDriverPacketBuffer @ 0x140644808 (WheapFreeDriverPacketBuffer.c)
 */

__int64 WheaHwErrorReportAbandonDeviceDriver()
{
  ULONG_PTR v0; // rcx

  if ( !(unsigned __int8)WheapErrorHandleIsValid() )
    return 3221225480LL;
  WheapFreeDriverPacketBuffer(v0);
  return 0LL;
}
