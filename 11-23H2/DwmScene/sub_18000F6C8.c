/*
 * XREFs of sub_18000F6C8 @ 0x18000F6C8
 * Callers:
 *     sub_18000D6E4 @ 0x18000D6E4 (sub_18000D6E4.c)
 * Callees:
 *     sub_18000F770 @ 0x18000F770 (sub_18000F770.c)
 */

__int64 sub_18000F6C8(_WORD *a1, __int64 a2, int a3, ...)
{
  __int64 result; // rax
  va_list va; // [rsp+58h] [rbp+20h] BYREF

  va_start(va, a3);
  if ( (unsigned __int64)(a2 - 1) <= 0x7FFFFFFE )
    return sub_18000F770((_DWORD)a1, a2, a3, a3, (__int64)va);
  result = 2147942487LL;
  if ( a2 )
    *a1 = 0;
  return result;
}
