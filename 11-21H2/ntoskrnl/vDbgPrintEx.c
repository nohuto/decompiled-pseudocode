/*
 * XREFs of vDbgPrintEx @ 0x140369C20
 * Callers:
 *     <none>
 * Callees:
 *     sub_140369C50 @ 0x140369C50 (sub_140369C50.c)
 */

ULONG __stdcall vDbgPrintEx(ULONG ComponentId, ULONG Level, PCCH Format, va_list arglist)
{
  return sub_140369C50((void *)&File, (__int64)arglist, 1);
}
