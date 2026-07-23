/*
 * XREFs of MiGetFileHashPage @ 0x14066645C
 * Callers:
 *     MiMapPageFileHash @ 0x14066683C (MiMapPageFileHash.c)
 * Callees:
 *     MiGetPage @ 0x14026D5F0 (MiGetPage.c)
 *     MiReturnCommit @ 0x1402DC4E0 (MiReturnCommit.c)
 *     MiAcquireNonPagedResources @ 0x1402E45A4 (MiAcquireNonPagedResources.c)
 */

__int64 __fastcall MiGetFileHashPage(__int64 a1, unsigned int a2)
{
  unsigned __int64 v2; // rdi
  unsigned __int64 v3; // rbx
  __int64 Page; // rsi
  struct _KPRCB *CurrentPrcb; // r8
  __int64 CachedResidentAvailable; // rdx
  bool v8; // zf
  signed __int32 v9; // eax

  v2 = *(_QWORD *)(a1 + 248);
  v3 = 1LL;
  if ( (int)MiAcquireNonPagedResources(v2, 1uLL, 128LL, 2u) >= 0 )
  {
    Page = MiGetPage(v2, a2, 0x302u);
    if ( Page == -1 )
    {
      ++dword_140C67F54;
      MiReturnCommit(v2, 1LL);
      if ( (unsigned __int16 *)v2 != MiSystemPartition )
        goto LABEL_13;
      CurrentPrcb = KeGetCurrentPrcb();
      CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
      if ( (_DWORD)CachedResidentAvailable == -1 )
        goto LABEL_13;
      if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
      {
        do
        {
          v9 = _InterlockedCompareExchange(
                 (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                 CachedResidentAvailable + 1,
                 CachedResidentAvailable);
          v8 = (_DWORD)CachedResidentAvailable == v9;
          LODWORD(CachedResidentAvailable) = v9;
          if ( v8 )
            return Page;
        }
        while ( v9 != -1 && (unsigned __int64)(v9 + 1LL) <= 0x100 );
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
LABEL_13:
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v2 + 17280), v3);
    }
    else
    {
      _InterlockedAdd64(&qword_140C6A228, 1uLL);
    }
    return Page;
  }
  ++dword_140C67F54;
  return -1LL;
}
