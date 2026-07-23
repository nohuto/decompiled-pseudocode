/*
 * XREFs of KeExecuteVerw @ 0x140435A80
 * Callers:
 *     PoIdle @ 0x1402C4DF0 (PoIdle.c)
 *     PpmIdleDefaultExecute @ 0x140393C50 (PpmIdleDefaultExecute.c)
 * Callees:
 *     <none>
 */

void KeExecuteVerw()
{
  __asm { verw    word ptr gs:0A02Ah }
}
