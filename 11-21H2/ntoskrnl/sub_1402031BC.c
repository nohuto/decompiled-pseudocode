/*
 * XREFs of sub_1402031BC @ 0x1402031BC
 * Callers:
 *     sub_14066B204 @ 0x14066B204 (sub_14066B204.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_1402031BC(__int64 a1)
{
  return (*(_BYTE *)(a1 + 66) & 0x40) != 0 && *(_QWORD *)(a1 + 200) != a1 + 200;
}
