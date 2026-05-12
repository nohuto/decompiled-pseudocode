/*
 * XREFs of sub_1C0015A40 @ 0x1C0015A40
 * Callers:
 *     sub_1C00157F4 @ 0x1C00157F4 (sub_1C00157F4.c)
 *     sub_1C001C388 @ 0x1C001C388 (sub_1C001C388.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_1C0015A40(_BYTE *a1, _BYTE *a2)
{
  return *a1 == *a2 && a1[1] == a2[1] && a1[2] == a2[2] && a1[3] == a2[3] && a1[4] == a2[4];
}
