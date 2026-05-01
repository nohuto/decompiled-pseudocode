/*
 * XREFs of sub_180010A0C @ 0x180010A0C
 * Callers:
 *     sub_18000D260 @ 0x18000D260 (sub_18000D260.c)
 *     sub_18000D3CC @ 0x18000D3CC (sub_18000D3CC.c)
 * Callees:
 *     sub_180010AB4 @ 0x180010AB4 (sub_180010AB4.c)
 */

__int64 sub_180010A0C(_WORD *a1, __int64 a2, __int64 a3, ...)
{
  __int64 result; // rax
  va_list va; // [rsp+58h] [rbp+20h] BYREF

  va_start(va, a3);
  if ( (unsigned __int64)(a2 - 1) <= 0x7FFFFFFE )
    return sub_180010AB4(a1, a2, a3, a3, (__int64 *)va);
  result = 2147942487LL;
  if ( a2 )
    *a1 = 0;
  return result;
}
