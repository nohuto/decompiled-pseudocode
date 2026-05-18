/*
 * XREFs of sub_1800A5558 @ 0x1800A5558
 * Callers:
 *     sub_1800F9870 @ 0x1800F9870 (sub_1800F9870.c)
 * Callees:
 *     sub_1800100E8 @ 0x1800100E8 (sub_1800100E8.c)
 *     sub_1800A5450 @ 0x1800A5450 (sub_1800A5450.c)
 */

__int64 __fastcall sub_1800A5558(__int64 a1)
{
  __int64 v2; // rcx

  sub_1800100E8(*(void **)(a1 + 24), (*(_QWORD *)(a1 + 32) - *(_QWORD *)(a1 + 24)) & 0xFFFFFFFFFFFFFFF8uLL);
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  sub_1800A5450(v2, *(_QWORD *)(a1 + 8));
  return sub_1800100E8(*(void **)(a1 + 8), 0x38uLL);
}
