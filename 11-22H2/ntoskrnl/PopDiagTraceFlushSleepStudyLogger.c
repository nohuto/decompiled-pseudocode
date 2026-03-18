/*
 * XREFs of PopDiagTraceFlushSleepStudyLogger @ 0x140AA7EEC
 * Callers:
 *     PopUmpoSendFlushSleepStudyLoggerNotification @ 0x1405997DC (PopUmpoSendFlushSleepStudyLoggerNotification.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x140366FF0 (PopDiagTraceEventNoPayload.c)
 */

void PopDiagTraceFlushSleepStudyLogger()
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_FLUSHSLEEPSTUDYLOGGER_START);
}
