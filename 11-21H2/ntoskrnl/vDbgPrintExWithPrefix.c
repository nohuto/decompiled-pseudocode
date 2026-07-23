/*
 * XREFs of vDbgPrintExWithPrefix @ 0x14045EDB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140369C50 @ 0x140369C50 (sub_140369C50.c)
 */

ULONG __stdcall vDbgPrintExWithPrefix(PCCH Prefix, ULONG ComponentId, ULONG Level, PCCH Format, va_list arglist)
{
  return sub_140369C50(Prefix, ComponentId, Level, Format, arglist, 1);
}
