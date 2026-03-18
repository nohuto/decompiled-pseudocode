/*
 * XREFs of PsReferencePartitionSafe @ 0x1402F9C1C
 * Callers:
 *     MiWorkingSetManager @ 0x14021D5F0 (MiWorkingSetManager.c)
 *     MiScanPagefiles @ 0x14021D8FC (MiScanPagefiles.c)
 *     MiQueryAddressState @ 0x140271C00 (MiQueryAddressState.c)
 *     MiCommitExistingVad @ 0x140276A30 (MiCommitExistingVad.c)
 *     MiCheckZeroFreeRebalance @ 0x1402D9100 (MiCheckZeroFreeRebalance.c)
 *     MiPartitionObjectToPartition @ 0x1402F8AA4 (MiPartitionObjectToPartition.c)
 *     CcGetPartitionWithCreate @ 0x14034ECF4 (CcGetPartitionWithCreate.c)
 *     PsGetNextPartition @ 0x14036AD70 (PsGetNextPartition.c)
 *     MiReferencePagePartition @ 0x140629604 (MiReferencePagePartition.c)
 *     MiObtainFreePages @ 0x140634F2C (MiObtainFreePages.c)
 *     MiWakeLargePageRebuild @ 0x14065E21C (MiWakeLargePageRebuild.c)
 *     MiContractWsSwapPageFile @ 0x140681680 (MiContractWsSwapPageFile.c)
 *     PspAllocateProcess @ 0x1406B442C (PspAllocateProcess.c)
 *     MmQueryVirtualMemory @ 0x1406F8350 (MmQueryVirtualMemory.c)
 *     MiCreateImageOrDataSection @ 0x140723350 (MiCreateImageOrDataSection.c)
 *     PsReferencePartitionByHandle @ 0x14076003C (PsReferencePartitionByHandle.c)
 *     MiFindSpecialPurposeMemoryTypeByPartition @ 0x140A47248 (MiFindSpecialPurposeMemoryTypeByPartition.c)
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
