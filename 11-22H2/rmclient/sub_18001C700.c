/*
 * XREFs of sub_18001C700 @ 0x18001C700
 * Callers:
 *     <none>
 * Callees:
 *     j_free @ 0x18000A7C8 (j_free.c)
 */

RPC_BINDING_HANDLE *__fastcall sub_18001C700(RPC_BINDING_HANDLE *Block, char a2)
{
  *Block = &off_180020000;
  RpcBindingFree(Block + 1);
  Block[1] = 0LL;
  if ( (a2 & 1) != 0 )
    j_free(Block);
  return Block;
}
