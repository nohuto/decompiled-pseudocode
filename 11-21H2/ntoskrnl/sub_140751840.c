/*
 * XREFs of sub_140751840 @ 0x140751840
 * Callers:
 *     sub_14075140C @ 0x14075140C (sub_14075140C.c)
 * Callees:
 *     RtlCompareMemory @ 0x14042A1E0 (RtlCompareMemory.c)
 */

bool __fastcall sub_140751840(__int64 a1, const void *a2, unsigned int a3)
{
  return a1 && a2 && *(_DWORD *)(a1 + 4) == a3 && RtlCompareMemory((const void *)(a1 + 12), a2, a3) == a3;
}
