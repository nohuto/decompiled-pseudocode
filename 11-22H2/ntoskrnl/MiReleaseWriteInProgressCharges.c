/*
 * XREFs of MiReleaseWriteInProgressCharges @ 0x1402F48D8
 * Callers:
 *     MiBuildMappedCluster @ 0x14021C0F0 (MiBuildMappedCluster.c)
 *     MiAddPageToInsertList @ 0x1402D99D0 (MiAddPageToInsertList.c)
 *     MiUnlockMdlWritePages @ 0x1402D9B30 (MiUnlockMdlWritePages.c)
 *     MmUnmapViewInSystemCache @ 0x1402D9FB0 (MmUnmapViewInSystemCache.c)
 *     MiInsertPagesInList @ 0x1402DD520 (MiInsertPagesInList.c)
 *     MiWriteComplete @ 0x1402F4320 (MiWriteComplete.c)
 *     MiFreeModWriterEntry @ 0x1402F489C (MiFreeModWriterEntry.c)
 *     MiGatherPagefilePages @ 0x14063A1B4 (MiGatherPagefilePages.c)
 * Callees:
 *     MiReturnCommit @ 0x1402DC250 (MiReturnCommit.c)
 */

unsigned __int64 __fastcall MiReleaseWriteInProgressCharges(__int64 a1, __int64 a2, int a3)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  __int64 CachedResidentAvailable; // rdx
  bool v8; // zf

  v3 = a2;
  if ( a3 )
  {
    MiReturnCommit(a1, a2);
    result = (unsigned __int64)&MiSystemPartition;
    if ( (_UNKNOWN *)a1 == &MiSystemPartition )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
      if ( (_DWORD)CachedResidentAvailable != -1 )
      {
        result = v3 + CachedResidentAvailable;
        if ( v3 + CachedResidentAvailable <= 0x100 && v3 < 0x80000 )
        {
          while ( 1 )
          {
            result = (unsigned int)_InterlockedCompareExchange(
                                     (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                     CachedResidentAvailable + v3,
                                     CachedResidentAvailable);
            v8 = (_DWORD)CachedResidentAvailable == (_DWORD)result;
            CachedResidentAvailable = (int)result;
            if ( v8 )
              return result;
            if ( (_DWORD)result != -1 )
            {
              result = v3 + (int)result;
              if ( v3 + CachedResidentAvailable <= 0x100 )
                continue;
            }
            goto LABEL_8;
          }
        }
        goto LABEL_8;
      }
    }
LABEL_9:
    if ( v3 )
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 17280), v3);
    return result;
  }
  result = (unsigned __int64)&MiSystemPartition;
  if ( (_UNKNOWN *)a1 != &MiSystemPartition )
    goto LABEL_9;
  CurrentPrcb = KeGetCurrentPrcb();
  CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
  if ( (_DWORD)CachedResidentAvailable == -1 )
    goto LABEL_9;
  result = v3 + CachedResidentAvailable;
  if ( v3 + CachedResidentAvailable > 0x100 || v3 >= 0x80000 )
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
        v3 += (int)result;
      }
    }
    goto LABEL_9;
  }
  while ( 1 )
  {
    result = (unsigned int)_InterlockedCompareExchange(
                             (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                             CachedResidentAvailable + v3,
                             CachedResidentAvailable);
    v8 = (_DWORD)CachedResidentAvailable == (_DWORD)result;
    CachedResidentAvailable = (int)result;
    if ( v8 )
      return result;
    if ( (_DWORD)result != -1 )
    {
      result = v3 + (int)result;
      if ( v3 + CachedResidentAvailable <= 0x100 )
        continue;
    }
    goto LABEL_8;
  }
}
