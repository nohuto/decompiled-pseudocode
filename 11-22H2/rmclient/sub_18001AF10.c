/*
 * XREFs of sub_18001AF10 @ 0x18001AF10
 * Callers:
 *     <none>
 * Callees:
 *     j_free @ 0x18000A7C8 (j_free.c)
 *     sub_18001AD80 @ 0x18001AD80 (sub_18001AD80.c)
 */

void *__fastcall sub_18001AF10(void *Block, char a2)
{
  sub_18001AD80((__int64)Block);
  if ( (a2 & 1) != 0 )
    j_free(Block);
  return Block;
}
