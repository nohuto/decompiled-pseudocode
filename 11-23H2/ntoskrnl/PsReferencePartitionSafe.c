/*
 * XREFs of PsReferencePartitionSafe @ 0x1402F9EAC
 * Callers:
 *     MiWorkingSetManager @ 0x14021D5F0 (MiWorkingSetManager.c)
 *     MiScanPagefiles @ 0x14021D8FC (MiScanPagefiles.c)
 *     MiQueryAddressState @ 0x140271E90 (MiQueryAddressState.c)
 *     MiCommitExistingVad @ 0x140276CC0 (MiCommitExistingVad.c)
 *     MiCheckZeroFreeRebalance @ 0x1402D9390 (MiCheckZeroFreeRebalance.c)
 *     MiPartitionObjectToPartition @ 0x1402F8D34 (MiPartitionObjectToPartition.c)
 *     CcGetPartitionWithCreate @ 0x14034EE94 (CcGetPartitionWithCreate.c)
 *     PsGetNextPartition @ 0x14036AF10 (PsGetNextPartition.c)
 *     MiReferencePagePartition @ 0x140629B54 (MiReferencePagePartition.c)
 *     MiObtainFreePages @ 0x14063547C (MiObtainFreePages.c)
 *     MiWakeLargePageRebuild @ 0x14065E76C (MiWakeLargePageRebuild.c)
 *     MiContractWsSwapPageFile @ 0x140681680 (MiContractWsSwapPageFile.c)
 *     PspAllocateProcess @ 0x1406B45D8 (PspAllocateProcess.c)
 *     MmQueryVirtualMemory @ 0x1406F8560 (MmQueryVirtualMemory.c)
 *     MiCreateImageOrDataSection @ 0x140723550 (MiCreateImageOrDataSection.c)
 *     PsReferencePartitionByHandle @ 0x14076022C (PsReferencePartitionByHandle.c)
 *     MiFindSpecialPurposeMemoryTypeByPartition @ 0x140A474F8 (MiFindSpecialPurposeMemoryTypeByPartition.c)
 * Callees:
 *     <none>
 */

char __fastcall PsReferencePartitionSafe(__int64 a1)
{
  signed __int64 v1; // rax
  unsigned __int64 i; // rdx
  signed __int64 v3; // rtt

  _m_prefetchw((const void *)(a1 + 32));
  v1 = *(_QWORD *)(a1 + 32);
  for ( i = v1 + 1; i > 1; i = v1 + 1 )
  {
    v3 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 32), i, v1);
    if ( v3 == v1 )
      return 1;
  }
  if ( i != 1 )
    __fastfail(0xEu);
  return 0;
}
