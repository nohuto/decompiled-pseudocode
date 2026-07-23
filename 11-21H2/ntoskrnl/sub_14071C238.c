/*
 * XREFs of sub_14071C238 @ 0x14071C238
 * Callers:
 *     sub_1402A2204 @ 0x1402A2204 (sub_1402A2204.c)
 *     sub_14071C120 @ 0x14071C120 (sub_14071C120.c)
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x1402A3D80 (ExReleaseFastMutexUnsafe.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 */

void sub_14071C238()
{
  ExReleaseFastMutexUnsafe(&stru_140C49100);
  KeLeaveCriticalRegion();
}
