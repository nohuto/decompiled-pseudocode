/*
 * XREFs of sub_14059A814 @ 0x14059A814
 * Callers:
 *     sub_14025C930 @ 0x14025C930 (sub_14025C930.c)
 * Callees:
 *     sub_14027B080 @ 0x14027B080 (sub_14027B080.c)
 */

_BOOL8 __fastcall sub_14059A814(__int64 a1)
{
  return *(__int64 *)(a1 + 40) >= 0
      && (unsigned int)sub_14027B080((__int64)(*(_QWORD *)(a1 + 8) << 25) >> 16) == 5
      && (*(_BYTE *)(a1 + 34) & 7) == 6;
}
