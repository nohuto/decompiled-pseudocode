/*
 * XREFs of MiGetPageTablePages @ 0x1402E4348
 * Callers:
 *     MiCreateSystemPageTable @ 0x1402E46A0 (MiCreateSystemPageTable.c)
 *     MiDemoteValidLargePageOneLevel @ 0x14038F884 (MiDemoteValidLargePageOneLevel.c)
 *     MmCreateShadowMapping @ 0x14081DE80 (MmCreateShadowMapping.c)
 * Callees:
 *     MiGetSlabPage @ 0x14023BE40 (MiGetSlabPage.c)
 *     MiGetPage @ 0x14026D5F0 (MiGetPage.c)
 *     MiReturnCommit @ 0x1402DC4E0 (MiReturnCommit.c)
 *     MiSetPfnTbFlushStamp @ 0x1402E18C0 (MiSetPfnTbFlushStamp.c)
 *     MiSufficientAvailablePages @ 0x1402E383C (MiSufficientAvailablePages.c)
 *     MiObtainSystemCharges @ 0x1402E44E0 (MiObtainSystemCharges.c)
 *     MiReleaseFreshPage @ 0x1402E81B0 (MiReleaseFreshPage.c)
 *     MiReturnSystemCharges @ 0x140340C88 (MiReturnSystemCharges.c)
 */

__int64 __fastcall MiGetPageTablePages(__int64 a1, unsigned __int64 a2, int a3, _QWORD *a4)
{
  int v4; // eax
  __int64 v6; // rsi
  _QWORD *v8; // r14
  int v9; // r13d
  int v10; // r12d
  int v11; // r15d
  unsigned int v12; // ebx
  __int64 SlabPage; // rax
  _QWORD *v14; // rbx
  _QWORD *v16; // rbx
  unsigned __int64 v17; // [rsp+70h] [rbp+8h]
  int v18; // [rsp+80h] [rbp+18h]

  v18 = a3;
  v4 = *(_DWORD *)(a1 + 128);
  v6 = *(_QWORD *)(a1 + 96);
  *a4 = 0LL;
  v8 = 0LL;
  if ( (v4 & 8) != 0 || !*(_QWORD *)(v6 + 17816) )
  {
    v9 = 0;
  }
  else
  {
    if ( !(unsigned int)MiObtainSystemCharges(v6, a2, *(unsigned int *)(a1 + 120)) )
      return 3221225773LL;
    *(_QWORD *)(a1 + 104) += a2;
    v9 = 1;
    a3 = v18;
  }
  v17 = 0LL;
  v10 = (*(_DWORD *)(a1 + 128) & 0x400) != 0;
  v11 = -v10 & 0x10;
  if ( !a2 )
  {
LABEL_9:
    *a4 = v8;
    return 0LL;
  }
  while ( 1 )
  {
    v12 = *(_DWORD *)(a1 + 348) | _InterlockedExchangeAdd(*(volatile signed __int32 **)(a1 + 336), 1u) & *(_DWORD *)(a1 + 344);
    if ( !a3 )
      break;
    if ( *(_DWORD *)(a1 + 120) != 4 )
      goto LABEL_12;
    SlabPage = MiGetSlabPage(v6, 6u, v12, (unsigned int)(v10 + 24), 0LL);
    if ( SlabPage == -1 )
      goto LABEL_12;
LABEL_8:
    v14 = (_QWORD *)(48 * SlabPage - 0x220000000000LL);
    MiSetPfnTbFlushStamp((__int64)v14, 0, 0);
    *v14 = v8;
    ++v17;
    v8 = v14;
    if ( v17 >= a2 )
      goto LABEL_9;
    a3 = v18;
  }
  SlabPage = MiGetSlabPage(v6, 6u, v12, (unsigned int)(v10 + 24), 0LL);
  if ( SlabPage != -1 )
    goto LABEL_8;
  if ( (MiFlags & 0x400000000LL) != 0 )
    _InterlockedIncrement64((volatile signed __int64 *)(v6 + 16336));
LABEL_12:
  SlabPage = MiGetPage(v6, v12, v11 + 33546);
  if ( SlabPage != -1 )
    goto LABEL_8;
  if ( (*(_DWORD *)(a1 + 128) & 0x10) != 0 )
  {
    if ( (unsigned int)MiSufficientAvailablePages(v6, 0x60uLL) )
    {
      SlabPage = MiGetPage(v6, v12, (v11 + 33546) | 4u);
      if ( SlabPage != -1 )
        goto LABEL_8;
    }
  }
  if ( v9 )
  {
    MiReturnCommit(v6, a2);
    MiReturnSystemCharges(v6, a2, *(unsigned int *)(a1 + 120));
    *(_QWORD *)(a1 + 104) -= a2;
  }
  if ( v8 )
  {
    do
    {
      v16 = (_QWORD *)*v8;
      MiReleaseFreshPage(v8);
      v8 = v16;
    }
    while ( v16 );
  }
  return 3221225495LL;
}
