/*
 * XREFs of MiSwitchToTransition @ 0x1406336DC
 * Callers:
 *     MiReplaceRotateWithDemandZero @ 0x140A316B8 (MiReplaceRotateWithDemandZero.c)
 * Callees:
 *     MiChangePageAttributeBatch @ 0x14021C9B4 (MiChangePageAttributeBatch.c)
 *     MiLockPageTableInternal @ 0x1402377D0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x14023C5D0 (MiUnlockWorkingSetShared.c)
 *     MiGetPage @ 0x14026D5F0 (MiGetPage.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402715F0 (MiPteInShadowRange.c)
 *     MiObtainFaultCharges @ 0x140274E40 (MiObtainFaultCharges.c)
 *     MiFlushTbList @ 0x140279B10 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x14027F800 (MiInsertTbFlushEntry.c)
 *     MiLockWorkingSetShared @ 0x140283F20 (MiLockWorkingSetShared.c)
 *     MiSwizzleInvalidPte @ 0x140285A30 (MiSwizzleInvalidPte.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x140285C64 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiSetPfnBlink @ 0x1402DF340 (MiSetPfnBlink.c)
 *     MiGetContainingPageTable @ 0x1402E1500 (MiGetContainingPageTable.c)
 *     MiGetEffectivePagePriorityThread @ 0x1402E1780 (MiGetEffectivePagePriorityThread.c)
 *     MiSetPfnPteFrame @ 0x1402E1830 (MiSetPfnPteFrame.c)
 *     MiInitializePageColorBase @ 0x1402E1920 (MiInitializePageColorBase.c)
 *     MiReleaseFreshPage @ 0x1402E81B0 (MiReleaseFreshPage.c)
 *     MiAddLockedPageCharge @ 0x1402EF5F8 (MiAddLockedPageCharge.c)
 *     MiLockPageInline @ 0x1402EF910 (MiLockPageInline.c)
 *     MiPageAttributeBatchChangeNeeded @ 0x1402F9E04 (MiPageAttributeBatchChangeNeeded.c)
 *     MiUnlockPageTableInternal @ 0x140319850 (MiUnlockPageTableInternal.c)
 *     ExAcquireRundownProtectionCacheAware @ 0x140329190 (ExAcquireRundownProtectionCacheAware.c)
 *     MiWritePteShadow @ 0x1403574EC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14035754C (MiPteHasShadow.c)
 *     MiReturnFaultCharges @ 0x140360060 (MiReturnFaultCharges.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MiAddMdlTracker @ 0x14061CA3C (MiAddMdlTracker.c)
 *     MiIsProbeActive @ 0x14062E748 (MiIsProbeActive.c)
 *     MiWaitForFreePage @ 0x140653F98 (MiWaitForFreePage.c)
 *     MiGetReadyInPageBlock @ 0x140A315E0 (MiGetReadyInPageBlock.c)
 */

__int64 __fastcall MiSwitchToTransition(ULONG_PTR a1, __int64 a2, unsigned int a3)
{
  unsigned __int64 v5; // rsi
  __int64 v6; // rdi
  __int64 v7; // r13
  __int64 v8; // r15
  void *v9; // r14
  unsigned __int64 v10; // r11
  unsigned __int64 v11; // r12
  __int64 v12; // rbx
  signed __int32 v13; // r8d
  __int64 Page; // rax
  __int64 v15; // r14
  __int64 v16; // rbx
  unsigned __int64 v17; // r14
  unsigned __int64 v18; // r13
  unsigned __int8 v19; // al
  __int64 v20; // r9
  __int64 v21; // r11
  ULONG_PTR v22; // rbx
  unsigned __int64 v23; // rax
  ULONG_PTR BugCheckParameter4; // rdx
  __int64 v25; // rax
  unsigned __int16 v26; // cx
  __int64 v27; // r8
  __int64 v28; // rax
  __int64 v29; // r15
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  char v33; // r11
  __int64 v34; // rbx
  struct _KTHREAD *v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rcx
  volatile signed __int64 *v38; // rbx
  char v39; // al
  unsigned __int8 CurrentIrql; // al
  unsigned __int8 v41; // bl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v44; // eax
  bool v45; // zf
  __int64 v46; // rax
  char v47; // r15
  __int64 v48; // rbx
  __int64 v49; // r8
  BOOL HasShadow; // eax
  int v51; // eax
  unsigned __int64 v52; // rax
  __int64 v53; // r8
  unsigned int v54; // edi
  ULONG_PTR v55; // rbx
  _KPROCESS *v56; // rsi
  unsigned __int8 v58; // [rsp+30h] [rbp-D0h]
  char v59; // [rsp+31h] [rbp-CFh]
  unsigned __int8 v60; // [rsp+32h] [rbp-CEh]
  int v62; // [rsp+38h] [rbp-C8h]
  __int64 v63; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v64; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v65; // [rsp+50h] [rbp-B0h]
  __int64 v66; // [rsp+58h] [rbp-A8h]
  char EffectivePagePriorityThread; // [rsp+60h] [rbp-A0h]
  ULONG_PTR v68; // [rsp+68h] [rbp-98h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+70h] [rbp-90h]
  __int64 v70; // [rsp+78h] [rbp-88h] BYREF
  __int64 ReadyInPageBlock; // [rsp+80h] [rbp-80h]
  unsigned __int64 ContainingPageTable; // [rsp+88h] [rbp-78h]
  unsigned __int64 v73; // [rsp+90h] [rbp-70h]
  unsigned __int64 v74; // [rsp+98h] [rbp-68h]
  __int128 v75; // [rsp+A0h] [rbp-60h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+B0h] [rbp-50h]
  volatile signed __int64 *v77; // [rsp+B8h] [rbp-48h]
  __int64 v78; // [rsp+C0h] [rbp-40h]
  ULONG_PTR v79; // [rsp+C8h] [rbp-38h]
  unsigned __int64 v80; // [rsp+D0h] [rbp-30h]
  _KPROCESS *Process; // [rsp+D8h] [rbp-28h]
  _QWORD v82[24]; // [rsp+E0h] [rbp-20h] BYREF

  BugCheckParameter3 = a1;
  v75 = 0LL;
  memset(v82, 0, 0xB8uLL);
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  EffectivePagePriorityThread = MiGetEffectivePagePriorityThread((__int64)CurrentThread);
  ReadyInPageBlock = MiGetReadyInPageBlock(a2);
  v74 = *(_QWORD *)(a1 + 32);
  v62 = 0;
  v5 = ((v74 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v59 = 0;
  v66 = (__int64)&Process[1].ActiveProcessors.StaticBitmap[26];
  MiInitializePageColorBase((__int64)&Process[1].ActiveProcessors.StaticBitmap[26], 0, (__int64)&v75);
  v6 = 0LL;
  v7 = 0x3FFFFFFFFFLL;
  v8 = 0LL;
  v9 = *(void **)(qword_140C673C8 + 8LL * *(unsigned __int16 *)(v66 + 174));
  v63 = (__int64)v9;
  v11 = MiObtainFaultCharges(v9, v10, 2);
  v73 = v11;
  v12 = 0LL;
  if ( !v11 )
    goto LABEL_13;
  while ( 1 )
  {
    v13 = _InterlockedExchangeAdd((volatile signed __int32 *)v75, 1u);
    Page = MiGetPage((__int64)v9, DWORD2(v75) & (unsigned int)v13 | HIDWORD(v75), 0);
    v15 = Page;
    if ( Page != -1 )
    {
      v6 = 48 * Page - 0x220000000000LL;
      if ( (unsigned int)MiPageAttributeBatchChangeNeeded(v6, a3) )
      {
        *(_QWORD *)(v6 + 16) = v8;
        v8 = v6;
      }
      MiSetPfnBlink(v6, v7, 0);
      v7 = v15;
      v9 = (void *)v63;
      ++v12;
      goto LABEL_8;
    }
    if ( v12 )
      break;
    v9 = (void *)v63;
    MiWaitForFreePage(v63);
LABEL_8:
    if ( v12 == v11 )
      goto LABEL_11;
  }
  MiReturnFaultCharges(v63, v11 - v12, 0);
  v11 = v12;
  v73 = v12;
LABEL_11:
  if ( v8 )
  {
    v70 = 0LL;
    MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)&v70);
    MiChangePageAttributeBatch(v8, a3, v70);
  }
LABEL_13:
  v16 = v66;
  ContainingPageTable = -1LL;
  v17 = 0LL;
  v80 = v5 + 8 * v11;
  v18 = 0LL;
  v64 = 0LL;
  v19 = MiLockWorkingSetShared(v66);
  v60 = v19;
  if ( v5 >= v5 + 8 * v11 )
    goto LABEL_33;
  v21 = 1LL;
  v79 = BugCheckParameter3 - ((v74 >> 9) & 0x7FFFFFFFF8LL) + 0x98000000030LL;
  while ( 2 )
  {
    if ( v18 )
    {
      if ( (v5 & 0xFFF) == 0 )
      {
        MiUnlockPageTableInternal(v16, v18);
        goto LABEL_18;
      }
    }
    else
    {
LABEL_18:
      v18 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiLockPageTableInternal(v16, v18, 0, v20);
      ContainingPageTable = MiGetContainingPageTable(v5);
      v21 = 1LL;
    }
    if ( (unsigned int)MiIsProbeActive(v5, v21, 3) )
      goto LABEL_30;
    v22 = MI_READ_PTE_LOCK_FREE(v5);
    v68 = v22;
    if ( (v22 & 1) == 0 )
      KeBugCheckEx(0x1Au, 0x41200uLL, v5, v22, BugCheckParameter3);
    v23 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v68) >> 12) & 0xFFFFFFFFFFLL;
    BugCheckParameter4 = 48 * v23 - 0x220000000000LL;
    if ( v23 > qword_140C65BA0 || !_bittest64((const signed __int64 *)(48 * v23 - 0x21FFFFFFFFD8LL), 0x36u) )
      goto LABEL_36;
    if ( (*(_QWORD *)(BugCheckParameter4 + 8) | 0x8000000000000000uLL) == v5 )
      KeBugCheckEx(0x1Au, 0x41300uLL, v5, v22, BugCheckParameter4);
    v25 = *(_QWORD *)(BugCheckParameter4 + 40);
    v26 = 1;
    if ( (v25 & 0x10000000000LL) != 0 || (v25 & 0xFFFFFFFFFFLL) == 0x3FFFFFFFFELL )
      v26 = 2;
    if ( *(_WORD *)(BugCheckParameter4 + 32) < v26 )
      KeBugCheckEx(0x1Au, 0x41301uLL, v5, v22, BugCheckParameter4);
    if ( *(_WORD *)(BugCheckParameter4 + 32) <= v26 )
    {
LABEL_36:
      v77 = (volatile signed __int64 *)(v6 + 24);
      v29 = v6;
      v30 = *(_QWORD *)(v6 + 24) & 0xFFFFFFFFFFLL;
      if ( v30 == 0x3FFFFFFFFFLL )
        v6 = 0LL;
      else
        v6 = 48 * v30 - 0x220000000000LL;
      v65 = 0xAAAAAAAAAAAAAAABuLL * ((v29 + 0x220000000000LL) >> 4);
      v31 = (v22 & 0x800) != 0 ? 4 : 1;
      if ( a3 == 2 )
      {
        v31 = (unsigned int)v31 | 0x18;
      }
      else if ( !a3 )
      {
        v31 = (unsigned int)v31 | 8;
      }
      v78 = v31;
      v32 = MiSwizzleInvalidPte(32 * v31);
      v34 = ReadyInPageBlock;
      v68 = v32;
      *(_QWORD *)(v29 + 16) = v32;
      if ( !v59 )
      {
        v35 = CurrentThread;
        *(_DWORD *)(v34 + 192) |= 0x20u;
        *(_DWORD *)(v34 + 80) = 0;
        *(_QWORD *)(v34 + 88) = 0LL;
        *(_QWORD *)(v34 + 152) = v35;
        *(_QWORD *)(v34 + 248) = v29;
        v59 = v33;
      }
      MiSetPfnPteFrame(v29, ContainingPageTable);
      v58 = MiLockPageInline(v36);
      *(_BYTE *)(v29 + 34) |= 0x20u;
      if ( v34 )
        v37 = v34 + 32;
      else
        v37 = 0LL;
      v38 = v77;
      *(_QWORD *)v29 = v37;
      *v38 &= 0xC000000000000000uLL;
      MiAddLockedPageCharge(v29, 1);
      v39 = *(_BYTE *)(v29 + 34) & 0xFA;
      *(_QWORD *)(v29 + 8) = v5;
      *(_BYTE *)(v29 + 34) = v39 | 2;
      *(_BYTE *)(v29 + 35) ^= (*(_BYTE *)(v29 + 35) ^ EffectivePagePriorityThread) & 7;
      if ( ((*(_QWORD *)(v29 + 40) >> 43) & 0x3FF) != 0 )
        ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v63 + 2432));
      _InterlockedAnd64(v38, 0x7FFFFFFFFFFFFFFFuLL);
      if ( (_DWORD)KiIrqlFlags
        && (CurrentIrql = KeGetCurrentIrql(), ((unsigned __int8)KiIrqlFlags & 1) != 0)
        && CurrentIrql <= 0xFu )
      {
        v41 = v58;
        if ( v58 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v44 = ~(unsigned __int16)(-1LL << (v58 + 1));
          v45 = (v44 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v44;
          if ( v45 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
      else
      {
        v41 = v58;
      }
      __writecr8(v41);
      MiReturnFaultCharges(v63, 1LL, 0);
      v46 = MiSwizzleInvalidPte(32 * (v78 | ((v65 & 0xFFFFFFFFFFLL) << 7) | 0x40));
      v47 = v46;
      v68 = v46;
      v48 = v46;
      if ( MiPteInShadowRange(v5) )
      {
        HasShadow = MiPteHasShadow();
        v21 = 1LL;
        if ( HasShadow )
        {
          v51 = 1;
          if ( HIBYTE(word_140C66CFC) )
            goto LABEL_66;
        }
        else
        {
          v51 = 0;
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
            goto LABEL_66;
        }
        if ( (v47 & 1) != 0 )
          v48 |= 0x8000000000000000uLL;
      }
      else
      {
        v51 = 0;
        v21 = 1LL;
      }
LABEL_66:
      *(_QWORD *)v5 = v48;
      if ( v51 )
        MiWritePteShadow(v5, v48, v49);
      v52 = v65;
      v17 += v21;
      v16 = v66;
      v64 = v17;
      *(_QWORD *)(v79 + v5) = v52;
      v5 += 8LL;
      if ( v5 >= v80 )
        goto LABEL_30;
      continue;
    }
    break;
  }
  v16 = v66;
  v62 = 1;
LABEL_30:
  if ( v18 )
    MiUnlockPageTableInternal(v16, v18);
  v19 = v60;
LABEL_33:
  MiUnlockWorkingSetShared(v16, v19);
  if ( v6 )
  {
    do
    {
      v27 = v6;
      v28 = *(_QWORD *)(v6 + 24) & 0xFFFFFFFFFFLL;
      if ( v28 == 0x3FFFFFFFFFLL )
        v6 = 0LL;
      else
        v6 = 48 * v28 - 0x220000000000LL;
      MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)(v27 + 16));
      MiReleaseFreshPage(v53);
    }
    while ( v6 );
    v17 = v64;
    v11 = v73;
  }
  if ( v17 == v11 )
  {
    v54 = v62;
  }
  else
  {
    MiReturnFaultCharges(v63, v11 - v17, 0);
    v54 = v62;
    if ( !v17 )
      v54 = 1;
  }
  v55 = BugCheckParameter3;
  *(_DWORD *)(BugCheckParameter3 + 40) = (_DWORD)v17 << 12;
  if ( v17 )
  {
    v56 = Process;
    _InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].Affinity.StaticBitmap[13], v17);
    WORD2(v82[0]) = 0;
    v82[2] = 0LL;
    v82[3] = 0LL;
    LODWORD(v82[0]) = 1;
    v82[1] = 20LL;
    MiInsertTbFlushEntry((__int64)v82, v74 & 0xFFFFFFFFFFFFF000uLL, v17, 0);
    MiFlushTbList((int *)v82);
    *(_QWORD *)(v55 + 16) = v56;
    *(_WORD *)(v55 + 10) |= 2u;
    _InterlockedExchangeAdd64((volatile signed __int64 *)&v56[1].Affinity.StaticBitmap[14], v17);
    if ( (MmTrackLockedPages & 1) != 0 )
      MiAddMdlTracker(v55, v17, 4);
  }
  return v54;
}
