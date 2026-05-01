/*
 * XREFs of sub_18001AF50 @ 0x18001AF50
 * Callers:
 *     <none>
 * Callees:
 *     j_free @ 0x18000A7C8 (j_free.c)
 *     sub_18001ADA8 @ 0x18001ADA8 (sub_18001ADA8.c)
 */

void *__fastcall sub_18001AF50(void *Block, char a2)
{
  sub_18001ADA8((__int64)Block);
  if ( (a2 & 1) != 0 )
    j_free(Block);
  return Block;
}
