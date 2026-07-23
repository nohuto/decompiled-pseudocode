/*
 * XREFs of KeAbMarkCrossThreadReleasable @ 0x1403CCC10
 * Callers:
 *     ExDisownFastResource @ 0x1403CC5E0 (ExDisownFastResource.c)
 *     ExAcquireFastResourceWithFlags @ 0x1404124C0 (ExAcquireFastResourceWithFlags.c)
 *     ExAcquireFastResourceExclusive2 @ 0x140412D74 (ExAcquireFastResourceExclusive2.c)
 *     ExAcquireFastResourceShared2 @ 0x140413034 (ExAcquireFastResourceShared2.c)
 *     ExAcquireFastResourceSharedStarveExclusive2 @ 0x140413370 (ExAcquireFastResourceSharedStarveExclusive2.c)
 *     ExDisownFastResource2 @ 0x1404138B0 (ExDisownFastResource2.c)
 *     ExpAcquireFastResourceExclusiveSlow @ 0x140414B20 (ExpAcquireFastResourceExclusiveSlow.c)
 *     ExpAcquireFastResourceSharedSlow @ 0x140414EA4 (ExpAcquireFastResourceSharedSlow.c)
 *     ExpMoveSharedFastResourceOwnershipWithFlags @ 0x140415E10 (ExpMoveSharedFastResourceOwnershipWithFlags.c)
 *     KeAbCrossThreadDeleteDpcRoutine @ 0x14057A0A0 (KeAbCrossThreadDeleteDpcRoutine.c)
 * Callees:
 *     KiAbForceProcessLockEntry @ 0x1403CCC68 (KiAbForceProcessLockEntry.c)
 */

char __fastcall KeAbMarkCrossThreadReleasable(__int64 a1, __int64 *a2)
{
  __int64 *v2; // rbx
  char result; // al

  v2 = a2;
  if ( ((unsigned __int8)a2 & 1) != 0 )
    v2 = (__int64 *)(&KeGetCurrentThread()[1].Process + 12 * (unsigned __int8)((unsigned __int64)a2 >> 1));
  if ( *v2 >= 0 )
    KiAbForceProcessLockEntry(v2);
  result = *(_BYTE *)v2 | 1;
  *(_BYTE *)v2 = result;
  return result;
}
