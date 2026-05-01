/*
 * XREFs of sub_18001AE40 @ 0x18001AE40
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800089B0 @ 0x1800089B0 (sub_1800089B0.c)
 *     sub_1800099BC @ 0x1800099BC (sub_1800099BC.c)
 *     j_free @ 0x18000A7C8 (j_free.c)
 */

__int64 *__fastcall sub_18001AE40(__int64 *Block, char a2)
{
  sub_1800089B0(Block + 8);
  *((_DWORD *)Block + 15) = -1073741823;
  sub_1800099BC(Block + 4);
  if ( (a2 & 1) != 0 )
    j_free(Block);
  return Block;
}
