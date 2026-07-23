/*
 * XREFs of sub_1403BCA0C @ 0x1403BCA0C
 * Callers:
 *     sub_1403BBAC8 @ 0x1403BBAC8 (sub_1403BBAC8.c)
 *     sub_1403BBDD4 @ 0x1403BBDD4 (sub_1403BBDD4.c)
 * Callees:
 *     sub_1403BCA40 @ 0x1403BCA40 (sub_1403BCA40.c)
 *     sub_1403BE570 @ 0x1403BE570 (sub_1403BE570.c)
 *     sub_1403BEA4C @ 0x1403BEA4C (sub_1403BEA4C.c)
 */

__int64 __fastcall sub_1403BCA0C(int a1)
{
  __int64 result; // rax

  result = sub_1403BCA40();
  if ( (int)result >= 0 && a1 == 1 )
  {
    result = sub_1403BEA4C();
    if ( (int)result >= 0 )
      return sub_1403BE570();
  }
  return result;
}
