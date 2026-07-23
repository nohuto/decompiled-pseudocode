/*
 * XREFs of MiTradePage @ 0x1403BA300
 * Callers:
 *     MiClaimPhysicalRun @ 0x1403BA11C (MiClaimPhysicalRun.c)
 * Callees:
 *     MiIsPageOnBadList @ 0x1402186E0 (MiIsPageOnBadList.c)
 *     MiIsPfn @ 0x14023F0A0 (MiIsPfn.c)
 *     MiSearchNumaNodeTable @ 0x14026E9B0 (MiSearchNumaNodeTable.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x1402858B4 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiGetPfnChannel @ 0x1402870B0 (MiGetPfnChannel.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x1402D1E90 (MiUnlinkFreeOrZeroedPage.c)
 *     MiInvalidPteConforms @ 0x1402DC440 (MiInvalidPteConforms.c)
 *     MiSetPfnTbFlushStamp @ 0x1402E1630 (MiSetPfnTbFlushStamp.c)
 *     MiReturnFreeZeroPage @ 0x1402E7F74 (MiReturnFreeZeroPage.c)
 *     MiGetPfnPageSizeIndex @ 0x1402E88E0 (MiGetPfnPageSizeIndex.c)
 *     MiGetBaseResidentPage @ 0x1402E9180 (MiGetBaseResidentPage.c)
 *     MiLockPageInline @ 0x1402EF680 (MiLockPageInline.c)
 *     MiCheckSlabPfnBitmap @ 0x140324550 (MiCheckSlabPfnBitmap.c)
 *     MiLockAndInsertPageInFreeList @ 0x14038A8F4 (MiLockAndInsertPageInFreeList.c)
 *     MiSwapStackPage @ 0x140399C4C (MiSwapStackPage.c)
 *     MiDemoteLargeFreePage @ 0x1403A0778 (MiDemoteLargeFreePage.c)
 *     MiTrimSharedPage @ 0x1403A5C5C (MiTrimSharedPage.c)
 *     MiActivePageClaimCandidate @ 0x1403BB598 (MiActivePageClaimCandidate.c)
 *     MiPfnLargeBitSet @ 0x1403BBA08 (MiPfnLargeBitSet.c)
 *     MiAddMdlPageToTradeBlock @ 0x1403BBA68 (MiAddMdlPageToTradeBlock.c)
 *     MiDrainZeroLookasides @ 0x1403BBB48 (MiDrainZeroLookasides.c)
 *     MiStealPage @ 0x1403BBD7C (MiStealPage.c)
 *     MiTradeTransitionPage @ 0x1403BD5C0 (MiTradeTransitionPage.c)
 *     MiLargeFreePageToMdl @ 0x1403D70E4 (MiLargeFreePageToMdl.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     MiLargePageMovesInProgress @ 0x14064F384 (MiLargePageMovesInProgress.c)
 *     MiReuseStandbyPage @ 0x140651D2C (MiReuseStandbyPage.c)
 */

unsigned __int64 __fastcall MiTradePage(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned int v3; // r13d
  __int64 v4; // r15
  __int64 v7; // rbx
  unsigned __int8 v8; // al
  unsigned __int8 i; // di
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned __int64 v12; // rdx
  __int64 PfnPageSizeIndex; // r15
  unsigned int v14; // ebp
  int v15; // eax
  __int64 v16; // r8
  int v17; // r11d
  char v18; // dl
  __int64 active; // rax
  unsigned __int64 v20; // rbp
  unsigned __int64 result; // rax
  unsigned __int64 v22; // rcx
  int v23; // ebp
  unsigned int v24; // ebp
  int v25; // eax
  int v26; // ebp
  __int64 v27; // r8
  int v28; // eax
  __int64 v29; // r14
  unsigned __int64 v30; // rdx
  __int64 BaseResidentPage; // r14
  unsigned int v32; // r8d
  unsigned __int8 v33; // al
  struct _KPRCB *v34; // r11
  _DWORD *v35; // r10
  int v36; // eax
  bool v37; // zf
  unsigned __int8 v38; // cl
  struct _KPRCB *v39; // r10
  _DWORD *v40; // r9
  int v41; // eax
  int v42; // eax
  unsigned __int8 v43; // al
  struct _KPRCB *v44; // r10
  _DWORD *v45; // r9
  int v46; // eax
  unsigned __int8 v47; // al
  struct _KPRCB *v48; // r10
  _DWORD *v49; // r9
  int v50; // eax
  __int64 v51; // rax
  __int64 v52; // rbp
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v56; // eax
  unsigned __int8 v57; // al
  struct _KPRCB *v58; // r10
  _DWORD *v59; // r9
  int v60; // edx
  signed __int32 v61[8]; // [rsp+0h] [rbp-A8h] BYREF
  int v62; // [rsp+30h] [rbp-78h] BYREF
  unsigned __int64 v63; // [rsp+38h] [rbp-70h]
  __int64 v64; // [rsp+40h] [rbp-68h]
  __int64 v65; // [rsp+48h] [rbp-60h] BYREF
  __int64 v66; // [rsp+50h] [rbp-58h]
  __int64 v67; // [rsp+58h] [rbp-50h]
  int v68; // [rsp+B0h] [rbp+8h]
  int v69; // [rsp+B8h] [rbp+10h] BYREF
  __int64 v70; // [rsp+C0h] [rbp+18h]
  int v71; // [rsp+C8h] [rbp+20h]

  v70 = a3;
  v3 = *(_DWORD *)(a1 + 24);
  v4 = *(_QWORD *)a1;
  v62 = 0;
  v69 = 0;
  *(_QWORD *)(a1 + 48) = 0LL;
  v68 = v3 & 0x400000;
  v64 = v4;
  if ( (v3 & 0x400000) != 0 )
    v71 = *(_DWORD *)(a1 + 28);
  else
    v71 = -1;
  v63 = 0LL;
  v67 = 48 * a2;
  v65 = -1LL;
  v66 = 0LL;
  v7 = 48 * a2 - 0x220000000000LL;
  v8 = MiLockPageInline(v7);
LABEL_4:
  for ( i = v8; ; i = MiLockPageInline(v7) )
  {
    while ( 1 )
    {
      if ( !(unsigned int)MiIsPfn(a2) )
      {
LABEL_169:
        LOBYTE(v17) = 1;
        ++dword_140C13758;
        goto LABEL_20;
      }
      v12 = *(_QWORD *)(v7 + 40);
      if ( *(_QWORD *)(qword_140C674C8 + 8 * ((v12 >> 43) & 0x3FF)) != v4 )
      {
        v52 = (unsigned int)MiPfnLargeBitSet(&MiSystemPartition, a2);
        _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( (_DWORD)KiIrqlFlags )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && i <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v56 = ~(unsigned __int16)(-1LL << (i + 1));
            v37 = (v56 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v56;
            if ( v37 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        __writecr8(i);
        if ( (_DWORD)v52 != -1 )
          *(_QWORD *)(a1 + 48) = MiLargePageSizes[v52];
        ++dword_140C1375C;
        goto LABEL_87;
      }
      PfnPageSizeIndex = 0xFFFFFFFFLL;
      v14 = *(_BYTE *)(v7 + 34) & 7;
      if ( (v12 & 0x10000000000LL) != 0 )
      {
        BaseResidentPage = MiGetBaseResidentPage(v7, v12, v10, v11);
        v14 = *(_BYTE *)(BaseResidentPage + 34) & 7;
        PfnPageSizeIndex = (unsigned int)MiGetPfnPageSizeIndex(BaseResidentPage);
        if ( BaseResidentPage != v7 )
          _InterlockedAnd64((volatile signed __int64 *)(BaseResidentPage + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v14 == 6 )
        {
          LOBYTE(v17) = 1;
          v51 = MiLargePageSizes[PfnPageSizeIndex];
          ++dword_140C13764;
          *(_QWORD *)(a1 + 48) = v51;
          goto LABEL_20;
        }
      }
      if ( v14 != 5 )
        break;
      if ( MiIsPageOnBadList(v7) )
      {
        LOBYTE(v17) = 1;
        ++dword_140C1376C;
        goto LABEL_20;
      }
      if ( *(_QWORD *)(v7 + 8) == -8LL )
      {
        LOBYTE(v17) = 1;
        ++dword_140C13770;
        goto LABEL_20;
      }
      if ( (_DWORD)PfnPageSizeIndex != -1 )
      {
        v14 = 1;
        break;
      }
      if ( !MiInvalidPteConforms(*(_QWORD *)(v7 + 16)) )
        goto LABEL_83;
      if ( qword_140C65C40 )
      {
        if ( (v22 & 0x10) != 0 )
          v22 &= ~0x10uLL;
        else
          v22 &= ~qword_140C65C40;
      }
      if ( HIDWORD(v22) != 4294967294 )
      {
LABEL_83:
        LOBYTE(v17) = 1;
        ++dword_140C13774;
        goto LABEL_20;
      }
      if ( v66 == v7 )
      {
        LOBYTE(v17) = 1;
        ++dword_140C13778;
        goto LABEL_20;
      }
      v23 = *((_DWORD *)MiSearchNumaNodeTable(0xAAAAAAAAAAAAAAABuLL * (v67 >> 4)) + 2);
      v24 = ((unsigned int)MiGetPfnChannel(v7) << byte_140C65B8E) | dword_140C65BF8 & a2 | (v23 << byte_140C65B8D);
      _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( (_DWORD)KiIrqlFlags )
      {
        v33 = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v33 <= 0xFu && i <= 0xFu && v33 >= 2u )
        {
          v34 = KeGetCurrentPrcb();
          v35 = v34->SchedulerAssist;
          v36 = ~(unsigned __int16)(-1LL << (i + 1));
          v37 = (v36 & v35[5]) == 0;
          v35[5] &= v36;
          if ( v37 )
            KiRemoveSystemWorkPriorityKick(v34);
        }
      }
      __writecr8(i);
      ++dword_140C1373C;
      v4 = v64;
      MiDrainZeroLookasides(v64, v7, *(_QWORD *)(a1 + 16), v24);
      v66 = v7;
      MiLockPageInline(v7);
    }
    if ( _bittest64((const signed __int64 *)(v7 + 40), 0x35u) )
      goto LABEL_169;
    v15 = MiCheckSlabPfnBitmap(v7, 1LL, 0);
    v16 = 0LL;
    if ( v15 )
      goto LABEL_169;
    v17 = 1;
    if ( v14 <= 1 )
    {
      if ( (_DWORD)PfnPageSizeIndex == -1 )
      {
        if ( v68 || (unsigned int)MiUnlinkFreeOrZeroedPage(a2, 0LL, 0) )
        {
          ++dword_140C13738;
          goto LABEL_29;
        }
        ++dword_140C13780;
        MiReturnFreeZeroPage(v7);
        LOBYTE(v17) = 1;
        goto LABEL_20;
      }
      v29 = (unsigned int)PfnPageSizeIndex;
      v20 = MiLargePageSizes[PfnPageSizeIndex];
      if ( (v3 & 0x2000000) != 0 && v20 >= 0x200 || (v3 & 0x1000000) != 0 && v20 == 16 )
        goto LABEL_20;
      _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( (_DWORD)KiIrqlFlags )
      {
        v38 = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v38 <= 0xFu && i <= 0xFu && v38 >= 2u )
        {
          v39 = KeGetCurrentPrcb();
          v40 = v39->SchedulerAssist;
          v41 = ~(unsigned __int16)(-1LL << (i + 1));
          v37 = (v41 & v40[5]) == 0;
          v40[5] &= v41;
          if ( v37 )
            KiRemoveSystemWorkPriorityKick(v39);
        }
      }
      __writecr8(i);
      if ( (a2 & ~(v20 - 1)) == a2 && (v3 & 0x400000) == 0 && *(_QWORD *)(a1 + 16) >= v20 )
      {
        v30 = v20 + a2 - 1;
        if ( v30 <= *(_QWORD *)(a1 + 56) )
        {
          if ( (unsigned int)MiLargeFreePageToMdl(v64, v30, PfnPageSizeIndex, *(_QWORD *)(a1 + 64), v3) )
          {
            dword_140C13738 += v20;
            goto LABEL_24;
          }
        }
      }
      v32 = PfnPageSizeIndex;
      v4 = v64;
      if ( !(unsigned int)MiDemoteLargeFreePage(v64, a2, v32, v3, (__int64)&v69) && !v69 )
      {
        v42 = MiLargePageMovesInProgress(v7);
        v20 = v63;
        if ( v42 )
        {
          ++dword_140C13768;
        }
        else
        {
          ++dword_140C13760;
          *(_QWORD *)(a1 + 48) = MiLargePageSizes[v29];
        }
        goto LABEL_24;
      }
      v8 = MiLockPageInline(v7);
      goto LABEL_4;
    }
    if ( (v3 & 0x10000000) != 0 || (v18 = *(_BYTE *)(v7 + 35), v18 < 0) )
    {
      if ( v14 == 2 )
      {
        if ( *(_WORD *)(v7 + 32) )
        {
          ++dword_140C13784;
          goto LABEL_20;
        }
        if ( !(unsigned int)MiReuseStandbyPage(v7) )
        {
          MiReturnFreeZeroPage(v7);
          LOBYTE(v17) = 1;
          ++dword_140C13780;
          goto LABEL_20;
        }
LABEL_29:
        v20 = 1LL;
        MiAddMdlPageToTradeBlock(a1, a2, v16);
        goto LABEL_21;
      }
      if ( v14 != 6
        || (*(_BYTE *)(v7 + 34) & 0x10) != 0
        || *(_WORD *)(v7 + 32) != 1
        || ((*(_QWORD *)(v7 + 40) >> 60) & 7) == 2
        || (*(_BYTE *)v7 & 1) == 0
        || (v18 = *(_BYTE *)(v7 + 35), (v18 & 8) != 0) )
      {
        ++dword_140C13790;
        goto LABEL_20;
      }
    }
    else
    {
      if ( v14 <= 4 )
      {
        if ( !_bittest64((const signed __int64 *)(v7 + 40), 0x28u) && (v3 & 0x4000000) == 0 && *(__int64 *)(v7 + 8) > 0 )
        {
          ++dword_140C13794;
          goto LABEL_20;
        }
        if ( (v3 & 0x200000) != 0 && ((v18 & 0x40) != 0 || MiIsPageOnBadList(v7)) )
        {
LABEL_112:
          dword_140C13798 += v17;
          goto LABEL_20;
        }
        v28 = MiTradeTransitionPage(v7, (__int64)&v65);
        if ( v28 == 3 )
        {
          if ( *(_QWORD *)(qword_140C674C8 + 8 * ((*(_QWORD *)(v7 + 40) >> 43) & 0x3FFLL)) == v64 )
          {
            if ( v68 )
              MiLockAndInsertPageInFreeList(v7);
            v20 = 1LL;
            goto LABEL_52;
          }
          ++dword_140C1375C;
LABEL_148:
          MiLockAndInsertPageInFreeList(v7);
LABEL_87:
          v20 = v63;
          goto LABEL_24;
        }
        if ( v28 != 2 )
          goto LABEL_87;
        v8 = MiLockPageInline(v7);
        v4 = v64;
        goto LABEL_4;
      }
      if ( v14 != 6 )
      {
        ++dword_140C137A0;
        goto LABEL_20;
      }
    }
    if ( (v3 & 0x200000) != 0 && ((v18 & 0x40) != 0 || MiIsPageOnBadList(v7)) )
      goto LABEL_112;
    if ( ((*(_QWORD *)(v7 + 40) >> 60) & 7) == 2 )
    {
      if ( (v3 & 8) != 0 )
        goto LABEL_151;
      _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( (_DWORD)KiIrqlFlags )
      {
        v43 = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & (unsigned __int8)v17) != 0 && v43 <= 0xFu && i <= 0xFu && v43 >= 2u )
        {
          v44 = KeGetCurrentPrcb();
          v45 = v44->SchedulerAssist;
          v46 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v17 + i));
          v37 = (v46 & v45[5]) == 0;
          v45[5] &= v46;
          if ( v37 )
            KiRemoveSystemWorkPriorityKick(v44);
        }
      }
      __writecr8(i);
      v4 = v64;
      if ( (unsigned int)MiSwapStackPage(v64, v7, *(_DWORD *)(a1 + 28), v3, &v65, &v62) )
      {
        if ( v62 )
          ++dword_140C13744;
        else
          ++dword_140C13750;
        goto LABEL_49;
      }
      if ( ((*(_QWORD *)(v7 + 40) >> 60) & 7) == 2 )
      {
        ++dword_140C137A4;
        goto LABEL_87;
      }
      v8 = MiLockPageInline(v7);
      ++dword_140C13754;
      goto LABEL_4;
    }
    v4 = v64;
    active = MiActivePageClaimCandidate(v64, v7, v17, v17, v70);
    if ( active )
    {
      LOBYTE(v17) = 1;
      *(_QWORD *)(a1 + 48) = active;
      ++dword_140C13828;
      goto LABEL_20;
    }
    if ( (v3 & 8) != 0 )
      break;
    if ( *(__int64 *)(v7 + 40) >= 0 )
      v25 = MiStealPage(v7, *(_DWORD *)(a1 + 28), (__int64)&v65);
    else
      v25 = MiTrimSharedPage(v7, i, v3);
    v26 = v25;
    _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (_DWORD)KiIrqlFlags )
    {
      v47 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v47 <= 0xFu && i <= 0xFu && v47 >= 2u )
      {
        v48 = KeGetCurrentPrcb();
        v49 = v48->SchedulerAssist;
        v50 = ~(unsigned __int16)(-1LL << (i + 1));
        v37 = (v50 & v49[5]) == 0;
        v49[5] &= v50;
        if ( v37 )
          KiRemoveSystemWorkPriorityKick(v48);
      }
    }
    __writecr8(i);
    if ( !v26 )
    {
      ++dword_140C137AC;
      goto LABEL_87;
    }
    if ( v26 != 2 )
    {
      if ( *(_QWORD *)(qword_140C674C8 + 8 * ((*(_QWORD *)(v7 + 40) >> 43) & 0x3FFLL)) != v4 )
      {
        ++dword_140C1375C;
        goto LABEL_148;
      }
      ++dword_140C13748;
LABEL_49:
      *(_QWORD *)(v7 + 16) = ZeroPte;
      MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)(v7 + 16));
      if ( v68 )
      {
        MiLockAndInsertPageInFreeList(v7);
      }
      else
      {
        _InterlockedOr(v61, 0);
        MiSetPfnTbFlushStamp(v7, KiTbFlushTimeStamp, 0);
      }
      v20 = 1LL;
LABEL_52:
      MiAddMdlPageToTradeBlock(a1, a2, v27);
      goto LABEL_24;
    }
  }
  v17 = 1;
LABEL_151:
  dword_140C1379C += v17;
LABEL_20:
  v20 = v63;
LABEL_21:
  if ( i != 17 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (_DWORD)KiIrqlFlags )
    {
      v57 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & (unsigned __int8)v17) != 0 && v57 <= 0xFu && i <= 0xFu && v57 >= 2u )
      {
        v58 = KeGetCurrentPrcb();
        v59 = v58->SchedulerAssist;
        v60 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v17 + i));
        v37 = (v60 & v59[5]) == 0;
        v59[5] &= v60;
        if ( v37 )
          KiRemoveSystemWorkPriorityKick(v58);
      }
    }
    __writecr8(i);
  }
LABEL_24:
  result = v20;
  *(_QWORD *)(a1 + 40) = v65;
  return result;
}
