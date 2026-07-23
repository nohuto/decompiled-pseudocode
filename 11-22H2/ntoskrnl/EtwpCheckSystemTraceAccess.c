/*
 * XREFs of EtwpCheckSystemTraceAccess @ 0x1408262CC
 * Callers:
 *     EtwpUpdateTrace @ 0x1407F8630 (EtwpUpdateTrace.c)
 *     EtwQueryPerformanceTraceInformation @ 0x140860054 (EtwQueryPerformanceTraceInformation.c)
 *     EtwSetPerformanceTraceInformation @ 0x1409E1F34 (EtwSetPerformanceTraceInformation.c)
 * Callees:
 *     EtwpCheckLoggerControlAccess @ 0x1406BDB0C (EtwpCheckLoggerControlAccess.c)
 *     EtwpCheckGuidAccess @ 0x140782074 (EtwpCheckGuidAccess.c)
 */

__int64 __fastcall EtwpCheckSystemTraceAccess(__int64 a1, ACCESS_MASK a2)
{
  if ( (*(_DWORD *)(a1 + 816) & 0x20) != 0 )
    return EtwpCheckLoggerControlAccess(a2, a1);
  else
    return EtwpCheckGuidAccess(&SystemTraceControlGuid.Data1, a2, 0LL);
}
