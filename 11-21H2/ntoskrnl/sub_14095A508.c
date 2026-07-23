/*
 * XREFs of sub_14095A508 @ 0x14095A508
 * Callers:
 *     sub_140808CB4 @ 0x140808CB4 (sub_140808CB4.c)
 *     sub_140956608 @ 0x140956608 (sub_140956608.c)
 *     sub_1409569F4 @ 0x1409569F4 (sub_1409569F4.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_14095A508(__int64 a1)
{
  char v1; // al

  v1 = *(_BYTE *)(a1 + 16);
  return (v1 & 1) != 0 || (v1 & 8) != 0 || (v1 & 0x24) == 0;
}
