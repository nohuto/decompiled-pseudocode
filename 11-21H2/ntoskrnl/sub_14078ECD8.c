/*
 * XREFs of sub_14078ECD8 @ 0x14078ECD8
 * Callers:
 *     sub_1406CC960 @ 0x1406CC960 (sub_1406CC960.c)
 *     sub_14078DDF0 @ 0x14078DDF0 (sub_14078DDF0.c)
 *     sub_14078E3F0 @ 0x14078E3F0 (sub_14078E3F0.c)
 * Callees:
 *     RtlCompareMemory @ 0x14042A1E0 (RtlCompareMemory.c)
 */

bool __fastcall sub_14078ECD8(__int64 a1)
{
  return *(_BYTE *)(a1 + 1) >= 2u
      && *(_BYTE *)a1 == 1
      && RtlCompareMemory((const void *)(a1 + 2), &Source2, 6uLL) == 6
      && *(_DWORD *)(a1 + 8) == 2;
}
