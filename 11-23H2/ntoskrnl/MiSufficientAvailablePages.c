/*
 * XREFs of MiSufficientAvailablePages @ 0x1402E35AC
 * Callers:
 *     CcCanIWriteStreamEx @ 0x14020FC80 (CcCanIWriteStreamEx.c)
 *     MmEnoughMemoryForWrite @ 0x140210000 (MmEnoughMemoryForWrite.c)
 *     MiScanPagefiles @ 0x14021D8FC (MiScanPagefiles.c)
 *     MmAccessFault @ 0x140235370 (MmAccessFault.c)
 *     MiInsertPagesInList @ 0x1402DD520 (MiInsertPagesInList.c)
 *     MiPickClusterForMappedFileFault @ 0x1402E1710 (MiPickClusterForMappedFileFault.c)
 *     MiGetPoolPages @ 0x1402E3304 (MiGetPoolPages.c)
 *     MiRetryNonPagedAllocation @ 0x1402E3508 (MiRetryNonPagedAllocation.c)
 *     MiGetPageTablePages @ 0x1402E40B8 (MiGetPageTablePages.c)
 *     MiAllocateAccessLog @ 0x1402E6400 (MiAllocateAccessLog.c)
 *     MiPrefetchVirtualMemory @ 0x1402EE1C8 (MiPrefetchVirtualMemory.c)
 *     MiFindContiguousPagesEx @ 0x1403BB018 (MiFindContiguousPagesEx.c)
 *     MiStoreWriteModifiedPages @ 0x14046DAAA (MiStoreWriteModifiedPages.c)
 *     MiFillNoReservationCluster @ 0x140639468 (MiFillNoReservationCluster.c)
 *     MiNoPagesLastChance @ 0x140650EF4 (MiNoPagesLastChance.c)
 *     MiWaitForFreePage @ 0x140653A48 (MiWaitForFreePage.c)
 *     MiStoreSetEvictPageFile @ 0x14065C960 (MiStoreSetEvictPageFile.c)
 *     MiResolvePageFileFault @ 0x14066B4BC (MiResolvePageFileFault.c)
 *     MiFindLargePageMemory @ 0x140A49768 (MiFindLargePageMemory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiSufficientAvailablePages(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r8
  __int64 v5; // r9
  unsigned __int16 **i; // rcx
  unsigned __int16 *v7; // rdx
  unsigned int v8; // r10d

  v2 = *(_QWORD *)(a1 + 17216);
  if ( v2 < a2 )
  {
    v5 = 0LL;
    for ( i = (unsigned __int16 **)(a1 + 6808); ; ++i )
    {
      v7 = *i;
      v8 = 0;
      if ( dword_140C65AFC )
        break;
LABEL_7:
      if ( ++v5 > 1 )
        return 0LL;
    }
    while ( 1 )
    {
      v2 += *v7;
      if ( v2 >= a2 )
        break;
      ++v8;
      v7 += 8;
      if ( v8 >= dword_140C65AFC )
        goto LABEL_7;
    }
  }
  return 1LL;
}
