/*
 * XREFs of DbgPrintReturnControlC @ 0x1405E4120
 * Callers:
 *     <none>
 * Callees:
 *     sub_140369C50 @ 0x140369C50 (sub_140369C50.c)
 */

ULONG DbgPrintReturnControlC(PCCH Format, ...)
{
  va_list va; // [rsp+58h] [rbp+10h] BYREF

  va_start(va, Format);
  return sub_140369C50(&File, 0x65u, 0, Format, va, 0);
}
