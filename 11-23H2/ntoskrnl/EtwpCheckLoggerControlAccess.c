/*
 * XREFs of EtwpCheckLoggerControlAccess @ 0x1406BDB3C
 * Callers:
 *     EtwpGetPmcSessions @ 0x1405FC714 (EtwpGetPmcSessions.c)
 *     EtwTraceRaw @ 0x1405FF8A8 (EtwTraceRaw.c)
 *     EtwpTransitionToRealtime @ 0x1405FFAF8 (EtwpTransitionToRealtime.c)
 *     EtwpUpdateEnableMask @ 0x1406BDCC4 (EtwpUpdateEnableMask.c)
 *     EtwpRealtimeConnect @ 0x1407F57C4 (EtwpRealtimeConnect.c)
 *     EtwpFlushTrace @ 0x1407F5CC8 (EtwpFlushTrace.c)
 *     EtwpUpdateTrace @ 0x1407F824C (EtwpUpdateTrace.c)
 *     EtwpStopTrace @ 0x1407F8554 (EtwpStopTrace.c)
 *     EtwpQueryTrace @ 0x1407F8BF0 (EtwpQueryTrace.c)
 *     EtwpCheckSystemTraceAccess @ 0x140825A70 (EtwpCheckSystemTraceAccess.c)
 *     EtwQueryPerformanceTraceInformation @ 0x140860134 (EtwQueryPerformanceTraceInformation.c)
 *     EtwSetPerformanceTraceInformation @ 0x1409E2114 (EtwSetPerformanceTraceInformation.c)
 *     EtwpGetSoftRestartInformation @ 0x1409ED5C4 (EtwpGetSoftRestartInformation.c)
 *     EtwpSetSoftRestartInformation @ 0x1409EE39C (EtwpSetSoftRestartInformation.c)
 *     EtwpCheckLoggerAccessAndDoRundown @ 0x1409EEBC4 (EtwpCheckLoggerAccessAndDoRundown.c)
 * Callees:
 *     EtwpDereferenceLoggerSecurityDescriptor @ 0x1406BDAF4 (EtwpDereferenceLoggerSecurityDescriptor.c)
 *     EtwpReferenceLoggerSecurityDescriptor @ 0x1406BDB90 (EtwpReferenceLoggerSecurityDescriptor.c)
 *     EtwpAccessCheck @ 0x1406BDC0C (EtwpAccessCheck.c)
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
