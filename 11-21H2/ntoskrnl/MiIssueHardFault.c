/*
 * XREFs of MiIssueHardFault @ 0x14027A1F0
 * Callers:
 *     MmAccessFault @ 0x14031C860 (MmAccessFault.c)
 *     MiInPagePageTable @ 0x140353230 (MiInPagePageTable.c)
 * Callees:
 *     MiLockAndDecrementShareCount @ 0x140228660 (MiLockAndDecrementShareCount.c)
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     MiMakeTransitionPteValid @ 0x140234EB4 (MiMakeTransitionPteValid.c)
 *     MiZeroPhysicalPage @ 0x1402359C4 (MiZeroPhysicalPage.c)
 *     MiOkToSetPteDirtyForNotValidFault @ 0x140236E68 (MiOkToSetPteDirtyForNotValidFault.c)
 *     MI_IS_SOFTWARE_PTE_SHADOW_STACK @ 0x140239F04 (MI_IS_SOFTWARE_PTE_SHADOW_STACK.c)
 *     MiReferenceInPageFile @ 0x14027A818 (MiReferenceInPageFile.c)
 *     MiUnlockFaultPageTable @ 0x14027A9D0 (MiUnlockFaultPageTable.c)
 *     MiWaitForInPageComplete @ 0x14027AA30 (MiWaitForInPageComplete.c)
 *     MiIssueHardFaultIo @ 0x14027AEA0 (MiIssueHardFaultIo.c)
 *     PfHardFaultRecord @ 0x14027B334 (PfHardFaultRecord.c)
 *     MiRelockFaultState @ 0x14027D364 (MiRelockFaultState.c)
 *     MiGetSharedVm @ 0x140282AD0 (MiGetSharedVm.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AC800 (KeLeaveCriticalRegionThread.c)
 *     MiUnlockWorkingSetShared @ 0x1402B0CE0 (MiUnlockWorkingSetShared.c)
 *     MiGetSessionIdForVa @ 0x1402CD940 (MiGetSessionIdForVa.c)
 *     MiGetEffectivePagePriorityThread @ 0x1402E670C (MiGetEffectivePagePriorityThread.c)
 *     MiGetPagingFileOffset @ 0x1402E76C0 (MiGetPagingFileOffset.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     KiStackAttachProcess @ 0x14030D5C0 (KiStackAttachProcess.c)
 *     MiUnlockWorkingSetExclusive @ 0x14030FA80 (MiUnlockWorkingSetExclusive.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     MiCompleteProtoPteFault @ 0x1403203D0 (MiCompleteProtoPteFault.c)
 *     MiAllocateWsle @ 0x140322F10 (MiAllocateWsle.c)
 *     MiLogPageAccess @ 0x140333040 (MiLogPageAccess.c)
 *     MiFinishHardFault @ 0x140334C40 (MiFinishHardFault.c)
 *     MiLockPageAndSetDirty @ 0x14033E534 (MiLockPageAndSetDirty.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiIssueHardFault(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  unsigned __int64 v4; // rdx
  unsigned int v6; // ebx
  unsigned int SessionIdForVa; // eax
  __int64 *v8; // rcx
  __int64 v9; // r15
  __int64 v10; // r14
  __int64 v11; // rdx
  __int64 v12; // rax
  unsigned __int8 v13; // r14
  int v14; // r8d
  int v15; // ecx
  __int64 v16; // rcx
  __int64 v17; // r15
  __int64 v18; // r14
  __int64 result; // rax
  int v20; // ebx
  int v21; // edi
  __int64 v22; // r12
  ULONG_PTR v23; // rcx
  unsigned __int64 v24; // rcx
  int v25; // edx
  _QWORD *v26; // rax
  unsigned __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // r9
  __int64 v30; // rcx
  __int64 TransitionPteValid; // rbx
  _BYTE *v32; // r8
  BOOL v33; // edx
  unsigned __int64 v34; // rcx
  unsigned __int64 v35; // rbx
  bool v36; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v40; // eax
  _QWORD *v41; // rdx
  __int64 v43; // [rsp+0h] [rbp-70h]
  _BYTE v44[16]; // [rsp+20h] [rbp-50h] BYREF
  __int64 v45; // [rsp+50h] [rbp-20h]
  unsigned __int8 v46; // [rsp+70h] [rbp+0h]
  __int64 v47; // [rsp+78h] [rbp+8h]
  __int64 v48; // [rsp+80h] [rbp+10h]
  _BYTE *v49; // [rsp+88h] [rbp+18h] BYREF
  __int64 v50; // [rsp+90h] [rbp+20h] BYREF
  __int64 v51; // [rsp+98h] [rbp+28h]
  __int64 v52; // [rsp+A0h] [rbp+30h]

  v2 = *(_QWORD *)(a2 + 152);
  v4 = *(_QWORD *)a1;
  v50 = 0LL;
  v6 = 0;
  v52 = v2;
  *(_QWORD *)(a2 + 224) = v4;
  SessionIdForVa = MiGetSessionIdForVa(a1, v4);
  v8 = *(__int64 **)(a2 + 208);
  if ( v8 )
    v9 = *v8;
  else
    v9 = 0LL;
  v10 = MiReferenceInPageFile(a2, SessionIdForVa);
  v47 = *(_QWORD *)(a1 + 56);
  v48 = *(_QWORD *)(a1 + 72);
  MiUnlockFaultPageTable(a1 + 56);
  LOBYTE(v11) = 1;
  v46 = *(_BYTE *)(a1 + 68);
  if ( (*(_BYTE *)(a1 + 69) & 1) != 0 )
    MiUnlockWorkingSetExclusive(v47, v11);
  else
    MiUnlockWorkingSetShared(v47, v11);
  v47 = *(_QWORD *)(a1 + 16);
  if ( v10 )
  {
    *(_QWORD *)(a2 + 200) = v10;
    v6 = (*(_DWORD *)(v9 + 56) >> 5) & 1;
  }
  else
  {
    *(_QWORD *)(a2 + 200) = *(_QWORD *)(*(_QWORD *)(a2 + 200) + 56LL);
  }
  v12 = *(_QWORD *)(a1 + 16);
  if ( (v12 & 1) == 0 || *(_BYTE *)(v12 & 0xFFFFFFFFFFFFFFFEuLL) != 1 )
    ++*(_BYTE *)(v2 + 1390);
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 56) + 184LL) & 7) != 0 )
    --*(_WORD *)(v2 + 486);
  else
    --*(_WORD *)(v2 + 484);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
  {
    v13 = v46;
    if ( v46 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v40 = ~(unsigned __int16)(-1LL << (v46 + 1));
      v36 = (v40 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v40;
      if ( v36 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  else
  {
    v13 = v46;
  }
  __writecr8(v13);
  v14 = *(_DWORD *)(a2 + 312);
  if ( (*(_DWORD *)(a2 + 192) & 0x20000) != 0 )
  {
    v23 = *(_QWORD *)(a2
                    + 8LL * ((*(_DWORD *)(a2 + 312) >> 12) + (unsigned int)((*(_DWORD *)(a2 + 312) & 0xFFF) != 0))
                    + 312);
    MiZeroPhysicalPage(v23, 3, *(unsigned __int8 *)(48 * v23 - 0x220000000000LL + 34) >> 6);
    v14 = *(_DWORD *)(a2 + 312);
  }
  *(_DWORD *)(a2 + 184) = v14;
  v49 = 0LL;
  if ( *(_DWORD *)(a2 + 36) )
  {
    v6 = 2;
  }
  else
  {
    v15 = *(_DWORD *)(a2 + 192);
    if ( (v15 & 0x200108) != 0x200008 )
    {
      if ( ((PerfGlobalGroupMask & 0x2000) != 0 || (dword_140CF5E54 & 1) != 0) && (v15 & 0x100) == 0 && (v15 & 8) == 0 )
      {
        v28 = *(_QWORD *)(a2 + 96);
        v29 = *(_QWORD *)(a2 + 224);
        v43 = *(_QWORD *)(a2 + 200);
        v49 = v44;
        PfHardFaultRecord((unsigned int)v44, v28, v14, v29, v43, v2);
      }
      v30 = *(_QWORD *)(a1 + 56);
      if ( (*(_BYTE *)(v30 + 187) & 0x60) == 0x60 && !*(_QWORD *)(MiGetSharedVm(v30) + 32) )
        KiStackAttachProcess((ULONG_PTR)PsInitialSystemProcess);
      v6 |= 2u;
      MiIssueHardFaultIo(a2, v6 & 1, *(_QWORD *)(a1 + 16));
    }
  }
  v16 = *(_QWORD *)(a1 + 16);
  if ( (v16 & 1) != 0 )
  {
    v24 = v16 & 0xFFFFFFFFFFFFFFFEuLL;
    if ( *(_BYTE *)v24 == 1 )
    {
      v25 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 56) + 184LL);
      if ( (v25 & 7u) >= 2 )
        *(_DWORD *)(a2 + 192) ^= (*(_DWORD *)(a2 + 192) ^ (2 * v25 - 2)) & 6;
      if ( v6 < 2 )
      {
        v41 = *(_QWORD **)(v24 + 64);
        if ( *v41 == v24 + 56 )
        {
          *(_QWORD *)a2 = v24 + 56;
          *(_QWORD *)(a2 + 8) = v41;
          *v41 = a2;
          *(_QWORD *)(v24 + 64) = a2;
          *(_QWORD *)(v24 + 72) += *(unsigned int *)(a2 + 184);
          goto LABEL_44;
        }
      }
      else
      {
        v26 = *(_QWORD **)(v24 + 48);
        v27 = v24 + 40;
        if ( *v26 == v27 )
        {
          *(_QWORD *)a2 = v27;
          *(_QWORD *)(a2 + 8) = v26;
          *v26 = a2;
          *(_QWORD *)(v27 + 8) = a2;
LABEL_44:
          KeGetCurrentIrql();
          __writecr8(1uLL);
          if ( (*(_BYTE *)(*(_QWORD *)(a1 + 56) + 184LL) & 7) != 0 )
          {
            v36 = (*(_WORD *)(v2 + 486))++ == 0xFFFF;
            if ( v36 && *(_QWORD *)(v2 + 152) != v2 + 152 )
              KiCheckForKernelApcDelivery();
          }
          else
          {
            KeLeaveCriticalRegionThread(v2);
          }
          MiRelockFaultState(a1 + 56, v48);
          return 0LL;
        }
      }
      __fastfail(3u);
    }
  }
  v17 = *(_QWORD *)(a2 + 248);
  v18 = *(_QWORD *)(a2 + 232);
  if ( !_bittest64((const signed __int64 *)(v17 + 40), 0x28u) && *(__int64 *)(v17 + 8) > 0 )
    v17 = 0LL;
  MiWaitForInPageComplete(a1, a2, &v49);
  result = MiFinishHardFault(a1, v48, a2, &v50, v45);
  v20 = (int)v49;
  v21 = result;
  --*(_BYTE *)(v2 + 1390);
  LODWORD(v48) = v20;
  if ( !(_DWORD)result )
  {
    if ( !v17 )
      v17 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v50) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
    v22 = *(_DWORD *)(a1 + 8) & 2;
    if ( *(__int64 *)(v17 + 40) < 0 )
    {
      v18 = ((*(_QWORD *)a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v21 = MiCompleteProtoPteFault(a1, v50, v22, 0, v47);
      if ( v21 >= 0 )
        goto LABEL_26;
      return (unsigned int)v21;
    }
    v51 = v47 & 1;
    if ( (v47 & 1) != 0 && *(_BYTE *)(v47 & 0xFFFFFFFFFFFFFFFEuLL) == 4 )
    {
      v35 = MI_READ_PTE_LOCK_FREE(v18) & 0xFFFFFFFFFFFFFC1FuLL | 0x80;
      if ( !(unsigned int)MiPteInShadowRange(v18) )
      {
LABEL_72:
        *(_QWORD *)v18 = v35;
        goto LABEL_58;
      }
      if ( !(unsigned int)MiPteHasShadow() )
      {
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (v35 & 1) != 0 )
        {
          v35 |= 0x8000000000000000uLL;
        }
        goto LABEL_72;
      }
      if ( !HIBYTE(word_140C51864) && (v35 & 1) != 0 )
        v35 |= 0x8000000000000000uLL;
      *(_QWORD *)v18 = v35;
      MiWritePteShadow(v18, v35);
    }
LABEL_58:
    TransitionPteValid = MiMakeTransitionPteValid(v18);
    if ( (unsigned int)MI_IS_SOFTWARE_PTE_SHADOW_STACK((_QWORD *)(v17 + 16)) )
      TransitionPteValid |= 0x40uLL;
    if ( v22 )
    {
      if ( MiOkToSetPteDirtyForNotValidFault(TransitionPteValid, *(_QWORD *)a1) && (TransitionPteValid & 0x800) != 0 )
      {
        TransitionPteValid |= 0x42uLL;
        if ( (*(_BYTE *)(v17 + 34) & 0x10) == 0 )
        {
          if ( (unsigned int)MiGetPagingFileOffset(v17 + 16) )
            MiLockPageAndSetDirty(v17, 1LL);
        }
      }
    }
    v32 = (_BYTE *)(v47 & 0xFFFFFFFFFFFFFFFEuLL);
    if ( !v51 )
      goto LABEL_62;
    if ( *v32 != 4 )
    {
      if ( *v32 == 5 )
      {
        v34 = v47 & 0xFFFFFFFFFFFFFFFEuLL;
        v33 = 0;
LABEL_64:
        if ( (unsigned int)MiAllocateWsle(*(_QWORD *)(a1 + 56), v18, v17, 0, TransitionPteValid, v33, v34) )
        {
          v20 = v48;
LABEL_26:
          if ( dword_140C52B68 && v20 != 2 && (unsigned int)MiGetEffectivePagePriorityThread(v52) >= dword_140C52B6C )
            MiLogPageAccess(*(_QWORD *)(a1 + 56), v18 | 1);
          if ( !v21 )
            return 276;
          return (unsigned int)v21;
        }
        MiLockAndDecrementShareCount(v17, 0);
        return (unsigned int)-1073741801;
      }
LABEL_62:
      v33 = 0;
      v34 = 0LL;
      if ( v51 )
        v33 = *v32 == 3;
      goto LABEL_64;
    }
    if ( (unsigned int)MiPteInShadowRange(v18) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        if ( !HIBYTE(word_140C51864) && (TransitionPteValid & 1) != 0 )
          TransitionPteValid |= 0x8000000000000000uLL;
        *(_QWORD *)v18 = TransitionPteValid;
        MiWritePteShadow(v18, TransitionPteValid);
        return 276LL;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (TransitionPteValid & 1) != 0 )
      {
        TransitionPteValid |= 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)v18 = TransitionPteValid;
    return 276LL;
  }
  return result;
}
