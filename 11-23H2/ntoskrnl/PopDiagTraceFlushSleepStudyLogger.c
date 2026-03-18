/*
 * XREFs of PopDiagTraceFlushSleepStudyLogger @ 0x140AA7E2C
 * Callers:
 *     PopUmpoSendFlushSleepStudyLoggerNotification @ 0x14059974C (PopUmpoSendFlushSleepStudyLoggerNotification.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x140367640 (PopDiagTraceEventNoPayload.c)
 */

void PopDiagTraceFlushSleepStudyLogger()
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_FLUSHSLEEPSTUDYLOGGER_START);
}
