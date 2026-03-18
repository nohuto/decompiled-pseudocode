/*
 * XREFs of PopDiagTraceFlushSleepStudyLoggerEnd @ 0x140AA7E48
 * Callers:
 *     PopUmpoSendFlushSleepStudyLoggerNotification @ 0x14059974C (PopUmpoSendFlushSleepStudyLoggerNotification.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x140367640 (PopDiagTraceEventNoPayload.c)
 */

void PopDiagTraceFlushSleepStudyLoggerEnd()
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_FLUSHSLEEPSTUDYLOGGER_STOP);
}
