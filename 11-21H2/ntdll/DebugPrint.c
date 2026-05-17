/*
 * XREFs of DebugPrint @ 0x1800A7CE0
 * Callers:
 *     vDbgPrintExWithPrefixInternal @ 0x180006A08 (vDbgPrintExWithPrefixInternal.c)
 * Callees:
 *     <none>
 */

__int64 DebugPrint()
{
  __int64 result; // rax

  result = 1LL;
  __asm { int     2Dh; Windows NT - eax = 1: debug print }
  __debugbreak();
  return result;
}
