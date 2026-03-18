/*
 * XREFs of KeExecuteVerw @ 0x140435080
 * Callers:
 *     PoIdle @ 0x1402C4B30 (PoIdle.c)
 *     PpmIdleDefaultExecute @ 0x140391EF0 (PpmIdleDefaultExecute.c)
 * Callees:
 *     <none>
 */

void KeExecuteVerw()
{
  __asm { verw    word ptr gs:0A02Ah }
}
