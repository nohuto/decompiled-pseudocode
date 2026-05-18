/*
 * XREFs of sub_180097664 @ 0x180097664
 * Callers:
 *     sub_1800977A8 @ 0x1800977A8 (sub_1800977A8.c)
 * Callees:
 *     sub_1800970DC @ 0x1800970DC (sub_1800970DC.c)
 */

__int64 *__fastcall sub_180097664(__int64 *a1, __int64 *a2)
{
  if ( a1 != a2 )
    sub_1800970DC(a1, *a2, a2[1]);
  return a1;
}
