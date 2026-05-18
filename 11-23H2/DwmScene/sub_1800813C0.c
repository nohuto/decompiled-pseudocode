/*
 * XREFs of sub_1800813C0 @ 0x1800813C0
 * Callers:
 *     sub_180043210 @ 0x180043210 (sub_180043210.c)
 *     sub_18004A2B0 @ 0x18004A2B0 (sub_18004A2B0.c)
 *     sub_18005B3E0 @ 0x18005B3E0 (sub_18005B3E0.c)
 *     sub_180096910 @ 0x180096910 (sub_180096910.c)
 * Callees:
 *     sub_18001C5B8 @ 0x18001C5B8 (sub_18001C5B8.c)
 */

bool __fastcall sub_1800813C0(__int64 a1, __int64 a2)
{
  return !sub_18001C5B8((_QWORD *)(a2 + 24), (_QWORD *)(a1 + 24))
      && *(_BYTE *)(a2 + 72) == *(_BYTE *)(a1 + 72)
      && *(_DWORD *)(a2 + 76) == *(_DWORD *)(a1 + 76);
}
