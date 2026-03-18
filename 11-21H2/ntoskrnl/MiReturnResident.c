/*
 * XREFs of MiReturnResident @ 0x140216E18
 * Callers:
 *     MiDeletePartitionResources @ 0x1405BDFF8 (MiDeletePartitionResources.c)
 *     MiDereferenceSessionFinal @ 0x140693A28 (MiDereferenceSessionFinal.c)
 *     MmDeleteProcessAddressSpace @ 0x140693C24 (MmDeleteProcessAddressSpace.c)
 *     MiCreatePagingFileMap @ 0x1406F3A44 (MiCreatePagingFileMap.c)
 *     MiUnloadSystemImage @ 0x1406F4FB8 (MiUnloadSystemImage.c)
 *     MmCleanProcessAddressSpace @ 0x1406F89A4 (MmCleanProcessAddressSpace.c)
 *     MiFreeInitializationCode @ 0x14075F23C (MiFreeInitializationCode.c)
 *     MiReleaseVadEventBlocks @ 0x1407B97B0 (MiReleaseVadEventBlocks.c)
 *     MiRemoveVadCharges @ 0x1407BC750 (MiRemoveVadCharges.c)
 *     MmCreateProcessAddressSpace @ 0x1407F17B4 (MmCreateProcessAddressSpace.c)
 *     MiSessionCreateInternal @ 0x1407F336C (MiSessionCreateInternal.c)
 *     MiReturnSystemImageCommitment @ 0x14081C984 (MiReturnSystemImageCommitment.c)
 *     MiMarkBootGuardPage @ 0x140829B50 (MiMarkBootGuardPage.c)
 *     MmReturnChargesToLockPagedPool @ 0x14096CA90 (MmReturnChargesToLockPagedPool.c)
 *     MiChargeLargeProtoSubsection @ 0x14096FE9C (MiChargeLargeProtoSubsection.c)
 *     MiReturnVadCharges @ 0x140977F8C (MiReturnVadCharges.c)
 *     MiFreePartitionPhysicalPages @ 0x140981A04 (MiFreePartitionPhysicalPages.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiReturnResident(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  __int64 CachedResidentAvailable; // r8
  bool v5; // zf

  result = (unsigned __int64)&MiSystemPartition;
  if ( (ULONG_PTR *)a1 == &MiSystemPartition )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
    if ( (_DWORD)CachedResidentAvailable != -1 )
    {
      for ( ; a2 + CachedResidentAvailable <= 0x100; result = a2 + (int)result )
      {
        if ( a2 >= 0x80000 )
          break;
        result = (unsigned int)_InterlockedCompareExchange(
                                 (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                 CachedResidentAvailable + a2,
                                 CachedResidentAvailable);
        v5 = (_DWORD)CachedResidentAvailable == (_DWORD)result;
        CachedResidentAvailable = (int)result;
        if ( v5 )
          return result;
        if ( (_DWORD)result == -1 )
          break;
      }
      if ( (int)CachedResidentAvailable > 192 )
      {
        result = (unsigned int)_InterlockedCompareExchange(
                                 (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                 192,
                                 CachedResidentAvailable);
        if ( (_DWORD)CachedResidentAvailable == (_DWORD)result )
        {
          result = (unsigned int)(CachedResidentAvailable - 192);
          a2 += (int)result;
        }
      }
    }
  }
  if ( a2 )
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 16960), a2);
  return result;
}
