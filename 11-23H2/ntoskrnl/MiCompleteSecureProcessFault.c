/*
 * XREFs of MiCompleteSecureProcessFault @ 0x1406460E8
 * Callers:
 *     MiAllocateWsle @ 0x14026BA60 (MiAllocateWsle.c)
 *     MiValidVirtualizationFault @ 0x14046CD22 (MiValidVirtualizationFault.c)
 * Callees:
 *     MiMarkPfnVerified @ 0x140219BD0 (MiMarkPfnVerified.c)
 *     MiAbortCombineScan @ 0x14021AAAC (MiAbortCombineScan.c)
 *     MiGetSlabPage @ 0x14023BE40 (MiGetSlabPage.c)
 *     KeYieldProcessorEx @ 0x140242F10 (KeYieldProcessorEx.c)
 *     MiSearchNumaNodeTable @ 0x14026ED60 (MiSearchNumaNodeTable.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiCaptureDirtyBitToPfn @ 0x140283390 (MiCaptureDirtyBitToPfn.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x140285C64 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiGetPfnChannel @ 0x140287460 (MiGetPfnChannel.c)
 *     MiReleasePageFileInfo @ 0x14029556C (MiReleasePageFileInfo.c)
 *     MiReleaseFreshPage @ 0x1402E81B0 (MiReleaseFreshPage.c)
 *     MiTradeActivePage @ 0x1402EB0B4 (MiTradeActivePage.c)
 *     MiCheckSlabPfnBitmap @ 0x1403249C0 (MiCheckSlabPfnBitmap.c)
 */

__int64 __fastcall MiCompleteSecureProcessFault(__int64 *a1, __int64 *a2, __int64 a3)
{
  ULONG_PTR v3; // rsi
  __int64 v5; // r12
  unsigned __int64 v6; // r15
  unsigned __int64 v7; // rbp
  int v9; // ebx
  int PfnChannel; // eax
  __int64 *v11; // r13
  __int64 SlabPage; // rax
  __int64 v13; // rbx
  __int64 v14; // rax
  unsigned __int64 v15; // rax
  __int64 *v16; // [rsp+70h] [rbp+8h] BYREF
  __int64 *v17; // [rsp+78h] [rbp+10h]
  int v18; // [rsp+88h] [rbp+20h] BYREF

  v17 = a2;
  v16 = a1;
  v3 = *a1;
  if ( *(__int64 *)(*a1 + 40) >= 0 )
  {
    v18 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v3 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v18);
      while ( *(__int64 *)(v3 + 24) < 0 );
    }
    v5 = *(_QWORD *)(qword_140C673C8 + 8 * ((*(_QWORD *)(v3 + 40) >> 43) & 0x3FFLL));
    v6 = *(_QWORD *)(v3 + 8) | 0x8000000000000000uLL;
    v7 = (__int64)(v6 << 25) >> 16;
    if ( (*(_BYTE *)(v3 + 34) & 8) != 0 )
    {
      *(_DWORD *)(a3 + 56) |= 0x40u;
      _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      return 0LL;
    }
    if ( (*(_DWORD *)(v5 + 4) & 8) != 0 && !(unsigned int)MiCheckSlabPfnBitmap(v3, 1LL, 0) && v7 < 0xFFFF800000000000uLL )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v9 = *((_DWORD *)MiSearchNumaNodeTable(0xAAAAAAAAAAAAAAABuLL * ((__int64)(v3 + 0x220000000000LL) >> 4)) + 2);
      PfnChannel = MiGetPfnChannel(v3);
      v11 = (__int64 *)(a3 + 48);
      SlabPage = MiGetSlabPage(
                   v5,
                   2u,
                   (PfnChannel << byte_140C65A8E) | dword_140C65AF8 & (-1431655765
                                                                     * ((__int64)(v3 + 0x220000000000LL) >> 4)) | (v9 << byte_140C65A8D),
                   0LL,
                   v11);
      if ( SlabPage == -1 )
      {
        if ( *v11 )
          return 0LL;
      }
      else
      {
        v13 = 48 * SlabPage - 0x220000000000LL;
        if ( (unsigned int)MiTradeActivePage(v3, v13, v7, 1u, 0, 0) )
        {
          *(_QWORD *)(v3 + 16) = ZeroPte;
          MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)(v3 + 16));
          MiReleaseFreshPage(v3);
          v3 = v13;
          v14 = MI_READ_PTE_LOCK_FREE(v6);
          *v17 = v14;
          *v16 = v13;
        }
        else
        {
          MiReleaseFreshPage(v13);
        }
      }
      LODWORD(v16) = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v3 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v16);
        while ( *(__int64 *)(v3 + 24) < 0 );
      }
    }
    if ( ((*(_QWORD *)(v3 + 40) >> 60) & 7) != 3 )
    {
      MiAbortCombineScan(v3);
      MiMarkPfnVerified(v3, 4);
    }
    v15 = MiCaptureDirtyBitToPfn(v3);
    _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v15 )
      MiReleasePageFileInfo(v5, v15, 1);
  }
  return 1LL;
}
