/*
 * XREFs of MiReturnResident @ 0x140292E10
 * Callers:
 *     MiDereferenceSessionFinal @ 0x140681B80 (MiDereferenceSessionFinal.c)
 *     MiUnloadSystemImage @ 0x1406962FC (MiUnloadSystemImage.c)
 *     MiRemoveVadCharges @ 0x1406FB440 (MiRemoveVadCharges.c)
 *     MiReleaseVadEventBlocks @ 0x1406FB5DC (MiReleaseVadEventBlocks.c)
 *     MiFreeInitializationCode @ 0x140703AFC (MiFreeInitializationCode.c)
 *     MmDeleteProcessAddressSpace @ 0x1407059E8 (MmDeleteProcessAddressSpace.c)
 *     MmCreateProcessAddressSpace @ 0x140705E50 (MmCreateProcessAddressSpace.c)
 *     MmCleanProcessAddressSpace @ 0x14071FA58 (MmCleanProcessAddressSpace.c)
 *     MiCreatePagingFileMap @ 0x140747994 (MiCreatePagingFileMap.c)
 *     MiSessionCreate @ 0x1407A900C (MiSessionCreate.c)
 *     MiMarkBootGuardPage @ 0x14081D648 (MiMarkBootGuardPage.c)
 *     MiReturnSystemImageCommitment @ 0x140861800 (MiReturnSystemImageCommitment.c)
 *     MmReturnChargesToLockPagedPool @ 0x140A309A0 (MmReturnChargesToLockPagedPool.c)
 *     MiChargeLargeProtoSubsection @ 0x140A33644 (MiChargeLargeProtoSubsection.c)
 *     MiReturnVadCharges @ 0x140A3C4A4 (MiReturnVadCharges.c)
 *     MiFreePartitionPhysicalPages @ 0x140A44AF4 (MiFreePartitionPhysicalPages.c)
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
  if ( (_UNKNOWN *)a1 != &MiSystemPartition
    || (CurrentPrcb = KeGetCurrentPrcb(),
        CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable,
        (_DWORD)CachedResidentAvailable == -1) )
  {
LABEL_8:
    if ( a2 )
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 17280), a2);
    return result;
  }
  result = a2 + CachedResidentAvailable;
  if ( a2 + CachedResidentAvailable > 0x100 || a2 >= 0x80000 )
  {
LABEL_7:
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
    goto LABEL_8;
  }
  while ( 1 )
  {
    result = (unsigned int)_InterlockedCompareExchange(
                             (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                             CachedResidentAvailable + a2,
                             CachedResidentAvailable);
    v5 = (_DWORD)CachedResidentAvailable == (_DWORD)result;
    CachedResidentAvailable = (int)result;
    if ( v5 )
      return result;
    if ( (_DWORD)result != -1 )
    {
      result = a2 + (int)result;
      if ( a2 + CachedResidentAvailable <= 0x100 )
        continue;
    }
    goto LABEL_7;
  }
}
