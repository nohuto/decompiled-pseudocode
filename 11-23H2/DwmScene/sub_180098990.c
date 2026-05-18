/*
 * XREFs of sub_180098990 @ 0x180098990
 * Callers:
 *     sub_1800EB153 @ 0x1800EB153 (sub_1800EB153.c)
 *     sub_1800F94A0 @ 0x1800F94A0 (sub_1800F94A0.c)
 * Callees:
 *     sub_1800100E8 @ 0x1800100E8 (sub_1800100E8.c)
 *     sub_1800985E0 @ 0x1800985E0 (sub_1800985E0.c)
 */

__int64 __fastcall sub_180098990(__int64 a1)
{
  __int64 v2; // rcx

  sub_1800100E8(*(void **)(a1 + 24), (*(_QWORD *)(a1 + 32) - *(_QWORD *)(a1 + 24)) & 0xFFFFFFFFFFFFFFF8uLL);
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  sub_1800985E0(v2, *(_QWORD *)(a1 + 8));
  return sub_1800100E8(*(void **)(a1 + 8), 0x38uLL);
}
