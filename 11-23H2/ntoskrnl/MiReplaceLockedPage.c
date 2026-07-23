/*
 * XREFs of MiReplaceLockedPage @ 0x1406371E4
 * Callers:
 *     MiTrimSharedPageFromViews @ 0x1402EFEEC (MiTrimSharedPageFromViews.c)
 * Callees:
 *     MiTbFlushType @ 0x14025BD3C (MiTbFlushType.c)
 *     MiGetPage @ 0x14026D5F0 (MiGetPage.c)
 *     MiSearchNumaNodeTable @ 0x14026ED60 (MiSearchNumaNodeTable.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x140285C64 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiGetPfnChannel @ 0x140287460 (MiGetPfnChannel.c)
 *     MiUnlockProtoPoolPage @ 0x1402DB180 (MiUnlockProtoPoolPage.c)
 *     MiLockProtoPoolPage @ 0x1402DD490 (MiLockProtoPoolPage.c)
 *     MiReleaseFreshPage @ 0x1402E81B0 (MiReleaseFreshPage.c)
 *     MiTradeActivePage @ 0x1402EB0B4 (MiTradeActivePage.c)
 *     MiCheckSlabPfnBitmap @ 0x1403249C0 (MiCheckSlabPfnBitmap.c)
 *     MiCanPageMove @ 0x1403BE08C (MiCanPageMove.c)
 */

__int64 __fastcall MiReplaceLockedPage(__int64 a1, ULONG_PTR a2, unsigned __int64 a3, unsigned int a4, unsigned int a5)
{
  int v9; // edi
  int PfnChannel; // eax
  __int64 Page; // rax
  __int64 v12; // rbx
  __int64 v13; // rdi
  unsigned int v14; // eax
  unsigned __int8 v16; // [rsp+68h] [rbp+10h] BYREF

  if ( (*(_QWORD *)(a2 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1 && *(_WORD *)(a2 + 32) == 1 && MiCanPageMove(a2) )
  {
    v16 = 17;
    v9 = *((_DWORD *)MiSearchNumaNodeTable(0xAAAAAAAAAAAAAAABuLL * ((__int64)(a2 + 0x220000000000LL) >> 4)) + 2);
    PfnChannel = MiGetPfnChannel(a2);
    Page = MiGetPage(
             *(_QWORD *)(qword_140C673C8 + 8 * ((*(_QWORD *)(a2 + 40) >> 43) & 0x3FFLL)),
             (PfnChannel << byte_140C65A8E) | (v9 << byte_140C65A8D) | (-1431655765
                                                                      * ((__int64)(a2 + 0x220000000000LL) >> 4)) & dword_140C65AF8,
             a4);
    if ( Page != -1 )
    {
      v12 = 48 * Page - 0x220000000000LL;
      v13 = MiLockProtoPoolPage(*(_QWORD *)(a2 + 8) | 0x8000000000000000uLL, &v16);
      if ( v13 )
      {
        if ( !(unsigned int)MiCheckSlabPfnBitmap(a2, 1LL, 0) )
        {
          v14 = MiTbFlushType(a1);
          if ( (unsigned int)MiTradeActivePage(a2, v12, a3, v14, a5, 0) )
          {
            MiUnlockProtoPoolPage(v13, v16);
            *(_QWORD *)(a2 + 16) = ZeroPte;
            MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)(a2 + 16));
            MiReleaseFreshPage(a2);
            return 1LL;
          }
        }
        MiUnlockProtoPoolPage(v13, v16);
      }
      MiReleaseFreshPage(v12);
    }
  }
  return 0LL;
}
