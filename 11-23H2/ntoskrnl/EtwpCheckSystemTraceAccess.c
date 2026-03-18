/*
 * XREFs of EtwpCheckSystemTraceAccess @ 0x140825770
 * Callers:
 *     EtwpUpdateTrace @ 0x1407F7F7C (EtwpUpdateTrace.c)
 *     EtwQueryPerformanceTraceInformation @ 0x14085FEF4 (EtwQueryPerformanceTraceInformation.c)
 *     EtwSetPerformanceTraceInformation @ 0x1409E1E84 (EtwSetPerformanceTraceInformation.c)
 * Callees:
 *     EtwpCheckLoggerControlAccess @ 0x1406BDB0C (EtwpCheckLoggerControlAccess.c)
 *     EtwpCheckGuidAccess @ 0x140781B64 (EtwpCheckGuidAccess.c)
 */

__int64 __fastcall EtwpCheckSystemTraceAccess(__int64 a1, ACCESS_MASK a2)
{
  if ( (*(_DWORD *)(a1 + 816) & 0x20) != 0 )
    return EtwpCheckLoggerControlAccess(a2, a1);
  else
    return EtwpCheckGuidAccess((unsigned int *)&SystemTraceControlGuid, a2, 0LL);
}
