/*
 * XREFs of MiGetControlAreaPartition @ 0x1402756B0
 * Callers:
 *     MiMapImageInSystemSpace @ 0x1406AC9FC (MiMapImageInSystemSpace.c)
 *     MiSegmentDelete @ 0x1406B0954 (MiSegmentDelete.c)
 *     MiPfPrepareReadList @ 0x1406F62A0 (MiPfPrepareReadList.c)
 *     MiAllocateVirtualMemory @ 0x1406F7220 (MiAllocateVirtualMemory.c)
 *     MmQueryVirtualMemory @ 0x1406F8350 (MmQueryVirtualMemory.c)
 *     MiFreeInitializationCode @ 0x140703AFC (MiFreeInitializationCode.c)
 *     MiExtendSection @ 0x1407067D4 (MiExtendSection.c)
 *     MiCreateImageOrDataSection @ 0x140723350 (MiCreateImageOrDataSection.c)
 *     MiPfPrepareSequentialReadList @ 0x1407446E0 (MiPfPrepareSequentialReadList.c)
 *     MiChargeSegmentCommit @ 0x140748008 (MiChargeSegmentCommit.c)
 *     MiAllocatePerSessionProtos @ 0x1407B5E60 (MiAllocatePerSessionProtos.c)
 *     MiCreateFileOnlyImageFixupList @ 0x140A339DC (MiCreateFileOnlyImageFixupList.c)
 *     MiCreateFileOnlyPfns @ 0x140A33C48 (MiCreateFileOnlyPfns.c)
 *     MiFillPerSessionProtos @ 0x140A49FAC (MiFillPerSessionProtos.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetControlAreaPartition(__int64 a1)
{
  return *(_QWORD *)(qword_140C673C8 + 8LL * (*(_WORD *)(a1 + 60) & 0x3FF));
}
