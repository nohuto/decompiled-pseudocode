/*
 * XREFs of PopDiagTracePrepareSleepEnd @ 0x140991450
 * Callers:
 *     PopPrepareSleep @ 0x14058F47C (PopPrepareSleep.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x140367640 (PopDiagTraceEventNoPayload.c)
 */

void PopDiagTracePrepareSleepEnd()
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_PREPARESLEEP_END);
}
