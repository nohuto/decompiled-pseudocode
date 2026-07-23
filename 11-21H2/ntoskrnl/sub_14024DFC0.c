/*
 * XREFs of sub_14024DFC0 @ 0x14024DFC0
 * Callers:
 *     sub_1406D1830 @ 0x1406D1830 (sub_1406D1830.c)
 * Callees:
 *     sub_1403606C4 @ 0x1403606C4 (sub_1403606C4.c)
 */

__int64 __fastcall sub_14024DFC0(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx

  v4 = *a1;
  if ( v4 )
  {
    sub_1403606C4(v4, a2, a3);
    *a1 = 0LL;
  }
  return 0LL;
}
