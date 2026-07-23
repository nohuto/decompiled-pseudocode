/*
 * XREFs of MiUserFault @ 0x140235960
 * Callers:
 *     MmAccessFault @ 0x140235440 (MmAccessFault.c)
 * Callees:
 *     MiLocateAddress @ 0x140217240 (MiLocateAddress.c)
 *     MiZeroFault @ 0x1402323F0 (MiZeroFault.c)
 *     MiResolvePageTablePage @ 0x1402360F0 (MiResolvePageTablePage.c)
 *     MiUnlockWorkingSetShared @ 0x14023C5D0 (MiUnlockWorkingSetShared.c)
 *     MiCheckVirtualAddress @ 0x14025AD90 (MiCheckVirtualAddress.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402715F0 (MiPteInShadowRange.c)
 *     MiUnlockVadTree @ 0x140287B08 (MiUnlockVadTree.c)
 *     MiUnlockWorkingSetExclusive @ 0x14028A580 (MiUnlockWorkingSetExclusive.c)
 *     MiLockVadTree @ 0x14028AB50 (MiLockVadTree.c)
 *     MiReleaseFaultState @ 0x1402EF530 (MiReleaseFaultState.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140317000 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     MiUnlockPageTableInternal @ 0x140319850 (MiUnlockPageTableInternal.c)
 *     MiValidFault @ 0x140333770 (MiValidFault.c)
 *     MiEmptyDeferredWorkingSetEntries @ 0x140339F60 (MiEmptyDeferredWorkingSetEntries.c)
 *     MiAllowGuardFault @ 0x140341E20 (MiAllowGuardFault.c)
 *     MiLockTransitionLeafPageEx @ 0x140347F38 (MiLockTransitionLeafPageEx.c)
 *     MiWritePteShadow @ 0x1403574EC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14035754C (MiPteHasShadow.c)
 *     MiCheckFatalAccessViolation @ 0x1403688FC (MiCheckFatalAccessViolation.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14046B8F2 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14060B63C (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     MiIsVadEligibleForCommitRelease @ 0x14061871C (MiIsVadEligibleForCommitRelease.c)
 *     MiWaitForRotateToComplete @ 0x140634154 (MiWaitForRotateToComplete.c)
 *     MiCheckHoldFaultForHotPatch @ 0x1406421F0 (MiCheckHoldFaultForHotPatch.c)
 *     MiDelayFaultingThread @ 0x140646368 (MiDelayFaultingThread.c)
 *     MiCheckForUserStackOverflow @ 0x1407BDC68 (MiCheckForUserStackOverflow.c)
 */

__int64 __fastcall MiUserFault(_QWORD *a1)
{
  __int64 **v1; // r12
  unsigned int v3; // r8d
  _KPROCESS *Process; // rbp
  __int64 v5; // r9
  unsigned __int64 v6; // r11
  unsigned __int64 v7; // r10
  unsigned __int16 *v8; // r14
  unsigned __int8 v9; // al
  volatile __int32 *v10; // rbx
  unsigned __int8 v11; // di
  unsigned __int8 CurrentIrql; // dl
  _KPROCESS *v13; // rcx
  unsigned __int64 v14; // rcx
  _KPROCESS *v15; // rbx
  unsigned __int64 v16; // rcx
  int v17; // eax
  unsigned int valid; // ebx
  ULONG_PTR v19; // r14
  unsigned __int64 v20; // rax
  __int64 v21; // rdx
  int v22; // edx
  __int64 v23; // r8
  unsigned __int64 v24; // rbx
  char v25; // di
  unsigned int v27; // eax
  char v28; // bl
  unsigned int v29; // r13d
  _QWORD *v30; // rdx
  __int64 v31; // rdi
  __int64 v32; // rdx
  __int64 v33; // rdi
  __int64 v34; // rdx
  unsigned __int64 v35; // rax
  __int64 v36; // rbx
  unsigned __int64 v37; // rcx
  __int64 v38; // rdi
  volatile signed __int32 *v39; // rcx
  __int64 v40; // rdi
  unsigned __int64 v41; // rdi
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 **v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rdx
  bool v48; // sf
  bool v49; // of
  _DWORD *SchedulerAssist; // r10
  __int64 v51; // r8
  _DWORD *v52; // r9
  __int64 v53; // r8
  __int64 **Address; // rax
  __int64 v55; // rdx
  struct _LIST_ENTRY *Flink; // r8
  __int64 v57; // rcx
  struct _LIST_ENTRY *v58; // r8
  __int64 v59; // rcx
  struct _LIST_ENTRY *v60; // r9
  __int64 v61; // rax
  __int64 v62; // rbp
  __int64 v63; // rax
  __int64 v64; // rdi
  unsigned __int64 v65; // rbx
  __int64 v66; // rcx
  __int64 v67; // r8
  int v68; // [rsp+20h] [rbp-68h] BYREF
  __int64 v69; // [rsp+28h] [rbp-60h] BYREF
  __int64 v70[3]; // [rsp+30h] [rbp-58h] BYREF
  void *retaddr; // [rsp+88h] [rbp+0h]
  char v72; // [rsp+90h] [rbp+8h] BYREF
  signed __int32 v73; // [rsp+98h] [rbp+10h]
  int v74; // [rsp+A0h] [rbp+18h] BYREF
  signed __int32 v75; // [rsp+A8h] [rbp+20h]

  v1 = 0LL;
  v74 = 0;
  v69 = 0LL;
  v3 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  a1[7] = (char *)Process + 1664;
  if ( *(_DWORD *)&Process[1].Spare2[7] <= 0x10u
    || (HIDWORD(Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
    || (v5 = *(_QWORD *)(qword_140C673C8 + 8LL * Process[1].IdealProcessor[25]), *(_DWORD *)(v5 + 1192))
    && *(_KPROCESS **)(v5 + 1344) == Process )
  {
    if ( !dword_140C696DC )
      goto LABEL_11;
    v3 = 3;
    goto LABEL_112;
  }
  v6 = *(_QWORD *)(v5 + 17600);
  if ( (unsigned __int16)KeNumberNodes <= 1u
    || (v30 = (_QWORD *)(*(_QWORD *)(v5 + 16) + 25408LL * KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0]),
        v7 = 16LL * (v30[268] + v30[269])
           + ((v30[134] + v30[135]) << 9)
           + ((*v30 + v30[1]) << 18)
           + v30[2844]
           + v30[2845],
        v7 < 0x420)
    && v6 >= v7 >> 4
    || !v7 )
  {
    v7 = *(_QWORD *)(v5 + 17216);
  }
  if ( v7 >= 0x420 || v6 < 0x4000 && v6 < v7 >> 4 )
  {
    if ( dword_140C696DC )
      v3 = 3;
  }
  else
  {
    v49 = __OFSUB__(Process->BasePriority, 9);
    v48 = (char)(Process->BasePriority - 9) < 0;
    *(_DWORD *)&Process[1].Spare2[7] = 0;
    LOBYTE(v3) = v48 == v49;
    ++v3;
  }
  if ( v3 )
LABEL_112:
    MiDelayFaultingThread(v3);
LABEL_11:
  v8 = (unsigned __int16 *)&unk_140C6A180;
  v9 = Process[1].IdealProcessor[30] & 7;
  if ( v9 > 4u )
  {
    if ( v9 != 5 )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        if ( CurrentIrql == 2 )
          LODWORD(v51) = 4;
        else
          v51 = (-1LL << (CurrentIrql + 1)) & 4;
        SchedulerAssist[5] |= v51;
      }
      goto LABEL_20;
    }
    goto LABEL_13;
  }
  if ( v9 != 2 )
  {
LABEL_13:
    v10 = (volatile __int32 *)&Process[1].IdealNode[2];
    goto LABEL_14;
  }
  v10 = (volatile __int32 *)&unk_140C6A180;
LABEL_14:
  v11 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && v11 <= 0xFu )
  {
    v52 = KeGetCurrentPrcb()->SchedulerAssist;
    if ( v11 == 2 )
      LODWORD(v53) = 4;
    else
      v53 = (-1LL << (v11 + 1)) & 4;
    v52[5] |= v53;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v10, v11);
  }
  else
  {
    _m_prefetchw((const void *)v10);
    v73 = *v10 & 0x7FFFFFFF;
    v75 = v73 + 1;
    v75 = _InterlockedCompareExchange(v10, v73 + 1, v73);
    if ( v75 != v73 )
    {
      while ( v75 >= 0 )
      {
        v73 = v75;
        v75 = _InterlockedCompareExchange(v10, v75 + 1, v75);
        if ( v75 == v73 )
          goto LABEL_17;
      }
      ExpWaitForSpinLockSharedAndAcquire(v10, v11);
    }
  }
LABEL_17:
  if ( *((_DWORD *)v10 + 1) )
    _InterlockedExchange(v10 + 1, 0);
  CurrentIrql = v11;
LABEL_20:
  *((_BYTE *)a1 + 68) = CurrentIrql;
  v13 = KeGetCurrentThread()->ApcState.Process;
  if ( (v13[1].IdealProcessor[30] & 7) != 2 )
    v8 = &v13[1].IdealNode[2];
  if ( (HIBYTE(v13[1].IdealProcessor[31]) & 0x60) == 0x60
    && *((_QWORD *)v8 + 4)
    && (unsigned __int64)a1 < 0xFFFF800000000000uLL )
  {
    MiLockVadTree(1LL);
    Address = MiLocateAddress((unsigned __int64)a1);
    if ( !Address || (unsigned int)MiIsVadEligibleForCommitRelease(Address) )
    {
      LOBYTE(v55) = 17;
      MiUnlockVadTree(1LL, v55);
      valid = -1073741819;
      goto LABEL_62;
    }
    LOBYTE(v55) = 17;
    MiUnlockVadTree(1LL, v55);
  }
  v14 = *a1;
  if ( *a1 > 0x7FFFFFFEFFFFuLL && v14 < 0xFFFF800000000000uLL )
  {
    valid = -1073741819;
    goto LABEL_62;
  }
  v15 = KeGetCurrentThread()->ApcState.Process;
  if ( v15[1].Affinity.StaticBitmap[9] && (unsigned int)MiWaitForRotateToComplete(v14, a1 + 7)
    || (v16 = v15[2].ActiveProcessors.StaticBitmap[2]) != 0 && (unsigned int)MiCheckHoldFaultForHotPatch(v16, a1)
    || (v17 = MiResolvePageTablePage(a1), valid = v17, v17 == -1073740748) )
  {
    valid = 0;
    goto LABEL_62;
  }
  if ( v17 < 0 )
  {
LABEL_62:
    v33 = a1[7];
    if ( a1[9] )
    {
      if ( *((_WORD *)a1 + 33) )
        MiEmptyDeferredWorkingSetEntries(a1 + 7);
      MiUnlockPageTableInternal(v33, a1[9]);
      *((_BYTE *)a1 + 69) |= 2u;
      a1[9] = 0LL;
    }
    v34 = *((unsigned __int8 *)a1 + 68);
    if ( (*((_BYTE *)a1 + 69) & 1) != 0 )
      MiUnlockWorkingSetExclusive(v33, v34);
    else
      MiUnlockWorkingSetShared(v33, v34);
    return valid;
  }
  v19 = a1[3];
  v20 = *(_QWORD *)v19;
  if ( v19 >= 0xFFFFF6FB7DBED000uLL
    && v19 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0x600000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1 )
  {
    if ( (v20 & 1) == 0 )
      goto LABEL_30;
    if ( (v20 & 0x20) == 0 || (v20 & 0x42) == 0 )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v57 = *((_QWORD *)&Flink->Flink + ((v19 >> 3) & 0x1FF));
        if ( (v57 & 0x20) != 0 )
          v20 |= 0x20uLL;
        if ( (v57 & 0x42) != 0 )
          v20 |= 0x42uLL;
      }
    }
  }
  if ( (v20 & 1) != 0 )
  {
    valid = MiValidFault(a1, v20, 0xFFFFF6FB7DBED7F8uLL);
    goto LABEL_62;
  }
LABEL_30:
  v21 = a1[1];
  if ( (v21 & 2) != 0 && (Process[1].DirectoryTableBase & 0x1000000000LL) != 0 && *a1 < 0xFFFF800000000000uLL )
    a1[1] = v21 & 0xFFFFFFFFFFFFFFFDuLL;
  if ( v20 )
  {
    v74 = (v20 >> 5) & 0x1F;
    if ( (v20 & 0x400) != 0 )
    {
      v35 = *(_QWORD *)v19;
      if ( v19 >= 0xFFFFF6FB7DBED000uLL
        && v19 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0x600000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v35 & 1) != 0
        && ((v35 & 0x20) == 0 || (v35 & 0x42) == 0) )
      {
        v58 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v58 )
        {
          v59 = *((_QWORD *)&v58->Flink + ((v19 >> 3) & 0x1FF));
          if ( (v59 & 0x20) != 0 )
            v35 |= 0x20uLL;
          if ( (v59 & 0x42) != 0 )
            v35 |= 0x42uLL;
        }
      }
      v36 = (v35 >> 5) & 0x1F;
      if ( (v35 & 0x400) == 0 )
        goto LABEL_82;
      v37 = v35;
      if ( qword_140C65B40 && (v35 & 0x10) == 0 )
        v37 = v35 & ~qword_140C65B40;
      if ( HIDWORD(v37) == 0xFFFFFFFF )
      {
        v70[0] = 0LL;
        v68 = 0;
        v38 = MiCheckVirtualAddress((__int64)(v19 << 25) >> 16, &v68, v70);
        if ( v70[0] )
        {
          v39 = (volatile signed __int32 *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[28]
                                          + 284);
          if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          {
            ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v39, retaddr);
          }
          else
          {
            _InterlockedAnd(v39, 0xBFFFFFFF);
            _InterlockedDecrement(v39);
          }
        }
      }
      else
      {
LABEL_82:
        v40 = v35;
        if ( qword_140C65B40 && (v35 & 0x10) == 0 )
          v40 = v35 & ~qword_140C65B40;
        v38 = v40 >> 16;
        LODWORD(v36) = 256;
        if ( (v35 & 8) != 0 )
          LODWORD(v36) = 1;
      }
      v74 = v36;
      v69 = v38;
      if ( !v38 )
      {
        valid = -1073741819;
        goto LABEL_62;
      }
    }
LABEL_34:
    if ( v74 == 256 )
    {
LABEL_44:
      a1[12] = v69;
      return 3221225494LL;
    }
    v22 = a1[1] & 2;
    v23 = a1[2];
    if ( (a1[10] & 0x20) == 0 || v19 <= 0xFFFFF6BFFFFFFF78uLL && v19 >= 0xFFFFF68000000000uLL )
    {
      v24 = *(_QWORD *)v19;
      if ( v19 >= 0xFFFFF6FB7DBED000uLL
        && v19 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0x600000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1 )
      {
        if ( (v24 & 1) == 0 )
          goto LABEL_40;
        if ( (v24 & 0x20) == 0 || (v24 & 0x42) == 0 )
        {
          v60 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( v60 )
          {
            v61 = *((_QWORD *)&v60->Flink + ((v19 >> 3) & 0x1FF));
            if ( (v61 & 0x20) != 0 )
              v24 |= 0x20uLL;
            if ( (v61 & 0x42) != 0 )
              v24 |= 0x42uLL;
          }
        }
      }
      if ( (v24 & 1) == 0 )
      {
LABEL_40:
        v25 = v74;
        if ( (a1[1] & 2) != 0 )
          v22 = 1;
        if ( *((char *)MiReadWrite + (v74 & 7)) - v22 >= 10 )
        {
          if ( (v74 & 0xFFFFFFF8) != 0x10 || (v23 & 1) != 0 && *(_BYTE *)(v23 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
            goto LABEL_44;
          if ( (unsigned int)MiAllowGuardFault(a1[2]) )
          {
            if ( (v24 & 0x800) == 0 || (v24 & 0x400) != 0 )
            {
              v41 = v24 & 0xFFFFFFFFFFFFFC1FuLL | (32LL * (v25 & 0xF));
              if ( (unsigned int)MiPteInShadowRange(v19) )
              {
                if ( (unsigned int)MiPteHasShadow(v43, v42, v44) )
                {
                  if ( !HIBYTE(word_140C66CFC) && (v41 & 1) != 0 )
                    v41 |= 0x8000000000000000uLL;
                  *(_QWORD *)v19 = v41;
                  MiWritePteShadow(v19, v41);
                  goto LABEL_93;
                }
                if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
                  && (v41 & 1) != 0 )
                {
                  v41 |= 0x8000000000000000uLL;
                }
              }
              *(_QWORD *)v19 = v41;
LABEL_93:
              LOBYTE(v42) = 17;
              MiReleaseFaultState(a1 + 7, v42, 0LL);
              return MiCheckForUserStackOverflow(*a1, 0LL);
            }
            v62 = MiLockTransitionLeafPageEx(v19);
            v63 = MI_READ_PTE_LOCK_FREE(v19);
            v64 = v25 & 0xF;
            if ( v62 )
              *(_QWORD *)(v62 + 16) = (32LL * (unsigned int)v64) | *(_QWORD *)(v62 + 16) & 0xFFFFFFFFFFFFFC1FuLL;
            v65 = (32 * v64) | v63 & 0xFFFFFFFFFFFFFC1FuLL;
            if ( (unsigned int)MiPteInShadowRange(v19) )
            {
              if ( (unsigned int)MiPteHasShadow(v66, v42, v67) )
              {
                if ( !HIBYTE(word_140C66CFC) && (v65 & 1) != 0 )
                  v65 |= 0x8000000000000000uLL;
                *(_QWORD *)v19 = v65;
                MiWritePteShadow(v19, v65);
                goto LABEL_192;
              }
              if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
                && (v65 & 1) != 0 )
              {
                v65 |= 0x8000000000000000uLL;
              }
            }
            *(_QWORD *)v19 = v65;
LABEL_192:
            if ( v62 )
              _InterlockedAnd64((volatile signed __int64 *)(v62 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            goto LABEL_93;
          }
        }
        goto LABEL_102;
      }
      if ( (a1[1] & 2) == 0 || (v24 & 0xA00) != 0 )
        goto LABEL_44;
    }
LABEL_102:
    if ( *a1 < 0xFFFF800000000000uLL )
    {
      MiLockVadTree(1LL);
      v45 = MiLocateAddress(*a1);
      LOBYTE(v46) = 17;
      v1 = v45;
      MiUnlockVadTree(1LL, v46);
    }
    MiCheckFatalAccessViolation(*a1);
    a1[11] = v1;
    LOBYTE(v47) = 17;
    MiReleaseFaultState(a1 + 7, v47, 0LL);
    return 3221225477LL;
  }
  v72 = 0;
  v27 = MiZeroFault((__int64)a1, &v72, &v74, &v69);
  v28 = v72;
  v29 = v27;
  if ( !v72 )
    goto LABEL_34;
  v31 = a1[7];
  if ( a1[9] )
  {
    if ( *((_WORD *)a1 + 33) )
      MiEmptyDeferredWorkingSetEntries(a1 + 7);
    MiUnlockPageTableInternal(v31, a1[9]);
    *((_BYTE *)a1 + 69) |= 2u;
    a1[9] = 0LL;
  }
  v32 = *((unsigned __int8 *)a1 + 68);
  if ( (*((_BYTE *)a1 + 69) & 1) != 0 )
    MiUnlockWorkingSetExclusive(v31, v32);
  else
    MiUnlockWorkingSetShared(v31, v32);
  if ( v28 == 2 )
    return (unsigned int)MiCheckForUserStackOverflow(*a1, 1LL);
  return v29;
}
