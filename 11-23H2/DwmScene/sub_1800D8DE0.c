/*
 * XREFs of sub_1800D8DE0 @ 0x1800D8DE0
 * Callers:
 *     sub_1800D94E0 @ 0x1800D94E0 (sub_1800D94E0.c)
 *     sub_1800F1C4F @ 0x1800F1C4F (sub_1800F1C4F.c)
 * Callees:
 *     sub_18000E72C @ 0x18000E72C (sub_18000E72C.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 */

__int64 __fastcall sub_1800D8DE0(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  v2 = a1[5];
  if ( v2 )
    sub_180010530(v2);
  v3 = a1[3];
  if ( v3 )
    sub_180010530(v3);
  sub_18000E72C(a1 + 1);
  return sub_18000E72C(a1);
}
