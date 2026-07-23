/*
 * XREFs of MiUnlinkBadPages @ 0x14062AD80
 * Callers:
 *     MmMarkPhysicalMemoryAsGood @ 0x14062C5C0 (MmMarkPhysicalMemoryAsGood.c)
 * Callees:
 *     MiIsPageOnBadList @ 0x1402186E0 (MiIsPageOnBadList.c)
 *     KeYieldProcessorEx @ 0x140242E20 (KeYieldProcessorEx.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402D3670 (MiInsertPageInFreeOrZeroedList.c)
 *     MiReturnCommit @ 0x1402DC250 (MiReturnCommit.c)
 *     KeShouldYieldProcessor @ 0x140333AD0 (KeShouldYieldProcessor.c)
 *     MiIsPageInHugePfn @ 0x140336C0C (MiIsPageInHugePfn.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     MiMarkHugePfnGood @ 0x140621E64 (MiMarkHugePfnGood.c)
 *     MiMarkFileOnlyPfnGood @ 0x14063E3A4 (MiMarkFileOnlyPfnGood.c)
 *     MiSetPfnRemovalRequested @ 0x14064DF24 (MiSetPfnRemovalRequested.c)
 *     MiUnlinkPageFromBadList @ 0x14064E034 (MiUnlinkPageFromBadList.c)
 */

__int64 __fastcall MiUnlinkBadPages(unsigned __int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rbx
  unsigned __int64 v4; // r14
  __int64 v5; // rbp
  unsigned __int8 CurrentIrql; // di
  __int64 v7; // r11
  _DWORD *SchedulerAssist; // r10
  __int64 v9; // rdx
  volatile signed __int32 *v10; // rbx
  __int64 v11; // r8
  const signed __int64 *v12; // rax
  __int64 v13; // rsi
  int v14; // eax
  __int64 v15; // r8
  unsigned __int8 v16; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v18; // r9
  int v19; // eax
  bool v20; // zf
  int v21; // r10d
  _DWORD *v22; // r9
  __int64 v23; // rdx
  const signed __int64 *v24; // rax
  __int64 v25; // rsi
  unsigned __int8 v26; // cf
  unsigned __int64 v27; // r8
  struct _KPRCB *v28; // r9
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v30; // eax
  char v31; // dl
  unsigned __int64 v32; // r8
  struct _KPRCB *v33; // r9
  __int64 v34; // rdx
  signed __int32 v35; // eax
  unsigned __int8 v36; // al
  struct _KPRCB *v37; // r10
  _DWORD *v38; // r9
  int v39; // eax
  unsigned __int8 v40; // cl
  _DWORD *v41; // r9
  __int64 v42; // rdx
  unsigned __int8 v43; // al
  struct _KPRCB *v44; // r10
  _DWORD *v45; // r9
  int v46; // edx
  __int64 v48; // [rsp+20h] [rbp-58h]
  __int64 v49; // [rsp+28h] [rbp-50h]
  int v50; // [rsp+80h] [rbp+8h] BYREF
  unsigned __int64 v51; // [rsp+88h] [rbp+10h]
  const signed __int64 *v52; // [rsp+90h] [rbp+18h]
  const signed __int64 *v53; // [rsp+98h] [rbp+20h]

  v51 = a2;
  v2 = 0LL;
  v48 = 0LL;
  v49 = 0LL;
  v4 = a1;
  v5 = 48 * a1 - 0x220000000000LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v7 = -1LL;
  if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      LODWORD(v9) = 4;
    else
      v9 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v9;
  }
  if ( a1 < a2 )
  {
    v10 = (volatile signed __int32 *)(v5 + 24);
    v11 = 0LL;
    v53 = (const signed __int64 *)(48 * a1 - 0x21FFFFFFFFD8LL);
    v12 = v53;
    while ( 1 )
    {
      v52 = v12;
      v13 = v11;
      LOBYTE(v14) = MiIsPageInHugePfn(v4);
      if ( v14 )
      {
        if ( (_DWORD)KiIrqlFlags )
        {
          v16 = KeGetCurrentIrql();
          if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v16 <= 0xFu && CurrentIrql <= 0xFu && v16 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v18 = CurrentPrcb->SchedulerAssist;
            v19 = ~(unsigned __int16)(v7 << (CurrentIrql + 1));
            v20 = (v19 & v18[5]) == 0;
            v18[5] &= v19;
            if ( v20 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
        __writecr8(CurrentIrql);
        v21 = MiMarkHugePfnGood(v4);
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
        {
          v22 = KeGetCurrentPrcb()->SchedulerAssist;
          if ( CurrentIrql == 2 )
            LODWORD(v23) = 4;
          else
            v23 = (-1LL << (CurrentIrql + 1)) & 4;
          v22[5] |= v23;
        }
        if ( v21 >= 0 )
        {
          v24 = v52;
          v15 = v13;
          if ( v21 == 274 )
          {
            ++v49;
            v48 = v13;
            goto LABEL_82;
          }
        }
        else
        {
          --v4;
          v24 = v53 - 6;
          v5 -= 48LL;
          v10 -= 12;
          v15 = v48 - 1;
        }
        goto LABEL_83;
      }
      v24 = v53;
      if ( v4 > qword_140C65CA0 || !_bittest64(v53, 0x36u) )
        goto LABEL_84;
      v50 = 0;
      while ( _interlockedbittestandset64(v10, 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v50);
        while ( *(__int64 *)v10 < 0 );
      }
      v25 = *(_QWORD *)(qword_140C674C8 + 8 * ((*(_QWORD *)(v5 + 40) >> 43) & 0x3FFLL));
      if ( (*(_BYTE *)(v5 + 35) & 0x40) == 0 )
        break;
      MiSetPfnRemovalRequested(v5, 0LL, 1LL);
      ++v49;
      v26 = _bittest64((const signed __int64 *)(v5 + 40), 0x35u);
      *(_BYTE *)(v5 + 35) &= ~0x80u;
      if ( v26 )
      {
        MiMarkFileOnlyPfnGood(v5);
        goto LABEL_61;
      }
      MiReturnCommit(v25, 1LL);
      v27 = 1LL;
      if ( (unsigned __int16 *)v25 != MiSystemPartition
        || (v28 = KeGetCurrentPrcb(),
            CachedResidentAvailable = (int)v28->CachedResidentAvailable,
            (_DWORD)CachedResidentAvailable == -1) )
      {
LABEL_47:
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v25 + 17280), v27);
        goto LABEL_61;
      }
      if ( (unsigned __int64)(CachedResidentAvailable + 1) > 0x100 )
      {
LABEL_43:
        if ( (int)CachedResidentAvailable > 192
          && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                  (volatile signed __int32 *)&v28->CachedResidentAvailable,
                                                  192,
                                                  CachedResidentAvailable) )
        {
          v27 = (int)CachedResidentAvailable - 192 + 1LL;
        }
        if ( v27 )
          goto LABEL_47;
      }
      else
      {
        while ( 1 )
        {
          v30 = _InterlockedCompareExchange(
                  (volatile signed __int32 *)&v28->CachedResidentAvailable,
                  CachedResidentAvailable + 1,
                  CachedResidentAvailable);
          v20 = (_DWORD)CachedResidentAvailable == v30;
          LODWORD(CachedResidentAvailable) = v30;
          if ( v20 )
            break;
          if ( v30 == -1 || (unsigned __int64)(v30 + 1LL) > 0x100 )
            goto LABEL_43;
        }
      }
LABEL_61:
      _InterlockedAnd64((volatile signed __int64 *)v10, 0x7FFFFFFFFFFFFFFFuLL);
      if ( CurrentIrql >= 2u )
        goto LABEL_81;
      if ( (v48 & 0xF) != 0 )
      {
        v7 = -1LL;
LABEL_80:
        v15 = v48;
        v24 = v53;
        goto LABEL_84;
      }
      if ( !KeShouldYieldProcessor() )
      {
LABEL_81:
        v24 = v53;
LABEL_82:
        v15 = v48;
LABEL_83:
        v7 = -1LL;
        goto LABEL_84;
      }
      if ( !(_DWORD)KiIrqlFlags )
        goto LABEL_69;
      v36 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) == 0 )
        goto LABEL_69;
      v7 = -1LL;
      if ( (unsigned __int8)(v36 - 2) <= 0xDu )
      {
        v37 = KeGetCurrentPrcb();
        v38 = v37->SchedulerAssist;
        v39 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v20 = (v39 & v38[5]) == 0;
        v38[5] &= v39;
        if ( v20 )
        {
          KiRemoveSystemWorkPriorityKick((__int64)v37);
LABEL_69:
          v7 = -1LL;
        }
      }
      __writecr8(CurrentIrql);
      v40 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 )
      {
        if ( v40 > 0xFu )
          goto LABEL_80;
        v41 = KeGetCurrentPrcb()->SchedulerAssist;
        if ( v40 == 2 )
          LODWORD(v42) = 4;
        else
          v42 = (-1LL << (v40 + 1)) & 4;
        v41[5] |= v42;
      }
      v24 = v53;
      v15 = v48;
LABEL_84:
      v12 = v24 + 6;
      v11 = v15 + 1;
      ++v4;
      v53 = v12;
      v5 += 48LL;
      v48 = v11;
      v10 += 12;
      if ( v4 >= v51 )
      {
        v2 = v49;
        goto LABEL_86;
      }
    }
    if ( !MiIsPageOnBadList(v5) )
      goto LABEL_61;
    *(_BYTE *)(v5 + 35) = v31 & 0x7F;
    MiUnlinkPageFromBadList(v5, 0LL);
    *(_QWORD *)v10 |= 0x4000000000000000uLL;
    MiInsertPageInFreeOrZeroedList(v4, 2);
    MiReturnCommit(v25, 1LL);
    v32 = 1LL;
    if ( (unsigned __int16 *)v25 != MiSystemPartition )
      goto LABEL_59;
    v33 = KeGetCurrentPrcb();
    v34 = (int)v33->CachedResidentAvailable;
    if ( (_DWORD)v34 == -1 )
      goto LABEL_59;
    if ( (unsigned __int64)(v34 + 1) <= 0x100 )
    {
      do
      {
        v35 = _InterlockedCompareExchange((volatile signed __int32 *)&v33->CachedResidentAvailable, v34 + 1, v34);
        v20 = (_DWORD)v34 == v35;
        LODWORD(v34) = v35;
        if ( v20 )
          goto LABEL_60;
      }
      while ( v35 != -1 && (unsigned __int64)(v35 + 1LL) <= 0x100 );
    }
    if ( (int)v34 > 192
      && (_DWORD)v34 == _InterlockedCompareExchange((volatile signed __int32 *)&v33->CachedResidentAvailable, 192, v34) )
    {
      v32 = (int)v34 - 192 + 1LL;
    }
    if ( v32 )
LABEL_59:
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v25 + 17280), v32);
LABEL_60:
    ++v49;
    goto LABEL_61;
  }
LABEL_86:
  if ( (_DWORD)KiIrqlFlags )
  {
    v43 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v43 <= 0xFu && CurrentIrql <= 0xFu && v43 >= 2u )
    {
      v44 = KeGetCurrentPrcb();
      v45 = v44->SchedulerAssist;
      v46 = ~(unsigned __int16)(v7 << (CurrentIrql + 1));
      v20 = (v46 & v45[5]) == 0;
      v45[5] &= v46;
      if ( v20 )
        KiRemoveSystemWorkPriorityKick((__int64)v44);
    }
  }
  __writecr8(CurrentIrql);
  return v2;
}
