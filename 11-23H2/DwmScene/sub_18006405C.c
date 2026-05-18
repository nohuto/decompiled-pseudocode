/*
 * XREFs of sub_18006405C @ 0x18006405C
 * Callers:
 *     sub_18006413C @ 0x18006413C (sub_18006413C.c)
 *     sub_180064148 @ 0x180064148 (sub_180064148.c)
 *     sub_180064EF0 @ 0x180064EF0 (sub_180064EF0.c)
 * Callees:
 *     sub_1800100E8 @ 0x1800100E8 (sub_1800100E8.c)
 *     sub_180062CD4 @ 0x180062CD4 (sub_180062CD4.c)
 */

__int64 __fastcall sub_18006405C(__int64 a1)
{
  __int64 v2; // rcx

  sub_1800100E8(*(void **)(a1 + 24), (*(_QWORD *)(a1 + 32) - *(_QWORD *)(a1 + 24)) & 0xFFFFFFFFFFFFFFF8uLL);
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  sub_180062CD4(v2, *(_QWORD *)(a1 + 8));
  return sub_1800100E8(*(void **)(a1 + 8), 0x30uLL);
}
