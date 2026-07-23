/*
 * XREFs of PopDiagTraceZeroHiberFile @ 0x140AA7F54
 * Callers:
 *     PopZeroHiberFile @ 0x140989690 (PopZeroHiberFile.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x1403677E0 (PopDiagTraceEventNoPayload.c)
 */

void PopDiagTraceZeroHiberFile()
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_ZEROHIBERFILE_START);
}
