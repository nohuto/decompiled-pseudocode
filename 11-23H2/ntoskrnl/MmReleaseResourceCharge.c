/*
 * XREFs of MmReleaseResourceCharge @ 0x1403454E8
 * Callers:
 *     SmAcquireReleaseCharges @ 0x140343C8C (SmAcquireReleaseCharges.c)
 *     MmChargeResources @ 0x140343CE0 (MmChargeResources.c)
 * Callees:
 *     MiReturnCommit @ 0x1402DC4E0 (MiReturnCommit.c)
 */

void __fastcall MmReleaseResourceCharge(__int64 *a1, unsigned __int64 a2, char a3, int a4)
{
  __int64 v4; // r11
  unsigned __int64 v7; // r9
  struct _KPRCB *CurrentPrcb; // r8
  __int64 CachedResidentAvailable; // rdx
  bool v10; // zf
  signed __int32 v11; // eax

  v4 = *a1;
  if ( (a3 & 2) == 0 || a4 )
    goto LABEL_2;
  v7 = a2;
  if ( (_UNKNOWN *)v4 != &MiSystemPartition )
    goto LABEL_16;
  CurrentPrcb = KeGetCurrentPrcb();
  CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
  if ( (_DWORD)CachedResidentAvailable == -1 )
    goto LABEL_16;
  if ( a2 + CachedResidentAvailable > 0x100 || a2 >= 0x80000 )
  {
LABEL_13:
    if ( (int)CachedResidentAvailable > 192
      && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                              (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                              192,
                                              CachedResidentAvailable) )
    {
      v7 = a2 + (int)CachedResidentAvailable - 192;
    }
LABEL_16:
    if ( v7 )
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v4 + 17280), v7);
    goto LABEL_2;
  }
  while ( 1 )
  {
    v11 = _InterlockedCompareExchange(
            (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
            CachedResidentAvailable + a2,
            CachedResidentAvailable);
    v10 = (_DWORD)CachedResidentAvailable == v11;
    LODWORD(CachedResidentAvailable) = v11;
    if ( v10 )
      break;
    if ( v11 == -1 || a2 + v11 > 0x100 )
      goto LABEL_13;
  }
LABEL_2:
  if ( (a3 & 1) != 0 )
    MiReturnCommit(v4, a2);
}
