/*
 * XREFs of sub_1800A28EC @ 0x1800A28EC
 * Callers:
 *     sub_1800A2938 @ 0x1800A2938 (sub_1800A2938.c)
 * Callees:
 *     sub_180074318 @ 0x180074318 (sub_180074318.c)
 */

__int64 *__fastcall sub_1800A28EC(__int64 *a1, __int64 *a2)
{
  __int64 v4; // r8
  __int64 v5; // r8

  if ( a1 != a2 )
  {
    sub_180074318(a1);
    v4 = *a1;
    *a1 = *a2;
    *a2 = v4;
    v5 = a1[1];
    a1[1] = a2[1];
    a2[1] = v5;
  }
  return a1;
}
