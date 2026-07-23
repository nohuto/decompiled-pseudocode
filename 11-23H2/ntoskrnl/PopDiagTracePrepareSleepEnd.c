/*
 * XREFs of PopDiagTracePrepareSleepEnd @ 0x140991650
 * Callers:
 *     PopPrepareSleep @ 0x14058F96C (PopPrepareSleep.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x1403677E0 (PopDiagTraceEventNoPayload.c)
 */

void PopDiagTracePrepareSleepEnd()
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_PREPARESLEEP_END);
}
