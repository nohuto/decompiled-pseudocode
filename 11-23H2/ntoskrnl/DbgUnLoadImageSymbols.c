/*
 * XREFs of DbgUnLoadImageSymbols @ 0x1405A7D80
 * Callers:
 *     PopSaveHiberContext @ 0x140AA47F0 (PopSaveHiberContext.c)
 *     PopShutdownSystem @ 0x140AA8D84 (PopShutdownSystem.c)
 * Callees:
 *     DebugService2 @ 0x140429210 (DebugService2.c)
 */

__int64 DbgUnLoadImageSymbols()
{
  return DebugService2();
}
