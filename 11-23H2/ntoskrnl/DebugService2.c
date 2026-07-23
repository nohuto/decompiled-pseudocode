/*
 * XREFs of DebugService2 @ 0x140429210
 * Callers:
 *     DbgLoadImageSymbols @ 0x14020AA80 (DbgLoadImageSymbols.c)
 *     DbgUnLoadImageSymbolsUnicode @ 0x14020B814 (DbgUnLoadImageSymbolsUnicode.c)
 *     KiBugcheckUnloadDebugSymbols @ 0x14056A218 (KiBugcheckUnloadDebugSymbols.c)
 *     DbgCommandString @ 0x1405A7BF0 (DbgCommandString.c)
 *     DbgLoadUserImageSymbols @ 0x1405A7C54 (DbgLoadUserImageSymbols.c)
 *     DbgUnLoadImageSymbols @ 0x1405A7D80 (DbgUnLoadImageSymbols.c)
 * Callees:
 *     <none>
 */

__int64 DebugService2()
{
  __asm { int     2Dh; Windows NT - debugging services: eax = type }
  __debugbreak();
  return DebugService2AfterInt3();
}
