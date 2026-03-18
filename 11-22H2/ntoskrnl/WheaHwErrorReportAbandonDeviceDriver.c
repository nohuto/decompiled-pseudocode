/*
 * XREFs of WheaHwErrorReportAbandonDeviceDriver @ 0x1406112B0
 * Callers:
 *     WheaReportFatalHwErrorDeviceDriverEx @ 0x140611570 (WheaReportFatalHwErrorDeviceDriverEx.c)
 *     WheaReportHwErrorDeviceDriverEx @ 0x140611690 (WheaReportHwErrorDeviceDriverEx.c)
 * Callees:
 *     WheapErrorHandleIsValid @ 0x140611848 (WheapErrorHandleIsValid.c)
 *     WheapFreeDriverPacketBuffer @ 0x140611864 (WheapFreeDriverPacketBuffer.c)
 */

__int64 WheaHwErrorReportAbandonDeviceDriver()
{
  void *v0; // rcx

  if ( !(unsigned __int8)WheapErrorHandleIsValid() )
    return 3221225480LL;
  WheapFreeDriverPacketBuffer(v0);
  return 0LL;
}
