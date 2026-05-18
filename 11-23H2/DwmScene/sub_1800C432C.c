/*
 * XREFs of sub_1800C432C @ 0x1800C432C
 * Callers:
 *     sub_1800C4B40 @ 0x1800C4B40 (sub_1800C4B40.c)
 * Callees:
 *     sub_18000E72C @ 0x18000E72C (sub_18000E72C.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 */

__int64 __fastcall sub_1800C432C(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  v2 = a1[16];
  if ( v2 )
    sub_180010530(v2);
  v3 = a1[14];
  if ( v3 )
    sub_180010530(v3);
  sub_18000E72C(a1 + 12);
  return sub_1800E385C(a1);
}
