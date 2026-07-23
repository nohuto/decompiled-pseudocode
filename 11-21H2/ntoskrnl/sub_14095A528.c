/*
 * XREFs of sub_14095A528 @ 0x14095A528
 * Callers:
 *     sub_1409569F4 @ 0x1409569F4 (sub_1409569F4.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_14095A528(__int64 a1)
{
  char v1; // al

  v1 = *(_BYTE *)(a1 + 16);
  return (v1 & 8) != 0 || (v1 & 0x24) == 0;
}
