/*
 * XREFs of sub_1C001AE00 @ 0x1C001AE00
 * Callers:
 *     sub_1C0010614 @ 0x1C0010614 (sub_1C0010614.c)
 *     sub_1C001E2F8 @ 0x1C001E2F8 (sub_1C001E2F8.c)
 *     sub_1C0078B80 @ 0x1C0078B80 (sub_1C0078B80.c)
 *     sub_1C00A6778 @ 0x1C00A6778 (sub_1C00A6778.c)
 *     sub_1C00B0AFC @ 0x1C00B0AFC (sub_1C00B0AFC.c)
 * Callees:
 *     sub_1C001AE40 @ 0x1C001AE40 (sub_1C001AE40.c)
 */

__int64 sub_1C001AE00(_WORD *a1, unsigned __int64 a2, __int64 a3, ...)
{
  unsigned __int64 v3; // rdx
  __int64 result; // rax
  va_list va; // [rsp+68h] [rbp+20h] BYREF

  va_start(va, a3);
  v3 = a2 >> 1;
  if ( v3 - 1 <= 0x7FFFFFFE )
    return sub_1C001AE40(a1, v3, a3, a3, (__int64 *)va);
  result = 3221225485LL;
  if ( v3 )
    *a1 = 0;
  return result;
}
