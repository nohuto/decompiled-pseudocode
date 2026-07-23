/*
 * XREFs of sub_1403BED38 @ 0x1403BED38
 * Callers:
 *     sub_1403BEAD0 @ 0x1403BEAD0 (sub_1403BEAD0.c)
 *     sub_1403BED20 @ 0x1403BED20 (sub_1403BED20.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     sub_1403BED70 @ 0x1403BED70 (sub_1403BED70.c)
 */

__int64 sub_1403BED38()
{
  __int64 v0; // rbx

  ExAcquireFastMutex(&Mutex);
  v0 = sub_1403BED70();
  KeReleaseGuardedMutex(&Mutex);
  return v0;
}
