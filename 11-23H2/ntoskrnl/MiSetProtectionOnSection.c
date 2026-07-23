/*
 * XREFs of MiSetProtectionOnSection @ 0x140277F10
 * Callers:
 *     MiAllocateVirtualMemory @ 0x1406F7430 (MiAllocateVirtualMemory.c)
 *     MmProtectVirtualMemory @ 0x1406F9980 (MmProtectVirtualMemory.c)
 *     MiMarkSharedImageCfgBits @ 0x140746EF4 (MiMarkSharedImageCfgBits.c)
 *     MiUnsecureVirtualMemoryAgainstWrites @ 0x1407C78DC (MiUnsecureVirtualMemoryAgainstWrites.c)
 *     MiCommitPagefileBackedSection @ 0x1407DC358 (MiCommitPagefileBackedSection.c)
 * Callees:
 *     MiGetPfnProtection @ 0x1402160B4 (MiGetPfnProtection.c)
 *     MiSetWsleProtection @ 0x140216EC0 (MiSetWsleProtection.c)
 *     MiGetWsleContents @ 0x140216FB0 (MiGetWsleContents.c)
 *     MiReleasePageFileSpace @ 0x14021941C (MiReleasePageFileSpace.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     MiUnlockWorkingSetShared @ 0x14023C5D0 (MiUnlockWorkingSetShared.c)
 *     KeYieldProcessorEx @ 0x140242F10 (KeYieldProcessorEx.c)
 *     MiCopyOnWrite @ 0x140270030 (MiCopyOnWrite.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402715F0 (MiPteInShadowRange.c)
 *     MiQueryAddressState @ 0x140271E90 (MiQueryAddressState.c)
 *     MiGetProtoPteAddress @ 0x140273120 (MiGetProtoPteAddress.c)
 *     MiCountSharedPages @ 0x140273BA0 (MiCountSharedPages.c)
 *     MiChargeCommit @ 0x140276750 (MiChargeCommit.c)
 *     MiMakeProtectionMask @ 0x140276C10 (MiMakeProtectionMask.c)
 *     MiMakeSystemAddressValid @ 0x1402776C0 (MiMakeSystemAddressValid.c)
 *     ExpTryAcquireSpinLockShared @ 0x1402778C0 (ExpTryAcquireSpinLockShared.c)
 *     MiVadPureReserve @ 0x140277E00 (MiVadPureReserve.c)
 *     MiSanitizePfnProtection @ 0x140278C90 (MiSanitizePfnProtection.c)
 *     MiRevertValidPte @ 0x140278D10 (MiRevertValidPte.c)
 *     MiFlushTbList @ 0x140279B10 (MiFlushTbList.c)
 *     MiIsPrototypePteVadLookup @ 0x14027D190 (MiIsPrototypePteVadLookup.c)
 *     MiInsertTbFlushEntry @ 0x14027F800 (MiInsertTbFlushEntry.c)
 *     MiFreeWsleList @ 0x140280EB0 (MiFreeWsleList.c)
 *     MiLockWorkingSetShared @ 0x140283F20 (MiLockWorkingSetShared.c)
 *     MiSwizzleInvalidPte @ 0x140285A30 (MiSwizzleInvalidPte.c)
 *     MiLocateCloneAddress @ 0x140294828 (MiLocateCloneAddress.c)
 *     MmGetSessionIdEx @ 0x1402A19B0 (MmGetSessionIdEx.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     MiReturnCommit @ 0x1402DC4E0 (MiReturnCommit.c)
 *     MiReturnFullProcessCharges @ 0x1402DF3C0 (MiReturnFullProcessCharges.c)
 *     MiComputePageCommitment @ 0x1402E4D40 (MiComputePageCommitment.c)
 *     MiGetUsedPtesHandle @ 0x1402E5D00 (MiGetUsedPtesHandle.c)
 *     MmIsAddressValidEx @ 0x1402E6240 (MmIsAddressValidEx.c)
 *     MiTryDeleteTransitionPte @ 0x1402F4398 (MiTryDeleteTransitionPte.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FD0A0 (ExfAcquirePushLockExclusiveEx.c)
 *     KiCheckForKernelApcDelivery @ 0x14030FAB0 (KiCheckForKernelApcDelivery.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140317000 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     MiUnlockPageTableInternal @ 0x140319850 (MiUnlockPageTableInternal.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x14032FCF8 (KiAbTryReclaimOrphanedEntries.c)
 *     KeShouldYieldProcessor @ 0x140333F00 (KeShouldYieldProcessor.c)
 *     MiDecreaseUsedPtesCount @ 0x14033B320 (MiDecreaseUsedPtesCount.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x14033ED54 (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiPteNeedsCommitCharge @ 0x1403463D0 (MiPteNeedsCommitCharge.c)
 *     MiUnlockVa @ 0x140350EE4 (MiUnlockVa.c)
 *     MiWritePteShadow @ 0x1403574EC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14035754C (MiPteHasShadow.c)
 *     MiSetProtectionOnTransitionPte @ 0x140358810 (MiSetProtectionOnTransitionPte.c)
 *     MiMakeProtoLeafValid @ 0x140362254 (MiMakeProtoLeafValid.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14046B8F2 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     MiCopyOnWriteCheckConditions @ 0x140667370 (MiCopyOnWriteCheckConditions.c)
 *     MiChargeFullProcessCommitment @ 0x1406F7A10 (MiChargeFullProcessCommitment.c)
 *     MiCommitPageTablesForVad @ 0x1406F9680 (MiCommitPageTablesForVad.c)
 *     MiReturnFullProcessCommitment @ 0x140765044 (MiReturnFullProcessCommitment.c)
 *     MiImageVadHotPatchEligible @ 0x1407BA950 (MiImageVadHotPatchEligible.c)
 *     MiGetImageHotPatchTableAddress @ 0x140A37510 (MiGetImageHotPatchTableAddress.c)
 */

__int64 __fastcall MiSetProtectionOnSection(
        __int64 a1,
        ULONG_PTR a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned int a5,
        int a6,
        _DWORD *a7,
        __int64 a8)
{
  _DWORD *v8; // r13
  __int64 v10; // rbx
  char v12; // al
  unsigned int ProtectionMask; // eax
  int SessionId; // edi
  unsigned int v15; // edx
  __int64 v16; // rsi
  ULONG_PTR v17; // r15
  unsigned __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  _KPROCESS **v23; // r10
  __int64 v24; // r8
  __int64 v25; // rdi
  unsigned __int8 v26; // al
  volatile __int32 *v27; // rbx
  unsigned __int8 v28; // di
  __int64 v29; // rcx
  __int64 CurrentIrql; // rcx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v32; // r8
  __int64 v33; // r13
  int v34; // esi
  __int64 v35; // rax
  __int64 v36; // rbx
  _DWORD *v37; // rax
  unsigned __int64 v38; // rbx
  unsigned __int64 v39; // r12
  unsigned __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rdi
  int v43; // r13d
  unsigned int v44; // ebx
  __int64 v45; // r9
  __int64 v46; // rax
  __int64 v47; // rbx
  __int64 v48; // r9
  unsigned __int64 v49; // rdx
  unsigned __int64 v50; // rsi
  struct _KTHREAD *v51; // rbx
  __int64 result; // rax
  char v53; // di
  __int64 UsedPtesHandle; // rbx
  char v55; // al
  __int64 v56; // rax
  __int64 v57; // rax
  struct _KTHREAD *v58; // rdx
  bool v59; // zf
  ULONG_PTR v60; // r13
  struct _KTHREAD *v61; // r9
  _KPROCESS **v62; // rbx
  unsigned int AbEntrySummary; // eax
  unsigned int v64; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  int v67; // ebx
  __int64 v68; // rcx
  unsigned __int64 v69; // r13
  __int64 CloneAddress; // rbx
  int v71; // edi
  signed __int32 v72; // eax
  signed __int32 v73; // ett
  __int64 v74; // rdx
  unsigned __int64 v75; // rdx
  __int64 v76; // rdx
  __int64 v77; // r8
  unsigned __int64 v78; // rbx
  char v79; // al
  unsigned __int64 v80; // rdi
  __int64 v81; // rbx
  __int64 v82; // rcx
  int v83; // eax
  ULONG_PTR v84; // rax
  __int64 v85; // r8
  char *v86; // rdx
  unsigned __int64 v87; // r8
  unsigned __int64 v88; // rdi
  unsigned __int64 v89; // rbx
  char v90; // si
  __int64 v91; // r14
  _DWORD *v92; // r15
  __int64 v93; // rcx
  unsigned __int64 v94; // rax
  __int64 v95; // r9
  unsigned __int64 v96; // r9
  __int64 v97; // rax
  unsigned __int8 v98; // bl
  struct _KTHREAD *v99; // rdx
  __int64 v100; // rdi
  _DWORD *v101; // r9
  int v102; // edx
  __int64 v103; // rdx
  _DWORD *v104; // r9
  __int64 v105; // rdx
  __int64 v106; // rax
  __int64 v107; // rcx
  __int64 v108; // r9
  __int64 v109; // r13
  __int64 v110; // rdi
  unsigned __int64 v111; // rdx
  unsigned int PfnProtection; // [rsp+68h] [rbp-98h] BYREF
  __int64 v115; // [rsp+70h] [rbp-90h]
  int v116; // [rsp+78h] [rbp-88h]
  __int64 v117; // [rsp+80h] [rbp-80h]
  struct _KTHREAD *v118; // [rsp+88h] [rbp-78h]
  int v119; // [rsp+90h] [rbp-70h]
  unsigned int v120; // [rsp+94h] [rbp-6Ch]
  __int64 v121; // [rsp+98h] [rbp-68h] BYREF
  __int16 v122[2]; // [rsp+A0h] [rbp-60h] BYREF
  unsigned int v123; // [rsp+A4h] [rbp-5Ch]
  __int64 v124; // [rsp+A8h] [rbp-58h]
  struct _KTHREAD *CurrentThread; // [rsp+B0h] [rbp-50h]
  __int64 v126; // [rsp+B8h] [rbp-48h] BYREF
  ULONG_PTR v127; // [rsp+C0h] [rbp-40h]
  unsigned int v128; // [rsp+C8h] [rbp-38h]
  int v129; // [rsp+CCh] [rbp-34h]
  unsigned __int64 v130; // [rsp+D0h] [rbp-30h]
  __int64 v131; // [rsp+D8h] [rbp-28h]
  unsigned __int64 v132; // [rsp+E0h] [rbp-20h]
  __int64 v133; // [rsp+E8h] [rbp-18h]
  int v134; // [rsp+F0h] [rbp-10h] BYREF
  unsigned int v135; // [rsp+F4h] [rbp-Ch] BYREF
  int v136; // [rsp+F8h] [rbp-8h] BYREF
  int v137; // [rsp+FCh] [rbp-4h]
  int v138; // [rsp+100h] [rbp+0h] BYREF
  ULONG_PTR v139; // [rsp+108h] [rbp+8h]
  __int64 v140; // [rsp+110h] [rbp+10h] BYREF
  __int64 v141; // [rsp+118h] [rbp+18h]
  __int64 v142; // [rsp+128h] [rbp+28h] BYREF
  __int64 v143; // [rsp+130h] [rbp+30h]
  __int64 v144; // [rsp+138h] [rbp+38h]
  int v145; // [rsp+140h] [rbp+40h] BYREF
  __int16 v146; // [rsp+144h] [rbp+44h]
  __int16 v147; // [rsp+146h] [rbp+46h]
  __int64 v148; // [rsp+148h] [rbp+48h]
  __int64 v149; // [rsp+150h] [rbp+50h]
  __int64 v150; // [rsp+158h] [rbp+58h]
  _BYTE v151[152]; // [rsp+160h] [rbp+60h] BYREF
  int v152; // [rsp+200h] [rbp+100h] BYREF
  __int16 v153; // [rsp+204h] [rbp+104h]
  __int16 v154; // [rsp+206h] [rbp+106h]
  __int64 v155; // [rsp+208h] [rbp+108h]
  __int64 v156; // [rsp+210h] [rbp+110h]
  __int64 v157; // [rsp+218h] [rbp+118h]
  _BYTE v158[152]; // [rsp+220h] [rbp+120h] BYREF

  v8 = a7;
  v144 = a8;
  v10 = a2;
  v147 = 0;
  v133 = (__int64)a7;
  v134 = 0;
  v142 = 0LL;
  v140 = 0LL;
  PfnProtection = 0;
  v135 = 0;
  memset(v151, 0, sizeof(v151));
  v154 = 0;
  memset(v158, 0, sizeof(v158));
  v12 = *(_DWORD *)(v10 + 48) & 0x70;
  v122[0] = 0;
  if ( v12 == 32 && (unsigned int)MiImageVadHotPatchEligible(v10) && MiGetImageHotPatchTableAddress(v10) <= a4 )
    return 3221225541LL;
  ProtectionMask = MiMakeProtectionMask(a5);
  SessionId = -1;
  v123 = ProtectionMask;
  if ( ProtectionMask == -1 )
    return 3221225541LL;
  v130 = 0LL;
  v131 = 0LL;
  v156 = 0LL;
  v157 = 0LL;
  v15 = ProtectionMask & 0xFFFFFFFE;
  v16 = 0LL;
  v155 = 20LL;
  if ( (ProtectionMask & 5) != 5 )
    v15 = ProtectionMask;
  v152 = 1;
  v153 = 0;
  v116 = ProtectionMask & 5;
  v120 = v15;
  v17 = ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v139 = v17;
  v18 = ((a4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v148 = 20LL;
  v145 = 1;
  v146 = 4;
  v149 = 0LL;
  v117 = a1 + 1664;
  v19 = *(_QWORD *)(a1 + 1680);
  v150 = 0LL;
  v127 = v18;
  CurrentThread = KeGetCurrentThread();
  v129 = 0;
  v121 = 0LL;
  if ( *(_QWORD *)(v19 + 344) )
  {
    v97 = *(unsigned int *)(v10 + 52);
    LODWORD(v97) = v97 & 0x7FFFFFFF;
    if ( v97 | ((unsigned __int64)*(unsigned __int8 *)(v10 + 34) << 31) )
    {
      v98 = MiLockWorkingSetShared(v117);
      MiComputePageCommitment(a3, a4, a2, v98, 0, (__int64)&v121, 0LL);
      MiUnlockWorkingSetShared(v117, v98);
      if ( v121 )
      {
        result = MiChargeFullProcessCommitment(a1, v121);
        if ( (int)result < 0 )
          return result;
      }
      v18 = v127;
      v10 = a2;
    }
  }
  v132 = *(_QWORD *)(qword_140C673C8 + 8LL * *(unsigned __int16 *)(v117 + 174));
  if ( v116 == 5 )
  {
    v57 = MiCountSharedPages(v10, ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, v18);
    v16 = v57;
    if ( a6 )
    {
      v95 = ((__int64)(v127 - v17) >> 3) - v57;
      v59 = v95 == -1;
      v96 = v95 + 1;
      v130 = v96;
      if ( !v59 && !(unsigned int)MiChargeCommit(v132, v96, 0LL) )
      {
        if ( v121 )
          MiReturnFullProcessCommitment(a1, v121);
        return 3221225773LL;
      }
      v16 = 0LL;
    }
    else if ( v57 )
    {
      v67 = MiChargeFullProcessCommitment(a1, v57);
      if ( v67 < 0 )
      {
        if ( v121 )
        {
          MiReturnFullProcessCommitment(a1, v121);
          return (unsigned int)v67;
        }
        return (unsigned int)v67;
      }
      v10 = a2;
    }
  }
  if ( !MiVadPureReserve(v10) )
    goto LABEL_9;
  --*(_WORD *)(v22 + 486);
  v60 = v21 + 1232;
  v129 = 1;
  v61 = KeGetCurrentThread();
  v62 = v23;
  v118 = v61;
  v128 = (unsigned int)v23;
  _disable();
  AbEntrySummary = v61->AbEntrySummary;
  if ( !v61->AbEntrySummary )
  {
    AbEntrySummary = KiAbTryReclaimOrphanedEntries(v20, v61);
    if ( !AbEntrySummary )
      goto LABEL_81;
    v61 = v118;
  }
  _BitScanForward(&v64, AbEntrySummary);
  v128 = v64;
  v61->AbEntrySummary = AbEntrySummary & ~(1 << v64);
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    _m_prefetchw(SchedulerAssist);
    v72 = *SchedulerAssist;
    do
    {
      v73 = v72;
      v72 = _InterlockedCompareExchange(SchedulerAssist, v72 & 0xFFDFFFFF, v72);
    }
    while ( v73 != v72 );
    if ( (v72 & 0x200000) != 0 )
    {
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      v61 = v118;
    }
  }
  _enable();
  v62 = &v61[1].Process + 12 * v128;
  if ( v60 - qword_140C659E8 < 0x8000000000LL )
    SessionId = MmGetSessionIdEx(v61->ApcState.Process);
  *((_DWORD *)v62 + 2) = SessionId;
  *v62 = (_KPROCESS *)(v60 & 0x7FFFFFFFFFFFFFFCLL);
LABEL_81:
  if ( _interlockedbittestandset64((volatile signed __int32 *)v60, 0LL) )
    ExfAcquirePushLockExclusiveEx(v60, v62, v60);
  if ( v62 )
    *((_BYTE *)v62 + 18) = 1;
  v67 = MiCommitPageTablesForVad(a2, a3);
  if ( v67 < 0 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v60, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v60);
    KeAbPostRelease(v60);
    v99 = CurrentThread;
    v59 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v59 && ($C71981A45BEB2B45F82C232A7085991E *)v99->ApcState.ApcListHead[0].Flink != &v99->152 )
      KiCheckForKernelApcDelivery();
    if ( v130 )
    {
      MiReturnCommit(v132, v16);
    }
    else if ( v16 )
    {
      v100 = a1;
      MiReturnFullProcessCommitment(a1, v16);
LABEL_170:
      if ( v121 )
        MiReturnFullProcessCommitment(v100, v121);
      return (unsigned int)v67;
    }
    v100 = a1;
    goto LABEL_170;
  }
  v8 = (_DWORD *)v133;
  v10 = a2;
LABEL_9:
  if ( v16 )
  {
    v74 = *(unsigned int *)(v10 + 52);
    LODWORD(v74) = v74 & 0x7FFFFFFF;
    v75 = v16 + (((unsigned __int64)*(unsigned __int8 *)(v10 + 34) << 31) | v74);
    *(_DWORD *)(v10 + 52) ^= (v75 ^ *(_DWORD *)(v10 + 52)) & 0x7FFFFFFF;
    *(_BYTE *)(v10 + 34) = v75 >> 31;
  }
  v24 = 0LL;
  v119 = 1;
  v25 = 0LL;
  v118 = 0LL;
  v115 = 0LL;
  v26 = *(_BYTE *)(v117 + 184) & 7;
  if ( v26 > 4u )
  {
    if ( v26 != 5 )
    {
      CurrentIrql = KeGetCurrentIrql();
      v124 = CurrentIrql;
      __writecr8(2uLL);
      if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
      {
        v101 = KeGetCurrentPrcb()->SchedulerAssist;
        if ( (_BYTE)CurrentIrql == 2 )
        {
          v102 = 4;
        }
        else
        {
          v103 = -1LL << ((unsigned __int8)CurrentIrql + 1);
          LOBYTE(CurrentIrql) = v124;
          v102 = v103 & 4;
        }
        v101[5] |= v102;
        v24 = 0LL;
      }
      goto LABEL_20;
    }
  }
  else if ( v26 == 2 )
  {
    v27 = (volatile __int32 *)&unk_140C6A180;
    goto LABEL_14;
  }
  v27 = (volatile __int32 *)(v117 + 192);
LABEL_14:
  v28 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && v28 <= 0xFu )
  {
    v104 = KeGetCurrentPrcb()->SchedulerAssist;
    if ( v28 == 2 )
      LODWORD(v105) = 4;
    else
      v105 = (-1LL << (v28 + 1)) & 4;
    v104[5] |= v105;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v27, v28);
    goto LABEL_142;
  }
  if ( !ExpTryAcquireSpinLockShared(v27) )
  {
    ExpWaitForSpinLockSharedAndAcquire(v29, v28);
LABEL_142:
    v24 = 0LL;
  }
  if ( *((_DWORD *)v27 + 1) )
    _InterlockedExchange(v27 + 1, v24);
  CurrentIrql = v28;
  v25 = v115;
  v124 = CurrentIrql;
LABEL_20:
  MiQueryAddressState(a3, a3, CurrentIrql, a2, v24, (int *)&PfnProtection, &v135, v122, &v142, &v134);
  *v8 = MmProtectToValue[PfnProtection];
  v33 = a2;
  v34 = (*(_DWORD *)(a2 + 48) >> 12) & 0x7F;
  v137 = v34;
  if ( v17 <= v127 )
  {
    v35 = 0LL;
    v133 = 0LL;
    while ( 1 )
    {
      if ( (v17 & 0xFFF) == 0 || v119 )
      {
        v119 = 0;
        if ( v25 )
        {
          MiFlushTbList(&v152);
          v36 = v117;
          MiUnlockPageTableInternal(v117, v25);
        }
        else
        {
          v36 = v117;
        }
        if ( (*(_BYTE *)(v36 + 184) & 7) == 2 )
          v37 = &unk_140C6A180;
        else
          v37 = (_DWORD *)(v36 + 192);
        if ( (*v37 & 0x40000000) != 0 || KeShouldYieldProcessor() )
        {
          MiUnlockWorkingSetShared(v36, v124);
          MiLockWorkingSetShared(v36);
        }
        MiMakeSystemAddressValid(v17, (__int64)&v152, v34, v124, 0);
        v35 = v133;
        v115 = ((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      }
      v38 = *(_QWORD *)v17;
      v39 = (__int64)((v17 << 25) - v35) >> 16;
      if ( v17 >= 0xFFFFF6FB7DBED000uLL
        && v17 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0x600000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v38 & 1) != 0
        && ((v38 & 0x20) == 0 || (v38 & 0x42) == 0) )
      {
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v106 = *((_QWORD *)&Flink->Flink + ((v17 >> 3) & 0x1FF));
          if ( (v106 & 0x20) != 0 )
            v38 |= 0x20uLL;
          if ( (v106 & 0x42) != 0 )
            v38 |= 0x42uLL;
        }
      }
      v126 = v38;
      if ( (v38 & 1) == 0 )
        break;
      v40 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v126);
      v41 = 0xFFFFFFFFFFLL;
      v141 = (v40 >> 12) & 0xFFFFFFFFFFLL;
      v42 = 48 * v141 - 0x220000000000LL;
      if ( *(__int64 *)(v42 + 40) >= 0
        || (v143 = *(_QWORD *)(v42 + 8),
            v69 = v143 | 0x8000000000000000uLL,
            v69 == MiGetProtoPteAddress(a2, v39 >> 12, 0, &v140)) )
      {
        if ( (a5 & 0x101) == 0 )
        {
          if ( a6 == (a5 & 0x101) )
          {
            if ( *(__int64 *)(v42 + 40) >= 0 )
            {
              v136 = 0;
              while ( _interlockedbittestandset64((volatile signed __int32 *)(v42 + 24), 0x3FuLL) )
              {
                do
                  KeYieldProcessorEx(&v136);
                while ( *(__int64 *)(v42 + 24) < 0 );
              }
              v43 = a2;
              v44 = MiSanitizePfnProtection(a2, (*(_QWORD *)(v42 + 16) >> 5) & 0x1FLL, v120);
              v46 = 32LL * (v44 & 0x1F);
              if ( v45 )
                *(_QWORD *)(v42 + 16) = v46 | v45 & 0xFFFFFFFFFFFFFC1FuLL;
              else
                *(_QWORD *)(v42 + 16) = MiSwizzleInvalidPte(v46);
              _InterlockedAnd64((volatile signed __int64 *)(v42 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              goto LABEL_41;
            }
LABEL_88:
            if ( v116 != 5 && (v38 & 0x200) != 0 )
              v118 = (struct _KTHREAD *)((char *)v118 + 1);
            v43 = a2;
            PfnProtection = MiGetPfnProtection(v41, v39, v42);
            v44 = MiSanitizePfnProtection(a2, PfnProtection, v123);
            MiSetWsleProtection(v68, v39, v44);
LABEL_41:
            MiRevertValidPte(v43, v17, v44, v141, (__int64)&v152);
LABEL_42:
            v17 += 8LL;
            v139 = v17;
LABEL_43:
            v47 = v115;
            goto LABEL_44;
          }
          if ( *(__int64 *)(v42 + 40) < 0 )
            goto LABEL_88;
        }
        v88 = v127;
        if ( (v17 & 0xFFFFFFFFFFFFF000uLL) != (v127 & 0xFFFFFFFFFFFFF000uLL) )
          v88 = (v17 & 0xFFFFFFFFFFFFF000uLL) + 4088;
        v89 = v17;
        if ( v17 > v88 )
        {
LABEL_133:
          if ( HIDWORD(v148) )
            MiFreeWsleList(v117, &v145, 0LL);
          goto LABEL_43;
        }
        v90 = 0;
        v91 = v117;
        v92 = (_DWORD *)v144;
        while ( 2 )
        {
          v126 = MI_READ_PTE_LOCK_FREE(v89);
          if ( (v126 & 1) == 0
            || (a5 & 0x101) == 0
            && (!a6
             || (v94 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v126),
                 v93 = 6 * ((v94 >> 12) & 0xFFFFFFFFFFLL),
                 *(__int64 *)(48 * ((v94 >> 12) & 0xFFFFFFFFFFLL) - 0x21FFFFFFFFD8LL) < 0)) )
          {
LABEL_132:
            v34 = v137;
            v17 = v139;
            goto LABEL_133;
          }
          if ( (MiGetWsleContents(v93, v39) & 0xF) == 8 )
          {
            v90 = 1;
            *v92 = 1;
          }
          else
          {
            MiInsertTbFlushEntry(&v145, v39, 1LL, 0LL);
            if ( HIDWORD(v148) != (_DWORD)v148 )
              goto LABEL_131;
          }
          if ( HIDWORD(v148) )
            MiFreeWsleList(v91, &v145, 0LL);
          if ( v90 )
          {
            MiUnlockVa(v91, v39);
            v90 = 0;
          }
LABEL_131:
          v89 += 8LL;
          v39 += 4096LL;
          if ( v89 > v88 )
            goto LABEL_132;
          continue;
        }
      }
      CloneAddress = 0LL;
      if ( _bittest64((const signed __int64 *)(v42 + 40), 0x28u) || v143 < 0 || !v143 )
      {
        CloneAddress = MiLocateCloneAddress(a1, v69, v32);
        if ( *(_QWORD *)(*(_QWORD *)(v107 + 1680) + 344LL) <= *(_QWORD *)(CloneAddress + 96) )
          CloneAddress = v108;
      }
      MiFlushTbList(&v152);
      v71 = MiCopyOnWrite(v39, v17, 0xFFFFFFFFFFFFFFFFuLL, 0);
      if ( v71 >= 0 )
      {
        if ( CloneAddress )
          --v121;
        goto LABEL_43;
      }
      v109 = v117;
      MiUnlockPageTableInternal(v117, v115);
      MiUnlockWorkingSetShared(v109, v124);
      MiCopyOnWriteCheckConditions(v109, (unsigned int)v71);
      v47 = 0LL;
      v119 = 1;
      v115 = 0LL;
      MiLockWorkingSetShared(v109);
LABEL_44:
      v33 = a2;
      v35 = v133;
      if ( v17 > v127 )
        goto LABEL_45;
      v25 = v115;
    }
    if ( (v38 & 0x400) != 0 )
    {
      if ( !(unsigned int)MiIsPrototypePteVadLookup(v38, Flink, v32) )
      {
        v110 = v38;
        if ( qword_140C65B40 && (v38 & 0x10) == 0 )
          v110 = v38 & ~qword_140C65B40;
        if ( v110 >> 16 != MiGetProtoPteAddress(v33, v39 >> 12, 0, &v140) )
        {
          MiFlushTbList(&v152);
          if ( (int)MiMakeProtoLeafValid(v17) < 0 )
          {
            v17 += 8LL;
            v139 = v17;
          }
          v119 = 1;
          goto LABEL_43;
        }
      }
      if ( v116 != 5 && (unsigned int)MiIsPrototypePteVadLookup(v38, v76, v77) && (v38 & 0xA0) == 0xA0 )
        v118 = (struct _KTHREAD *)((char *)v118 + 1);
      if ( (unsigned int)MiIsPrototypePteVadLookup(v38, v76, v77) )
        v78 = v38 >> 5;
      else
        LODWORD(v78) = *(unsigned __int16 *)(*(_QWORD *)(v33 + 72) + 32LL) >> 1;
      PfnProtection = v78 & 0x1F;
      v79 = MiSanitizePfnProtection(v33, v78 & 0x1F, v123);
      v126 = MiSwizzleInvalidPte(32 * (v79 & 0x1F | 0xFFFFFFFFF8000020uLL));
      v80 = v126;
      v81 = v126;
      if ( MiPteInShadowRange(v17) )
      {
        if ( (unsigned int)MiPteHasShadow(v82, Flink, v32) )
        {
          v111 = v80;
          if ( !HIBYTE(word_140C66CFC) && (v80 & 1) != 0 )
            v111 = v80 | 0x8000000000000000uLL;
          *(_QWORD *)v17 = v111;
          MiWritePteShadow(v17, v111);
          goto LABEL_42;
        }
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (v80 & 1) != 0 )
        {
          v81 |= 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)v17 = v81;
      goto LABEL_42;
    }
    if ( (v38 & 0x800) != 0 )
    {
      if ( !a6 )
      {
        if ( !(unsigned int)MiSetProtectionOnTransitionPte(v33, v17, v120, 1LL) )
          goto LABEL_42;
        goto LABEL_43;
      }
      v83 = MiTryDeleteTransitionPte(v17);
      if ( v83 == 3 )
      {
        ++v131;
      }
      else if ( v83 == 1 )
      {
        goto LABEL_43;
      }
    }
    else
    {
      v53 = 0;
      if ( !a6 )
      {
        if ( v38 )
        {
          PfnProtection = (v38 >> 5) & 0x1F;
          v120 = MiSanitizePfnProtection(v33, (v38 >> 5) & 0x1F, v120);
          v56 = v38 ^ ((unsigned __int16)v38 ^ (unsigned __int16)(32 * v120)) & 0x3E0;
LABEL_67:
          v126 = v56;
          *(_QWORD *)v17 = v56;
          goto LABEL_42;
        }
LABEL_62:
        UsedPtesHandle = MiGetUsedPtesHandle(v39);
        v138 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(UsedPtesHandle + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v138);
          while ( *(__int64 *)(UsedPtesHandle + 24) < 0 );
        }
        *(_QWORD *)(UsedPtesHandle + 16) ^= ((unsigned int)*(_QWORD *)(UsedPtesHandle + 16) ^ ((unsigned int)*(_QWORD *)(UsedPtesHandle + 16)
                                                                                             + 0x10000)) & 0x3FF0000;
        _InterlockedAnd64((volatile signed __int64 *)(UsedPtesHandle + 24), 0x7FFFFFFFFFFFFFFFuLL);
        MmIsAddressValidEx(*(_QWORD *)(UsedPtesHandle + 8) | 0x8000000000000000uLL);
        if ( v116 != 5 && (v53 || !(unsigned int)MiPteNeedsCommitCharge(v33, v17)) )
          v118 = (struct _KTHREAD *)((char *)v118 + 1);
        PfnProtection = (*(unsigned __int16 *)(*(_QWORD *)(v33 + 72) + 32LL) >> 1) & 0x1F;
        v55 = MiSanitizePfnProtection(0LL, PfnProtection, v123);
        v56 = MiSwizzleInvalidPte(32 * (v55 & 0x1F | 0xFFFFFFFFF8000020uLL));
        goto LABEL_67;
      }
      if ( !v38 )
        goto LABEL_62;
      MiReleasePageFileSpace(v132, v38, 1);
      if ( !(unsigned int)IS_PTE_NOT_DEMAND_ZERO(v38) )
      {
LABEL_118:
        v84 = MiGetUsedPtesHandle(v39);
        MiDecreaseUsedPtesCount(v84, 1uLL);
        v53 = 1;
        goto LABEL_62;
      }
    }
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1272), 0xFFFFFFFFFFFFFFFFuLL);
    goto LABEL_118;
  }
  v47 = v115;
LABEL_45:
  MiFlushTbList(&v152);
  if ( v47 )
    MiUnlockPageTableInternal(v117, v47);
  MiUnlockWorkingSetShared(v117, v124);
  if ( v129 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1232), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(a1 + 1232);
    KeAbPostRelease(a1 + 1232);
    v58 = CurrentThread;
    v59 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v59 && ($C71981A45BEB2B45F82C232A7085991E *)v58->ApcState.ApcListHead[0].Flink != &v58->152 )
      KiCheckForKernelApcDelivery();
  }
  v48 = v131;
  v49 = v130;
  if ( v131 && v116 == 5 )
  {
    v49 = v130 - v131;
    v48 = 0LL;
    v131 = 0LL;
  }
  v50 = v132;
  if ( v49 )
  {
    MiReturnCommit(v132, v49);
    v48 = v131;
  }
  v51 = v118;
  if ( v118 )
  {
    v85 = *(unsigned int *)(v33 + 52);
    LODWORD(v85) = v85 & 0x7FFFFFFF;
    v86 = (char *)v118 - v48;
    v87 = (((unsigned __int64)*(unsigned __int8 *)(v33 + 34) << 31) | v85) - (_QWORD)v118;
    *(_DWORD *)(v33 + 52) ^= (v87 ^ *(_DWORD *)(v33 + 52)) & 0x7FFFFFFF;
    *(_BYTE *)(v33 + 34) = v87 >> 31;
    MiReturnCommit(v50, v86);
    MiReturnFullProcessCharges(a1, v51);
  }
  if ( v121 )
    MiReturnFullProcessCommitment(a1, v121);
  return 0LL;
}
