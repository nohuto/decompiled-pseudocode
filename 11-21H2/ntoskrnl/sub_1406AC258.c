/*
 * XREFs of sub_1406AC258 @ 0x1406AC258
 * Callers:
 *     sub_1406AC130 @ 0x1406AC130 (sub_1406AC130.c)
 * Callees:
 *     sub_1406AC298 @ 0x1406AC298 (sub_1406AC298.c)
 */

__int64 __fastcall sub_1406AC258(__int64 a1, __int64 *a2)
{
  __int64 v4; // rdx

  v4 = *a2;
  if ( v4 )
    sub_1406AC298(a1, v4, 2048LL);
  return sub_1406AC298(a1, a2, 4096LL);
}
