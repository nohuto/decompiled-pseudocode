/*
 * XREFs of sub_1C00A943C @ 0x1C00A943C
 * Callers:
 *     sub_1C003AF2C @ 0x1C003AF2C (sub_1C003AF2C.c)
 * Callees:
 *     memset_0 @ 0x1C0024D40 (memset_0.c)
 */

void *__fastcall sub_1C00A943C(_BYTE *a1)
{
  *a1 = 0;
  return memset_0(a1 + 8, 0, 0x40uLL);
}
