/*
 * XREFs of sub_1409A4934 @ 0x1409A4934
 * Callers:
 *     sub_140989EE0 @ 0x140989EE0 (sub_140989EE0.c)
 *     sub_140989FA4 @ 0x140989FA4 (sub_140989FA4.c)
 * Callees:
 *     sub_1409A573C @ 0x1409A573C (sub_1409A573C.c)
 *     sub_1409A6100 @ 0x1409A6100 (sub_1409A6100.c)
 *     sub_1409A9BF0 @ 0x1409A9BF0 (sub_1409A9BF0.c)
 */

__int64 __fastcall sub_1409A4934(int a1, int a2, int a3, int a4, __int64 a5, __int64 a6, char a7)
{
  if ( a7 )
    sub_1409A6100(a1, a2, a3, a4, a5);
  else
    sub_1409A573C(a1, a2, a3, a4, a5);
  return sub_1409A9BF0(a1, a2, a3, a4, a5);
}
