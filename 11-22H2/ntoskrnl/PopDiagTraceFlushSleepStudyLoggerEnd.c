/*
 * XREFs of PopDiagTraceFlushSleepStudyLoggerEnd @ 0x140AA7F08
 * Callers:
 *     PopUmpoSendFlushSleepStudyLoggerNotification @ 0x1405997DC (PopUmpoSendFlushSleepStudyLoggerNotification.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x140366FF0 (PopDiagTraceEventNoPayload.c)
 */

void PopDiagTraceFlushSleepStudyLoggerEnd()
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_FLUSHSLEEPSTUDYLOGGER_STOP);
}
