/*
 * XREFs of MiDeleteUltraMapContext @ 0x1402682BC
 * Callers:
 *     MiReclaimUnusedUltraMdlMaps @ 0x140267820 (MiReclaimUnusedUltraMdlMaps.c)
 *     MiDeleteUltraThreadContext @ 0x140268284 (MiDeleteUltraThreadContext.c)
 *     MiGetUltraMdlContext @ 0x1405B719C (MiGetUltraMdlContext.c)
 * Callees:
 *     MiReleaseFreshPage @ 0x140268408 (MiReleaseFreshPage.c)
 *     MiReturnCommit @ 0x14028CE10 (MiReturnCommit.c)
 *     MiGetUltraMapping @ 0x1402C6260 (MiGetUltraMapping.c)
 */

void __fastcall MiDeleteUltraMapContext(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // r8
  _QWORD *v5; // rsi
  unsigned __int64 v6; // rbx
  struct _KPRCB *CurrentPrcb; // r8
  __int64 CachedResidentAvailable; // rdx
  bool v9; // zf
  signed __int32 v10; // eax

  if ( *(_BYTE *)(a1 + 24) )
  {
    v3 = 2LL;
    v4 = (unsigned int)a2 > 2 ? 1LL : MiLargePageSizes[(unsigned int)a2];
    MiGetUltraMapping(a1, a2, v4, 2LL);
    _InterlockedDecrement(&dword_140C530BC);
    v5 = (_QWORD *)(a1 + 8);
    v6 = 0LL;
    do
    {
      if ( *v5 != -1LL )
      {
        MiReleaseFreshPage(48LL * *v5 - 0x220000000000LL);
        ++v6;
        *v5 = -1LL;
      }
      ++v5;
      --v3;
    }
    while ( v3 );
    *(_BYTE *)(a1 + 24) = 0;
    if ( v6 )
    {
      MiReturnCommit(&MiSystemPartition, v6);
      CurrentPrcb = KeGetCurrentPrcb();
      CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
      if ( (_DWORD)CachedResidentAvailable == -1 )
        goto LABEL_24;
      if ( v6 + CachedResidentAvailable <= 0x100 )
      {
        do
        {
          if ( v6 >= 0x80000 )
            break;
          v10 = _InterlockedCompareExchange(
                  (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                  CachedResidentAvailable + v6,
                  CachedResidentAvailable);
          v9 = (_DWORD)CachedResidentAvailable == v10;
          LODWORD(CachedResidentAvailable) = v10;
          if ( v9 )
            return;
        }
        while ( v10 != -1 && v6 + v10 <= 0x100 );
      }
      if ( (int)CachedResidentAvailable > 192
        && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                                192,
                                                CachedResidentAvailable) )
      {
        v6 += (int)CachedResidentAvailable - 192;
      }
      if ( v6 )
LABEL_24:
        _InterlockedExchangeAdd64(&qword_140C591C0, v6);
    }
  }
}
