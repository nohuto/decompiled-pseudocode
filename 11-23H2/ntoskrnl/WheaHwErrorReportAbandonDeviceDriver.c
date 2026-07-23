/*
 * XREFs of WheaHwErrorReportAbandonDeviceDriver @ 0x140611790
 * Callers:
 *     WheaReportFatalHwErrorDeviceDriverEx @ 0x140611A50 (WheaReportFatalHwErrorDeviceDriverEx.c)
 *     WheaReportHwErrorDeviceDriverEx @ 0x140611B70 (WheaReportHwErrorDeviceDriverEx.c)
 * Callees:
 *     WheapErrorHandleIsValid @ 0x140611D28 (WheapErrorHandleIsValid.c)
 *     WheapFreeDriverPacketBuffer @ 0x140611D44 (WheapFreeDriverPacketBuffer.c)
 */

__int64 WheaHwErrorReportAbandonDeviceDriver()
{
  void *v0; // rcx

  if ( !(unsigned __int8)WheapErrorHandleIsValid() )
    return 3221225480LL;
  WheapFreeDriverPacketBuffer(v0);
  return 0LL;
}
