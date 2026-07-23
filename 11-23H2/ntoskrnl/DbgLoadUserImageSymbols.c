/*
 * XREFs of DbgLoadUserImageSymbols @ 0x1405A7C54
 * Callers:
 *     MiLoadUserSymbols @ 0x140A30DA4 (MiLoadUserSymbols.c)
 * Callees:
 *     DebugService2 @ 0x140429210 (DebugService2.c)
 */

__int64 DbgLoadUserImageSymbols()
{
  return DebugService2();
}
