/*
 * XREFs of sub_1800598E0 @ 0x1800598E0
 * Callers:
 *     sub_180058DE4 @ 0x180058DE4 (sub_180058DE4.c)
 * Callees:
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 */

__int64 __fastcall sub_1800598E0(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    sub_180011B24(v2 + 40);
  return sub_18002B83C(a1);
}
