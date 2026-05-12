/*
 * XREFs of sub_1C003DE0C @ 0x1C003DE0C
 * Callers:
 *     sub_1C005C694 @ 0x1C005C694 (sub_1C005C694.c)
 *     sub_1C00A0EE4 @ 0x1C00A0EE4 (sub_1C00A0EE4.c)
 * Callees:
 *     sub_1C003DEA0 @ 0x1C003DEA0 (sub_1C003DEA0.c)
 */

__int64 __fastcall sub_1C003DE0C(_WORD *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( (unsigned __int64)(a2 - 1) <= 0x7FFFFFFE )
    return sub_1C003DEA0(a1, a2, a3, a3);
  result = 3221225485LL;
  if ( a2 )
    *a1 = 0;
  return result;
}
