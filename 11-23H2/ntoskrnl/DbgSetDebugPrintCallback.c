/*
 * XREFs of DbgSetDebugPrintCallback @ 0x1405A77E0
 * Callers:
 *     EtwpEnableKernelTrace @ 0x1407D5090 (EtwpEnableKernelTrace.c)
 *     EtwpDisableKernelTrace @ 0x1407D5404 (EtwpDisableKernelTrace.c)
 * Callees:
 *     DbgpInsertDebugPrintCallback @ 0x1405A7844 (DbgpInsertDebugPrintCallback.c)
 *     DbgpRemoveDebugPrintCallback @ 0x1405A79A8 (DbgpRemoveDebugPrintCallback.c)
 */

NTSTATUS __stdcall DbgSetDebugPrintCallback(PDEBUG_PRINT_CALLBACK DebugPrintCallback, BOOLEAN Enable)
{
  if ( !DebugPrintCallback )
    return -1073741811;
  if ( Enable == 1 )
    return DbgpInsertDebugPrintCallback();
  return DbgpRemoveDebugPrintCallback();
}
