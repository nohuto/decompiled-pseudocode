/*
 * XREFs of sub_1C007E84C @ 0x1C007E84C
 * Callers:
 *     sub_1C007A6B8 @ 0x1C007A6B8 (sub_1C007A6B8.c)
 *     sub_1C007ACDC @ 0x1C007ACDC (sub_1C007ACDC.c)
 *     sub_1C007AE2C @ 0x1C007AE2C (sub_1C007AE2C.c)
 * Callees:
 *     sub_1C007D458 @ 0x1C007D458 (sub_1C007D458.c)
 */

__int64 __fastcall sub_1C007E84C(__int64 a1, __int64 a2, __int64 a3, int *a4)
{
  if ( (unsigned int)*a4 <= 0x20 )
    return sub_1C007D458(a1, a2, a3, 3u, (__int64)(a4 + 1), *a4, 15);
  else
    return 3221225485LL;
}
