/*
 * XREFs of sub_14078EC8C @ 0x14078EC8C
 * Callers:
 *     RtlCheckTokenCapability @ 0x140201400 (RtlCheckTokenCapability.c)
 *     sub_14078DDF0 @ 0x14078DDF0 (sub_14078DDF0.c)
 *     sub_14078E3F0 @ 0x14078E3F0 (sub_14078E3F0.c)
 * Callees:
 *     RtlCompareMemory @ 0x14042A1E0 (RtlCompareMemory.c)
 */

bool __fastcall sub_14078EC8C(__int64 a1)
{
  return *(_BYTE *)(a1 + 1) >= 2u
      && *(_BYTE *)a1 == 1
      && RtlCompareMemory((const void *)(a1 + 2), &Source2, 6uLL) == 6
      && *(_DWORD *)(a1 + 8) == 3;
}
