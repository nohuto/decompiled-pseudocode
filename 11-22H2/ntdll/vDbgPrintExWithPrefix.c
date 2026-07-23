/*
 * XREFs of vDbgPrintExWithPrefix @ 0x1800EB1B0
 * Callers:
 *     <none>
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x180053AB8 (vDbgPrintExWithPrefixInternal.c)
 */

ULONG __cdecl vDbgPrintExWithPrefix(PCCH Prefix, ULONG ComponentId, ULONG Level, PCCH Format, va_list arglist)
{
  return vDbgPrintExWithPrefixInternal(Prefix, ComponentId, Level, (char *)Format, arglist, 1);
}
