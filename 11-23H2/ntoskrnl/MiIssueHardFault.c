/*
 * XREFs of MiIssueHardFault @ 0x1402A1340
 * Callers:
 *     MmAccessFault @ 0x140235440 (MmAccessFault.c)
 *     MiInPagePageTable @ 0x1402E5000 (MiInPagePageTable.c)
 * Callees:
 *     MiLockAndDecrementShareCount @ 0x140211BAC (MiLockAndDecrementShareCount.c)
 *     MiLockPageAndSetDirty @ 0x140217514 (MiLockPageAndSetDirty.c)
 *     KiStackAttachProcess @ 0x14022D710 (KiStackAttachProcess.c)
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     MiUnlockWorkingSetShared @ 0x14023C5D0 (MiUnlockWorkingSetShared.c)
 *     MiCompleteProtoPteFault @ 0x140268E70 (MiCompleteProtoPteFault.c)
 *     MiAllocateWsle @ 0x14026BA60 (MiAllocateWsle.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402715F0 (MiPteInShadowRange.c)
 *     MiLogPageAccess @ 0x14027CE40 (MiLogPageAccess.c)
 *     MiGetSharedVm @ 0x140287104 (MiGetSharedVm.c)
 *     MiRelockFaultState @ 0x140287128 (MiRelockFaultState.c)
 *     MiUnlockWorkingSetExclusive @ 0x14028A580 (MiUnlockWorkingSetExclusive.c)
 *     MiReferenceInPageFile @ 0x1402A1794 (MiReferenceInPageFile.c)
 *     MiGetSessionIdForVa @ 0x1402A1960 (MiGetSessionIdForVa.c)
 *     MiUnlockFaultPageTable @ 0x1402A19D8 (MiUnlockFaultPageTable.c)
 *     MiWaitForInPageComplete @ 0x1402A1A30 (MiWaitForInPageComplete.c)
 *     MiIssueHardFaultIo @ 0x1402A1E70 (MiIssueHardFaultIo.c)
 *     PfHardFaultRecord @ 0x1402A31A4 (PfHardFaultRecord.c)
 *     MiFinishHardFault @ 0x1402D9590 (MiFinishHardFault.c)
 *     MiGetEffectivePagePriorityThread @ 0x1402E1780 (MiGetEffectivePagePriorityThread.c)
 *     MiGetPagingFileOffset @ 0x1402F2AF4 (MiGetPagingFileOffset.c)
 *     KiCheckForKernelApcDelivery @ 0x14030FAB0 (KiCheckForKernelApcDelivery.c)
 *     MiMakeTransitionPteValid @ 0x140335260 (MiMakeTransitionPteValid.c)
 *     MiZeroPhysicalPage @ 0x14033948C (MiZeroPhysicalPage.c)
 *     MiOkToSetPteDirtyForNotValidFault @ 0x14033F4D8 (MiOkToSetPteDirtyForNotValidFault.c)
 *     MI_IS_SOFTWARE_PTE_SHADOW_STACK @ 0x140355810 (MI_IS_SOFTWARE_PTE_SHADOW_STACK.c)
 *     MiWritePteShadow @ 0x1403574EC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14035754C (MiPteHasShadow.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiIssueHardFault(ULONG_PTR *a1, __int64 a2)
{
  __int64 v2; // r12
  ULONG_PTR v4; // rdx
  unsigned int v6; // ebx
  unsigned int SessionIdForVa; // eax
  __int64 *v8; // rcx
  __int64 v9; // r15
  __int64 v10; // r14
  __int64 v11; // r8
  __int64 v12; // r9
  _DWORD *SchedulerAssist; // r9
  ULONG_PTR v14; // rax
  unsigned __int8 v15; // r14
  __int64 v16; // rax
  __int64 v17; // r8
  int v18; // edx
  __int64 v19; // rdx
  __int64 v20; // r9
  __int64 v21; // rcx
  ULONG_PTR v22; // rcx
  __int64 v23; // r15
  unsigned __int64 v24; // r14
  __int64 result; // rax
  int v26; // ebx
  int v27; // edi
  ULONG_PTR v28; // r12
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  unsigned __int64 v32; // rcx
  _QWORD *v33; // rdx
  _QWORD *v34; // rax
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  int v37; // eax
  bool v38; // zf
  unsigned __int64 v39; // rbx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  unsigned __int64 TransitionPteValid; // rbx
  __int64 v44; // r8
  __int64 v45; // rdx
  __int64 v46; // r8
  __int64 v47; // r9
  _BYTE *v48; // r8
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  unsigned __int64 v52; // rax
  char v53; // cl
  __int64 v54; // [rsp+0h] [rbp-70h]
  _BYTE v55[16]; // [rsp+20h] [rbp-50h] BYREF
  unsigned __int8 v56; // [rsp+70h] [rbp+0h]
  __int64 v57; // [rsp+78h] [rbp+8h]
  __int64 v58; // [rsp+80h] [rbp+10h]
  _BYTE *v59; // [rsp+88h] [rbp+18h] BYREF
  __int64 v60; // [rsp+90h] [rbp+20h] BYREF
  __int64 v61; // [rsp+98h] [rbp+28h]
  __int64 v62; // [rsp+A0h] [rbp+30h]

  v2 = *(_QWORD *)(a2 + 152);
  v4 = *a1;
  v60 = 0LL;
  v6 = 0;
  v62 = v2;
  *(_QWORD *)(a2 + 224) = v4;
  SessionIdForVa = MiGetSessionIdForVa(a1, v4);
  v8 = *(__int64 **)(a2 + 208);
  if ( v8 )
    v9 = *v8;
  else
    v9 = 0LL;
  v10 = MiReferenceInPageFile(a2, SessionIdForVa);
  v57 = a1[7];
  v58 = a1[9];
  MiUnlockFaultPageTable(a1 + 7);
  v56 = *((_BYTE *)a1 + 68);
  if ( (*((_BYTE *)a1 + 69) & 1) != 0 )
    MiUnlockWorkingSetExclusive(v57, 1u, v11, v12);
  else
    MiUnlockWorkingSetShared(v57, 1u);
  v57 = a1[2];
  if ( v10 )
  {
    *(_QWORD *)(a2 + 200) = v10;
    v6 = (*(_DWORD *)(v9 + 56) >> 5) & 1;
  }
  else
  {
    *(_QWORD *)(a2 + 200) = *(_QWORD *)(*(_QWORD *)(a2 + 200) + 56LL);
  }
  v14 = a1[2];
  if ( (v14 & 1) == 0 || *(_BYTE *)(v14 & 0xFFFFFFFFFFFFFFFEuLL) != 1 )
    ++*(_BYTE *)(v2 + 1390);
  if ( (*(_BYTE *)(a1[7] + 184) & 7) != 0 )
    --*(_WORD *)(v2 + 486);
  else
    --*(_WORD *)(v2 + 484);
  if ( (_DWORD)KiIrqlFlags
    && (CurrentIrql = KeGetCurrentIrql(), ((unsigned __int8)KiIrqlFlags & 1) != 0)
    && CurrentIrql <= 0xFu )
  {
    v15 = v56;
    if ( v56 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v37 = ~(unsigned __int16)(-1LL << (v56 + 1));
      v38 = (v37 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v37;
      if ( v38 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  else
  {
    v15 = v56;
  }
  __writecr8(v15);
  if ( (*(_DWORD *)(a2 + 192) & 0x20000) != 0 )
  {
    v16 = (*(_DWORD *)(a2 + 312) >> 12) + (unsigned int)((*(_DWORD *)(a2 + 312) & 0xFFF) != 0);
    MiZeroPhysicalPage(
      6LL * *(_QWORD *)(a2 + 8 * v16 + 312),
      *(_QWORD *)(a2 + 8 * v16 + 312),
      1LL,
      *(unsigned __int8 *)(48LL * *(_QWORD *)(a2 + 8 * v16 + 312) - 0x220000000000LL + 34) >> 6);
  }
  v17 = *(unsigned int *)(a2 + 312);
  *(_DWORD *)(a2 + 184) = v17;
  v59 = 0LL;
  if ( *(_DWORD *)(a2 + 36) )
  {
    v6 = 2;
  }
  else
  {
    v18 = *(_DWORD *)(a2 + 192);
    if ( (v18 & 0x200008) != 0x200008 || (v18 & 0x100) != 0 )
    {
      if ( ((PerfGlobalGroupMask & 0x2000) != 0 || (dword_140D0C194 & 1) != 0) && (v18 & 0x100) == 0 && (v18 & 8) == 0 )
      {
        v19 = *(_QWORD *)(a2 + 96);
        v20 = *(_QWORD *)(a2 + 224);
        v54 = *(_QWORD *)(a2 + 200);
        v59 = v55;
        PfHardFaultRecord((unsigned int)v55, v19, v17, v20, v54, v2);
      }
      v21 = a1[7];
      if ( (*(_BYTE *)(v21 + 187) & 0x60) == 0x60 && !*((_QWORD *)MiGetSharedVm(v21) + 4) )
        KiStackAttachProcess(PsInitialSystemProcess, 0, a2 + 104);
      v6 |= 2u;
      MiIssueHardFaultIo(a2, v6 & 1, a1[2]);
    }
  }
  v22 = a1[2];
  if ( (v22 & 1) != 0 )
  {
    v32 = v22 & 0xFFFFFFFFFFFFFFFEuLL;
    if ( *(_BYTE *)v32 == 1 )
    {
      v33 = (_QWORD *)*(unsigned __int8 *)(a1[7] + 184);
      if ( ((unsigned __int8)v33 & 7u) >= 2 )
        *(_DWORD *)(a2 + 192) ^= (*(_DWORD *)(a2 + 192) ^ (2 * (_DWORD)v33 - 2)) & 6;
      if ( v6 < 2 )
      {
        v33 = *(_QWORD **)(v32 + 64);
        if ( *v33 == v32 + 56 )
        {
          *(_QWORD *)a2 = v32 + 56;
          *(_QWORD *)(a2 + 8) = v33;
          *v33 = a2;
          *(_QWORD *)(v32 + 64) = a2;
          *(_QWORD *)(v32 + 72) += *(unsigned int *)(a2 + 184);
          goto LABEL_52;
        }
      }
      else
      {
        v34 = *(_QWORD **)(v32 + 48);
        v32 += 40LL;
        if ( *v34 == v32 )
        {
          *(_QWORD *)a2 = v32;
          *(_QWORD *)(a2 + 8) = v34;
          *v34 = a2;
          *(_QWORD *)(v32 + 8) = a2;
LABEL_52:
          KeGetCurrentIrql();
          __writecr8(1uLL);
          if ( (*(_BYTE *)(a1[7] + 184) & 7) != 0 )
          {
            v38 = (*(_WORD *)(v2 + 486))++ == 0xFFFF;
            if ( v38 && *(_QWORD *)(v2 + 152) != v2 + 152 )
              KiCheckForKernelApcDelivery(v32, v33, v17, SchedulerAssist);
          }
          else
          {
            KeLeaveCriticalRegionThread(v2);
          }
          MiRelockFaultState((__int64)(a1 + 7), v58);
          return 0LL;
        }
      }
      __fastfail(3u);
    }
  }
  v23 = *(_QWORD *)(a2 + 248);
  v24 = *(_QWORD *)(a2 + 232);
  if ( !_bittest64((const signed __int64 *)(v23 + 40), 0x28u) && *(__int64 *)(v23 + 8) > 0 )
    v23 = 0LL;
  MiWaitForInPageComplete(a1, a2, &v59);
  result = MiFinishHardFault(a1, v58, a2, &v60);
  v26 = (int)v59;
  v27 = result;
  --*(_BYTE *)(v2 + 1390);
  LODWORD(v58) = v26;
  if ( !(_DWORD)result )
  {
    if ( !v23 )
      v23 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v60) >> 12) & 0xFFFFFFFFFFLL)
          - 0x220000000000LL;
    v28 = a1[1] & 2;
    if ( *(__int64 *)(v23 + 40) < 0 )
    {
      v24 = ((*a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v27 = MiCompleteProtoPteFault(a1, v60, (unsigned int)v28, 0, v57);
      if ( v27 >= 0 )
        goto LABEL_32;
      return (unsigned int)v27;
    }
    v61 = v57 & 1;
    if ( (v57 & 1) == 0 || *(_BYTE *)(v57 & 0xFFFFFFFFFFFFFFFEuLL) != 4 )
      goto LABEL_86;
    v39 = MI_READ_PTE_LOCK_FREE(v24) & 0xFFFFFFFFFFFFFC1FuLL | 0x80;
    if ( MiPteInShadowRange(v24) )
    {
      if ( (unsigned int)MiPteHasShadow(v41, v40, v42) )
      {
        if ( !HIBYTE(word_140C66CFC) && (v39 & 1) != 0 )
          v39 |= 0x8000000000000000uLL;
        *(_QWORD *)v24 = v39;
        MiWritePteShadow(v24, v39);
        goto LABEL_86;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (v39 & 1) != 0 )
      {
        v39 |= 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)v24 = v39;
LABEL_86:
    TransitionPteValid = MiMakeTransitionPteValid(v24);
    if ( (unsigned int)MI_IS_SOFTWARE_PTE_SHADOW_STACK(v23 + 16) )
      TransitionPteValid |= 0x40uLL;
    if ( v28 )
    {
      if ( (unsigned int)MiOkToSetPteDirtyForNotValidFault(TransitionPteValid, *a1, v44) )
      {
        if ( (TransitionPteValid & 0x800) != 0 )
        {
          TransitionPteValid |= 0x42uLL;
          if ( (*(_BYTE *)(v23 + 34) & 0x10) == 0 )
          {
            if ( (unsigned int)MiGetPagingFileOffset(v23 + 16, v45, v46, v47) )
              MiLockPageAndSetDirty(v23, 1);
          }
        }
      }
    }
    v48 = (_BYTE *)(v57 & 0xFFFFFFFFFFFFFFFEuLL);
    if ( !v61 )
      goto LABEL_109;
    if ( *v48 == 4 )
    {
      if ( MiPteInShadowRange(v24) )
      {
        if ( (unsigned int)MiPteHasShadow(v50, v49, v51) )
        {
          if ( !HIBYTE(word_140C66CFC) && (TransitionPteValid & 1) != 0 )
            TransitionPteValid |= 0x8000000000000000uLL;
          *(_QWORD *)v24 = TransitionPteValid;
          MiWritePteShadow(v24, TransitionPteValid);
          return 276LL;
        }
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (TransitionPteValid & 1) != 0 )
        {
          TransitionPteValid |= 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)v24 = TransitionPteValid;
      return 276LL;
    }
    if ( *v48 == 5 )
    {
      v52 = v57 & 0xFFFFFFFFFFFFFFFEuLL;
      v53 = 0;
    }
    else
    {
LABEL_109:
      v53 = 0;
      v52 = 0LL;
      if ( v61 )
        v53 = *v48 == 3;
    }
    if ( (unsigned int)MiAllocateWsle(a1[7], (unsigned __int64 *)v24, (_QWORD *)v23, 0, TransitionPteValid, v53, v52) )
    {
      v26 = v58;
LABEL_32:
      if ( dword_140C67FE8
        && v26 != 2
        && (unsigned int)MiGetEffectivePagePriorityThread(v62, v29, v30, v31) >= dword_140C67FEC )
      {
        MiLogPageAccess(a1[7], v24 | 1);
      }
      if ( !v27 )
        return 276;
      return (unsigned int)v27;
    }
    MiLockAndDecrementShareCount(v23, 0);
    return (unsigned int)-1073741801;
  }
  return result;
}
