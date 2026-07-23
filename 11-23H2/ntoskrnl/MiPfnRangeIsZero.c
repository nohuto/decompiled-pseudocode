/*
 * XREFs of MiPfnRangeIsZero @ 0x14038F364
 * Callers:
 *     MiFreedUnusedPfnPagesWorker @ 0x14038EEFC (MiFreedUnusedPfnPagesWorker.c)
 * Callees:
 *     MiFreeLargeZeroPages @ 0x140212098 (MiFreeLargeZeroPages.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140284B40 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiReturnCommit @ 0x1402DC4E0 (MiReturnCommit.c)
 *     MiGetContainingPageTable @ 0x1402E1500 (MiGetContainingPageTable.c)
 *     MiGetLeafVa @ 0x1402E5CB0 (MiGetLeafVa.c)
 *     MiInitializeLargePfnList @ 0x1402E9228 (MiInitializeLargePfnList.c)
 *     MiReplacePfnWithGapMapping @ 0x14038F6D8 (MiReplacePfnWithGapMapping.c)
 *     MiPreparePfnDatabasePageForFree @ 0x14038F784 (MiPreparePfnDatabasePageForFree.c)
 *     MiDemoteValidLargePageOneLevel @ 0x14038F884 (MiDemoteValidLargePageOneLevel.c)
 *     MiClearSystemAccessBits @ 0x14038FDE4 (MiClearSystemAccessBits.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

void __fastcall MiPfnRangeIsZero(unsigned __int64 LeafVa, unsigned __int64 a2)
{
  unsigned __int64 v4; // rdi
  int v5; // eax
  int v6; // esi
  unsigned __int64 v7; // rbx
  __int64 v8; // r12
  __int64 v9; // r14
  int v10; // ebp
  __int64 v11; // rax
  _QWORD *v12; // rdx
  _QWORD *v13; // rax
  _QWORD *v14; // rcx
  unsigned __int64 v15; // rcx
  struct _KPRCB *CurrentPrcb; // r9
  unsigned __int64 v17; // r8
  __int64 CachedResidentAvailable; // rdx
  bool v19; // zf
  signed __int32 v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rdx
  unsigned __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // [rsp+28h] [rbp-B0h] BYREF
  _QWORD v26[12]; // [rsp+30h] [rbp-A8h] BYREF

  memset(v26, 0, sizeof(v26));
  if ( a2 > MmPfnDatabase + (MxPfnAllocation << 12) )
    a2 = MmPfnDatabase + (MxPfnAllocation << 12);
  if ( LeafVa >= a2 )
    return;
  MiInitializeLargePfnList(v26);
  v4 = 0LL;
  do
  {
    v5 = MI_IS_PHYSICAL_ADDRESS(LeafVa);
    v6 = v5;
    v7 = ((LeafVa >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v8 = 1LL;
    LODWORD(v9) = 3;
    if ( v5 > 0 )
    {
      v21 = (unsigned int)v5;
      do
      {
        LODWORD(v9) = v9 - 1;
        v7 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        --v21;
      }
      while ( v21 );
      if ( (_DWORD)v9 != 3 )
      {
        v9 = (unsigned int)(v9 - 1);
        v8 = MiLargePageSizes[v9];
      }
    }
    if ( (((v8 << 12) - 1) & LeafVa) == 0 && a2 - LeafVa >= v8 << 12 )
    {
      if ( (*(_BYTE *)v7 & 0x20) != 0 && ((unsigned __int8)(1 << v5) & (unsigned __int8)byte_140C65A8F) != 0 )
      {
        v22 = 512 - ((v7 >> 3) & 0x1FF);
        v23 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        if ( v5 > 0 )
        {
          v24 = (unsigned int)v5;
          do
          {
            v23 = ((v23 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            --v24;
          }
          while ( v24 );
        }
        if ( ((v23 ^ v7) & 0xFFFFFFFFF000LL) == 0 )
          v22 = (__int64)(v23 - v7) >> 3;
        MiClearSystemAccessBits(v7, v22, (unsigned int)v5);
      }
      v10 = v6;
      while ( v6 < 4 )
      {
        v11 = MI_READ_PTE_LOCK_FREE(v7);
        v25 = v11;
        if ( v6 != v10 && (v11 & 0x20) != 0 && ((unsigned __int8)(1 << v6) & (unsigned __int8)byte_140C65A8F) != 0 )
          MiClearSystemAccessBits(v7, 1LL, 0LL);
        MiPreparePfnDatabasePageForFree(v7, (unsigned int)v6, (unsigned int)v9);
        v4 += v8;
        v12 = (_QWORD *)(48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v25) >> 12) & 0xFFFFFFFFFFLL)
                       - 0x220000000000LL);
        v13 = &v26[3 * (unsigned int)v9];
        v14 = (_QWORD *)v13[1];
        if ( (_QWORD *)*v14 != v13 )
          __fastfail(3u);
        v12[1] = v14;
        *v12 = v13;
        *v14 = v12;
        v13[1] = v12;
        MiReplacePfnWithGapMapping(v7, (unsigned int)v6);
        if ( (*(_QWORD *)(48 * MiGetContainingPageTable(v7 & 0xFFFFFFFFFFFFF000uLL) - 0x220000000000LL + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 )
        {
          v7 += 8LL;
          break;
        }
        v8 = 1LL;
        LODWORD(v9) = 3;
        v7 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        ++v6;
      }
      v15 = v7;
      goto LABEL_16;
    }
    if ( !(unsigned int)MiDemoteValidLargePageOneLevel(LeafVa) )
    {
      v15 = v7 + 8;
LABEL_16:
      LeafVa = MiGetLeafVa(v15);
    }
  }
  while ( LeafVa < a2 );
  MiFreeLargeZeroPages((int)&MiSystemPartition, (__int64)v26, 0);
  MiReturnCommit((__int64)&MiSystemPartition, v4);
  CurrentPrcb = KeGetCurrentPrcb();
  v17 = v4;
  CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
  if ( (_DWORD)CachedResidentAvailable != -1 )
  {
    if ( v4 + CachedResidentAvailable <= 0x100 )
    {
      do
      {
        if ( v4 >= 0x80000 )
          break;
        v20 = _InterlockedCompareExchange(
                (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                CachedResidentAvailable + v4,
                CachedResidentAvailable);
        v19 = (_DWORD)CachedResidentAvailable == v20;
        LODWORD(CachedResidentAvailable) = v20;
        if ( v19 )
          goto LABEL_22;
      }
      while ( v20 != -1 && v4 + v20 <= 0x100 );
    }
    if ( (int)CachedResidentAvailable > 192
      && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                              (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                              192,
                                              CachedResidentAvailable) )
    {
      v17 = v4 + (int)CachedResidentAvailable - 192;
    }
  }
  if ( v17 )
    _InterlockedExchangeAdd64(&qword_140C6F7C0, v17);
LABEL_22:
  _InterlockedExchangeAdd64(&qword_140C699D8, -(__int64)v4);
}
