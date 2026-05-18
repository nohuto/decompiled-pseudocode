/*
 * XREFs of sub_18003FDF4 @ 0x18003FDF4
 * Callers:
 *     sub_180040024 @ 0x180040024 (sub_180040024.c)
 *     sub_18004003C @ 0x18004003C (sub_18004003C.c)
 * Callees:
 *     sub_1800100E8 @ 0x1800100E8 (sub_1800100E8.c)
 *     sub_18003F574 @ 0x18003F574 (sub_18003F574.c)
 */

__int64 __fastcall sub_18003FDF4(__int64 a1)
{
  __int64 v2; // rcx

  sub_1800100E8(*(void **)(a1 + 24), (*(_QWORD *)(a1 + 32) - *(_QWORD *)(a1 + 24)) & 0xFFFFFFFFFFFFFFF8uLL);
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  sub_18003F574(v2, *(_QWORD *)(a1 + 8));
  return sub_1800100E8(*(void **)(a1 + 8), 0x28uLL);
}
