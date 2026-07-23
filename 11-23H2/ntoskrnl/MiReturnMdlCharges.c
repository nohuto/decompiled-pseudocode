/*
 * XREFs of MiReturnMdlCharges @ 0x140623BA0
 * Callers:
 *     MiReturnMdlExcess @ 0x140623C78 (MiReturnMdlExcess.c)
 * Callees:
 *     MiReturnCommit @ 0x1402DC4E0 (MiReturnCommit.c)
 */

void __fastcall MiReturnMdlCharges(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v4; // r8
  struct _KPRCB *CurrentPrcb; // r9
  __int64 CachedResidentAvailable; // rdx
  bool v7; // zf
  signed __int32 v8; // eax

  MiReturnCommit(a1, a2);
  v4 = a2;
  if ( (unsigned __int16 *)a1 == MiSystemPartition )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
    if ( (_DWORD)CachedResidentAvailable != -1 )
    {
      if ( a2 + CachedResidentAvailable <= 0x100 && a2 < 0x80000 )
      {
        do
        {
          v8 = _InterlockedCompareExchange(
                 (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                 CachedResidentAvailable + a2,
                 CachedResidentAvailable);
          v7 = (_DWORD)CachedResidentAvailable == v8;
          LODWORD(CachedResidentAvailable) = v8;
          if ( v7 )
            goto LABEL_14;
        }
        while ( v8 != -1 && a2 + v8 <= 0x100 );
      }
      if ( (int)CachedResidentAvailable > 192
        && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                                192,
                                                CachedResidentAvailable) )
      {
        v4 = a2 + (int)CachedResidentAvailable - 192;
      }
    }
  }
  if ( v4 )
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 17280), v4);
  if ( (unsigned __int16 *)a1 == MiSystemPartition )
LABEL_14:
    _InterlockedExchangeAdd64(&qword_140C699B0, -(__int64)a2);
}
