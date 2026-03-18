/*
 * XREFs of EtwpCheckLoggerControlAccess @ 0x1406BDB0C
 * Callers:
 *     EtwpGetPmcSessions @ 0x1405FC1A4 (EtwpGetPmcSessions.c)
 *     EtwTraceRaw @ 0x1405FF338 (EtwTraceRaw.c)
 *     EtwpTransitionToRealtime @ 0x1405FF588 (EtwpTransitionToRealtime.c)
 *     EtwpUpdateEnableMask @ 0x1406BDC94 (EtwpUpdateEnableMask.c)
 *     EtwpRealtimeConnect @ 0x1407F54F4 (EtwpRealtimeConnect.c)
 *     EtwpFlushTrace @ 0x1407F59F8 (EtwpFlushTrace.c)
 *     EtwpUpdateTrace @ 0x1407F7F7C (EtwpUpdateTrace.c)
 *     EtwpStopTrace @ 0x1407F8284 (EtwpStopTrace.c)
 *     EtwpQueryTrace @ 0x1407F8920 (EtwpQueryTrace.c)
 *     EtwpCheckSystemTraceAccess @ 0x140825770 (EtwpCheckSystemTraceAccess.c)
 *     EtwQueryPerformanceTraceInformation @ 0x14085FEF4 (EtwQueryPerformanceTraceInformation.c)
 *     EtwSetPerformanceTraceInformation @ 0x1409E1E84 (EtwSetPerformanceTraceInformation.c)
 *     EtwpGetSoftRestartInformation @ 0x1409ED334 (EtwpGetSoftRestartInformation.c)
 *     EtwpSetSoftRestartInformation @ 0x1409EE10C (EtwpSetSoftRestartInformation.c)
 *     EtwpCheckLoggerAccessAndDoRundown @ 0x1409EE934 (EtwpCheckLoggerAccessAndDoRundown.c)
 * Callees:
 *     EtwpDereferenceLoggerSecurityDescriptor @ 0x1406BDAC4 (EtwpDereferenceLoggerSecurityDescriptor.c)
 *     EtwpReferenceLoggerSecurityDescriptor @ 0x1406BDB60 (EtwpReferenceLoggerSecurityDescriptor.c)
 *     EtwpAccessCheck @ 0x1406BDBDC (EtwpAccessCheck.c)
 */

__int64 __fastcall EtwpCheckLoggerControlAccess(ACCESS_MASK DesiredAccess, __int64 a2)
{
  void *v4; // rdi
  unsigned int v5; // ebx

  v4 = (void *)EtwpReferenceLoggerSecurityDescriptor(a2);
  v5 = EtwpAccessCheck(v4, DesiredAccess);
  EtwpDereferenceLoggerSecurityDescriptor(a2, (__int64)v4);
  return v5;
}
