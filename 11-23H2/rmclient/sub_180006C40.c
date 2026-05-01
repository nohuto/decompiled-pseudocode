/*
 * XREFs of sub_180006C40 @ 0x180006C40
 * Callers:
 *     <none>
 * Callees:
 *     j_free @ 0x18000A7C8 (j_free.c)
 *     sub_18001BC10 @ 0x18001BC10 (sub_18001BC10.c)
 */

_QWORD *__fastcall sub_180006C40(_QWORD *Block, char a2)
{
  __int64 v4; // rcx

  *Block = off_180020A98;
  Block[1] = off_180020A10;
  Block[2] = off_180020A60;
  Block[3] = off_180020A30;
  v4 = Block[5];
  if ( v4 < 0 )
    sub_18001BC10(2 * v4);
  if ( (a2 & 1) != 0 )
    j_free(Block);
  return Block;
}
