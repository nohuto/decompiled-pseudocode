/*
 * XREFs of MiGetCrossPartitionCloneCharges @ 0x1405BAFB0
 * Callers:
 *     MiBuildForkPte @ 0x1405B88D8 (MiBuildForkPte.c)
 *     MiHandleForkTransitionPte @ 0x1405BB090 (MiHandleForkTransitionPte.c)
 *     MiReferenceCloneProto @ 0x1405BBB54 (MiReferenceCloneProto.c)
 * Callees:
 *     MiChargeResident @ 0x1402821F4 (MiChargeResident.c)
 *     MiGetCrossPartitionCharges @ 0x1405BE6F4 (MiGetCrossPartitionCharges.c)
 */

__int64 __fastcall MiGetCrossPartitionCloneCharges(__int64 a1)
{
  unsigned __int64 v2; // rbx
  struct _KPRCB *CurrentPrcb; // r8
  __int64 CachedResidentAvailable; // rdx
  bool v5; // zf
  signed __int32 v6; // eax

  v2 = 1LL;
  if ( !(unsigned int)MiChargeResident((ULONG_PTR *)a1, 1uLL, 0LL) )
    return 0LL;
  if ( (int)MiGetCrossPartitionCharges(a1, 6LL, 0LL, 1LL) < 0 )
  {
    if ( (ULONG_PTR *)a1 != &MiSystemPartition )
      goto LABEL_13;
    CurrentPrcb = KeGetCurrentPrcb();
    CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
    if ( (_DWORD)CachedResidentAvailable == -1 )
      goto LABEL_13;
    if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
    {
      do
      {
        v6 = _InterlockedCompareExchange(
               (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
               CachedResidentAvailable + 1,
               CachedResidentAvailable);
        v5 = (_DWORD)CachedResidentAvailable == v6;
        LODWORD(CachedResidentAvailable) = v6;
        if ( v5 )
          return 0LL;
      }
      while ( v6 != -1 && (unsigned __int64)(v6 + 1LL) <= 0x100 );
    }
    if ( (int)CachedResidentAvailable > 192
      && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                              (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                              192,
                                              CachedResidentAvailable) )
    {
      v2 = (int)CachedResidentAvailable - 192 + 1LL;
    }
    if ( v2 )
LABEL_13:
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 16960), v2);
    return 0LL;
  }
  return 1LL;
}
