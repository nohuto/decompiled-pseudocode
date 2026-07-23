/*
 * XREFs of sub_1405107FC @ 0x1405107FC
 * Callers:
 *     sub_140510850 @ 0x140510850 (sub_140510850.c)
 * Callees:
 *     sub_1403BE424 @ 0x1403BE424 (sub_1403BE424.c)
 */

__int64 __fastcall sub_1405107FC(__int64 a1, __int64 a2, wchar_t *Dst)
{
  __int64 v3; // r10
  size_t SizeInWords; // [rsp+38h] [rbp-20h]

  v3 = *(_QWORD *)(a1 + 24);
  LODWORD(SizeInWords) = 75;
  return sub_1403BE424(
           *(_DWORD *)(v3 + 4),
           *(_DWORD *)(v3 + 8),
           *(_WORD *)(v3 + 12),
           *(_WORD *)(v3 + 14),
           *(_WORD *)(v3 + 16),
           *(_WORD *)(v3 + 18),
           *(_DWORD *)(a1 + 36),
           SizeInWords,
           Dst);
}
