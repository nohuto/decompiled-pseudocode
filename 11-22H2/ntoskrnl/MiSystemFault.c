/*
 * XREFs of MiSystemFault @ 0x140261080
 * Callers:
 *     MmAccessFault @ 0x140235350 (MmAccessFault.c)
 * Callees:
 *     MiGetSessionVm @ 0x14020B13C (MiGetSessionVm.c)
 *     MiGetAnyMultiplexedVm @ 0x1402146D4 (MiGetAnyMultiplexedVm.c)
 *     MiUnlockWorkingSetShared @ 0x14023C4E0 (MiUnlockWorkingSetShared.c)
 *     MiCheckVirtualAddress @ 0x14025A9E0 (MiCheckVirtualAddress.c)
 *     MiHyperSpaceSize @ 0x14025D3F4 (MiHyperSpaceSize.c)
 *     MiCheckSystemPageTables @ 0x140261810 (MiCheckSystemPageTables.c)
 *     MiSynchronizeSystemVa @ 0x140261890 (MiSynchronizeSystemVa.c)
 *     MiResolveDemandZeroFault @ 0x140269C20 (MiResolveDemandZeroFault.c)
 *     MiCopyOnWrite @ 0x14026FC80 (MiCopyOnWrite.c)
 *     MiUpdatePfnForPrefetchByPte @ 0x140272F60 (MiUpdatePfnForPrefetchByPte.c)
 *     MiIsPrototypePteVadLookup @ 0x14027CDE0 (MiIsPrototypePteVadLookup.c)
 *     MiGetSystemRegionType @ 0x140284750 (MiGetSystemRegionType.c)
 *     MiUnlockWorkingSetExclusive @ 0x14028A1D0 (MiUnlockWorkingSetExclusive.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402A7AE0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiUnlockSystemVa @ 0x1402EED60 (MiUnlockSystemVa.c)
 *     ExAcquireSpinLockShared @ 0x140314440 (ExAcquireSpinLockShared.c)
 *     MiUnlockPageTableInternal @ 0x1403193E0 (MiUnlockPageTableInternal.c)
 *     MiEmptyDeferredWorkingSetEntries @ 0x140339B30 (MiEmptyDeferredWorkingSetEntries.c)
 *     MiNoFaultFound @ 0x14033C340 (MiNoFaultFound.c)
 *     KeInvalidAccessAllowed @ 0x140341800 (KeInvalidAccessAllowed.c)
 *     MiIsWorkingSetTrimThread @ 0x1403531E0 (MiIsWorkingSetTrimThread.c)
 *     MiCheckSystemNxFault @ 0x140356E88 (MiCheckSystemNxFault.c)
 *     KiRspInIstStack @ 0x14035A590 (KiRspInIstStack.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 *     memset @ 0x140435400 (memset.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     MiGenerateAccessViolation @ 0x140645FFC (MiGenerateAccessViolation.c)
 *     MiTransientPageListWriter @ 0x14064FF78 (MiTransientPageListWriter.c)
 *     MiCopyOnWriteCheckConditions @ 0x140666E90 (MiCopyOnWriteCheckConditions.c)
 */

__int64 __fastcall MiSystemFault(_QWORD *a1)
{
  __int64 v2; // rsi
  int v3; // eax
  ULONG_PTR v4; // rcx
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // r9
  _BYTE *v8; // rdx
  struct _KTHREAD *CurrentThread; // r14
  int v10; // eax
  ULONG_PTR v11; // r12
  __int64 v12; // r11
  __int64 v13; // r15
  _BYTE *v14; // r14
  __int16 v15; // ax
  bool v16; // cl
  void *v17; // rdx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax
  char v20; // r13
  int v21; // r8d
  void *SessionVm; // r12
  int v23; // r14d
  int v24; // eax
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v26; // xmm1_8
  unsigned __int64 v27; // r15
  ULONG_PTR v28; // rbx
  ULONG_PTR v29; // r14
  __int64 v30; // r15
  unsigned __int8 v31; // r8
  __int64 v33; // rsi
  __int64 v34; // rax
  __int64 v35; // rbx
  __int64 v36; // rdx
  char v37; // al
  KIRQL v38; // al
  _QWORD *v39; // r15
  unsigned __int64 v40; // r13
  int v41; // ecx
  __int64 v42; // rax
  unsigned __int64 v43; // r10
  __int64 v44; // rax
  __int64 v45; // xmm1_8
  unsigned __int64 v46; // rax
  int v47; // ebx
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v51; // eax
  bool v52; // zf
  __int64 v53; // rdx
  unsigned __int8 v54; // al
  __int64 v55; // rax
  ULONG_PTR v56; // rdx
  ULONG_PTR v57; // r9
  __int64 v58; // rax
  __int64 v59; // rcx
  _BYTE *v60; // rax
  __int64 v61; // rcx
  _BYTE *v62; // rax
  __int64 v63; // rcx
  _BYTE *v64; // rax
  __int64 v65; // rax
  __int64 v66; // rcx
  _BYTE *v67; // rax
  unsigned __int8 v68; // [rsp+30h] [rbp-69h]
  int v69; // [rsp+34h] [rbp-65h] BYREF
  __int64 v70; // [rsp+38h] [rbp-61h] BYREF
  _QWORD v71[16]; // [rsp+40h] [rbp-59h] BYREF

  v2 = 0LL;
  v70 = 0LL;
  v69 = 0;
  memset(v71, 0, sizeof(v71));
  v3 = *((_DWORD *)a1 + 20);
  if ( (v3 & 0x20) != 0 )
    return 3221225477LL;
  if ( (v3 & 0x10) != 0 )
    KeBugCheckEx(0x50u, *a1, a1[1], a1[2], 0xEuLL);
  v4 = *a1;
  v5 = *a1;
  v6 = 0xFFFFF68000000000uLL;
  v7 = 0xFFFFF6FFFFFFFFFFuLL;
  if ( *a1 >= 0xFFFFF68000000000uLL )
  {
    while ( v5 <= 0xFFFFF6FFFFFFFFFFuLL )
    {
      v5 = (__int64)(v5 << 25) >> 16;
      if ( v5 < 0xFFFFF68000000000uLL )
        goto LABEL_4;
    }
  }
  else
  {
LABEL_4:
    if ( v4 < 0xFFFFF68000000000uLL )
      goto LABEL_5;
  }
  if ( v4 <= 0xFFFFF6FFFFFFFFFFuLL && v5 >= qword_140C6A658 && v5 <= qword_140C67170 )
    a1[1] |= 2uLL;
LABEL_5:
  v68 = 0;
  v8 = (_BYTE *)(a1[2] & 0xFFFFFFFFFFFFFFFEuLL);
  if ( (a1[2] & 1) != 0 && (*v8 == 7 || *v8 == 8) )
  {
    if ( v4 < 0xFFFFF68000000000uLL
      || v4 > 0xFFFFF6FFFFFFFFFFuLL
      || v5 > 0x7FFFFFFEFFFFLL && (v5 < qword_140C6A658 || v5 > qword_140C67170) )
    {
      return 3489660934LL;
    }
    return 192LL;
  }
  if ( v5 < 0xFFFF800000000000uLL || v5 >= qword_140C67168 && v5 < qword_140C67168 + MiHyperSpaceSize() )
    return 192LL;
  CurrentThread = KeGetCurrentThread();
  v10 = *((_DWORD *)&CurrentThread[1].SwapListEntry + 3);
  if ( (v10 & 0x400) != 0 || (v10 & 0x100) != 0 && (unsigned int)MiTransientPageListWriter(CurrentThread, *a1, v6, v7) )
    return 3221225477LL;
  v11 = *a1;
  if ( dword_140C67344 )
  {
    v38 = ExAcquireSpinLockShared(&dword_140C67340);
    v39 = (_QWORD *)qword_140C67348;
    v40 = v38;
    if ( qword_140C67348 )
    {
      do
      {
        if ( (unsigned __int64)CurrentThread > v39[3] )
        {
          v39 = (_QWORD *)v39[1];
        }
        else
        {
          if ( (unsigned __int64)CurrentThread >= v39[3] )
            break;
          v39 = (_QWORD *)*v39;
        }
      }
      while ( v39 );
      if ( v39 && v39[5] != ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
        v39 = 0LL;
    }
    ExReleaseSpinLockSharedFromDpcLevel(&dword_140C67340);
    if ( (_DWORD)KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
        && CurrentIrql <= 0xFu
        && (unsigned __int8)v40 <= 0xFu
        && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v51 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v40 + 1));
        v52 = (v51 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v51;
        if ( v52 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v40);
    if ( v39 )
      return 3221225477LL;
  }
  v12 = a1[2];
  v13 = v12 & 1;
  v14 = (_BYTE *)(v12 & 0xFFFFFFFFFFFFFFFEuLL);
  if ( (v12 & 1) != 0 )
  {
    if ( *v14 != 1 )
    {
      v19 = a1[2] & 0xFFFFFFFFFFFFFFFEuLL;
      if ( *v14 != 3 && *v14 != 6 )
        goto LABEL_19;
    }
    goto LABEL_97;
  }
  if ( !v12 )
    goto LABEL_87;
  v15 = *(_WORD *)(v12 + 368);
  v16 = 0;
  if ( v15 != 16 )
  {
    if ( v15 == 51 )
    {
      v17 = (void *)qword_140D1F370;
      goto LABEL_17;
    }
LABEL_87:
    v19 = (unsigned __int64)v14;
LABEL_19:
    v20 = 0;
    v14 = (_BYTE *)v19;
    goto LABEL_20;
  }
  if ( (*(_DWORD *)(v12 + 376) & 0x200) == 0
    && ((unsigned int)KiRspInIstStack(3LL, *(_QWORD *)(v12 + 384)) || (unsigned int)KiRspInIstStack(2LL, v53)) )
  {
    goto LABEL_87;
  }
  v17 = &ExpInterlockedPopEntrySListFault;
  v18 = *(_QWORD *)(v12 + 360);
  if ( KiDynamicTraceEnabled && v18 >= ControlPc && v18 < qword_140D1F2B0 )
  {
    v54 = KeGetCurrentIrql();
    v16 = v54 == 15;
  }
  else
  {
    v16 = 0;
  }
LABEL_17:
  if ( *(void **)(v12 + 360) != v17 )
  {
    v19 = (unsigned __int64)v14;
    if ( !v16 )
      goto LABEL_19;
  }
LABEL_97:
  v20 = 1;
LABEL_20:
  HIDWORD(v71[0]) = 1;
  v21 = byte_140C6A4D8[((v5 >> 39) & 0x1FF) - 256];
  if ( (a1[10] & 8) != 0 )
  {
    if ( v21 != 6 )
      return 3221225477LL;
    goto LABEL_27;
  }
  if ( (!v13 || *v14 != 1) && !v20 )
    HIDWORD(v71[0]) = 3;
  if ( v21 == 8 )
  {
    SessionVm = &unk_140C6F8C0;
  }
  else if ( v21 == 1 )
  {
    SessionVm = (void *)MiGetSessionVm();
    if ( !SessionVm )
      goto LABEL_155;
    v68 = 1;
  }
  else
  {
    if ( v21 == 6 )
    {
LABEL_27:
      SessionVm = &unk_140C69D80;
      goto LABEL_28;
    }
    if ( v21 == 12 )
    {
      SessionVm = &unk_140C69C40;
    }
    else
    {
      if ( v21 == 14 )
      {
        if ( !v13 || *v14 != 4 && *v14 != 1 )
        {
LABEL_155:
          if ( (v71[0] & 0x200000000LL) != 0 && !(unsigned int)MiGenerateAccessViolation(a1) )
            KeBugCheckEx(0x50u, *a1, a1[1], a1[2], 2uLL);
          return 3221225477LL;
        }
        v41 = 4;
      }
      else
      {
        if ( v21 != 9 )
          goto LABEL_155;
        v41 = 3;
      }
      SessionVm = MiGetAnyMultiplexedVm(v41);
    }
  }
LABEL_28:
  if ( !(unsigned int)MiSynchronizeSystemVa((_DWORD)SessionVm, *a1, v21, 0, (__int64)v71) )
    goto LABEL_155;
  v23 = BYTE4(v71[0]) & 2;
  if ( (v71[0] & 0x200000000LL) == 0
    && (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
    && !(unsigned int)MiIsWorkingSetTrimThread()
    && (unsigned int)MiGetSystemRegionType(v5) == 1
    || (v24 = MiCheckSystemPageTables(a1), v24 == 2) )
  {
    MiUnlockSystemVa(v71);
    goto LABEL_155;
  }
  if ( v24 == 1 )
  {
    MiUnlockSystemVa(v71);
    return 0LL;
  }
  v26 = v71[5];
  *(_OWORD *)(a1 + 7) = *(_OWORD *)&v71[3];
  a1[9] = v26;
  v27 = a1[3];
  v28 = *(_QWORD *)v27;
  if ( v27 >= 0xFFFFF6FB7DBED000uLL
    && v27 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0x600000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1 )
  {
    if ( (v28 & 1) == 0 )
      goto LABEL_34;
    if ( (v28 & 0x20) == 0 || (v28 & 0x42) == 0 )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v55 = *((_QWORD *)&Flink->Flink + ((v27 >> 3) & 0x1FF));
        if ( (v55 & 0x20) != 0 )
          v28 |= 0x20uLL;
        if ( (v55 & 0x42) != 0 )
          v28 |= 0x42uLL;
      }
    }
  }
  if ( (v28 & 1) == 0 )
  {
LABEL_34:
    if ( *a1 >= 0xFFFFF68000000000uLL && *a1 <= 0xFFFFF6FFFFFFFFFFuLL )
    {
      if ( !v20 )
      {
        v57 = a1[2];
        if ( (v57 & 1) == 0 || *(_BYTE *)(v57 & 0xFFFFFFFFFFFFFFFEuLL) != 1 )
          KeBugCheckEx(0x50u, *a1, a1[1], v57, 9uLL);
        goto LABEL_67;
      }
      goto LABEL_188;
    }
    if ( (v28 & 0x400) != 0 )
    {
      if ( (v28 & 2) != 0 )
      {
        v44 = a1[2];
        if ( (v44 & 1) == 0 || *(_BYTE *)(v44 & 0xFFFFFFFFFFFFFFFEuLL) != 1 )
        {
          LODWORD(v2) = MiResolveDemandZeroFault(a1, a1[3], 0LL, 0LL);
          v45 = a1[9];
          *(_OWORD *)&v71[3] = *(_OWORD *)(a1 + 7);
          v71[5] = v45;
        }
        goto LABEL_67;
      }
      v33 = v28;
      if ( qword_140C65C40 && (v28 & 0x10) == 0 )
        v33 = v28 & ~qword_140C65C40;
      v31 = v68;
      v2 = v33 >> 16;
      if ( v68 && (unsigned int)MiIsPrototypePteVadLookup(v28, Flink, v68) )
      {
        v58 = MiCheckVirtualAddress(v43, &v69, &v70);
        v2 = v58;
        if ( !v58 )
        {
          v59 = a1[2];
          v60 = (_BYTE *)(v59 & 0xFFFFFFFFFFFFFFFEuLL);
          if ( (v59 & 1) != 0 )
          {
            if ( *v60 == 1 || *v60 == 3 || *v60 == 6 )
              goto LABEL_188;
          }
          else if ( (unsigned __int8)KeInvalidAccessAllowed(v59, 0LL) )
          {
            goto LABEL_188;
          }
          if ( !(unsigned int)MiGenerateAccessViolation(a1) )
          {
            MiUnlockSystemVa(v71);
            return 3489660934LL;
          }
          goto LABEL_188;
        }
        v31 = v68;
      }
      v29 = v28 >> 5;
      goto LABEL_41;
    }
    v29 = v28 >> 5;
    v30 = (v28 >> 5) & 0x1F;
    if ( ((v28 >> 5) & 0x1F) == 0 && (v28 & 0x800) == 0 )
    {
      if ( (a1[10] & 8) == 0 )
      {
        v61 = a1[2];
        v62 = (_BYTE *)(v61 & 0xFFFFFFFFFFFFFFFEuLL);
        if ( (v61 & 1) != 0 )
        {
          if ( *v62 == 1 || *v62 == 3 || *v62 == 6 )
            goto LABEL_188;
        }
        else if ( (unsigned __int8)KeInvalidAccessAllowed(v61, 0LL) )
        {
          goto LABEL_188;
        }
        if ( !(unsigned int)MiGenerateAccessViolation(a1) )
          KeBugCheckEx(0x50u, *a1, a1[1], a1[2], 0LL);
      }
LABEL_188:
      LODWORD(v2) = -1073741819;
      goto LABEL_67;
    }
    if ( v30 != 24 )
    {
      if ( v30 != 31 || (v42 = a1[2], (v42 & 1) != 0) && *(_BYTE *)(v42 & 0xFFFFFFFFFFFFFFFEuLL) == 4 )
      {
LABEL_40:
        v31 = v68;
LABEL_41:
        if ( (a1[1] & 2) == 0 || v2 || v31 || (v29 & 4) != 0 )
        {
          a1[12] = v2;
          return 3221225494LL;
        }
        if ( (a1[10] & 8) != 0 )
          goto LABEL_188;
        v66 = a1[2];
        v67 = (_BYTE *)(v66 & 0xFFFFFFFFFFFFFFFEuLL);
        if ( (v66 & 1) != 0 )
        {
          if ( *v67 == 1 || *v67 == 3 || *v67 == 6 )
            goto LABEL_188;
LABEL_221:
          if ( !(unsigned int)MiGenerateAccessViolation(a1) )
            KeBugCheckEx(0xBEu, *a1, v28, a1[2], 0xEuLL);
          goto LABEL_188;
        }
        if ( !(unsigned __int8)KeInvalidAccessAllowed(v66, 0LL) )
          goto LABEL_221;
        goto LABEL_188;
      }
    }
    if ( (a1[10] & 8) == 0 )
    {
      v63 = a1[2];
      v64 = (_BYTE *)(v63 & 0xFFFFFFFFFFFFFFFEuLL);
      if ( (v63 & 1) != 0 )
      {
        if ( *v64 == 1 || *v64 == 3 || *v64 == 6 )
          goto LABEL_207;
      }
      else if ( (unsigned __int8)KeInvalidAccessAllowed(v63, 0LL) )
      {
        goto LABEL_207;
      }
      if ( !(unsigned int)MiGenerateAccessViolation(a1) )
        KeBugCheckEx(0x50u, *a1, a1[1], a1[2], 1uLL);
    }
LABEL_207:
    if ( v30 == 24 )
      goto LABEL_188;
    v65 = a1[2];
    if ( (v65 & 1) == 0 || *(_BYTE *)(v65 & 0xFFFFFFFFFFFFFFFEuLL) != 1 )
      goto LABEL_188;
    goto LABEL_40;
  }
  if ( (v28 & 0x80u) != 0LL )
  {
    v56 = *a1;
    if ( *a1 >= 0xFFFFF68000000000uLL && v56 <= 0xFFFFF6FFFFFFFFFFuLL )
    {
      if ( v23 )
        KeBugCheckEx(0x50u, v56, a1[1], a1[2], 8uLL);
      goto LABEL_188;
    }
  }
  v34 = a1[2];
  if ( (v34 & 1) != 0 )
  {
    v46 = v34 & 0xFFFFFFFFFFFFFFFEuLL;
    if ( *(_BYTE *)v46 == 1 )
    {
      MiUpdatePfnForPrefetchByPte(a1[3], *(_DWORD *)(v46 + 80) & 7, 0LL);
      goto LABEL_67;
    }
  }
  if ( (a1[1] & 2) == 0 )
  {
    MiCheckSystemNxFault(a1, v28, 2LL);
    goto LABEL_66;
  }
  if ( (v28 & 0x800) != 0 )
  {
LABEL_66:
    MiNoFaultFound((_DWORD)a1, v27, *a1, a1[2], 1, v28);
LABEL_67:
    v35 = v71[3];
    if ( v71[3] )
    {
      v36 = v71[5];
      if ( v71[5] )
      {
        if ( WORD1(v71[4]) )
        {
          MiEmptyDeferredWorkingSetEntries(&v71[3]);
          v36 = v71[5];
        }
        MiUnlockPageTableInternal(v35, v36);
        v37 = BYTE5(v71[4]) | 2;
      }
      else
      {
        v37 = BYTE5(v71[4]);
      }
      if ( (v37 & 1) != 0 )
        MiUnlockWorkingSetExclusive(v35, BYTE4(v71[4]));
      else
        MiUnlockWorkingSetShared(v35, BYTE4(v71[4]));
    }
    return (unsigned int)v2;
  }
  if ( (v28 & 0x200) == 0 && (a1[10] & 8) == 0 )
  {
    if ( !(unsigned int)MiGenerateAccessViolation(a1) )
      KeBugCheckEx(0xBEu, *a1, v28, a1[2], 0xBuLL);
    goto LABEL_188;
  }
  v47 = MiCopyOnWrite(*a1);
  MiUnlockSystemVa(v71);
  if ( v47 < 0 )
    MiCopyOnWriteCheckConditions(SessionVm, (unsigned int)v47);
  return 0LL;
}
