/*
 * XREFs of WheaHwErrorReportAbandonDeviceDriver @ 0x140611240
 * Callers:
 *     WheaReportFatalHwErrorDeviceDriverEx @ 0x140611500 (WheaReportFatalHwErrorDeviceDriverEx.c)
 *     WheaReportHwErrorDeviceDriverEx @ 0x140611620 (WheaReportHwErrorDeviceDriverEx.c)
 * Callees:
 *     WheapErrorHandleIsValid @ 0x1406117D8 (WheapErrorHandleIsValid.c)
 *     WheapFreeDriverPacketBuffer @ 0x1406117F4 (WheapFreeDriverPacketBuffer.c)
 */

__int64 WheaHwErrorReportAbandonDeviceDriver()
{
  void *v0; // rcx

  if ( !(unsigned __int8)WheapErrorHandleIsValid() )
    return 3221225480LL;
  WheapFreeDriverPacketBuffer(v0);
  return 0LL;
}
