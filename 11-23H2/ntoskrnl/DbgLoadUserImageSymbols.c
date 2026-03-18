/*
 * XREFs of DbgLoadUserImageSymbols @ 0x1405A76E4
 * Callers:
 *     MiLoadUserSymbols @ 0x140A30AF4 (MiLoadUserSymbols.c)
 * Callees:
 *     DebugService2 @ 0x140428E80 (DebugService2.c)
 */

__int64 DbgLoadUserImageSymbols()
{
  return DebugService2();
}
