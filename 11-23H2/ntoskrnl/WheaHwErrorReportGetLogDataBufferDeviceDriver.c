/*
 * XREFs of WheaHwErrorReportGetLogDataBufferDeviceDriver @ 0x1406117C0
 * Callers:
 *     WheaReportFatalHwErrorDeviceDriverEx @ 0x140611A50 (WheaReportFatalHwErrorDeviceDriverEx.c)
 *     WheaReportHwErrorDeviceDriverEx @ 0x140611B70 (WheaReportHwErrorDeviceDriverEx.c)
 * Callees:
 *     WheapErrorHandleIsValid @ 0x140611D28 (WheapErrorHandleIsValid.c)
 */

__int64 WheaHwErrorReportGetLogDataBufferDeviceDriver()
{
  unsigned int v0; // edx
  __int64 v1; // rcx
  _QWORD *v2; // r8

  if ( !(unsigned __int8)WheapErrorHandleIsValid() )
    return 3221225480LL;
  if ( v0 > 0x24 )
    return 3221225626LL;
  if ( !v2 )
    return 3221225713LL;
  *(_DWORD *)(v1 + 100) = v0;
  *v2 = v1 + 64;
  return 0LL;
}
