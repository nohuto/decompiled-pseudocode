/*
 * XREFs of DebugService2 @ 0x140428E80
 * Callers:
 *     DbgLoadImageSymbols @ 0x14020AA80 (DbgLoadImageSymbols.c)
 *     DbgUnLoadImageSymbolsUnicode @ 0x14020B814 (DbgUnLoadImageSymbolsUnicode.c)
 *     KiBugcheckUnloadDebugSymbols @ 0x140569B58 (KiBugcheckUnloadDebugSymbols.c)
 *     DbgCommandString @ 0x1405A7680 (DbgCommandString.c)
 *     DbgLoadUserImageSymbols @ 0x1405A76E4 (DbgLoadUserImageSymbols.c)
 *     DbgUnLoadImageSymbols @ 0x1405A7810 (DbgUnLoadImageSymbols.c)
 * Callees:
 *     <none>
 */

__int64 DebugService2()
{
  __asm { int     2Dh; Windows NT - debugging services: eax = type }
  __debugbreak();
  return DebugService2AfterInt3();
}
