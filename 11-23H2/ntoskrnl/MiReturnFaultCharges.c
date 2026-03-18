/*
 * XREFs of MiReturnFaultCharges @ 0x14035FEC0
 * Callers:
 *     MiGetPageForHeader @ 0x14021A4D4 (MiGetPageForHeader.c)
 *     MiMigratePfn @ 0x1402630E0 (MiMigratePfn.c)
 *     MiObtainFaultCharges @ 0x140274BB0 (MiObtainFaultCharges.c)
 *     MiPfPutPagesInTransition @ 0x1402DE040 (MiPfPutPagesInTransition.c)
 *     MiResolveMappedFileFault @ 0x1402E05E0 (MiResolveMappedFileFault.c)
 *     MiPrivateFixup @ 0x1402ED678 (MiPrivateFixup.c)
 *     MiPrefetchPagesViable @ 0x14033E5E4 (MiPrefetchPagesViable.c)
 *     MiSwitchToTransition @ 0x14063318C (MiSwitchToTransition.c)
 *     MiResolvePageFileFault @ 0x14066B4BC (MiResolvePageFileFault.c)
 *     MiPfPrepareReadList @ 0x1406F62A0 (MiPfPrepareReadList.c)
 *     MiFreeReadListPages @ 0x1407213E0 (MiFreeReadListPages.c)
 *     MiPfPrepareSequentialReadList @ 0x1407446E0 (MiPfPrepareSequentialReadList.c)
 * Callees:
 *     MiReturnCommit @ 0x1402DC250 (MiReturnCommit.c)
 */

void __fastcall MiReturnFaultCharges(__int64 a1, __int64 a2, char a3)
{
  unsigned __int64 v5; // r9
  struct _KPRCB *CurrentPrcb; // r8
  __int64 CachedResidentAvailable; // rdx
  bool v8; // zf
  signed __int32 v9; // eax

  v5 = a2;
  if ( (_UNKNOWN *)a1 != &MiSystemPartition
    || (CurrentPrcb = KeGetCurrentPrcb(),
        CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable,
        (_DWORD)CachedResidentAvailable == -1) )
  {
LABEL_10:
    if ( v5 )
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 17280), v5);
    goto LABEL_6;
  }
  if ( v5 + CachedResidentAvailable > 0x100 || v5 >= 0x80000 )
  {
LABEL_9:
    if ( (int)CachedResidentAvailable > 192
      && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                              (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                              192,
                                              CachedResidentAvailable) )
    {
      v5 = a2 + (int)CachedResidentAvailable - 192;
    }
    goto LABEL_10;
  }
  while ( 1 )
  {
    v9 = _InterlockedCompareExchange(
           (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
           CachedResidentAvailable + a2,
           CachedResidentAvailable);
    v8 = (_DWORD)CachedResidentAvailable == v9;
    LODWORD(CachedResidentAvailable) = v9;
    if ( v8 )
      break;
    if ( v9 == -1 || (unsigned __int64)(a2 + v9) > 0x100 )
      goto LABEL_9;
  }
LABEL_6:
  if ( (a3 & 1) != 0 )
    MiReturnCommit(a1, a2);
}
