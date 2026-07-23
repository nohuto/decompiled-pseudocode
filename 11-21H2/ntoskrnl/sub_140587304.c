/*
 * XREFs of sub_140587304 @ 0x140587304
 * Callers:
 *     sub_14096AA38 @ 0x14096AA38 (sub_14096AA38.c)
 *     sub_1409811F0 @ 0x1409811F0 (sub_1409811F0.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall sub_140587304(int a1)
{
  return (*(_DWORD *)(qword_140C52968 + 8 * (*(_QWORD *)&a1 & 0x3FFFFFLL)) & 0x3FFFFFLL) != 1;
}
