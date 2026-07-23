/*
 * XREFs of DbgSetDebugPrintCallback @ 0x1405E41E0
 * Callers:
 *     sub_1406D5424 @ 0x1406D5424 (sub_1406D5424.c)
 *     sub_1406D56D0 @ 0x1406D56D0 (sub_1406D56D0.c)
 * Callees:
 *     sub_1405E4244 @ 0x1405E4244 (sub_1405E4244.c)
 *     sub_1405E439C @ 0x1405E439C (sub_1405E439C.c)
 */

NTSTATUS __stdcall DbgSetDebugPrintCallback(PDEBUG_PRINT_CALLBACK DebugPrintCallback, BOOLEAN Enable)
{
  if ( !DebugPrintCallback )
    return -1073741811;
  if ( Enable == 1 )
    return sub_1405E4244();
  return sub_1405E439C();
}
