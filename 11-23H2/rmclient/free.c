/*
 * XREFs of free @ 0x18000AE68
 * Callers:
 *     j_free @ 0x18000A7C8 (j_free.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __cdecl free(void *Block)
{
  __imp_free(Block);
}
