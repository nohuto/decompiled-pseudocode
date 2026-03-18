/*
 * XREFs of PopDiagTraceFlushSleepStudyLogger @ 0x140A52F2C
 * Callers:
 *     PopUmpoSendFlushSleepStudyLoggerNotification @ 0x140398C28 (PopUmpoSendFlushSleepStudyLoggerNotification.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x140256CA0 (PopDiagTraceEventNoPayload.c)
 */

void PopDiagTraceFlushSleepStudyLogger()
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_FLUSHSLEEPSTUDYLOGGER_START);
}
