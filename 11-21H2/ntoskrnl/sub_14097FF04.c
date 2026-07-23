/*
 * XREFs of sub_14097FF04 @ 0x14097FF04
 * Callers:
 *     sub_140260144 @ 0x140260144 (sub_140260144.c)
 *     sub_140375974 @ 0x140375974 (sub_140375974.c)
 * Callees:
 *     sub_14059C99C @ 0x14059C99C (sub_14059C99C.c)
 */

__int64 __fastcall sub_14097FF04(__int64 a1, __int64 a2, unsigned int a3)
{
  return (unsigned int)sub_14059C99C(a1, (a2 + 0x7FFF) & 0xFFFFFFFFFFFF8000uLL, 0, a3) == 0 ? 0xC0000099 : 0;
}
