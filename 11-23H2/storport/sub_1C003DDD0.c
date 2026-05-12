/*
 * XREFs of sub_1C003DDD0 @ 0x1C003DDD0
 * Callers:
 *     sub_1C00A6778 @ 0x1C00A6778 (sub_1C00A6778.c)
 * Callees:
 *     sub_1C003DEA0 @ 0x1C003DEA0 (sub_1C003DEA0.c)
 */

__int64 __fastcall sub_1C003DDD0(_WORD *a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rdx
  __int64 result; // rax

  v3 = a2 >> 1;
  if ( v3 - 1 <= 0x7FFFFFFE )
    return sub_1C003DEA0(a1, v3, a3, a3);
  result = 3221225485LL;
  if ( v3 )
    *a1 = 0;
  return result;
}
