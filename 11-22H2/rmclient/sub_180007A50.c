/*
 * XREFs of sub_180007A50 @ 0x180007A50
 * Callers:
 *     sub_1800079B0 @ 0x1800079B0 (sub_1800079B0.c)
 *     HamHostIdInitializeKey @ 0x180008400 (HamHostIdInitializeKey.c)
 *     sub_18000D65C @ 0x18000D65C (sub_18000D65C.c)
 *     sub_180010EF0 @ 0x180010EF0 (sub_180010EF0.c)
 * Callees:
 *     sub_180010A58 @ 0x180010A58 (sub_180010A58.c)
 */

__int64 __fastcall sub_180007A50(_WORD *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( (unsigned __int64)(a2 - 1) <= 0x7FFFFFFE )
    return sub_180010A58(a1, a2, a3, a3);
  result = 2147942487LL;
  if ( a2 )
    *a1 = 0;
  return result;
}
