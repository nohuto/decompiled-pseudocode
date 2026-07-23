/*
 * XREFs of PopDiagTraceFlushSleepStudyLogger @ 0x140AA7C9C
 * Callers:
 *     PopUmpoSendFlushSleepStudyLoggerNotification @ 0x140599C3C (PopUmpoSendFlushSleepStudyLoggerNotification.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x1403677E0 (PopDiagTraceEventNoPayload.c)
 */

void PopDiagTraceFlushSleepStudyLogger()
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_FLUSHSLEEPSTUDYLOGGER_START);
}
