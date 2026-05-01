/*
 * XREFs of sub_180019260 @ 0x180019260
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800099BC @ 0x1800099BC (sub_1800099BC.c)
 *     j_free @ 0x18000A7C8 (j_free.c)
 */

void *__fastcall sub_180019260(void *Block, char a2)
{
  *((_DWORD *)Block + 27) = -1073741823;
  sub_1800099BC((__int64 *)Block + 4);
  if ( (a2 & 1) != 0 )
    j_free(Block);
  return Block;
}
