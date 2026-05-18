/*
 * XREFs of sub_180054DF4 @ 0x180054DF4
 * Callers:
 *     sub_180055EA0 @ 0x180055EA0 (sub_180055EA0.c)
 * Callees:
 *     sub_180056BB4 @ 0x180056BB4 (sub_180056BB4.c)
 */

__int64 *__fastcall sub_180054DF4(__int64 *a1, __int64 *a2)
{
  __int64 v4; // rdx

  if ( a1 != a2 )
  {
    v4 = *a2;
    *a2 = 0LL;
    sub_180056BB4(a1, v4);
  }
  return a1;
}
