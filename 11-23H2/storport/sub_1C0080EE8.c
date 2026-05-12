/*
 * XREFs of sub_1C0080EE8 @ 0x1C0080EE8
 * Callers:
 *     sub_1C007B3C0 @ 0x1C007B3C0 (sub_1C007B3C0.c)
 *     sub_1C007B420 @ 0x1C007B420 (sub_1C007B420.c)
 *     sub_1C007C930 @ 0x1C007C930 (sub_1C007C930.c)
 *     sub_1C007D640 @ 0x1C007D640 (sub_1C007D640.c)
 *     sub_1C007E9A0 @ 0x1C007E9A0 (sub_1C007E9A0.c)
 *     sub_1C007EA10 @ 0x1C007EA10 (sub_1C007EA10.c)
 *     sub_1C007EC10 @ 0x1C007EC10 (sub_1C007EC10.c)
 *     sub_1C0080D94 @ 0x1C0080D94 (sub_1C0080D94.c)
 *     sub_1C0080EE8 @ 0x1C0080EE8 (sub_1C0080EE8.c)
 *     sub_1C0081138 @ 0x1C0081138 (sub_1C0081138.c)
 * Callees:
 *     sub_1C0080EE8 @ 0x1C0080EE8 (sub_1C0080EE8.c)
 *     sub_1C0080F70 @ 0x1C0080F70 (sub_1C0080F70.c)
 *     sub_1C0081040 @ 0x1C0081040 (sub_1C0081040.c)
 *     sub_1C008130C @ 0x1C008130C (sub_1C008130C.c)
 */

__int64 __fastcall sub_1C0080EE8(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 result; // rax

  if ( a3 <= 0xF )
    return sub_1C008130C();
  if ( a3 <= 0x7FF )
    return sub_1C0081040();
  if ( a3 <= 0xFFFFFF )
    return sub_1C0080F70(a1, a2, a3, 0LL);
  LOBYTE(a4) = 1;
  result = sub_1C0080F70(a1, a2, 0xFFFFFFLL, a4);
  if ( (int)result >= 0 )
    return sub_1C0080EE8(a1, a2 + 0xFFFFFF, a3 - 0xFFFFFF);
  return result;
}
