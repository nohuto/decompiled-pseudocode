/*
 * XREFs of sub_180044320 @ 0x180044320
 * Callers:
 *     sub_180060610 @ 0x180060610 (sub_180060610.c)
 * Callees:
 *     sub_180084DC0 @ 0x180084DC0 (sub_180084DC0.c)
 */

__int64 __fastcall sub_180044320(__int64 a1, int a2)
{
  if ( *(_QWORD *)(a1 + 120) )
    sub_180084DC0();
  return sub_1800295A0(a1, a2);
}
