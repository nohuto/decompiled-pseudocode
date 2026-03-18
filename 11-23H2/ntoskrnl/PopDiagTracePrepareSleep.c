/*
 * XREFs of PopDiagTracePrepareSleep @ 0x140991434
 * Callers:
 *     PopPrepareSleep @ 0x14058F47C (PopPrepareSleep.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x140367640 (PopDiagTraceEventNoPayload.c)
 */

void PopDiagTracePrepareSleep()
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_PREPARESLEEP);
}
