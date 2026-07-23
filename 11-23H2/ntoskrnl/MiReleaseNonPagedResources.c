/*
 * XREFs of MiReleaseNonPagedResources @ 0x1406615BC
 * Callers:
 *     MiChargeSystemImageCommitment @ 0x140695FD0 (MiChargeSystemImageCommitment.c)
 *     MiAllocateProcessShadow @ 0x1407062BC (MiAllocateProcessShadow.c)
 *     MiAllocateFastAwePages @ 0x140A40454 (MiAllocateFastAwePages.c)
 *     MiAllocatePartitionPhysicalPages @ 0x140A445CC (MiAllocatePartitionPhysicalPages.c)
 * Callees:
 *     MiReturnCommit @ 0x1402DC4E0 (MiReturnCommit.c)
 */

unsigned __int64 __fastcall MiReleaseNonPagedResources(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r8
  __int64 CachedResidentAvailable; // rdx
  bool v7; // zf

  v2 = a2;
  MiReturnCommit(a1, a2);
  result = (unsigned __int64)MiSystemPartition;
  if ( (unsigned __int16 *)a1 != MiSystemPartition
    || (CurrentPrcb = KeGetCurrentPrcb(),
        CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable,
        (_DWORD)CachedResidentAvailable == -1) )
  {
LABEL_11:
    if ( v2 )
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 17280), v2);
    return result;
  }
  result = v2 + CachedResidentAvailable;
  if ( v2 + CachedResidentAvailable > 0x100 || v2 >= 0x80000 )
  {
LABEL_8:
    if ( (int)CachedResidentAvailable > 192 )
    {
      result = (unsigned int)_InterlockedCompareExchange(
                               (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                               192,
                               CachedResidentAvailable);
      if ( (_DWORD)CachedResidentAvailable == (_DWORD)result )
      {
        result = (unsigned int)(CachedResidentAvailable - 192);
        v2 += (int)result;
      }
    }
    goto LABEL_11;
  }
  while ( 1 )
  {
    result = (unsigned int)_InterlockedCompareExchange(
                             (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                             CachedResidentAvailable + v2,
                             CachedResidentAvailable);
    v7 = (_DWORD)CachedResidentAvailable == (_DWORD)result;
    CachedResidentAvailable = (int)result;
    if ( v7 )
      return result;
    if ( (_DWORD)result != -1 )
    {
      result = v2 + (int)result;
      if ( v2 + CachedResidentAvailable <= 0x100 )
        continue;
    }
    goto LABEL_8;
  }
}
