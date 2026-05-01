/*
 * XREFs of sub_180009430 @ 0x180009430
 * Callers:
 *     <none>
 * Callees:
 *     sub_180009468 @ 0x180009468 (sub_180009468.c)
 *     j_free @ 0x18000A7C8 (j_free.c)
 */

void *__fastcall sub_180009430(void *Block, char a2)
{
  sub_180009468();
  if ( (a2 & 1) != 0 )
    j_free(Block);
  return Block;
}
