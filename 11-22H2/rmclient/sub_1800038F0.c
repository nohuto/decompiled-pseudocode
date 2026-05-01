/*
 * XREFs of sub_1800038F0 @ 0x1800038F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800039B4 @ 0x1800039B4 (sub_1800039B4.c)
 *     j_free @ 0x18000A7C8 (j_free.c)
 */

void *__fastcall sub_1800038F0(void *Block, char a2)
{
  sub_1800039B4();
  if ( (a2 & 1) != 0 )
    j_free(Block);
  return Block;
}
