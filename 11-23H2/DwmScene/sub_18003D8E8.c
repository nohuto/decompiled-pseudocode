/*
 * XREFs of sub_18003D8E8 @ 0x18003D8E8
 * Callers:
 *     sub_18003D980 @ 0x18003D980 (sub_18003D980.c)
 *     sub_18003DC28 @ 0x18003DC28 (sub_18003DC28.c)
 *     sub_180068E68 @ 0x180068E68 (sub_180068E68.c)
 *     sub_18006BADC @ 0x18006BADC (sub_18006BADC.c)
 * Callees:
 *     sub_18003E370 @ 0x18003E370 (sub_18003E370.c)
 */

unsigned __int64 __fastcall sub_18003D8E8(_DWORD *a1, _DWORD *a2)
{
  sub_18003E370();
  a1[39] = *a2;
  a1[40] = a2[1];
  a1[41] = a2[2];
  a1[42] = a2[3];
  return sub_180012728();
}
