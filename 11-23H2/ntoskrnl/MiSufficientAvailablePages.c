/*
 * XREFs of MiSufficientAvailablePages @ 0x1402E383C
 * Callers:
 *     CcCanIWriteStreamEx @ 0x14020FC80 (CcCanIWriteStreamEx.c)
 *     MmEnoughMemoryForWrite @ 0x140210000 (MmEnoughMemoryForWrite.c)
 *     MiScanPagefiles @ 0x14021D8FC (MiScanPagefiles.c)
 *     MmAccessFault @ 0x140235440 (MmAccessFault.c)
 *     MiInsertPagesInList @ 0x1402DD7B0 (MiInsertPagesInList.c)
 *     MiPickClusterForMappedFileFault @ 0x1402E19A0 (MiPickClusterForMappedFileFault.c)
 *     MiGetPoolPages @ 0x1402E3594 (MiGetPoolPages.c)
 *     MiRetryNonPagedAllocation @ 0x1402E3798 (MiRetryNonPagedAllocation.c)
 *     MiGetPageTablePages @ 0x1402E4348 (MiGetPageTablePages.c)
 *     MiAllocateAccessLog @ 0x1402E6690 (MiAllocateAccessLog.c)
 *     MiPrefetchVirtualMemory @ 0x1402EE458 (MiPrefetchVirtualMemory.c)
 *     MiFindContiguousPagesEx @ 0x1403BB1F8 (MiFindContiguousPagesEx.c)
 *     MiStoreWriteModifiedPages @ 0x14046DEAA (MiStoreWriteModifiedPages.c)
 *     MiFillNoReservationCluster @ 0x1406399B8 (MiFillNoReservationCluster.c)
 *     MiNoPagesLastChance @ 0x140651444 (MiNoPagesLastChance.c)
 *     MiWaitForFreePage @ 0x140653F98 (MiWaitForFreePage.c)
 *     MiStoreSetEvictPageFile @ 0x14065CEB0 (MiStoreSetEvictPageFile.c)
 *     MiResolvePageFileFault @ 0x14066BA0C (MiResolvePageFileFault.c)
 *     MiFindLargePageMemory @ 0x140A49A18 (MiFindLargePageMemory.c)
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
