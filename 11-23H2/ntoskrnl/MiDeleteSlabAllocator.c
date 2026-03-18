/*
 * XREFs of MiDeleteSlabAllocator @ 0x140656770
 * Callers:
 *     <none>
 * Callees:
 *     MiFreeSlabEntries @ 0x14021F040 (MiFreeSlabEntries.c)
 *     MiAsyncSlabReplenish @ 0x1402B9C84 (MiAsyncSlabReplenish.c)
 */

__int64 __fastcall MiDeleteSlabAllocator(__int64 a1, __int64 a2)
{
  MiAsyncSlabReplenish(a2, 0LL, 2);
  MiFreeSlabEntries(a1, a2, 1);
  return 0LL;
}
