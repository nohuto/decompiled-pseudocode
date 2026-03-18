/*
 * XREFs of KeReleaseSpinLockFromDpcLevel @ 0x14032FB40
 * Callers:
 *     sub_1403F18C0 @ 0x1403F18C0 (sub_1403F18C0.c)
 *     ExAcquireFastResourceWithFlags @ 0x140412180 (ExAcquireFastResourceWithFlags.c)
 *     ExAcquireFastResourceExclusive2 @ 0x1404129E0 (ExAcquireFastResourceExclusive2.c)
 *     ExAcquireFastResourceShared2 @ 0x140412CA0 (ExAcquireFastResourceShared2.c)
 *     ExAcquireFastResourceSharedStarveExclusive2 @ 0x140412FDC (ExAcquireFastResourceSharedStarveExclusive2.c)
 *     ExDisownFastResource2 @ 0x14041351C (ExDisownFastResource2.c)
 *     ExpAcquireFastResourceExclusiveSlow @ 0x14041478C (ExpAcquireFastResourceExclusiveSlow.c)
 *     ExpAcquireFastResourceSharedSlow @ 0x140414B10 (ExpAcquireFastResourceSharedSlow.c)
 *     ExpMoveSharedFastResourceOwnershipWithFlags @ 0x140415A7C (ExpMoveSharedFastResourceOwnershipWithFlags.c)
 *     ExpReleaseDisownedFastResourceExclusive2 @ 0x140416018 (ExpReleaseDisownedFastResourceExclusive2.c)
 *     ExpReleaseDisownedFastResourceShared2 @ 0x1404161C8 (ExpReleaseDisownedFastResourceShared2.c)
 *     KeSynchronizeExecution @ 0x140420220 (KeSynchronizeExecution.c)
 * Callees:
 *     KiReleaseSpinLockInstrumented @ 0x140571848 (KiReleaseSpinLockInstrumented.c)
 */

void __stdcall KeReleaseSpinLockFromDpcLevel(PKSPIN_LOCK SpinLock)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(SpinLock, retaddr);
  else
    _InterlockedAnd64((volatile signed __int64 *)SpinLock, 0LL);
}
