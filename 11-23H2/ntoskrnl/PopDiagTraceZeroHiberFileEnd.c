/*
 * XREFs of PopDiagTraceZeroHiberFileEnd @ 0x140AA7F70
 * Callers:
 *     PopZeroHiberFile @ 0x140989690 (PopZeroHiberFile.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x1403677E0 (PopDiagTraceEventNoPayload.c)
 */

void PopDiagTraceZeroHiberFileEnd()
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_ZEROHIBERFILE_STOP);
}
