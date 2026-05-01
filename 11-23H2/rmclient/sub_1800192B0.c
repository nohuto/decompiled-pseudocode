/*
 * XREFs of sub_1800192B0 @ 0x1800192B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180002244 @ 0x180002244 (sub_180002244.c)
 *     j_free @ 0x18000A7C8 (j_free.c)
 */

_QWORD *__fastcall sub_1800192B0(_QWORD *Block, char a2)
{
  sub_180002244(Block);
  if ( (a2 & 1) != 0 )
    j_free(Block);
  return Block;
}
