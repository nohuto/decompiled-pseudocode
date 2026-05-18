/*
 * XREFs of sub_180012ED8 @ 0x180012ED8
 * Callers:
 *     sub_180012F60 @ 0x180012F60 (sub_180012F60.c)
 *     sub_18003D980 @ 0x18003D980 (sub_18003D980.c)
 *     sub_18003DB00 @ 0x18003DB00 (sub_18003DB00.c)
 *     sub_180065CC0 @ 0x180065CC0 (sub_180065CC0.c)
 *     sub_180068E68 @ 0x180068E68 (sub_180068E68.c)
 *     sub_18006BADC @ 0x18006BADC (sub_18006BADC.c)
 *     sub_180096A80 @ 0x180096A80 (sub_180096A80.c)
 *     sub_180096C00 @ 0x180096C00 (sub_180096C00.c)
 * Callees:
 *     sub_18003E370 @ 0x18003E370 (sub_18003E370.c)
 */

unsigned __int64 __fastcall sub_180012ED8(_DWORD *a1, _DWORD *a2)
{
  sub_18003E370();
  a1[36] = *a2;
  a1[37] = a2[1];
  a1[38] = a2[2];
  return sub_180012728();
}
