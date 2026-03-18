/*
 * XREFs of CmpFlushTraceLoggingProvider @ 0x140A1274C
 * Callers:
 *     CmShutdownSystem2 @ 0x140615E1C (CmShutdownSystem2.c)
 * Callees:
 *     TlgAggregateFlush @ 0x140677300 (TlgAggregateFlush.c)
 *     CmpFlushUnsupportedOperationTelemetry @ 0x1407E2464 (CmpFlushUnsupportedOperationTelemetry.c)
 */

void CmpFlushTraceLoggingProvider()
{
  CmpFlushUnsupportedOperationTelemetry();
  TlgAggregateFlush((__int64)&dword_140C043C8);
}
