/*
 * XREFs of vDbgPrintExWithPrefix @ 0x1800EBD00
 * Callers:
 *     <none>
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x180006A08 (vDbgPrintExWithPrefixInternal.c)
 */

__int64 __fastcall vDbgPrintExWithPrefix(_BYTE *a1, unsigned int a2, unsigned int a3, char *a4, va_list a5)
{
  return vDbgPrintExWithPrefixInternal(a1, a2, a3, a4, a5, 1);
}
