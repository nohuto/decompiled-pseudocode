/*
 * XREFs of MiFreeMdlPageRun @ 0x1402C89B0
 * Callers:
 *     MiFreePagesFromMdl @ 0x1402EBB80 (MiFreePagesFromMdl.c)
 *     MiFreePartitionPageRun @ 0x140659D6C (MiFreePartitionPageRun.c)
 *     MiDeleteAweInfoPages @ 0x140A41B00 (MiDeleteAweInfoPages.c)
 *     MiAllocatePartitionPhysicalPages @ 0x140A4438C (MiAllocatePartitionPhysicalPages.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140242E20 (KeYieldProcessorEx.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402D3670 (MiInsertPageInFreeOrZeroedList.c)
 *     MiReturnCommit @ 0x1402DC250 (MiReturnCommit.c)
 *     MiFreeLargePageMemory @ 0x1402E7498 (MiFreeLargePageMemory.c)
 *     MiUpdateLargePageBitMap @ 0x1402E890C (MiUpdateLargePageBitMap.c)
 *     MiLockPageInline @ 0x1402EF680 (MiLockPageInline.c)
 *     MiCheckSlabPfnBitmap @ 0x140324550 (MiCheckSlabPfnBitmap.c)
 *     MiResidentPageDangleFree @ 0x14038CE6C (MiResidentPageDangleFree.c)
 *     MiConvertSmallPageRangeToLarge @ 0x1403B7D00 (MiConvertSmallPageRangeToLarge.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiFreeMdlPageRun(ULONG_PTR a1, unsigned __int64 a2, char a3, __int64 a4)
{
  __int64 v4; // r13
  __int64 v5; // r12
  unsigned __int64 v6; // r15
  bool v7; // zf
  __int64 v9; // rbp
  __int64 v10; // rbx
  unsigned __int8 CurrentIrql; // r14
  unsigned __int64 v12; // rdx
  void *v13; // r8
  _QWORD *v14; // rcx
  int v15; // eax
  __int64 v16; // rdx
  __int64 *v17; // rcx
  _DWORD *SchedulerAssist; // r8
  __int64 v19; // r9
  int v20; // ecx
  unsigned int v21; // ebp
  __int64 *v22; // rsi
  __int64 v23; // rbx
  __int64 v24; // r14
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rbx
  unsigned __int64 v30; // rsi
  unsigned __int8 v31; // al
  struct _KPRCB *v32; // r10
  _DWORD *v33; // r9
  int v34; // eax
  __int64 v35; // rax
  __int64 *v36; // rcx
  unsigned __int64 v37; // rsi
  unsigned __int64 v38; // rdx
  unsigned __int8 v39; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v41; // r9
  int v42; // eax
  volatile signed __int64 *v43; // r10
  unsigned __int64 v44; // r8
  struct _KPRCB *v45; // r9
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v47; // eax
  int v48; // [rsp+30h] [rbp-58h] BYREF
  void *v49; // [rsp+38h] [rbp-50h]
  unsigned __int64 v50; // [rsp+40h] [rbp-48h]
  int v51; // [rsp+A0h] [rbp+18h]

  v50 = -1LL;
  v4 = 0LL;
  v51 = a3 & 1;
  v5 = a4;
  v6 = a2;
  v7 = a2 == 0;
  while ( !v7 )
  {
    if ( (a1 & 0xF) != 0 )
    {
LABEL_4:
      if ( v50 != (a1 & 0xFFFFFFFFFFFFFE00uLL) )
      {
        v50 = a1 & 0xFFFFFFFFFFFFFE00uLL;
        v27 = 48 * a1 - 0x220000000000LL;
        v28 = *(_QWORD *)(qword_140C674C8 + 8 * ((*(_QWORD *)(v27 + 40) >> 43) & 0x3FFLL));
        if ( !(unsigned int)MiCheckSlabPfnBitmap(v27, 1LL) )
          MiUpdateLargePageBitMap(v28, a1 & 0xFFFFFE00, 512, 0, 0);
      }
      v9 = 1LL;
      v10 = 48 * a1 - 0x220000000000LL;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        if ( CurrentIrql == 2 )
          LODWORD(v19) = 4;
        else
          v19 = (-1LL << (CurrentIrql + 1)) & 4;
        SchedulerAssist[5] |= v19;
      }
      v48 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v48);
        while ( *(__int64 *)(v10 + 24) < 0 );
      }
      v12 = *(_QWORD *)(v10 + 40);
      v13 = *(void **)(qword_140C674C8 + 8 * ((v12 >> 43) & 0x3FF));
      v14 = (_QWORD *)qword_140C69988;
      v49 = v13;
      if ( qword_140C69988 )
      {
        if ( ((v12 >> 60) & 7) == 1 )
        {
          v37 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(48 * a1) >> 4);
          if ( qword_140C69988 )
          {
            do
            {
              v38 = v14[3];
              if ( v37 >= v38 )
              {
                if ( v37 - v38 < v14[4] )
                {
                  v9 = 0LL;
                  goto LABEL_65;
                }
                v14 = (_QWORD *)v14[1];
              }
              else
              {
                v14 = (_QWORD *)*v14;
              }
            }
            while ( v14 );
          }
        }
      }
      if ( !v51 || (v16 = a4) == 0 )
      {
        v15 = MiCheckSlabPfnBitmap(48 * a1 - 0x220000000000LL, 1LL);
        v13 = v49;
        if ( !v15 )
          goto LABEL_65;
        v16 = a4;
      }
      if ( *(_WORD *)(v10 + 32) != 2 )
      {
LABEL_65:
        *(_QWORD *)(v10 + 24) &= 0xC000000000000000uLL;
        v7 = *(_WORD *)(v10 + 32) == 2;
        *(_WORD *)(v10 + 32) -= 2;
        if ( v7 )
        {
          MiInsertPageInFreeOrZeroedList(a1);
          v13 = v49;
        }
        else
        {
          *(_BYTE *)(v10 + 34) |= 7u;
          *(_QWORD *)(v10 + 24) |= 0x4000000000000000uLL;
          v9 = 0LL;
        }
        goto LABEL_14;
      }
      v9 = 0LL;
      *(_BYTE *)(v10 + 34) = *(_BYTE *)(v10 + 34) & 0xF8 | 5;
      v17 = *(__int64 **)(v16 + 80);
      if ( *v17 != v16 + 72 )
        goto LABEL_86;
      *(_QWORD *)v10 = v16 + 72;
      *(_QWORD *)(v10 + 8) = v17;
      *v17 = v10;
      *(_QWORD *)(v16 + 80) = v10;
      ++*(_QWORD *)(v16 + 88);
LABEL_14:
      if ( CurrentIrql != 17 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( (_DWORD)KiIrqlFlags )
        {
          v39 = KeGetCurrentIrql();
          if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v39 <= 0xFu && CurrentIrql <= 0xFu && v39 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v41 = CurrentPrcb->SchedulerAssist;
            v42 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v7 = (v42 & v41[5]) == 0;
            v41[5] &= v42;
            if ( v7 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            v13 = v49;
          }
        }
        __writecr8(CurrentIrql);
      }
      if ( v9 )
      {
        MiReturnCommit(v13, v9);
        v43 = (volatile signed __int64 *)v49;
        v44 = v9;
        if ( v49 != &MiSystemPartition )
          goto LABEL_85;
        v45 = KeGetCurrentPrcb();
        CachedResidentAvailable = (int)v45->CachedResidentAvailable;
        if ( (_DWORD)CachedResidentAvailable == -1 )
          goto LABEL_85;
        if ( (unsigned __int64)(CachedResidentAvailable + v9) > 0x100 )
        {
LABEL_81:
          if ( (int)CachedResidentAvailable > 192
            && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                    (volatile signed __int32 *)&v45->CachedResidentAvailable,
                                                    192,
                                                    CachedResidentAvailable) )
          {
            v44 = v9 + (int)CachedResidentAvailable - 192;
          }
          if ( v44 )
LABEL_85:
            _InterlockedExchangeAdd64(v43 + 2160, v44);
        }
        else
        {
          while ( 1 )
          {
            v47 = _InterlockedCompareExchange(
                    (volatile signed __int32 *)&v45->CachedResidentAvailable,
                    CachedResidentAvailable + v9,
                    CachedResidentAvailable);
            v7 = (_DWORD)CachedResidentAvailable == v47;
            LODWORD(CachedResidentAvailable) = v47;
            if ( v7 )
              break;
            if ( v47 == -1 || (unsigned __int64)(v47 + v9) > 0x100 )
              goto LABEL_81;
          }
        }
      }
      v5 = a4;
      v4 += v9;
      ++a1;
      v7 = --v6 == 0;
    }
    else
    {
      v20 = 0;
      if ( (KeFeatureBits & 0x2000000000LL) != 0 )
      {
        v21 = 0;
      }
      else
      {
        v20 = 1;
        v21 = 1;
      }
      v22 = &MiLargePageSizes[v20];
      while ( 1 )
      {
        v23 = *v22;
        if ( v6 >= *v22 && ((v23 - 1) & a1) == 0 )
        {
          v24 = 48 * a1 - 0x220000000000LL;
          if ( !(unsigned int)MiCheckSlabPfnBitmap(v24, *v22) )
          {
            if ( (unsigned int)MiResidentPageDangleFree(a1, v21) )
              break;
          }
        }
        ++v21;
        ++v22;
        if ( v21 >= 3 )
          goto LABEL_4;
      }
      if ( v51 && v5 )
      {
        MiConvertSmallPageRangeToLarge(a1);
        v30 = (unsigned __int8)MiLockPageInline(v24);
        *(_BYTE *)(v24 + 34) = *(_BYTE *)(v24 + 34) & 0xF8 | 5;
        _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( (_DWORD)KiIrqlFlags )
        {
          v31 = KeGetCurrentIrql();
          if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v31 <= 0xFu && (unsigned __int8)v30 <= 0xFu && v31 >= 2u )
          {
            v32 = KeGetCurrentPrcb();
            v33 = v32->SchedulerAssist;
            v34 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v30 + 1));
            v7 = (v34 & v33[5]) == 0;
            v33[5] &= v34;
            if ( v7 )
              KiRemoveSystemWorkPriorityKick(v32);
          }
        }
        __writecr8(v30);
        v35 = v5 + 24LL * v21;
        v36 = *(__int64 **)(v35 + 8);
        if ( *v36 != v35 )
LABEL_86:
          __fastfail(3u);
        *(_QWORD *)v24 = v35;
        *(_QWORD *)(v24 + 8) = v36;
        *v36 = v24;
        *(_QWORD *)(v35 + 8) = v24;
        ++*(_QWORD *)(v35 + 16);
        v26 = 0LL;
      }
      else
      {
        v26 = MiFreeLargePageMemory(a1, v25, (unsigned int)(v51 + 6));
      }
      v4 += v26;
      a1 += v23;
      v6 -= v23;
      v7 = v6 == 0;
    }
  }
  return v4;
}
