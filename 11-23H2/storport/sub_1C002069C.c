/*
 * XREFs of sub_1C002069C @ 0x1C002069C
 * Callers:
 *     sub_1C0020598 @ 0x1C0020598 (sub_1C0020598.c)
 *     sub_1C00A360C @ 0x1C00A360C (sub_1C00A360C.c)
 * Callees:
 *     sub_1C00A35C4 @ 0x1C00A35C4 (sub_1C00A35C4.c)
 */

__int64 __fastcall sub_1C002069C(__int64 *a1, __int64 a2)
{
  __int64 v2; // r8

  if ( (a1[3] & 4) != 0 )
    v2 = a1[6];
  else
    v2 = *a1;
  if ( !v2 )
    return 3221225485LL;
  sub_1C00A35C4(a2, 9LL, v2 + 8);
  return 0LL;
}
