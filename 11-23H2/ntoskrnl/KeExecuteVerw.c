/*
 * XREFs of KeExecuteVerw @ 0x140435680
 * Callers:
 *     PoIdle @ 0x1402C4B60 (PoIdle.c)
 *     PpmIdleDefaultExecute @ 0x140393A70 (PpmIdleDefaultExecute.c)
 * Callees:
 *     <none>
 */

void KeExecuteVerw()
{
  __asm { verw    word ptr gs:0A02Ah }
}
