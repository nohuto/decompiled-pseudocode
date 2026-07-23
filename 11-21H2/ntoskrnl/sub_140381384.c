/*
 * XREFs of sub_140381384 @ 0x140381384
 * Callers:
 *     sub_1403812B0 @ 0x1403812B0 (sub_1403812B0.c)
 *     sub_1405F94CC @ 0x1405F94CC (sub_1405F94CC.c)
 * Callees:
 *     sub_1403813C0 @ 0x1403813C0 (sub_1403813C0.c)
 */

__int64 __fastcall sub_140381384(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbx
  __int64 v6; // rcx

  v5 = *(unsigned int *)((a2 & 0xFFFFFFFFFFFFF000uLL) + 0x10);
  _BitScanReverse((unsigned int *)&v6, v5);
  return sub_1403813C0(v6, *(_QWORD *)(a1 + 8 * v6) + 16 * (v5 ^ (unsigned int)(1 << v6)), a3, a4);
}
