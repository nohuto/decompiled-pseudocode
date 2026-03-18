/*
 * XREFs of MiSufficientAvailablePages @ 0x140285380
 * Callers:
 *     MiScanPagefiles @ 0x140268BEC (MiScanPagefiles.c)
 *     MiFindContiguousPagesEx @ 0x140277D10 (MiFindContiguousPagesEx.c)
 *     MiGetPageTablePages @ 0x14027D03C (MiGetPageTablePages.c)
 *     MiAllocateAccessLog @ 0x140282764 (MiAllocateAccessLog.c)
 *     MiPickClusterForMappedFileFault @ 0x140282D10 (MiPickClusterForMappedFileFault.c)
 *     CcCanIWriteStreamEx @ 0x1402844A0 (CcCanIWriteStreamEx.c)
 *     MmEnoughMemoryForWrite @ 0x140284860 (MmEnoughMemoryForWrite.c)
 *     MiGetPoolPages @ 0x140284A20 (MiGetPoolPages.c)
 *     MiRetryNonPagedAllocation @ 0x140284C74 (MiRetryNonPagedAllocation.c)
 *     MiComputeZeroClusterMaximum @ 0x140284D20 (MiComputeZeroClusterMaximum.c)
 *     MiPrefetchVirtualMemory @ 0x140284EB0 (MiPrefetchVirtualMemory.c)
 *     MmAccessFault @ 0x14031C860 (MmAccessFault.c)
 *     MiInsertPagesInList @ 0x140338660 (MiInsertPagesInList.c)
 *     MiStoreWriteModifiedPages @ 0x14037B44C (MiStoreWriteModifiedPages.c)
 *     MiFillNoReservationCluster @ 0x14037E554 (MiFillNoReservationCluster.c)
 *     MiStoreSetEvictPageFile @ 0x1403868E8 (MiStoreSetEvictPageFile.c)
 *     MiResolvePageFileFault @ 0x1403927C4 (MiResolvePageFileFault.c)
 *     MiNoPagesLastChance @ 0x1405B379C (MiNoPagesLastChance.c)
 *     MiWaitForFreePage @ 0x1405B8348 (MiWaitForFreePage.c)
 *     MiFindLargePageMemory @ 0x140982F64 (MiFindLargePageMemory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiSufficientAvailablePages(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r8
  __int64 v4; // r9
  unsigned __int16 **i; // rcx
  unsigned __int16 *v6; // r10
  unsigned int v7; // r11d

  v2 = *(_QWORD *)(a1 + 16896);
  if ( v2 < a2 )
  {
    v4 = 0LL;
    for ( i = (unsigned __int16 **)(a1 + 6616); ; ++i )
    {
      v6 = *i;
      v7 = 0;
      if ( dword_140C5073C )
        break;
LABEL_7:
      if ( ++v4 > 1 )
        return 0LL;
    }
    while ( 1 )
    {
      v2 += *v6;
      if ( v2 >= a2 )
        break;
      ++v7;
      v6 += 8;
      if ( v7 >= dword_140C5073C )
        goto LABEL_7;
    }
  }
  return 1LL;
}
