/*
 * XREFs of MiTransferPartitionPageRun @ 0x14065B674
 * Callers:
 *     MiActOnPartitionNodePages @ 0x1406580F0 (MiActOnPartitionNodePages.c)
 * Callees:
 *     MiIsPageOnBadList @ 0x1402186E0 (MiIsPageOnBadList.c)
 *     ExAcquireSpinLockExclusive @ 0x14024D340 (ExAcquireSpinLockExclusive.c)
 *     MiInsertPageInList @ 0x14026EAE0 (MiInsertPageInList.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402893A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x1402D1E90 (MiUnlinkFreeOrZeroedPage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402D3670 (MiInsertPageInFreeOrZeroedList.c)
 *     MiReturnCommit @ 0x1402DC250 (MiReturnCommit.c)
 *     MiInvalidPteConforms @ 0x1402DC440 (MiInvalidPteConforms.c)
 *     MiAcquireNonPagedResources @ 0x1402E4314 (MiAcquireNonPagedResources.c)
 *     MiGetPfnPageSizeIndex @ 0x1402E88E0 (MiGetPfnPageSizeIndex.c)
 *     MiGetBaseResidentPage @ 0x1402E9180 (MiGetBaseResidentPage.c)
 *     MiLockPageInline @ 0x1402EF680 (MiLockPageInline.c)
 *     KeShouldYieldProcessor @ 0x140333AD0 (KeShouldYieldProcessor.c)
 *     MiDrainZeroLookasides @ 0x1403BBB48 (MiDrainZeroLookasides.c)
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     MiMoveBadPageCrossPartition @ 0x14064D974 (MiMoveBadPageCrossPartition.c)
 *     MiUnlinkPageFromBadList @ 0x14064E034 (MiUnlinkPageFromBadList.c)
 *     MiMoveLargeFreePage @ 0x14064F864 (MiMoveLargeFreePage.c)
 *     MiUpdatePartitionChildPageCounts @ 0x14065BD74 (MiUpdatePartitionChildPageCounts.c)
 */

__int64 __fastcall MiTransferPartitionPageRun(__int64 a1, unsigned __int64 a2, ULONG_PTR a3, __int64 a4, KIRQL a5)
{
  __int64 v5; // r13
  unsigned __int16 v6; // di
  int v8; // eax
  ULONG_PTR v9; // r14
  unsigned __int8 CurrentIrql; // al
  KIRQL v12; // di
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v15; // eax
  bool v16; // zf
  __int64 v17; // rbx
  unsigned __int8 v18; // al
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rsi
  unsigned __int8 v23; // al
  struct _KPRCB *v24; // r10
  _DWORD *v25; // r9
  int v26; // eax
  unsigned int v27; // edi
  unsigned __int64 v28; // rcx
  unsigned __int8 v29; // al
  struct _KPRCB *v30; // r10
  _DWORD *v31; // r9
  int v32; // eax
  unsigned __int64 v33; // r8
  struct _KPRCB *v34; // r9
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v36; // eax
  unsigned __int8 v37; // al
  struct _KPRCB *v38; // r10
  _DWORD *v39; // r9
  int v40; // eax
  unsigned __int8 v41; // al
  struct _KPRCB *v42; // r10
  _DWORD *v43; // r9
  int v44; // eax
  __int64 BaseResidentPage; // rbp
  __int64 PfnPageSizeIndex; // r13
  unsigned __int8 v47; // al
  struct _KPRCB *v48; // r10
  _DWORD *v49; // r9
  int v50; // eax
  __int64 v51; // rbx
  int v52; // eax
  unsigned __int8 v54; // al
  struct _KPRCB *v55; // r10
  int v56; // eax
  _DWORD *v57; // r9
  ULONG_PTR v58; // [rsp+30h] [rbp-58h]
  unsigned __int16 v59; // [rsp+90h] [rbp+8h]
  unsigned __int16 v60; // [rsp+98h] [rbp+10h]
  int v61; // [rsp+A0h] [rbp+18h]
  __int64 i; // [rsp+A8h] [rbp+20h]

  v5 = 0LL;
  v6 = *(_WORD *)a1;
  v60 = *(_WORD *)a2;
  v8 = 0;
  v59 = *(_WORD *)a1;
  v58 = a3 + a4;
  v9 = a3;
  for ( i = 0LL; v9 != v58; ++v9 )
  {
    v61 = v8 + 1;
    if ( (((_BYTE)v8 + 1) & 0xF) == 0 && (*(_DWORD *)(a1 + 224) & 0x40000000) != 0 || KeShouldYieldProcessor() )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 224));
      if ( (_DWORD)KiIrqlFlags
        && (CurrentIrql = KeGetCurrentIrql(), ((unsigned __int8)KiIrqlFlags & 1) != 0)
        && CurrentIrql <= 0xFu )
      {
        v12 = a5;
        if ( a5 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v15 = ~(unsigned __int16)(-1LL << (a5 + 1));
          v16 = (v15 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v15;
          if ( v16 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
      else
      {
        v12 = a5;
      }
      __writecr8(v12);
      --v9;
      a5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 224));
    }
    else
    {
      v17 = 48 * v9 - 0x220000000000LL;
      v18 = MiLockPageInline(v17);
      v21 = *(_QWORD *)(v17 + 40);
      v22 = v18;
      if ( ((v21 >> 43) & 0x3FF) != v6 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( (_DWORD)KiIrqlFlags )
        {
          v23 = KeGetCurrentIrql();
          if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v23 <= 0xFu && (unsigned __int8)v22 <= 0xFu && v23 >= 2u )
          {
            v24 = KeGetCurrentPrcb();
            v25 = v24->SchedulerAssist;
            v26 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v22 + 1));
            v16 = (v26 & v25[5]) == 0;
            v25[5] &= v26;
            if ( v16 )
              KiRemoveSystemWorkPriorityKick((__int64)v24);
          }
        }
        __writecr8(v22);
        goto LABEL_92;
      }
      v27 = *(_BYTE *)(v17 + 34) & 7;
      if ( v27 == 5 )
      {
        if ( MiIsPageOnBadList(48 * v9 - 0x220000000000LL) )
        {
          MiUnlinkPageFromBadList((_QWORD *)(48 * v9 - 0x220000000000LL), 0);
          MiAcquireNonPagedResources(a2, 1uLL, 0LL, 1u);
          MiReturnCommit(a1, 1LL);
          v33 = 1LL;
          if ( (unsigned __int16 *)a1 != MiSystemPartition )
            goto LABEL_49;
          v34 = KeGetCurrentPrcb();
          CachedResidentAvailable = (int)v34->CachedResidentAvailable;
          if ( (_DWORD)CachedResidentAvailable == -1 )
            goto LABEL_49;
          do
          {
            if ( (unsigned __int64)(CachedResidentAvailable + 1) > 0x100 )
              break;
            v36 = _InterlockedCompareExchange(
                    (volatile signed __int32 *)&v34->CachedResidentAvailable,
                    CachedResidentAvailable + 1,
                    CachedResidentAvailable);
            v16 = (_DWORD)CachedResidentAvailable == v36;
            CachedResidentAvailable = v36;
            if ( v16 )
              goto LABEL_50;
          }
          while ( v36 != -1 );
          if ( (int)CachedResidentAvailable > 192
            && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                    (volatile signed __int32 *)&v34->CachedResidentAvailable,
                                                    192,
                                                    CachedResidentAvailable) )
          {
            v33 = (int)CachedResidentAvailable - 192 + 1LL;
          }
          if ( v33 )
LABEL_49:
            _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 17280), v33);
LABEL_50:
          *(_QWORD *)(v17 + 16) &= 0xFFFFFFFFFFFFF3FFuLL;
          *(_QWORD *)(v17 + 40) ^= (*(_QWORD *)(v17 + 40) ^ ((unsigned __int64)v60 << 43)) & 0x1FF80000000000LL;
          if ( (unsigned __int16 *)a2 != MiSystemPartition )
          {
            ++*(_QWORD *)(a2 + 17040);
            *(_BYTE *)(a2 + 12) = 1;
          }
          --*(_QWORD *)(a1 + 17040);
          *(_BYTE *)(a1 + 12) = 1;
          MiInsertPageInList(48 * v9 - 0x220000000000LL, 0x20u);
          i = ++v5;
          _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( (_DWORD)KiIrqlFlags )
          {
            v37 = KeGetCurrentIrql();
            if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v37 <= 0xFu && (unsigned __int8)v22 <= 0xFu && v37 >= 2u )
            {
              v38 = KeGetCurrentPrcb();
              v39 = v38->SchedulerAssist;
              v40 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v22 + 1));
              v16 = (v40 & v39[5]) == 0;
              v39[5] &= v40;
              if ( v16 )
                KiRemoveSystemWorkPriorityKick((__int64)v38);
            }
          }
          __writecr8(v22);
          MiUpdatePartitionChildPageCounts(a2, a1, v9, 1LL);
          goto LABEL_91;
        }
        if ( !MiInvalidPteConforms(*(_QWORD *)(v17 + 16)) )
          goto LABEL_94;
        if ( qword_140C65C40 )
        {
          if ( (v28 & 0x10) != 0 )
            v28 &= ~0x10uLL;
          else
            v28 &= ~qword_140C65C40;
        }
        if ( HIDWORD(v28) != 4294967294 )
          goto LABEL_94;
        _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( (_DWORD)KiIrqlFlags )
        {
          v29 = KeGetCurrentIrql();
          if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v29 <= 0xFu && (unsigned __int8)v22 <= 0xFu && v29 >= 2u )
          {
            v30 = KeGetCurrentPrcb();
            v31 = v30->SchedulerAssist;
            v32 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v22 + 1));
            v16 = (v32 & v31[5]) == 0;
            v31[5] &= v32;
            if ( v16 )
              KiRemoveSystemWorkPriorityKick((__int64)v30);
          }
        }
        __writecr8(v22);
        MiDrainZeroLookasides(a1, 0LL, 0LL, 0);
      }
      else
      {
        if ( (v21 & 0x10000000000LL) == 0 )
        {
          if ( v27 > 1 )
            goto LABEL_94;
          MiUnlinkFreeOrZeroedPage(v9, 0LL, 0);
          if ( (unsigned __int16 *)a2 != MiSystemPartition )
          {
            ++*(_QWORD *)(a2 + 17040);
            *(_BYTE *)(a2 + 12) = 1;
          }
          --*(_QWORD *)(a1 + 17040);
          *(_BYTE *)(a1 + 12) = 1;
          if ( (*(_BYTE *)(v17 + 35) & 0x40) != 0 )
            MiMoveBadPageCrossPartition(48 * v9 - 0x220000000000LL, a1, a2);
          *(_QWORD *)(v17 + 40) ^= (*(_QWORD *)(v17 + 40) ^ ((unsigned __int64)v60 << 43)) & 0x1FF80000000000LL;
          MiInsertPageInFreeOrZeroedList(v9, ((*(_DWORD *)(v17 + 16) & 0x3E0) != 0LL) + 1);
          _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( (_DWORD)KiIrqlFlags )
          {
            v41 = KeGetCurrentIrql();
            if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v41 <= 0xFu && (unsigned __int8)v22 <= 0xFu && v41 >= 2u )
            {
              v42 = KeGetCurrentPrcb();
              v43 = v42->SchedulerAssist;
              v44 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v22 + 1));
              v16 = (v44 & v43[5]) == 0;
              v43[5] &= v44;
              if ( v16 )
                KiRemoveSystemWorkPriorityKick((__int64)v42);
            }
          }
          __writecr8(v22);
          MiUpdatePartitionChildPageCounts(a2, a1, v9, 1LL);
          i = ++v5;
          goto LABEL_91;
        }
        BaseResidentPage = MiGetBaseResidentPage(48 * v9 - 0x220000000000LL, 1023LL, v19, v20);
        v27 = *(_BYTE *)(BaseResidentPage + 34) & 7;
        PfnPageSizeIndex = (unsigned int)MiGetPfnPageSizeIndex(BaseResidentPage);
        if ( BaseResidentPage != v17 )
          _InterlockedAnd64((volatile signed __int64 *)(BaseResidentPage + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v27 > 1 )
        {
LABEL_94:
          _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( (_DWORD)KiIrqlFlags )
          {
            v54 = KeGetCurrentIrql();
            if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v54 <= 0xFu && (unsigned __int8)v22 <= 0xFu && v54 >= 2u )
            {
              v55 = KeGetCurrentPrcb();
              v56 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v22 + 1));
              v57 = v55->SchedulerAssist;
              v16 = (v56 & v57[5]) == 0;
              v57[5] &= v56;
              if ( v16 )
                KiRemoveSystemWorkPriorityKick((__int64)v55);
            }
          }
          __writecr8(v22);
          KeBugCheckEx(0x1Au, 0x41000uLL, v9, v27, 0LL);
        }
        _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( (_DWORD)KiIrqlFlags )
        {
          v47 = KeGetCurrentIrql();
          if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v47 <= 0xFu && (unsigned __int8)v22 <= 0xFu && v47 >= 2u )
          {
            v48 = KeGetCurrentPrcb();
            v49 = v48->SchedulerAssist;
            v50 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v22 + 1));
            v16 = (v50 & v49[5]) == 0;
            v49[5] &= v50;
            if ( v16 )
              KiRemoveSystemWorkPriorityKick((__int64)v48);
          }
        }
        __writecr8(v22);
        v51 = MiLargePageSizes[PfnPageSizeIndex];
        if ( (unsigned __int16 *)a2 != MiSystemPartition )
        {
          *(_QWORD *)(a2 + 17040) += v51;
          *(_BYTE *)(a2 + 12) = 1;
        }
        v52 = MiMoveLargeFreePage(v9, PfnPageSizeIndex, a1, (_WORD *)a2);
        v5 = i;
        if ( v52 )
        {
          v5 = v51 + i;
          *(_BYTE *)(a1 + 12) = 1;
          v9 += v51;
          i += v51;
          *(_QWORD *)(a1 + 17040) -= v51;
        }
        else if ( (unsigned __int16 *)a2 != MiSystemPartition )
        {
          *(_QWORD *)(a2 + 17040) -= v51;
          *(_BYTE *)(a2 + 12) = 1;
        }
      }
      --v9;
    }
LABEL_91:
    v6 = v59;
LABEL_92:
    v8 = v61;
  }
  return v5;
}
