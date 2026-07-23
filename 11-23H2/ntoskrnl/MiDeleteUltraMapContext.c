/*
 * XREFs of MiDeleteUltraMapContext @ 0x1402E956C
 * Callers:
 *     MiReclaimUnusedUltraMdlMaps @ 0x14021DA18 (MiReclaimUnusedUltraMdlMaps.c)
 *     MiDeleteUltraThreadContext @ 0x1402E9534 (MiDeleteUltraThreadContext.c)
 *     MiGetUltraMdlContext @ 0x140661F1C (MiGetUltraMdlContext.c)
 * Callees:
 *     MiSearchNumaNodeTable @ 0x14026ED60 (MiSearchNumaNodeTable.c)
 *     MiGetPfnChannel @ 0x140287460 (MiGetPfnChannel.c)
 *     MiGetUltraMapping @ 0x1402D1CA0 (MiGetUltraMapping.c)
 *     MiReturnCommit @ 0x1402DC4E0 (MiReturnCommit.c)
 *     MiReleaseFreshPage @ 0x1402E81B0 (MiReleaseFreshPage.c)
 *     MiManageUltraSpacePageTable @ 0x14046F09C (MiManageUltraSpacePageTable.c)
 */

void __fastcall MiDeleteUltraMapContext(__int64 a1, unsigned int a2)
{
  __int64 v3; // rbp
  __int64 v4; // r8
  __int64 *v5; // rsi
  unsigned __int64 v6; // rdi
  __int64 v7; // r15
  struct _KPRCB *CurrentPrcb; // r8
  __int64 CachedResidentAvailable; // rdx
  bool v10; // zf
  signed __int32 v11; // eax
  int v12; // ebx
  int PfnChannel; // eax

  if ( *(_BYTE *)(a1 + 24) )
  {
    v3 = 2LL;
    v4 = a2 > 2 ? 1LL : MiLargePageSizes[a2];
    MiGetUltraMapping((unsigned __int64 *)a1, a2, v4, 2);
    _InterlockedDecrement(&dword_140C6852C);
    v5 = (__int64 *)(a1 + 8);
    v6 = 0LL;
    do
    {
      v7 = *v5;
      if ( *v5 != -1 )
      {
        if ( byte_140C65AE9 )
        {
          v12 = *((_DWORD *)MiSearchNumaNodeTable(0xAAAAAAAAAAAAAAABuLL * ((48 * v7) >> 4)) + 2);
          PfnChannel = MiGetPfnChannel(48 * v7 - 0x220000000000LL);
          MiManageUltraSpacePageTable(
            48 * v7 - 0x220000000000LL,
            (PfnChannel << byte_140C65A8E) | (v12 << byte_140C65A8D) | (unsigned int)v7 & dword_140C65AF8,
            1LL);
        }
        else
        {
          MiReleaseFreshPage(48 * v7 - 0x220000000000LL);
          ++v6;
        }
        *v5 = -1LL;
      }
      ++v5;
      --v3;
    }
    while ( v3 );
    *(_BYTE *)(a1 + 24) = 0;
    if ( v6 )
    {
      MiReturnCommit((__int64)&MiSystemPartition, v6);
      CurrentPrcb = KeGetCurrentPrcb();
      CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
      if ( (_DWORD)CachedResidentAvailable == -1 )
        goto LABEL_27;
      if ( v6 + CachedResidentAvailable <= 0x100 )
      {
        do
        {
          if ( v6 >= 0x80000 )
            break;
          v11 = _InterlockedCompareExchange(
                  (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                  CachedResidentAvailable + v6,
                  CachedResidentAvailable);
          v10 = (_DWORD)CachedResidentAvailable == v11;
          LODWORD(CachedResidentAvailable) = v11;
          if ( v10 )
            return;
        }
        while ( v11 != -1 && v6 + v11 <= 0x100 );
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
LABEL_27:
        _InterlockedExchangeAdd64(&qword_140C6F7C0, v6);
    }
  }
}
