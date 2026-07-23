/*
 * XREFs of KeReleaseSpinLockFromDpcLevel @ 0x14032FDD0
 * Callers:
 *     sub_1403F1AA0 @ 0x1403F1AA0 (sub_1403F1AA0.c)
 *     ExAcquireFastResourceWithFlags @ 0x1404124C0 (ExAcquireFastResourceWithFlags.c)
 *     ExAcquireFastResourceExclusive2 @ 0x140412D74 (ExAcquireFastResourceExclusive2.c)
 *     ExAcquireFastResourceShared2 @ 0x140413034 (ExAcquireFastResourceShared2.c)
 *     ExAcquireFastResourceSharedStarveExclusive2 @ 0x140413370 (ExAcquireFastResourceSharedStarveExclusive2.c)
 *     ExDisownFastResource2 @ 0x1404138B0 (ExDisownFastResource2.c)
 *     ExpAcquireFastResourceExclusiveSlow @ 0x140414B20 (ExpAcquireFastResourceExclusiveSlow.c)
 *     ExpAcquireFastResourceSharedSlow @ 0x140414EA4 (ExpAcquireFastResourceSharedSlow.c)
 *     ExpMoveSharedFastResourceOwnershipWithFlags @ 0x140415E10 (ExpMoveSharedFastResourceOwnershipWithFlags.c)
 *     ExpReleaseDisownedFastResourceExclusive2 @ 0x1404163AC (ExpReleaseDisownedFastResourceExclusive2.c)
 *     ExpReleaseDisownedFastResourceShared2 @ 0x14041655C (ExpReleaseDisownedFastResourceShared2.c)
 *     KeSynchronizeExecution @ 0x1404205B0 (KeSynchronizeExecution.c)
 * Callees:
 *     KiReleaseSpinLockInstrumented @ 0x140571D88 (KiReleaseSpinLockInstrumented.c)
 */

void __stdcall KeReleaseSpinLockFromDpcLevel(PKSPIN_LOCK SpinLock)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(SpinLock, retaddr);
  else
    _InterlockedAnd64((volatile signed __int64 *)SpinLock, 0LL);
}
