/*
 * XREFs of MiInitializeBootShadowStackPage @ 0x140644EB4
 * Callers:
 *     MiInitializeBootKernelShadowStacks @ 0x1403B61CC (MiInitializeBootKernelShadowStacks.c)
 *     MiInitializeBootKernelShadowStack @ 0x140644E50 (MiInitializeBootKernelShadowStack.c)
 * Callees:
 *     MiLockAndDecrementShareCount @ 0x140211BAC (MiLockAndDecrementShareCount.c)
 *     MiGetAnyMultiplexedVm @ 0x1402146B4 (MiGetAnyMultiplexedVm.c)
 *     MiLockPageAndSetDirty @ 0x140217514 (MiLockPageAndSetDirty.c)
 *     MiMarkPfnVerified @ 0x140219BD0 (MiMarkPfnVerified.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402715F0 (MiPteInShadowRange.c)
 *     MiLockWorkingSetOptimal @ 0x140285BFC (MiLockWorkingSetOptimal.c)
 *     MiReturnCommit @ 0x1402DC4E0 (MiReturnCommit.c)
 *     MiAcquireNonPagedResources @ 0x1402E45A4 (MiAcquireNonPagedResources.c)
 *     KeFlushSingleTb @ 0x1402EB354 (KeFlushSingleTb.c)
 *     MiLockPageInline @ 0x1402EF910 (MiLockPageInline.c)
 *     MiCheckSlabPfnBitmap @ 0x1403249C0 (MiCheckSlabPfnBitmap.c)
 *     MiWritePteShadow @ 0x1403574EC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14035754C (MiPteHasShadow.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     MiUnlockWorkingSetOptimal @ 0x140650880 (MiUnlockWorkingSetOptimal.c)
 */

__int64 __fastcall MiInitializeBootShadowStackPage(unsigned __int64 a1, int a2)
{
  unsigned __int64 v4; // rbp
  char *AnyMultiplexedVm; // r15
  int v6; // ebx
  unsigned __int64 v7; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v11; // eax
  bool v12; // zf
  int v13; // ecx
  unsigned __int64 v14; // r12
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 v17; // rbx
  unsigned __int64 v18; // rbx
  int v19; // ebp
  __int64 v20; // r8
  unsigned __int64 v21; // rbx
  int v22; // esi
  unsigned __int64 v24; // rbx
  __int64 v25; // rsi
  int v26; // r14d
  __int64 v27; // r8
  struct _KPRCB *v28; // r9
  unsigned __int64 v29; // r8
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v31; // eax
  __int64 v32[9]; // [rsp+20h] [rbp-48h] BYREF
  char v33; // [rsp+80h] [rbp+18h] BYREF

  v32[0] = MI_READ_PTE_LOCK_FREE(a1);
  v4 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)v32) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
  AnyMultiplexedVm = 0LL;
  v6 = 0;
  v7 = (unsigned __int8)MiLockPageInline(v4);
  if ( ((*(_QWORD *)(v4 + 40) >> 60) & 7) != 3 && (_BYTE)KiKernelCetEnabled )
    MiMarkPfnVerified(v4, 4);
  if ( (unsigned int)MiCheckSlabPfnBitmap(v4, 1LL, 0) && !(unsigned int)MiCheckSlabPfnBitmap(v4, 1LL, 1) )
    v6 = 1;
  _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( (_DWORD)KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
      && CurrentIrql <= 0xFu
      && (unsigned __int8)v7 <= 0xFu
      && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v11 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
      v12 = (v11 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v11;
      if ( v12 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v7);
  if ( v6 )
  {
    MiAcquireNonPagedResources((unsigned __int64)MiSystemPartition, 1uLL, 0LL, 0);
    ++qword_140C699A8;
  }
  if ( (_BYTE)KiKernelCetEnabled )
  {
    v33 = 0;
    if ( a2 )
    {
      if ( a2 != 1 )
        goto LABEL_22;
      v13 = 3;
    }
    else
    {
      v13 = 4;
    }
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(v13);
LABEL_22:
    v14 = MiLockWorkingSetOptimal((__int64)AnyMultiplexedVm, a1, &v33);
    v15 = MI_READ_PTE_LOCK_FREE(a1);
    v32[0] = v15;
    v17 = v15;
    if ( a2 )
    {
      if ( a2 != 1 )
      {
LABEL_43:
        LOBYTE(v16) = v33;
        return MiUnlockWorkingSetOptimal(AnyMultiplexedVm, v14, v16);
      }
      MiLockPageAndSetDirty(v4, 1);
      v18 = v17 & 0xFFFFFFFFFFFFF7BDuLL;
      v19 = 0;
      if ( MiPteInShadowRange(a1) )
      {
        if ( MiPteHasShadow() )
        {
          v19 = 1;
          if ( !HIBYTE(word_140C66CFC) )
          {
LABEL_29:
            if ( (v18 & 1) != 0 )
              v18 |= 0x8000000000000000uLL;
          }
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        {
          goto LABEL_29;
        }
      }
      *(_QWORD *)a1 = v18;
      if ( v19 )
        MiWritePteShadow(a1, v18, v20);
      KeFlushSingleTb((__int64)(a1 << 25) >> 16, 0, 2u);
      goto LABEL_43;
    }
    v21 = v15 & 0xFFFFFFFFFFFFF7FFuLL;
    v22 = 0;
    if ( MiPteInShadowRange(a1) )
    {
      if ( MiPteHasShadow() )
      {
        v22 = 1;
        if ( !HIBYTE(word_140C66CFC) )
        {
LABEL_39:
          if ( (v21 & 1) != 0 )
            v21 |= 0x8000000000000000uLL;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        goto LABEL_39;
      }
    }
    *(_QWORD *)a1 = v21;
    if ( v22 )
      MiWritePteShadow(a1, v21, v16);
    goto LABEL_43;
  }
  v24 = ZeroPte;
  v25 = 48 * (*(_QWORD *)(v4 + 40) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
  v26 = 0;
  if ( !MiPteInShadowRange(a1) )
    goto LABEL_51;
  if ( MiPteHasShadow() )
  {
    v26 = 1;
    if ( !HIBYTE(word_140C66CFC) )
    {
LABEL_49:
      if ( (ZeroPte & 1) != 0 )
        v24 = ZeroPte | 0x8000000000000000uLL;
    }
  }
  else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
  {
    goto LABEL_49;
  }
LABEL_51:
  *(_QWORD *)a1 = v24;
  if ( v26 )
    MiWritePteShadow(a1, v24, v27);
  KeFlushSingleTb((__int64)(a1 << 25) >> 16, 0, 1u);
  MiLockAndDecrementShareCount(v4, 1);
  MiLockAndDecrementShareCount(v25, 0);
  v28 = KeGetCurrentPrcb();
  v29 = 1LL;
  CachedResidentAvailable = (int)v28->CachedResidentAvailable;
  if ( (_DWORD)CachedResidentAvailable == -1 )
    goto LABEL_62;
  if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
  {
    do
    {
      v31 = _InterlockedCompareExchange(
              (volatile signed __int32 *)&v28->CachedResidentAvailable,
              CachedResidentAvailable + 1,
              CachedResidentAvailable);
      v12 = (_DWORD)CachedResidentAvailable == v31;
      LODWORD(CachedResidentAvailable) = v31;
      if ( v12 )
        goto LABEL_63;
    }
    while ( v31 != -1 && (unsigned __int64)(v31 + 1LL) <= 0x100 );
  }
  if ( (int)CachedResidentAvailable > 192
    && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                            (volatile signed __int32 *)&v28->CachedResidentAvailable,
                                            192,
                                            CachedResidentAvailable) )
  {
    v29 = (int)CachedResidentAvailable - 192 + 1LL;
  }
  if ( v29 )
LABEL_62:
    _InterlockedExchangeAdd64(&qword_140C6F7C0, v29);
LABEL_63:
  MiReturnCommit((__int64)MiSystemPartition, 1LL);
  return --qword_140C699A8;
}
