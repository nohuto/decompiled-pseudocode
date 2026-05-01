/*
 * XREFs of sub_1800118FC @ 0x1800118FC
 * Callers:
 *     sub_18000FCC0 @ 0x18000FCC0 (sub_18000FCC0.c)
 *     sub_18001192C @ 0x18001192C (sub_18001192C.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_1800118FC(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r8

  v2 = a1[2] - *a1;
  if ( a2 + a1[1] - *a1 < v2 )
    return 1;
  if ( a2 < 2 * v2 )
    a2 = 2 * v2;
  return sub_180011994(a1, a2);
}
