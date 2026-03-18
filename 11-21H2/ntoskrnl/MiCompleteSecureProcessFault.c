/*
 * XREFs of MiCompleteSecureProcessFault @ 0x1405A6E74
 * Callers:
 *     MiAllocateWsle @ 0x140322F10 (MiAllocateWsle.c)
 *     MiValidVirtualizationFault @ 0x14045C52A (MiValidVirtualizationFault.c)
 * Callees:
 *     MiReleaseFreshPage @ 0x140268408 (MiReleaseFreshPage.c)
 *     MiAbortCombineScan @ 0x140268998 (MiAbortCombineScan.c)
 *     MiMarkPfnVerified @ 0x14026C644 (MiMarkPfnVerified.c)
 *     MiIsPfnFromSlabAllocation @ 0x140277C50 (MiIsPfnFromSlabAllocation.c)
 *     MiSearchNumaNodeTable @ 0x1402C1550 (MiSearchNumaNodeTable.c)
 *     MiReleasePageFileInfo @ 0x1402E20D0 (MiReleasePageFileInfo.c)
 *     MiGetPfnChannel @ 0x1402E8990 (MiGetPfnChannel.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x1402E89B0 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiTradeActivePage @ 0x1402EA95C (MiTradeActivePage.c)
 *     MiGetSlabPage @ 0x1402EB440 (MiGetSlabPage.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiCaptureDirtyBitToPfn @ 0x14033C2A0 (MiCaptureDirtyBitToPfn.c)
 */

__int64 __fastcall MiCompleteSecureProcessFault(__m128i **a1, __int64 a2, __int64 a3, __int64 a4)
{
  __m128i *v4; // rsi
  __int64 v6; // r12
  unsigned __int64 v7; // r15
  unsigned __int64 v8; // rbp
  int v10; // ebx
  int PfnChannel; // eax
  _QWORD *v12; // r13
  __int64 SlabPage; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __m128i *v17; // rbx
  __int64 v18; // rax
  unsigned __int64 v19; // rax
  __m128i **v20; // [rsp+70h] [rbp+8h] BYREF
  _QWORD *v21; // [rsp+78h] [rbp+10h]
  int v22; // [rsp+88h] [rbp+20h] BYREF

  v21 = (_QWORD *)a2;
  v20 = a1;
  v4 = *a1;
  if ( (*a1)[2].m128i_i64[1] >= 0 )
  {
    v22 = 0;
    while ( _interlockedbittestandset64(&v4[1].m128i_i32[2], 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v22, a2, a3, a4);
      while ( v4[1].m128i_i64[1] < 0 );
    }
    v6 = *(_QWORD *)(qword_140C51F48 + 8 * (((unsigned __int64)v4[2].m128i_i64[1] >> 43) & 0x3FF));
    v7 = v4->m128i_i64[1] | 0x8000000000000000uLL;
    v8 = (__int64)(v7 << 25) >> 16;
    if ( (v4[2].m128i_i8[2] & 8) != 0 )
    {
      *(_DWORD *)(a3 + 56) |= 0x40u;
      _InterlockedAnd64(&v4[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
      return 0LL;
    }
    if ( (*(_DWORD *)(v6 + 4) & 8) != 0 && !MiIsPfnFromSlabAllocation((__int64)v4) && v8 < 0xFFFF800000000000uLL )
    {
      _InterlockedAnd64(&v4[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
      v10 = *((_DWORD *)MiSearchNumaNodeTable(0xAAAAAAAAAAAAAAABuLL * ((__int64)v4[0x22000000000LL].m128i_i64 >> 4)) + 2);
      PfnChannel = MiGetPfnChannel((__int64)v4);
      v12 = (_QWORD *)(a3 + 48);
      SlabPage = MiGetSlabPage(
                   v6,
                   2,
                   (PfnChannel << byte_140C506CD) | dword_140C50738 & (-1431655765
                                                                     * ((__int64)v4[0x22000000000LL].m128i_i64 >> 4)) | (v10 << byte_140C506CC),
                   0,
                   v12,
                   0);
      if ( SlabPage == -1 )
      {
        if ( *v12 )
          return 0LL;
      }
      else
      {
        v17 = (__m128i *)(48 * SlabPage - 0x220000000000LL);
        if ( (unsigned int)MiTradeActivePage(v4, v17, v8, 1u, 0, 0) )
        {
          v4[1].m128i_i64[0] = ZeroPte;
          MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)&v4[1]);
          MiReleaseFreshPage((__int64)v4);
          v4 = v17;
          v18 = MI_READ_PTE_LOCK_FREE(v7);
          *v21 = v18;
          *v20 = v17;
        }
        else
        {
          MiReleaseFreshPage((__int64)v17);
        }
      }
      LODWORD(v20) = 0;
      while ( _interlockedbittestandset64(&v4[1].m128i_i32[2], 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v20, v14, v15, v16);
        while ( v4[1].m128i_i64[1] < 0 );
      }
    }
    if ( (((unsigned __int64)v4[2].m128i_i64[1] >> 60) & 7) != 3 )
    {
      MiAbortCombineScan((__int64)v4);
      MiMarkPfnVerified((ULONG_PTR)v4, 4);
    }
    v19 = MiCaptureDirtyBitToPfn((__int64)v4);
    _InterlockedAnd64(&v4[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
    if ( v19 )
      MiReleasePageFileInfo(v6, v19, 1);
  }
  return 1LL;
}
