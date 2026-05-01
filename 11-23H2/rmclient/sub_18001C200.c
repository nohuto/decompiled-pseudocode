/*
 * XREFs of sub_18001C200 @ 0x18001C200
 * Callers:
 *     <none>
 * Callees:
 *     j_free @ 0x18000A7C8 (j_free.c)
 *     sub_18001C19C @ 0x18001C19C (sub_18001C19C.c)
 */

void *__fastcall sub_18001C200(void *Block, char a2)
{
  sub_18001C19C((__int64)Block);
  if ( (a2 & 1) != 0 )
    j_free(Block);
  return Block;
}
