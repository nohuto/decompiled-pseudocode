/*
 * XREFs of MiChargeForWriteInProgressPage @ 0x14034A0B4
 * Callers:
 *     MiReferencePageForModifiedWrite @ 0x140349F80 (MiReferencePageForModifiedWrite.c)
 *     MiAllocateModWriterEntry @ 0x14034A048 (MiAllocateModWriterEntry.c)
 * Callees:
 *     MiChargeCommit @ 0x140276750 (MiChargeCommit.c)
 *     MiChargeResident @ 0x1402E4638 (MiChargeResident.c)
 */

__int64 __fastcall MiChargeForWriteInProgressPage(volatile signed __int64 *a1, char a2)
{
  unsigned __int64 v3; // rbx
  unsigned int v5; // esi
  unsigned int v6; // ebp
  struct _KPRCB *CurrentPrcb; // r8
  __int64 CachedResidentAvailable; // rdx
  bool v10; // zf
  signed __int32 v11; // eax

  v3 = 1LL;
  v5 = (a2 & 2) != 0 ? 0xFFFFFFFC : 0;
  v6 = MiChargeResident((void *)a1, 1uLL, (unsigned int)-((a2 & 2) != 0));
  if ( v6 )
  {
    if ( (a2 & 1) == 0 || (unsigned int)MiChargeCommit((unsigned __int64)a1, 1uLL, v5 + 8) )
      return v6;
    if ( a1 != (volatile signed __int64 *)&MiSystemPartition )
      goto LABEL_16;
    CurrentPrcb = KeGetCurrentPrcb();
    CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
    if ( (_DWORD)CachedResidentAvailable == -1 )
      goto LABEL_16;
    if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
    {
      do
      {
        v11 = _InterlockedCompareExchange(
                (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                CachedResidentAvailable + 1,
                CachedResidentAvailable);
        v10 = (_DWORD)CachedResidentAvailable == v11;
        LODWORD(CachedResidentAvailable) = v11;
        if ( v10 )
          return 0LL;
      }
      while ( v11 != -1 && (unsigned __int64)(v11 + 1LL) <= 0x100 );
    }
    if ( (int)CachedResidentAvailable > 192
      && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                              (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                              192,
                                              CachedResidentAvailable) )
    {
      v3 = (int)CachedResidentAvailable - 192 + 1LL;
    }
    if ( v3 )
LABEL_16:
      _InterlockedExchangeAdd64(a1 + 2160, v3);
  }
  return 0LL;
}
