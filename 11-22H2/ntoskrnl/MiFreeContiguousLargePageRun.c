/*
 * XREFs of MiFreeContiguousLargePageRun @ 0x140649E28
 * Callers:
 *     MiFreeAwePagesFromMdl @ 0x140649D80 (MiFreeAwePagesFromMdl.c)
 *     MiFreePhysicalPageChain @ 0x14064A1E0 (MiFreePhysicalPageChain.c)
 *     MiDeleteAweInfoPages @ 0x140A41B00 (MiDeleteAweInfoPages.c)
 * Callees:
 *     MiReturnCommit @ 0x1402DC250 (MiReturnCommit.c)
 *     MiGetPfnPageSizeIndex @ 0x1402E88E0 (MiGetPfnPageSizeIndex.c)
 *     MiUpdateLargePageBitMap @ 0x1402E890C (MiUpdateLargePageBitMap.c)
 *     MiLockPageInline @ 0x1402EF680 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     MiClearAweLargePageMetadata @ 0x140649658 (MiClearAweLargePageMetadata.c)
 *     MiFreePhysicalRange @ 0x14064A864 (MiFreePhysicalRange.c)
 *     MiReturnCrossPartitionCharges @ 0x14065B3C4 (MiReturnCrossPartitionCharges.c)
 *     MiCoalesceActivePagesIntoFree @ 0x14065D55C (MiCoalesceActivePagesIntoFree.c)
 *     MiFreeLargePages @ 0x1406682C0 (MiFreeLargePages.c)
 */

unsigned __int64 __fastcall MiFreeContiguousLargePageRun(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r14
  unsigned __int64 v4; // rbp
  unsigned __int64 v5; // rsi
  __int64 v6; // rbx
  __int64 v7; // r13
  _QWORD *v8; // rdi
  __int64 i; // rbx
  unsigned __int64 v10; // r12
  int PfnPageSizeIndex; // r15d
  __int64 v12; // rcx
  unsigned __int64 v13; // r15
  _QWORD *v14; // rbp
  __int64 v15; // r13
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v19; // eax
  bool v20; // zf
  __int64 v21; // rcx
  unsigned int active; // eax
  unsigned __int64 v23; // rbx
  unsigned __int64 v24; // r8
  struct _KPRCB *v25; // r9
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v27; // eax
  unsigned __int64 v28; // rdx
  _QWORD *j; // rax
  __int64 v31; // [rsp+30h] [rbp-58h]
  __int64 v32; // [rsp+38h] [rbp-50h]
  __int64 v33; // [rsp+40h] [rbp-48h] BYREF
  __int64 v34; // [rsp+48h] [rbp-40h] BYREF
  unsigned __int8 v35; // [rsp+90h] [rbp+8h]
  unsigned __int64 v36; // [rsp+A0h] [rbp+18h]
  int v37; // [rsp+A8h] [rbp+20h]

  v36 = a3;
  v34 = 0LL;
  v3 = 0LL;
  v33 = 0LL;
  v4 = a3;
  v5 = a2;
  if ( (*(_DWORD *)(a1 + 8) & 8) == 0 )
  {
    v7 = *(_QWORD *)(qword_140C674C8 + 8 * ((*(_QWORD *)(48 * a2 - 0x21FFFFFFFFD8LL) >> 43) & 0x3FFLL));
    v31 = v7;
    if ( !a3 )
      return v3;
    while ( 1 )
    {
      v8 = (_QWORD *)(48 * v5 - 0x220000000000LL);
      for ( i = !_bittest64(&KeFeatureBits, 0x25u); ; i = (unsigned int)(i + 1) )
      {
        v10 = MiLargePageSizes[i];
        if ( ((v10 - 1) & v5) == 0 && v4 >= v10 )
          break;
      }
      PfnPageSizeIndex = MiGetPfnPageSizeIndex(48 * v5 - 0x220000000000LL);
      v37 = PfnPageSizeIndex;
      v12 = MiLargePageSizes[PfnPageSizeIndex];
      v32 = v12;
      if ( ((v8[5] >> 60) & 7) == 1 )
      {
        v13 = 48 * v5 - 0x220000000000LL;
        v14 = &v8[6 * v10];
        if ( v8 < v14 )
        {
          v15 = 48 * v12;
          do
          {
            v35 = MiLockPageInline(v13);
            MiClearAweLargePageMetadata(v13);
            _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( (_DWORD)KiIrqlFlags )
            {
              CurrentIrql = KeGetCurrentIrql();
              if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v35 <= 0xFu && CurrentIrql >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                SchedulerAssist = CurrentPrcb->SchedulerAssist;
                v19 = ~(unsigned __int16)(-1LL << (v35 + 1));
                v20 = (v19 & SchedulerAssist[5]) == 0;
                SchedulerAssist[5] &= v19;
                if ( v20 )
                  KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
              }
            }
            __writecr8(v35);
            v13 += v15;
          }
          while ( v13 < (unsigned __int64)v14 );
          v7 = v31;
        }
        PfnPageSizeIndex = v37;
        v4 = v36;
      }
      if ( (unsigned int)i <= 1 )
        MiUpdateLargePageBitMap(v7, v5, v10, 0, 0);
      v21 = 0LL;
      if ( PfnPageSizeIndex != (_DWORD)i )
      {
        while ( 1 )
        {
          active = MiCoalesceActivePagesIntoFree(v21, v5, (unsigned int)i);
          v21 = active;
          if ( active || (_DWORD)i + 1 == PfnPageSizeIndex )
            break;
          LODWORD(i) = i + 1;
        }
      }
      v23 = MiLargePageSizes[(unsigned int)i];
      if ( !(_DWORD)v21 )
      {
        v28 = 0LL;
        for ( j = &v8[6 * v23]; v8 < j; v8 += 6 * v32 )
        {
          *v8 ^= (*v8 ^ (v28 >> 3)) & 0xFFFFFFFFFFELL;
          v28 = (unsigned __int64)v8;
        }
        MiFreeLargePages(v7, v28, (unsigned int)&v34, (unsigned int)&v33, 0);
        goto LABEL_48;
      }
      if ( v23 )
      {
        MiReturnCommit(v7, v23);
        v24 = v23;
        if ( (unsigned __int16 *)v7 != MiSystemPartition )
          goto LABEL_42;
        v25 = KeGetCurrentPrcb();
        CachedResidentAvailable = (int)v25->CachedResidentAvailable;
        if ( (_DWORD)CachedResidentAvailable == -1 )
          goto LABEL_42;
        if ( v23 + CachedResidentAvailable <= 0x100 && v23 < 0x80000 )
        {
          do
          {
            v27 = _InterlockedCompareExchange(
                    (volatile signed __int32 *)&v25->CachedResidentAvailable,
                    v23 + CachedResidentAvailable,
                    CachedResidentAvailable);
            v20 = (_DWORD)CachedResidentAvailable == v27;
            LODWORD(CachedResidentAvailable) = v27;
            if ( v20 )
              goto LABEL_43;
          }
          while ( v27 != -1 && v23 + v27 <= 0x100 );
        }
        if ( (int)CachedResidentAvailable > 192
          && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                  (volatile signed __int32 *)&v25->CachedResidentAvailable,
                                                  192,
                                                  CachedResidentAvailable) )
        {
          v24 = v23 + (int)CachedResidentAvailable - 192;
        }
        if ( v24 )
LABEL_42:
          _InterlockedExchangeAdd64((volatile signed __int64 *)(v7 + 17280), v24);
      }
LABEL_43:
      if ( v7 != *(_QWORD *)(qword_140C674C8 + 8LL * KeGetCurrentThread()->ApcState.Process[1].IdealProcessor[25]) )
        MiReturnCrossPartitionCharges(v7, 2LL, 1LL, v23);
LABEL_48:
      v3 += v23;
      v5 += v23;
      v4 -= v23;
      v36 = v4;
      if ( !v4 )
        return v3;
    }
  }
  v6 = *(_QWORD *)(a1 + 16);
  if ( a3 )
  {
    do
    {
      MiFreePhysicalRange(a1, v5);
      v5 += v6;
      v3 += v6;
    }
    while ( v3 < v4 );
  }
  return v3;
}
