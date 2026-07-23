/*
 * XREFs of MiRebuildLargePage @ 0x14046E188
 * Callers:
 *     MiRebuildLargePages @ 0x14065DE60 (MiRebuildLargePages.c)
 *     MmManagePartitionCreateLargePages @ 0x140A45644 (MmManagePartitionCreateLargePages.c)
 *     MmBuildLargePages @ 0x140A45FD8 (MmBuildLargePages.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140242E20 (KeYieldProcessorEx.c)
 *     MiInsertLargePageInNodeList @ 0x1402D6BE0 (MiInsertLargePageInNodeList.c)
 *     MiReturnCommit @ 0x1402DC250 (MiReturnCommit.c)
 *     MiNodeFreeZeroPages @ 0x1402E8524 (MiNodeFreeZeroPages.c)
 *     MiUpdateLargePageBitMap @ 0x1402E890C (MiUpdateLargePageBitMap.c)
 *     MiReferencePageRuns @ 0x1403570E0 (MiReferencePageRuns.c)
 *     MiDereferencePageRunsEx @ 0x1403575E4 (MiDereferencePageRunsEx.c)
 *     MiConvertSmallPageRangeToLarge @ 0x1403B7D00 (MiConvertSmallPageRangeToLarge.c)
 *     MiFindContiguousPagesEx @ 0x1403BA9B8 (MiFindContiguousPagesEx.c)
 *     MiGetNodeStandbyPageCount @ 0x14046C7CA (MiGetNodeStandbyPageCount.c)
 *     MiFindRebuildCandidate @ 0x14046E012 (MiFindRebuildCandidate.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 */

unsigned __int64 __fastcall MiRebuildLargePage(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned __int64 a4,
        int a5)
{
  unsigned __int64 v5; // r14
  __int64 v6; // rsi
  __int64 v8; // rbx
  unsigned __int8 *v9; // r15
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // r9
  unsigned __int64 v13; // r13
  unsigned int *v14; // r8
  int v15; // edx
  __int64 v16; // rcx
  int v17; // ecx
  int v18; // eax
  __int64 v19; // rdi
  unsigned __int8 CurrentIrql; // si
  _DWORD *SchedulerAssist; // r9
  __int64 v22; // rdx
  unsigned __int64 inserted; // rdi
  unsigned __int8 v24; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v26; // r9
  int v27; // eax
  bool v28; // zf
  struct _KPRCB *v29; // r8
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v31; // eax
  unsigned int v32; // r14d
  unsigned __int64 v33; // rdi
  unsigned int v34; // esi
  _QWORD *v35; // rbx
  __int64 v36; // r8
  __int64 v37; // rdx
  __int64 *v38; // r9
  _QWORD *v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rax
  __int64 v42; // rax
  unsigned int v43; // r8d
  int v44; // r8d
  __int64 RebuildCandidate; // [rsp+78h] [rbp-61h] BYREF
  int v47; // [rsp+80h] [rbp-59h]
  unsigned __int64 v48; // [rsp+88h] [rbp-51h]
  unsigned int *v49; // [rsp+90h] [rbp-49h]
  int v50; // [rsp+98h] [rbp-41h] BYREF
  _QWORD *v51; // [rsp+A0h] [rbp-39h]
  ULONG_PTR v52; // [rsp+A8h] [rbp-31h]
  __int128 v53; // [rsp+B0h] [rbp-29h] BYREF
  __int128 v54; // [rsp+C0h] [rbp-19h]
  struct _KTHREAD *CurrentThread; // [rsp+D0h] [rbp-9h]
  unsigned __int8 *v56; // [rsp+D8h] [rbp-1h]
  int v57; // [rsp+138h] [rbp+5Fh]

  RebuildCandidate = 0LL;
  v5 = 0LL;
  v6 = (unsigned int)MmNumberOfChannels;
  v8 = a2;
  v9 = 0LL;
  v10 = a3;
  CurrentThread = KeGetCurrentThread();
  v53 = 0LL;
  v48 = 0LL;
  v54 = 0LL;
  v47 = MmNumberOfChannels;
  v11 = MiReferencePageRuns(a1, 1u);
  v12 = qword_140C6F788;
  v13 = MiLargePageSizes[v10];
  v14 = (unsigned int *)v11;
  v15 = 0;
  v49 = (unsigned int *)v11;
  v16 = *(_QWORD *)(a1 + 16) + 25408 * v8;
  v51 = (_QWORD *)v16;
  v52 = qword_140C6F788;
  v57 = 0;
  if ( (unsigned int)v6 > 1 )
  {
    v9 = (unsigned __int8 *)(v16 + 23033);
    v15 = *(unsigned __int8 *)(v16 + 23033);
    v57 = v15;
  }
  v56 = &v9[v6];
  if ( v9 != &v9[v6] )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) != 0 )
          goto LABEL_59;
        RebuildCandidate = MiFindRebuildCandidate(a1, v8, v15, v13, v12, v14, a5);
        if ( RebuildCandidate != -1 )
          break;
LABEL_63:
        ++v9;
        if ( (unsigned int)v6 <= 1 )
        {
          v15 = v57;
        }
        else
        {
          v15 = *v9;
          v57 = v15;
        }
        v14 = v49;
        v12 = v52;
        if ( v9 == v56 )
          goto LABEL_59;
      }
      v17 = 1082130432;
      if ( v13 == 512 )
      {
        v17 = 1115684864;
      }
      else if ( v13 == 16 )
      {
        v17 = 1098907648;
      }
      v18 = v17 | 0x8000000;
      if ( !a5 )
        v18 = v17;
      if ( (int)MiFindContiguousPagesEx(
                  a1,
                  RebuildCandidate,
                  RebuildCandidate + v13 - 1,
                  v13,
                  0,
                  v13,
                  1u,
                  v8,
                  v57,
                  v18,
                  0,
                  0LL,
                  &RebuildCandidate) >= 0 )
        break;
LABEL_45:
      v32 = MmNumberOfChannels;
      v33 = 0LL;
      v34 = 0;
      if ( MmNumberOfChannels )
      {
        v35 = v51;
        do
          v33 += MiNodeFreeZeroPages(v35, v34++, 0);
        while ( v34 < v32 );
        LODWORD(v8) = a2;
      }
      if ( v13 > 0x10 )
      {
        v36 = 0LL;
        v37 = a3 + 1;
        if ( (unsigned int)v37 <= 2 )
        {
          v38 = &MiLargePageSizes[v37];
          v39 = &v51[134 * (unsigned int)v37];
          v40 = (unsigned int)(3 - v37);
          do
          {
            v41 = *v39 + v39[1];
            v39 += 134;
            v42 = *v38++ * v41;
            v36 += v42;
            --v40;
          }
          while ( v40 );
        }
        v33 += v36;
      }
      LODWORD(v6) = v47;
      if ( v33 >= 0x1000 )
      {
        v5 = v48;
      }
      else
      {
        v43 = 0;
        if ( v47 )
        {
          do
          {
            v33 += MiGetNodeStandbyPageCount(a1, v8, v43);
            v43 = v44 + 1;
          }
          while ( v43 < (unsigned int)v6 );
        }
        v5 = v48;
        if ( v33 < a4 - v48 + 0x8000 )
        {
LABEL_58:
          v14 = v49;
          goto LABEL_59;
        }
      }
      if ( !RebuildCandidate )
        goto LABEL_63;
      v15 = v57;
      v12 = RebuildCandidate - 1;
      v14 = v49;
      v52 = RebuildCandidate - 1;
    }
    if ( v13 >= 0x200 )
      MiUpdateLargePageBitMap(a1, RebuildCandidate, v13, 0, 1);
    MiConvertSmallPageRangeToLarge(RebuildCandidate, a3);
    v19 = 48 * RebuildCandidate - 0x220000000000LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      if ( CurrentIrql == 2 )
        LODWORD(v22) = 4;
      else
        v22 = (-1LL << (CurrentIrql + 1)) & 4;
      SchedulerAssist[5] |= v22;
    }
    v50 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v19 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v50);
      while ( *(__int64 *)(v19 + 24) < 0 );
    }
    v54 = 0LL;
    *(_QWORD *)&v53 = RebuildCandidate;
    *((_QWORD *)&v53 + 1) = 1LL;
    LOBYTE(v54) = 2;
    inserted = MiInsertLargePageInNodeList((__int64)&v53);
    if ( (_DWORD)KiIrqlFlags )
    {
      v24 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v24 <= 0xFu && CurrentIrql <= 0xFu && v24 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v26 = CurrentPrcb->SchedulerAssist;
        v27 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v28 = (v27 & v26[5]) == 0;
        v26[5] &= v27;
        if ( v28 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(CurrentIrql);
    MiReturnCommit(a1, inserted);
    if ( (_UNKNOWN *)a1 == &MiSystemPartition )
    {
      v29 = KeGetCurrentPrcb();
      CachedResidentAvailable = (int)v29->CachedResidentAvailable;
      if ( (_DWORD)CachedResidentAvailable != -1 )
      {
        if ( inserted + CachedResidentAvailable <= 0x100 && inserted < 0x80000 )
        {
          while ( 1 )
          {
            v31 = _InterlockedCompareExchange(
                    (volatile signed __int32 *)&v29->CachedResidentAvailable,
                    inserted + CachedResidentAvailable,
                    CachedResidentAvailable);
            v28 = (_DWORD)CachedResidentAvailable == v31;
            LODWORD(CachedResidentAvailable) = v31;
            if ( v28 )
              break;
            if ( v31 == -1 || inserted + v31 > 0x100 )
              goto LABEL_39;
          }
LABEL_44:
          v5 += v13;
          v48 = v5;
          if ( v5 >= a4 )
            goto LABEL_58;
          goto LABEL_45;
        }
LABEL_39:
        if ( (int)CachedResidentAvailable > 192
          && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                  (volatile signed __int32 *)&v29->CachedResidentAvailable,
                                                  192,
                                                  CachedResidentAvailable) )
        {
          inserted += (int)CachedResidentAvailable - 192;
        }
      }
    }
    if ( inserted )
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 17280), inserted);
    goto LABEL_44;
  }
LABEL_59:
  MiDereferencePageRunsEx((__int64)v14, 1);
  return v5;
}
