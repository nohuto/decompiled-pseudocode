/*
 * XREFs of sub_180002210 @ 0x180002210
 * Callers:
 *     <none>
 * Callees:
 *     sub_180002244 @ 0x180002244 (sub_180002244.c)
 *     j_free @ 0x18000A7C8 (j_free.c)
 */

void *__fastcall sub_180002210(void *Block, char a2)
{
  sub_180002244();
  if ( (a2 & 1) != 0 )
    j_free(Block);
  return Block;
}
