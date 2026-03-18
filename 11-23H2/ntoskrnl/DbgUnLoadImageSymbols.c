/*
 * XREFs of DbgUnLoadImageSymbols @ 0x1405A7810
 * Callers:
 *     PopSaveHiberContext @ 0x140AA4980 (PopSaveHiberContext.c)
 *     PopShutdownSystem @ 0x140AA8F14 (PopShutdownSystem.c)
 * Callees:
 *     DebugService2 @ 0x140428E80 (DebugService2.c)
 */

__int64 DbgUnLoadImageSymbols()
{
  return DebugService2();
}
