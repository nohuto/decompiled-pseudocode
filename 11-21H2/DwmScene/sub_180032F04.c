/*
 * XREFs of sub_180032F04 @ 0x180032F04
 * Callers:
 *     sub_180030A4C @ 0x180030A4C (sub_180030A4C.c)
 * Callees:
 *     sub_18000B4C0 @ 0x18000B4C0 (sub_18000B4C0.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180030B3C @ 0x180030B3C (sub_180030B3C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180032F04(__int64 a1)
{
  _QWORD *v2; // rcx

  sub_18000B4C0(a1 + 56, 24LL, 10LL);
  v2 = *(_QWORD **)(a1 + 32);
  if ( v2 )
  {
    sub_180030B3C(v2, *(_QWORD **)(a1 + 40));
    sub_180010884(*(char **)(a1 + 32), 8 * ((__int64)(*(_QWORD *)(a1 + 48) - *(_QWORD *)(a1 + 32)) >> 3));
    *(_QWORD *)(a1 + 32) = 0LL;
    *(_QWORD *)(a1 + 40) = 0LL;
    *(_QWORD *)(a1 + 48) = 0LL;
  }
  return sub_1800FC250(a1);
}
