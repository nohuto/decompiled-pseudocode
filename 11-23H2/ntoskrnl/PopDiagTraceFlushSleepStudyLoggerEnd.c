/*
 * XREFs of PopDiagTraceFlushSleepStudyLoggerEnd @ 0x140AA7CB8
 * Callers:
 *     PopUmpoSendFlushSleepStudyLoggerNotification @ 0x140599C3C (PopUmpoSendFlushSleepStudyLoggerNotification.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x1403677E0 (PopDiagTraceEventNoPayload.c)
 */

void PopDiagTraceFlushSleepStudyLoggerEnd()
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_FLUSHSLEEPSTUDYLOGGER_STOP);
}
