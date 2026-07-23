/*
 * XREFs of MiSwapStackPage @ 0x14039A11C
 * Callers:
 *     MiTradePage @ 0x1403BAB40 (MiTradePage.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x1402146B4 (MiGetAnyMultiplexedVm.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14021ACA0 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14021AE84 (MiUnmapPageInHyperSpaceWorker.c)
 *     KeExpandKernelStackAndCalloutInternal @ 0x14022E7E0 (KeExpandKernelStackAndCalloutInternal.c)
 *     MiLockPageTableInternal @ 0x1402377D0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x14023C5D0 (MiUnlockWorkingSetShared.c)
 *     KeYieldProcessorEx @ 0x140242F10 (KeYieldProcessorEx.c)
 *     MiGetPage @ 0x14026D5F0 (MiGetPage.c)
 *     MiSearchNumaNodeTable @ 0x14026ED60 (MiSearchNumaNodeTable.c)
 *     MiLockWorkingSetShared @ 0x140283F20 (MiLockWorkingSetShared.c)
 *     MiGetSystemRegionType @ 0x140284B00 (MiGetSystemRegionType.c)
 *     MiGetPfnChannel @ 0x140287460 (MiGetPfnChannel.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1402DB214 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiAllocatePool @ 0x1402DF430 (MiAllocatePool.c)
 *     MiSetPfnTbFlushStamp @ 0x1402E18C0 (MiSetPfnTbFlushStamp.c)
 *     MiReleaseFreshPage @ 0x1402E81B0 (MiReleaseFreshPage.c)
 *     KeFlushSingleTb @ 0x1402EB354 (KeFlushSingleTb.c)
 *     MiAddLockedPageCharge @ 0x1402EF5F8 (MiAddLockedPageCharge.c)
 *     MiLockPageInline @ 0x1402EF910 (MiLockPageInline.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x140307B50 (KiReleasePrcbLocksForIsolationUnit.c)
 *     MiUnlockPageTableInternal @ 0x140319850 (MiUnlockPageTableInternal.c)
 *     MiLockNestedPageAtDpcInline @ 0x140348B00 (MiLockNestedPageAtDpcInline.c)
 *     MiGetLeafPfnBuddy @ 0x14038C1BC (MiGetLeafPfnBuddy.c)
 *     MiCanStealKernelStack @ 0x14039A41C (MiCanStealKernelStack.c)
 *     MiSwapStackPageNoDpc @ 0x14039A4AC (MiSwapStackPageNoDpc.c)
 *     KeGenericCallDpcEx @ 0x1403C68D0 (KeGenericCallDpcEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     KeTryToFreezeThreadStack @ 0x14056F618 (KeTryToFreezeThreadStack.c)
 *     MiCopyKstack @ 0x14062D030 (MiCopyKstack.c)
 *     MiSwitchKstackPages @ 0x14062DBC8 (MiSwitchKstackPages.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiSwapStackPage(__int64 a1, __int64 a2, int a3, int a4, __int64 *a5, _DWORD *a6)
{
  unsigned __int64 *Pool; // rax
  unsigned __int64 *v10; // rsi
  unsigned __int64 v11; // rbp
  unsigned __int64 v12; // rcx
  int SystemRegionType; // eax
  int v14; // ecx
  char *AnyMultiplexedVm; // rax
  __int64 v16; // r14
  unsigned __int64 v17; // r13
  int v18; // ebx
  unsigned int v19; // ebx
  unsigned int v20; // r8d
  __int64 Page; // rax
  __int64 v22; // rbx
  __int64 v23; // r12
  unsigned __int8 v24; // r15
  int v25; // eax
  char v26; // dl
  __int64 v27; // r9
  unsigned __int64 v28; // rbp
  __int64 v29; // r14
  unsigned __int64 LeafPfnBuddy; // rax
  struct _KTHREAD *v32; // r15
  unsigned __int64 v33; // rbx
  char v34; // al
  int v35; // eax
  __int64 v36; // rcx
  unsigned __int64 v37; // rdi
  unsigned __int8 v38; // al
  struct _KPRCB *v39; // r9
  _DWORD *v40; // r8
  int v41; // eax
  bool v42; // zf
  unsigned __int64 v43; // rbp
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v47; // eax
  unsigned __int8 v48; // dl
  unsigned __int8 v49; // [rsp+30h] [rbp-68h]
  int v50; // [rsp+34h] [rbp-64h] BYREF
  int v51; // [rsp+38h] [rbp-60h]
  __int64 v52; // [rsp+40h] [rbp-58h]
  __int64 v53; // [rsp+48h] [rbp-50h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+50h] [rbp-48h]
  __int64 v55[8]; // [rsp+58h] [rbp-40h] BYREF

  v53 = 0LL;
  CurrentThread = KeGetCurrentThread();
  Pool = (unsigned __int64 *)MiAllocatePool(64, 0x48uLL, 0x734B694Du);
  v10 = Pool;
  if ( !Pool )
    return 0LL;
  Pool[3] = a1;
  v11 = *(_QWORD *)(a2 + 8) | 0x8000000000000000uLL;
  v12 = (__int64)(v11 << 25) >> 16;
  Pool[5] = v12;
  SystemRegionType = MiGetSystemRegionType(v12);
  v51 = SystemRegionType;
  if ( SystemRegionType == 14 )
  {
    v14 = 4;
  }
  else
  {
    if ( SystemRegionType != 12 )
    {
LABEL_22:
      ExFreePoolWithTag(v10, 0);
      return 0LL;
    }
    v14 = 1;
  }
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(v14);
  v10[7] = (unsigned __int64)AnyMultiplexedVm;
  v16 = (__int64)AnyMultiplexedVm;
  if ( !byte_140C698E4 )
    goto LABEL_22;
  v17 = 0xAAAAAAAAAAAAAAABuLL * ((a2 + 0x220000000000LL) >> 4);
  if ( a3 == -1 )
  {
    v18 = *((_DWORD *)MiSearchNumaNodeTable(0xAAAAAAAAAAAAAAABuLL * ((a2 + 0x220000000000LL) >> 4)) + 2);
    v19 = ((unsigned int)MiGetPfnChannel(a2) << byte_140C65A8E) | dword_140C65AF8 & v17 | (v18 << byte_140C65A8D);
    v20 = (a4 & 0x1000000 | 0x20000u) >> 8;
    if ( (a4 & 0x2000000) != 0 )
      v20 |= 0x20000u;
  }
  else
  {
    v20 = 560;
    v19 = dword_140C65AF8 & v17 | a3 & ~dword_140C65AF8;
  }
  Page = MiGetPage(a1, v19, v20);
  v52 = Page;
  v22 = Page;
  if ( Page == -1 )
    goto LABEL_22;
  v23 = 48 * Page - 0x220000000000LL;
  MiSetPfnTbFlushStamp(v23, 0, 0);
  v10[6] = 0LL;
  v50 = 0;
  v24 = MiLockWorkingSetShared(v16);
  v49 = v24;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v50);
    while ( *(__int64 *)(a2 + 24) < 0 );
  }
  if ( *(_QWORD *)(qword_140C673C8 + 8 * ((*(_QWORD *)(a2 + 40) >> 43) & 0x3FFLL)) != a1
    || v11 != (*(_QWORD *)(a2 + 8) | 0x8000000000000000uLL)
    || (v25 = MiGetSystemRegionType(v10[5]), v51 != v25)
    || !(unsigned int)MiCanStealKernelStack(a2, 1LL)
    || (v28 = ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, !(unsigned int)MiLockPageTableInternal(
                                                                                v16,
                                                                                v28,
                                                                                v26,
                                                                                v27)) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v48 = v24;
LABEL_64:
    MiUnlockWorkingSetShared(v16, v48);
    MiReleaseFreshPage(v23);
    goto LABEL_22;
  }
  if ( (byte_140C65A8F & 1) == 0 || !(unsigned int)MiSwapStackPageNoDpc(a2, v23) )
  {
    LeafPfnBuddy = MiGetLeafPfnBuddy((_QWORD *)a2);
    v32 = (struct _KTHREAD *)LeafPfnBuddy;
    if ( ((LeafPfnBuddy + 32) & 0xFFFFFFFFFFFFFFDFuLL) != 0 )
    {
      if ( LeafPfnBuddy != -16LL && (struct _KTHREAD *)LeafPfnBuddy != CurrentThread )
      {
        if ( (unsigned __int8)KeTryToFreezeThreadStack(LeafPfnBuddy, &v53) )
        {
          v33 = MiMapPageInHyperSpaceWorker(v22, 0LL, 0x80000000);
          MiCopyKstack(v23, a2, ((v33 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
          MiUnmapPageInHyperSpaceWorker(v33, 0x11u);
          MiLockNestedPageAtDpcInline(v23);
          MiSwitchKstackPages(v23, a2);
          _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v34 = *(_BYTE *)(a2 + 34);
          *(_QWORD *)(a2 + 40) &= ~0x8000000000000000uLL;
          *(_BYTE *)(a2 + 34) = v34 & 0xC7;
          *(_BYTE *)(a2 + 35) &= ~0x20u;
          *(_QWORD *)(a2 + 24) &= 0xC000000000000000uLL;
          _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          KeFlushSingleTb(v10[5], 0, 2u);
          v55[0] = v53;
          if ( v53 && (v53 & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
            KiReleasePrcbLocksForIsolationUnit(v55);
          v32->ThreadLock = 0LL;
          MiUnlockPageTableInternal(v16, v28);
          MiUnlockWorkingSetShared(v16, v49);
          v29 = v52;
          *a6 = 1;
          goto LABEL_19;
        }
        goto LABEL_39;
      }
      if ( (unsigned int)MiAddLockedPageCharge(a2, 0) )
      {
        v10[6] = a2;
LABEL_39:
        _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        MiUnlockPageTableInternal(v16, v28);
        MiUnlockWorkingSetShared(v16, v49);
        v29 = v52;
        *v10 = v17;
        v10[1] = v29;
        v10[2] = 0LL;
        *((_DWORD *)v10 + 8) = 0;
        if ( v32 == (struct _KTHREAD *)-16LL || v32 == CurrentThread )
        {
          v35 = KeExpandKernelStackAndCalloutInternal(
                  (void (__fastcall *)(ULONG_PTR))MiJumpStack,
                  (ULONG_PTR)v10,
                  24576,
                  1,
                  0LL);
          if ( v35 < 0 )
            *((_DWORD *)v10 + 8) = v35;
        }
        else
        {
          KeGenericCallDpcEx(MiDoStackCopy, v10);
        }
        if ( *((int *)v10 + 8) >= 0 )
        {
          *a6 = 0;
          v43 = (unsigned __int8)MiLockPageInline(a2);
          *(_QWORD *)(a2 + 24) &= 0xC000000000000000uLL;
          _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( (_DWORD)KiIrqlFlags )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
              && CurrentIrql <= 0xFu
              && (unsigned __int8)v43 <= 0xFu
              && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v47 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v43 + 1));
              v42 = (v47 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v47;
              if ( v42 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
          __writecr8(v43);
          goto LABEL_19;
        }
        MiReleaseFreshPage(v23);
        v36 = v10[6];
        if ( v36 )
        {
          v37 = (unsigned __int8)MiLockPageInline(v36);
          MiRemoveLockedPageChargeAndDecRef(v10[6]);
          _InterlockedAnd64((volatile signed __int64 *)(v10[6] + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( (_DWORD)KiIrqlFlags )
          {
            v38 = KeGetCurrentIrql();
            if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v38 <= 0xFu && (unsigned __int8)v37 <= 0xFu && v38 >= 2u )
            {
              v39 = KeGetCurrentPrcb();
              v40 = v39->SchedulerAssist;
              v41 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v37 + 1));
              v42 = (v41 & v40[5]) == 0;
              v40[5] &= v41;
              if ( v42 )
                KiRemoveSystemWorkPriorityKick(v39);
            }
          }
          __writecr8(v37);
        }
        goto LABEL_22;
      }
    }
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    MiUnlockPageTableInternal(v16, v28);
    v48 = v49;
    goto LABEL_64;
  }
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  MiUnlockPageTableInternal(v16, v28);
  MiUnlockWorkingSetShared(v16, v24);
  v29 = v52;
  *a6 = 1;
LABEL_19:
  *(_WORD *)(a2 + 32) = 0;
  if ( a5 )
    *a5 = v29;
  ExFreePoolWithTag(v10, 0);
  return 1LL;
}
