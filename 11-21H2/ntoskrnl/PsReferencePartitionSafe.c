/*
 * XREFs of PsReferencePartitionSafe @ 0x1403606EC
 * Callers:
 *     PsGetNextPartition @ 0x140236710 (PsGetNextPartition.c)
 *     CcGetPartitionWithCreate @ 0x14023EB0C (CcGetPartitionWithCreate.c)
 *     MiPartitionObjectToPartition @ 0x140264ED0 (MiPartitionObjectToPartition.c)
 *     MiWorkingSetManager @ 0x140267320 (MiWorkingSetManager.c)
 *     MiScanPagefiles @ 0x140268BEC (MiScanPagefiles.c)
 *     MiQueryAddressState @ 0x140318330 (MiQueryAddressState.c)
 *     MiGetPage @ 0x1403250B0 (MiGetPage.c)
 *     MiCommitExistingVad @ 0x14032C1B0 (MiCommitExistingVad.c)
 *     MmQueryMemoryListInformation @ 0x140360AC0 (MmQueryMemoryListInformation.c)
 *     MiWakeLargePageRebuild @ 0x140397C78 (MiWakeLargePageRebuild.c)
 *     MiReferencePagePartition @ 0x14058DED4 (MiReferencePagePartition.c)
 *     MiObtainFreePages @ 0x140596A58 (MiObtainFreePages.c)
 *     MiContractWsSwapPageFile @ 0x1406EC1C4 (MiContractWsSwapPageFile.c)
 *     MiCreateImageOrDataSection @ 0x1406FDCD0 (MiCreateImageOrDataSection.c)
 *     PspAllocateProcess @ 0x14070BD10 (PspAllocateProcess.c)
 *     MmQueryVirtualMemory @ 0x1407BA750 (MmQueryVirtualMemory.c)
 *     PsReferencePartitionByHandle @ 0x1407DE8D0 (PsReferencePartitionByHandle.c)
 *     MiFindSpecialPurposeMemoryTypeByPartition @ 0x14096E3D8 (MiFindSpecialPurposeMemoryTypeByPartition.c)
 * Callees:
 *     <none>
 */

char __fastcall PsReferencePartitionSafe(__int64 a1)
{
  signed __int64 v1; // rax
  unsigned __int64 i; // rdx
  signed __int64 v3; // rtt

  _m_prefetchw((const void *)(a1 + 24));
  v1 = *(_QWORD *)(a1 + 24);
  for ( i = v1 + 1; i > 1; i = v1 + 1 )
  {
    v3 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 24), i, v1);
    if ( v3 == v1 )
      return 1;
  }
  if ( i != 1 )
    __fastfail(0xEu);
  return 0;
}
