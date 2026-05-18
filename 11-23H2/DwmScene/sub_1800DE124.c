/*
 * XREFs of sub_1800DE124 @ 0x1800DE124
 * Callers:
 *     sub_1800DF9E4 @ 0x1800DF9E4 (sub_1800DF9E4.c)
 * Callees:
 *     sub_1800100E8 @ 0x1800100E8 (sub_1800100E8.c)
 *     sub_1800DD720 @ 0x1800DD720 (sub_1800DD720.c)
 */

__int64 __fastcall sub_1800DE124(__int64 a1)
{
  __int64 v2; // rcx

  sub_1800100E8(*(void **)(a1 + 24), (*(_QWORD *)(a1 + 32) - *(_QWORD *)(a1 + 24)) & 0xFFFFFFFFFFFFFFF8uLL);
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  sub_1800DD720(v2, *(_QWORD *)(a1 + 8));
  return sub_1800100E8(*(void **)(a1 + 8), 0xB0uLL);
}
