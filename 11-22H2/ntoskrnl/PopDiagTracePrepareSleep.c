/*
 * XREFs of PopDiagTracePrepareSleep @ 0x1409914E4
 * Callers:
 *     PopPrepareSleep @ 0x14058F50C (PopPrepareSleep.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x140366FF0 (PopDiagTraceEventNoPayload.c)
 */

void PopDiagTracePrepareSleep()
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_PREPARESLEEP);
}
