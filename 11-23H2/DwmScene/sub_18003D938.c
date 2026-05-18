/*
 * XREFs of sub_18003D938 @ 0x18003D938
 * Callers:
 *     sub_18003D980 @ 0x18003D980 (sub_18003D980.c)
 *     sub_18006BADC @ 0x18006BADC (sub_18006BADC.c)
 * Callees:
 *     sub_18003E370 @ 0x18003E370 (sub_18003E370.c)
 */

unsigned __int64 __fastcall sub_18003D938(_DWORD *a1, _DWORD *a2)
{
  sub_18003E370();
  a1[43] = *a2;
  a1[44] = a2[1];
  a1[45] = a2[2];
  return sub_180012728();
}
