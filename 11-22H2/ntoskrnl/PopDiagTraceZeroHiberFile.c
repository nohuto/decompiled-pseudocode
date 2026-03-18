/*
 * XREFs of PopDiagTraceZeroHiberFile @ 0x140AA81A4
 * Callers:
 *     PopZeroHiberFile @ 0x140989540 (PopZeroHiberFile.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x140366FF0 (PopDiagTraceEventNoPayload.c)
 */

void PopDiagTraceZeroHiberFile()
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_ZEROHIBERFILE_START);
}
