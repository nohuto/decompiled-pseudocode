/*
 * XREFs of MiReturnCrossPartitionCloneCharges @ 0x1402F4050
 * Callers:
 *     MiDecrementCloneBlock @ 0x1402F3EB8 (MiDecrementCloneBlock.c)
 *     MiBuildForkPte @ 0x140662750 (MiBuildForkPte.c)
 *     MiHandleForkTransitionPte @ 0x140664E98 (MiHandleForkTransitionPte.c)
 * Callees:
 *     MiReturnCommit @ 0x1402DC4E0 (MiReturnCommit.c)
 *     MiReturnCrossPartitionCharges @ 0x14065B8A4 (MiReturnCrossPartitionCharges.c)
 */

void __fastcall MiReturnCrossPartitionCloneCharges(__int64 a1, char a2)
{
  unsigned __int64 v4; // rdx
  struct _KPRCB *CurrentPrcb; // r9
  __int64 CachedResidentAvailable; // r8
  bool v7; // zf
  signed __int32 v8; // eax

  if ( (a2 & 1) != 0 )
    MiReturnCommit(a1, 1LL);
  if ( (a2 & 2) != 0 )
  {
    v4 = 1LL;
    if ( (_UNKNOWN *)a1 != &MiSystemPartition )
      goto LABEL_14;
    CurrentPrcb = KeGetCurrentPrcb();
    CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
    if ( (_DWORD)CachedResidentAvailable == -1 )
      goto LABEL_14;
    if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
    {
      do
      {
        v8 = _InterlockedCompareExchange(
               (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
               CachedResidentAvailable + 1,
               CachedResidentAvailable);
        v7 = (_DWORD)CachedResidentAvailable == v8;
        LODWORD(CachedResidentAvailable) = v8;
        if ( v7 )
          goto LABEL_15;
      }
      while ( v8 != -1 && (unsigned __int64)(v8 + 1LL) <= 0x100 );
    }
    if ( (int)CachedResidentAvailable > 192
      && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                              (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                              192,
                                              CachedResidentAvailable) )
    {
      v4 = (int)CachedResidentAvailable - 192 + 1LL;
    }
    if ( v4 )
LABEL_14:
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 17280), v4);
LABEL_15:
    MiReturnCrossPartitionCharges(a1, 6LL, 0LL, 1LL);
  }
}
