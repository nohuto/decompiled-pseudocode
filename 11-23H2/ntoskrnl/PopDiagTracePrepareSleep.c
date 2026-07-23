/*
 * XREFs of PopDiagTracePrepareSleep @ 0x140991634
 * Callers:
 *     PopPrepareSleep @ 0x14058F96C (PopPrepareSleep.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x1403677E0 (PopDiagTraceEventNoPayload.c)
 */

void PopDiagTracePrepareSleep()
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_PREPARESLEEP);
}
