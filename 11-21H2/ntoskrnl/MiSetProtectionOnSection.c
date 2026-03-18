/*
 * XREFs of MiSetProtectionOnSection @ 0x14032D1C0
 * Callers:
 *     MiCommitPagefileBackedSection @ 0x1406A3E60 (MiCommitPagefileBackedSection.c)
 *     MiUnsecureVirtualMemoryAgainstWrites @ 0x1406F608C (MiUnsecureVirtualMemoryAgainstWrites.c)
 *     MiMarkSharedImageCfgBits @ 0x1406F77DC (MiMarkSharedImageCfgBits.c)
 *     MmProtectVirtualMemory @ 0x1407B9FA0 (MmProtectVirtualMemory.c)
 *     MiAllocateVirtualMemory @ 0x1407BE3C0 (MiAllocateVirtualMemory.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x14020D8D0 (MiUnlockPageTableInternal.c)
 *     KeShouldYieldProcessor @ 0x140222100 (KeShouldYieldProcessor.c)
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     MiDecreaseUsedPtesCount @ 0x140232154 (MiDecreaseUsedPtesCount.c)
 *     MiPteNeedsCommitCharge @ 0x1402336A8 (MiPteNeedsCommitCharge.c)
 *     MiLocateCloneAddress @ 0x140234F14 (MiLocateCloneAddress.c)
 *     MiTryDeleteTransitionPte @ 0x140239CA8 (MiTryDeleteTransitionPte.c)
 *     MiMakeProtoLeafValid @ 0x140240C38 (MiMakeProtoLeafValid.c)
 *     MiReleasePageFileSpace @ 0x140274E48 (MiReleasePageFileSpace.c)
 *     MiIsPrototypePteVadLookup @ 0x1402806A0 (MiIsPrototypePteVadLookup.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     MiReturnFullProcessCharges @ 0x14028CDA0 (MiReturnFullProcessCharges.c)
 *     MiReturnCommit @ 0x14028CE10 (MiReturnCommit.c)
 *     MiComputePageCommitment @ 0x14028EDD0 (MiComputePageCommitment.c)
 *     MmIsAddressValidEx @ 0x14028FBF0 (MmIsAddressValidEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     MiUnlockWorkingSetShared @ 0x1402B0CE0 (MiUnlockWorkingSetShared.c)
 *     MiFreeWsleList @ 0x1402C1D70 (MiFreeWsleList.c)
 *     MiSwizzleInvalidPte @ 0x1402CCC50 (MiSwizzleInvalidPte.c)
 *     MiInsertTbFlushEntry @ 0x1402CF280 (MiInsertTbFlushEntry.c)
 *     MiLockWorkingSetShared @ 0x1402CF4F0 (MiLockWorkingSetShared.c)
 *     MiGetUsedPtesHandle @ 0x1402D03D0 (MiGetUsedPtesHandle.c)
 *     MiCountSharedPages @ 0x1402D0500 (MiCountSharedPages.c)
 *     MiUnlockVa @ 0x1402E5920 (MiUnlockVa.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     MiCopyOnWrite @ 0x140316400 (MiCopyOnWrite.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     MiQueryAddressState @ 0x140318330 (MiQueryAddressState.c)
 *     MiGetProtoPteAddress @ 0x140319600 (MiGetProtoPteAddress.c)
 *     MiChargeCommit @ 0x14032A4B0 (MiChargeCommit.c)
 *     MiMakeProtectionMask @ 0x14032BCC0 (MiMakeProtectionMask.c)
 *     MiMakeSystemAddressValid @ 0x14032CE60 (MiMakeSystemAddressValid.c)
 *     MiRevertValidPte @ 0x14032E130 (MiRevertValidPte.c)
 *     MiSanitizePfnProtection @ 0x14032E680 (MiSanitizePfnProtection.c)
 *     MiSetProtectionOnTransitionPte @ 0x14032E970 (MiSetProtectionOnTransitionPte.c)
 *     MiFlushTbList @ 0x14032F1B0 (MiFlushTbList.c)
 *     MiGetWsleContents @ 0x14033A410 (MiGetWsleContents.c)
 *     MiGetWsleProtection @ 0x14033A4C0 (MiGetWsleProtection.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x14033FD38 (IS_PTE_NOT_DEMAND_ZERO.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140366A20 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140461B20 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     MiCopyOnWriteCheckConditions @ 0x1405BCAF8 (MiCopyOnWriteCheckConditions.c)
 *     MiImageVadHotPatchEligible @ 0x1406AD6A0 (MiImageVadHotPatchEligible.c)
 *     MiReturnFullProcessCommitment @ 0x1406FEC50 (MiReturnFullProcessCommitment.c)
 *     MiCommitPageTablesForVad @ 0x1407BDB60 (MiCommitPageTablesForVad.c)
 *     MiChargeFullProcessCommitment @ 0x1407BE280 (MiChargeFullProcessCommitment.c)
 *     MiGetImageHotPatchTableAddress @ 0x140973488 (MiGetImageHotPatchTableAddress.c)
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
  __int64 v9; // r15
  char v11; // al
  unsigned int ProtectionMask; // eax
  __int64 v13; // rsi
  unsigned int v14; // ecx
  unsigned __int64 v15; // r12
  struct _KTHREAD *CurrentThread; // r8
  unsigned __int64 v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rax
  int v20; // eax
  __int64 v21; // rbx
  unsigned __int8 v22; // al
  volatile __int32 *v23; // rbx
  unsigned __int8 CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // rsi
  _DWORD *v26; // rcx
  signed __int32 v27; // ett
  __int64 v28; // rcx
  ULONG_PTR v29; // r15
  int v30; // esi
  __int64 v31; // r13
  unsigned __int64 v32; // rbx
  ULONG_PTR v33; // r15
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rdi
  __int64 v38; // r10
  unsigned __int64 v39; // rcx
  int v40; // r15d
  __int64 v41; // rax
  int v42; // eax
  int v43; // eax
  __int64 v44; // r9
  __int64 v45; // rdx
  __int64 v46; // rbx
  __int64 result; // rax
  unsigned __int64 v48; // rdi
  _DWORD *v49; // rax
  char v50; // r13
  __int64 v51; // r15
  __int64 v52; // rbx
  __int64 v53; // rdx
  unsigned __int64 v54; // rbx
  __int64 v55; // r8
  __int64 v56; // r9
  char v57; // al
  __int64 v58; // rax
  unsigned __int64 v59; // r13
  _QWORD *CloneAddress; // rbx
  int v61; // edi
  unsigned __int64 v62; // r9
  unsigned __int64 v63; // rax
  __int64 v64; // r10
  __int64 v65; // r11
  unsigned __int64 v66; // r9
  volatile signed __int64 v67; // rax
  signed __int64 v68; // rdx
  __int64 v69; // r8
  bool v70; // zf
  signed __int64 v71; // rax
  __int64 v72; // rax
  ULONG_PTR v73; // rdi
  struct _KTHREAD *v74; // rsi
  ULONG_PTR v75; // r9
  char *v76; // rbx
  __int64 v77; // r8
  int v78; // r8d
  struct _KTHREAD *v79; // rdx
  __int64 v80; // rax
  ULONG_PTR v81; // rbx
  int v82; // r15d
  ULONG_PTR v83; // r15
  unsigned __int64 v84; // rbx
  char v85; // al
  unsigned __int64 v86; // rdi
  __int64 v87; // rbx
  int v88; // ebx
  __int64 v89; // rax
  unsigned __int64 v90; // rdx
  __int64 v91; // rax
  _KPROCESS *Process; // rcx
  unsigned __int64 v93; // rdi
  unsigned __int64 v94; // rbx
  char v95; // si
  __int64 v96; // r14
  _DWORD *v97; // r12
  __int64 v98; // rcx
  unsigned __int64 v99; // rax
  int v100; // eax
  ULONG_PTR UsedPtesHandle; // rax
  __int64 v102; // rax
  __int64 v103; // rdx
  unsigned __int64 v104; // r8
  __int64 v105; // rcx
  __int64 v106; // r9
  unsigned __int64 v107; // r9
  _DWORD *v108; // rcx
  __int64 v109; // rax
  char v110; // bl
  struct _KTHREAD *v111; // r14
  ULONG_PTR SessionId; // r9
  char *p_Process; // rdi
  __int64 v114; // r8
  unsigned int i; // ecx
  int v116; // r8d
  struct _KTHREAD *v117; // rdx
  __int64 v118; // rbx
  _DWORD *v119; // r9
  char v120; // dl
  _DWORD *SchedulerAssist; // r9
  int v122; // eax
  int v123; // eax
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v125; // rax
  __int64 v126; // rcx
  _QWORD *v127; // r8
  __int64 v128; // rbx
  unsigned int v129; // edx
  int v130; // edx
  int v131; // edx
  struct _LIST_ENTRY *v132; // r8
  __int64 v133; // rcx
  _QWORD *v134; // rax
  struct _LIST_ENTRY *v135; // r8
  __int64 v136; // rcx
  __int64 v137; // rdi
  __int64 v138; // rdx
  unsigned __int64 v139; // rdx
  struct _LIST_ENTRY *v140; // rax
  __int64 v141; // rax
  unsigned int v144; // [rsp+68h] [rbp-98h] BYREF
  int v145; // [rsp+6Ch] [rbp-94h]
  __int64 v146; // [rsp+70h] [rbp-90h]
  int v147; // [rsp+78h] [rbp-88h]
  unsigned int v148; // [rsp+7Ch] [rbp-84h]
  __int64 v149; // [rsp+80h] [rbp-80h] BYREF
  __int16 v150[2]; // [rsp+88h] [rbp-78h] BYREF
  unsigned int v151; // [rsp+8Ch] [rbp-74h]
  __int64 v152; // [rsp+90h] [rbp-70h]
  struct _KTHREAD *v153; // [rsp+98h] [rbp-68h]
  __int64 v154; // [rsp+A0h] [rbp-60h]
  __int64 v155; // [rsp+A8h] [rbp-58h] BYREF
  int v156; // [rsp+B0h] [rbp-50h]
  int v157; // [rsp+B4h] [rbp-4Ch]
  unsigned __int64 v158; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v159; // [rsp+C0h] [rbp-40h]
  unsigned __int64 v160; // [rsp+C8h] [rbp-38h]
  __int64 v161; // [rsp+D0h] [rbp-30h]
  __int64 v162; // [rsp+D8h] [rbp-28h]
  int v163; // [rsp+E0h] [rbp-20h] BYREF
  int v164; // [rsp+E4h] [rbp-1Ch] BYREF
  int v165; // [rsp+E8h] [rbp-18h] BYREF
  int v166; // [rsp+ECh] [rbp-14h] BYREF
  unsigned __int64 v167; // [rsp+F0h] [rbp-10h]
  __int64 v168; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v169; // [rsp+100h] [rbp+0h]
  __int64 v170; // [rsp+108h] [rbp+8h] BYREF
  __int64 v171; // [rsp+110h] [rbp+10h]
  unsigned __int64 v172; // [rsp+118h] [rbp+18h]
  __int64 v173; // [rsp+120h] [rbp+20h]
  __int64 v174; // [rsp+128h] [rbp+28h] BYREF
  int v175; // [rsp+130h] [rbp+30h] BYREF
  __int16 v176; // [rsp+134h] [rbp+34h]
  __int16 v177; // [rsp+136h] [rbp+36h]
  __int64 v178; // [rsp+138h] [rbp+38h]
  __int64 v179; // [rsp+140h] [rbp+40h]
  __int64 v180; // [rsp+148h] [rbp+48h]
  _BYTE v181[152]; // [rsp+150h] [rbp+50h] BYREF
  int v182; // [rsp+1F0h] [rbp+F0h] BYREF
  __int16 v183; // [rsp+1F4h] [rbp+F4h]
  __int16 v184; // [rsp+1F6h] [rbp+F6h]
  __int64 v185; // [rsp+1F8h] [rbp+F8h]
  __int64 v186; // [rsp+200h] [rbp+100h]
  __int64 v187; // [rsp+208h] [rbp+108h]
  _BYTE v188[152]; // [rsp+210h] [rbp+110h] BYREF

  v173 = a8;
  v9 = a2;
  v177 = 0;
  v163 = 0;
  v170 = 0LL;
  v168 = 0LL;
  v144 = 0;
  v164 = 0;
  memset(v181, 0, sizeof(v181));
  v184 = 0;
  memset(v188, 0, sizeof(v188));
  v11 = *(_DWORD *)(v9 + 48) & 0x70;
  v150[0] = 0;
  if ( v11 == 32 && (unsigned int)MiImageVadHotPatchEligible(v9) && MiGetImageHotPatchTableAddress(v9) <= a4 )
    return 3221225541LL;
  ProtectionMask = MiMakeProtectionMask(a5);
  v151 = ProtectionMask;
  if ( ProtectionMask == -1 )
    return 3221225541LL;
  v13 = 0LL;
  v160 = 0LL;
  v14 = ProtectionMask & 0xFFFFFFFE;
  v161 = 0LL;
  v183 = 0;
  v186 = 0LL;
  v187 = 0LL;
  v185 = 20LL;
  v182 = 1;
  v145 = ProtectionMask & 5;
  if ( v145 != 5 )
    v14 = ProtectionMask;
  v148 = v14;
  v15 = ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v167 = v15;
  CurrentThread = KeGetCurrentThread();
  v17 = ((a4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v18 = a1;
  v179 = 0LL;
  v180 = 0LL;
  v157 = 0;
  v149 = 0LL;
  v146 = a1 + 1664;
  v19 = *(_QWORD *)(a1 + 1680);
  v178 = 20LL;
  v175 = 1;
  v176 = 4;
  v158 = v17;
  v153 = CurrentThread;
  if ( *(_QWORD *)(v19 + 344) )
  {
    v109 = *(unsigned int *)(v9 + 52);
    LODWORD(v109) = v109 & 0x7FFFFFFF;
    if ( v109 | ((unsigned __int64)*(unsigned __int8 *)(v9 + 34) << 31) )
    {
      v110 = MiLockWorkingSetShared(v146);
      MiComputePageCommitment(a3, a4, v9, v110, 0, (__int64)&v149, 0LL);
      MiUnlockWorkingSetShared(v146, v110);
      if ( v149 )
      {
        result = MiChargeFullProcessCommitment(a1, v149);
        if ( (int)result < 0 )
          return result;
      }
      CurrentThread = v153;
      v18 = a1;
      v17 = v158;
    }
  }
  v162 = *(_QWORD *)(qword_140C51F48 + 8LL * *(unsigned __int16 *)(v146 + 174));
  if ( v145 == 5 )
  {
    v72 = MiCountSharedPages(v9, v15, v17);
    v13 = v72;
    if ( a6 )
    {
      v106 = ((__int64)(v17 - v15) >> 3) - v72;
      v70 = v106 == -1;
      v107 = v106 + 1;
      v160 = v107;
      if ( !v70 && !(unsigned int)MiChargeCommit(v162, v107, 0) )
      {
        if ( v149 )
          MiReturnFullProcessCommitment(a1, v149);
        return 3221225773LL;
      }
      v18 = a1;
      CurrentThread = v153;
      v13 = 0LL;
    }
    else
    {
      if ( v72 )
      {
        v88 = MiChargeFullProcessCommitment(a1, v72);
        if ( v88 < 0 )
        {
          if ( v149 )
            MiReturnFullProcessCommitment(a1, v149);
          return (unsigned int)v88;
        }
      }
      v18 = a1;
      CurrentThread = v153;
    }
  }
  v20 = *(_DWORD *)(v9 + 48);
  if ( (v20 & 0x200000) != 0 )
  {
    if ( (v20 & 0x70) == 0 && *(int *)(v9 + 52) >= 0 )
    {
LABEL_114:
      --CurrentThread->SpecialApcDisable;
      v157 = 1;
      v81 = v18 + 1232;
      ExAcquirePushLockExclusiveEx(v18 + 1232, 0LL);
      v82 = MiCommitPageTablesForVad(v9, a3);
      if ( v82 >= 0 )
      {
        v9 = a2;
        goto LABEL_10;
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v81, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v81);
      v111 = KeGetCurrentThread();
      if ( v81 - qword_140C50630 >= 0x8000000000LL )
        SessionId = 0xFFFFFFFFLL;
      else
        SessionId = (unsigned int)MmGetSessionIdEx((__int64)v111->ApcState.Process);
      _disable();
      p_Process = (char *)&v111[1].Process;
      v114 = v81 & 0x7FFFFFFFFFFFFFFCLL;
      for ( i = 0; i < 6; ++i )
      {
        if ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) == v114
          && p_Process[18]
          && (*(_DWORD *)p_Process & 1) == 0
          && *((_DWORD *)p_Process + 2) == (_DWORD)SessionId )
        {
          p_Process[18] = 0;
          if ( *(__int64 *)p_Process < 0 )
          {
            *p_Process |= 2u;
            _enable();
            KiAbEntryRemoveFromTree(p_Process, 0x7FFFFFFFFFFFFFFCLL, v114);
            _disable();
          }
          v116 = *((_DWORD *)p_Process + 22);
          *((_DWORD *)p_Process + 22) = 0;
          p_Process[17] = 0;
          *(_QWORD *)p_Process = 0LL;
          v111->AbEntrySummary |= 1 << p_Process[16];
          _enable();
          if ( v116 )
            KiAbThreadRemoveBoostsSlow((ULONG_PTR)v111, v81, v116);
          goto LABEL_204;
        }
        p_Process += 96;
      }
      if ( (*((_DWORD *)&v111->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v111, v81, SessionId, 0LL);
      _enable();
LABEL_204:
      v117 = v153;
      v70 = v153->SpecialApcDisable++ == -1;
      if ( v70 && ($CEA84C04E3712D858E5667A507841A2A *)v117->ApcState.ApcListHead[0].Flink != &v117->152 )
        KiCheckForKernelApcDelivery();
      if ( v160 )
      {
        MiReturnCommit(v162, v13);
      }
      else if ( v13 )
      {
        v118 = a1;
        MiReturnFullProcessCommitment(a1, v13);
        goto LABEL_210;
      }
      v118 = a1;
LABEL_210:
      if ( v149 )
        MiReturnFullProcessCommitment(v118, v149);
      return (unsigned int)v82;
    }
  }
  else if ( (*(_DWORD *)(v9 + 48) & 0xF80) == 0xC00 )
  {
    v80 = *(_QWORD *)(v9 + 72);
    if ( !*(_QWORD *)(*(_QWORD *)v80 + 64LL) && (*(_DWORD *)(*(_QWORD *)v80 + 56LL) & 0x1000) != 0 )
      goto LABEL_114;
  }
LABEL_10:
  if ( v13 )
  {
    v89 = *(unsigned int *)(v9 + 52);
    LODWORD(v89) = v89 & 0x7FFFFFFF;
    v90 = v13 + (v89 | ((unsigned __int64)*(unsigned __int8 *)(v9 + 34) << 31));
    *(_DWORD *)(v9 + 52) ^= (v90 ^ *(_DWORD *)(v9 + 52)) & 0x7FFFFFFF;
    *(_BYTE *)(v9 + 34) = v90 >> 31;
  }
  v21 = v146;
  v147 = 1;
  v154 = 0LL;
  v159 = 0LL;
  v22 = *(_BYTE *)(v146 + 184) & 7;
  if ( v22 <= 4u )
  {
    if ( v22 == 2 )
    {
      v23 = (volatile __int32 *)&unk_140C53D00;
LABEL_15:
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        SchedulerAssist[5] |= (-1LL << (CurrentIrql + 1)) & 4;
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v23, CurrentIrql);
      }
      else
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v26 = CurrentPrcb->SchedulerAssist;
        if ( v26 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v122 = v26[6];
            v26[6] = v122 + 1;
            if ( v122 == -1 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        _m_prefetchw((const void *)v23);
        v27 = *v23 & 0x7FFFFFFF;
        if ( v27 != _InterlockedCompareExchange(v23, v27 + 1, v27) )
        {
          v108 = CurrentPrcb->SchedulerAssist;
          if ( v108 )
          {
            if ( CurrentPrcb->NestingLevel <= 1u )
            {
              v123 = v108[6] - 1;
              v108[6] = v123;
              if ( !v123 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
          ExpWaitForSpinLockSharedAndAcquire(v23, CurrentIrql);
        }
      }
      if ( *((_DWORD *)v23 + 1) )
        _InterlockedExchange(v23 + 1, 0);
      v21 = v146;
      LOBYTE(v28) = CurrentIrql;
      v152 = CurrentIrql;
      goto LABEL_22;
    }
LABEL_14:
    v23 = (volatile __int32 *)(v146 + 192);
    goto LABEL_15;
  }
  if ( v22 == 5 )
    goto LABEL_14;
  v28 = KeGetCurrentIrql();
  v152 = v28;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)v28 <= 0xFu )
  {
    v119 = KeGetCurrentPrcb()->SchedulerAssist;
    v120 = (1LL << ((unsigned __int8)v28 + 1)) - 1;
    LOBYTE(v28) = v152;
    v119[5] |= ~v120 & 4;
  }
LABEL_22:
  v29 = a2;
  MiQueryAddressState(a3, a3, v28, a2, 0LL, (int *)&v144, &v164, v150, &v170, &v163);
  *a7 = MmProtectToValue[v144];
  v30 = (*(_DWORD *)(a2 + 48) >> 12) & 0x7F;
  v156 = v30;
  if ( v15 <= v158 )
  {
    v31 = 0LL;
    v169 = 0LL;
    while ( 1 )
    {
      if ( (v15 & 0xFFF) == 0 || v147 )
      {
        v48 = v159;
        v147 = 0;
        if ( v159 )
        {
          MiFlushTbList(&v182);
          MiUnlockPageTableInternal(v21, v48);
        }
        if ( (*(_BYTE *)(v21 + 184) & 7) == 2 )
          v49 = &unk_140C53D00;
        else
          v49 = (_DWORD *)(v21 + 192);
        if ( (*v49 & 0x40000000) != 0 || KeShouldYieldProcessor() )
        {
          MiUnlockWorkingSetShared(v21, v152);
          MiLockWorkingSetShared(v21);
        }
        MiMakeSystemAddressValid(v15, (__int64)&v182, v30, (unsigned __int8)v152, 0);
        v159 = ((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      }
      v32 = *(_QWORD *)v15;
      v33 = (__int64)((v15 << 25) - v31) >> 16;
      if ( v15 >= 0xFFFFF6FB7DBED000uLL
        && v15 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v32 & 1) != 0
        && ((v32 & 0x20) == 0 || (v32 & 0x42) == 0) )
      {
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v125 = *((_QWORD *)&Flink->Flink + ((v15 >> 3) & 0x1FF));
          if ( (v125 & 0x20) != 0 )
            v32 |= 0x20uLL;
          if ( (v125 & 0x42) != 0 )
            v32 |= 0x42uLL;
        }
      }
      v155 = v32;
      if ( (v32 & 1) != 0 )
      {
        v172 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v155) >> 12) & 0xFFFFFFFFFFLL;
        v37 = 48 * v172 - 0x220000000000LL;
        if ( *(__int64 *)(v37 + 40) < 0 )
        {
          v171 = *(_QWORD *)(v37 + 8);
          v59 = v171 | 0x8000000000000000uLL;
          if ( v59 != MiGetProtoPteAddress(a2, v33 >> 12, 0, &v168) )
          {
            CloneAddress = 0LL;
            if ( _bittest64((const signed __int64 *)(v37 + 40), 0x28u) || v171 < 0 || !v171 )
            {
              CloneAddress = MiLocateCloneAddress(a1, v59);
              if ( *(_QWORD *)(*(_QWORD *)(v126 + 1680) + 344LL) <= CloneAddress[12] )
                CloneAddress = v127;
            }
            MiFlushTbList(&v182);
            v61 = MiCopyOnWrite(v33, v15, 0xFFFFFFFFFFFFFFFFuLL, 0);
            if ( v61 < 0 )
            {
              v128 = v146;
              MiUnlockPageTableInternal(v146, v159);
              MiUnlockWorkingSetShared(v128, v152);
              MiCopyOnWriteCheckConditions(v128, (unsigned int)v61);
              v147 = 1;
              v159 = 0LL;
              MiLockWorkingSetShared(v128);
            }
            else if ( CloneAddress )
            {
              --v149;
            }
            goto LABEL_44;
          }
        }
        if ( (a5 & 0x101) == 0 )
        {
          if ( a6 == (a5 & 0x101) )
          {
            if ( *(__int64 *)(v37 + 40) < 0 )
            {
LABEL_82:
              if ( v145 != 5 && (v32 & 0x200) != 0 )
                ++v154;
              v62 = ((v33 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
              v63 = *(_QWORD *)v62;
              if ( v62 >= 0xFFFFF6FB7DBED000uLL
                && v62 <= 0xFFFFF6FB7DBED7F8uLL
                && (MiFlags & 0xC00000) != 0
                && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
                && (v63 & 1) != 0
                && ((v63 & 0x20) == 0 || (v63 & 0x42) == 0) )
              {
                v132 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
                if ( v132 )
                {
                  v133 = *((_QWORD *)&v132->Flink + ((v62 >> 3) & 0x1FF));
                  if ( (v133 & 0x20) != 0 )
                    v63 |= 0x20uLL;
                  if ( (v133 & 0x42) != 0 )
                    v63 |= 0x42uLL;
                }
              }
              LODWORD(v64) = MiGetWsleProtection(v33, HIBYTE(v63) & 0xFu | (unsigned __int8)(16 * ((v63 >> 60) & 7)));
              if ( !(_DWORD)v64 )
              {
                if ( (v64 = (*(_DWORD *)(v37 + 16) >> 5) & 0x1F, (v65 & 0x10000000000LL) == 0)
                  && (v91 = *(_QWORD *)(v37 + 8), v91 >= 0)
                  && v91
                  || (Process = KeGetCurrentThread()->ApcState.Process, Process[1].Affinity.StaticBitmap[12])
                  && (v134 = MiLocateCloneAddress((__int64)Process, *(_QWORD *)(v37 + 8) | 0x8000000000000000uLL)) != 0LL )
                {
                  LODWORD(v64) = MmMakeProtectNotWriteCopy[v64];
                }
              }
              v40 = a2;
              v144 = v64;
              v38 = (unsigned int)MiSanitizePfnProtection(a2, (unsigned int)v64, v151);
              v67 = *(_QWORD *)v66;
              if ( v66 >= 0xFFFFF6FB7DBED000uLL
                && v66 <= 0xFFFFF6FB7DBED7F8uLL
                && (MiFlags & 0xC00000) != 0
                && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
                && (v67 & 1) != 0
                && ((v67 & 0x20) == 0 || (v67 & 0x42) == 0) )
              {
                v135 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
                if ( v135 )
                {
                  v136 = *((_QWORD *)&v135->Flink + ((v66 >> 3) & 0x1FF));
                  if ( (v136 & 0x20) != 0 )
                    v67 |= 0x20uLL;
                  if ( (v136 & 0x42) != 0 )
                    v67 |= 0x42uLL;
                }
              }
              v68 = *(_QWORD *)v66;
              v69 = v67 & 0xF00000000000000LL | (v38 << 60) & 0x7F00000000000000LL;
              do
              {
                if ( (MiFlags & 0x4000000) != 0 )
                  _mm_lfence();
                v71 = _InterlockedCompareExchange64(
                        (volatile signed __int64 *)v66,
                        v69 | v68 & 0x80FFFFFFFFFFFFFFuLL,
                        v68);
                v70 = v68 == v71;
                v68 = v71;
              }
              while ( !v70 );
              v30 = v156;
              goto LABEL_42;
            }
            v165 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v37 + 24), 0x3FuLL) )
            {
              do
                KeYieldProcessorEx(&v165, v34, v35, v36);
              while ( *(__int64 *)(v37 + 24) < 0 );
            }
            LODWORD(v38) = v148;
            v39 = *(_QWORD *)(v37 + 16);
            v40 = a2;
            v41 = (v39 >> 5) & 0x1F;
            if ( v148 != 24 )
            {
              if ( (_DWORD)v41 == 24
                && ((v129 = *(_DWORD *)(a2 + 48), (v129 & 0x200000) == 0)
                  ? (v130 = *(unsigned __int16 *)(*(_QWORD *)(a2 + 72) + 32LL) >> 1)
                  : (v130 = v129 >> 7),
                    v131 = v130 & 0x1F,
                    LOBYTE(v41) = v131,
                    v131 == 24)
                || (v42 = v41 & 0x18) == 0 )
              {
                v43 = v148 & 0x18;
                if ( v43 == 24 )
                {
                  LODWORD(v38) = v148 & 0xFFFFFFE7;
                  goto LABEL_39;
                }
                if ( v43 != 8 )
                {
LABEL_39:
                  if ( v39 )
                    *(_QWORD *)(v37 + 16) = (32 * (v38 & 0x1F)) | v39 & 0xFFFFFFFFFFFFFC1FuLL;
                  else
                    *(_QWORD *)(v37 + 16) = MiSwizzleInvalidPte(32 * (v38 & 0x1F));
                  _InterlockedAnd64((volatile signed __int64 *)(v37 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_42:
                  MiRevertValidPte(v40, v15, v38, v172, (__int64)&v182);
                  goto LABEL_43;
                }
              }
              else if ( v42 != 16 )
              {
                if ( v42 == 8 )
                {
                  LODWORD(v38) = v148 & 0xFFFFFFE7 | 8;
                }
                else if ( v42 == 24 )
                {
                  LODWORD(v38) = v148 | 0x18;
                }
                goto LABEL_39;
              }
              LODWORD(v38) = v148 & 0xFFFFFFF7;
              goto LABEL_39;
            }
            LODWORD(v38) = 24;
            goto LABEL_39;
          }
          if ( *(__int64 *)(v37 + 40) < 0 )
            goto LABEL_82;
        }
        v93 = v158;
        if ( (v15 & 0xFFFFFFFFFFFFF000uLL) != (v158 & 0xFFFFFFFFFFFFF000uLL) )
          v93 = (v15 & 0xFFFFFFFFFFFFF000uLL) + 4088;
        v94 = v15;
        if ( v15 <= v93 )
        {
          v95 = 0;
          v96 = v146;
          v97 = (_DWORD *)v173;
          while ( 1 )
          {
            v155 = MI_READ_PTE_LOCK_FREE(v94);
            if ( (v155 & 1) == 0
              || (a5 & 0x101) == 0
              && (!a6
               || (v99 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v155),
                   v98 = 6 * ((v99 >> 12) & 0xFFFFFFFFFFLL),
                   *(__int64 *)(48 * ((v99 >> 12) & 0xFFFFFFFFFFLL) - 0x21FFFFFFFFD8LL) < 0)) )
            {
LABEL_150:
              v30 = v156;
              v15 = v167;
              goto LABEL_151;
            }
            if ( (MiGetWsleContents(v98, v33) & 0xF) == 8 )
              break;
            MiInsertTbFlushEntry((__int64)&v175, v33, 1LL, 0);
            if ( HIDWORD(v178) == (_DWORD)v178 )
              goto LABEL_291;
LABEL_149:
            v94 += 8LL;
            v33 += 4096LL;
            if ( v94 > v93 )
              goto LABEL_150;
          }
          v95 = 1;
          *v97 = 1;
LABEL_291:
          if ( HIDWORD(v178) )
            MiFreeWsleList(v96, (__int64)&v175, 0);
          if ( v95 )
          {
            MiUnlockVa(v96, v33);
            v95 = 0;
          }
          goto LABEL_149;
        }
LABEL_151:
        if ( HIDWORD(v178) )
          MiFreeWsleList(v146, (__int64)&v175, 0);
      }
      else if ( (v32 & 0x400) != 0 )
      {
        if ( MiIsPrototypePteVadLookup(v32) )
        {
          v83 = a2;
LABEL_118:
          if ( v145 != 5 && MiIsPrototypePteVadLookup(v32) && (v32 & 0xA0) == 0xA0 )
            ++v154;
          if ( MiIsPrototypePteVadLookup(v32) )
            v84 = v32 >> 5;
          else
            LODWORD(v84) = *(unsigned __int16 *)(*(_QWORD *)(v83 + 72) + 32LL) >> 1;
          v144 = v84 & 0x1F;
          v85 = MiSanitizePfnProtection(v83, v84 & 0x1F, v151);
          v155 = MiSwizzleInvalidPte(32 * (v85 & 0x1F | 0xFFFFFFFFF8000020uLL));
          v86 = v155;
          v87 = v155;
          if ( MiPteInShadowRange(v15) )
          {
            if ( (unsigned int)MiPteHasShadow() )
            {
              v139 = v86;
              if ( !HIBYTE(word_140C51864) && (v86 & 1) != 0 )
                v139 = v86 | 0x8000000000000000uLL;
              *(_QWORD *)v15 = v139;
              MiWritePteShadow(v15, v139);
              goto LABEL_43;
            }
            if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
              && (v86 & 1) != 0 )
            {
              v87 |= 0x8000000000000000uLL;
            }
          }
          *(_QWORD *)v15 = v87;
LABEL_43:
          v15 += 8LL;
          v167 = v15;
          goto LABEL_44;
        }
        v137 = v32;
        if ( qword_140C50780 && (v32 & 0x10) == 0 )
          v137 = v32 & ~qword_140C50780;
        v138 = v33 >> 12;
        v83 = a2;
        if ( v137 >> 16 == MiGetProtoPteAddress(a2, v138, 0, &v168) )
          goto LABEL_118;
        MiFlushTbList(&v182);
        if ( (int)MiMakeProtoLeafValid(v15, 1LL, v152) < 0 )
        {
          v15 += 8LL;
          v167 = v15;
        }
        v147 = 1;
      }
      else
      {
        if ( (v32 & 0x800) == 0 )
        {
          v50 = 0;
          if ( a6 )
          {
            if ( v32 )
            {
              MiReleasePageFileSpace(v162, v32, 1);
              if ( (unsigned int)IS_PTE_NOT_DEMAND_ZERO(v32) )
LABEL_156:
                _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1272), 0xFFFFFFFFFFFFFFFFuLL);
              UsedPtesHandle = MiGetUsedPtesHandle(v33);
              MiDecreaseUsedPtesCount(UsedPtesHandle, 1uLL);
              v50 = 1;
            }
LABEL_69:
            v51 = (v33 >> 18) & 0x3FFFFFF8;
            v52 = *(_QWORD *)((unsigned int)v51 - 0x904C0000000LL);
            if ( MiPteInShadowRange((unsigned int)v51 - 0x904C0000000LL)
              && (MiFlags & 0xC00000) != 0
              && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
              && (v52 & 1) != 0
              && ((v52 & 0x20) == 0 || (v52 & 0x42) == 0) )
            {
              v140 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
              if ( v140 )
              {
                v141 = *((_QWORD *)&v140->Flink
                       + ((((unsigned __int64)(unsigned int)v51 - 0x904C0000000LL) >> 3) & 0x1FF));
                if ( (v141 & 0x20) != 0 )
                  v52 |= 0x20uLL;
                if ( (v141 & 0x42) != 0 )
                  v52 |= 0x42uLL;
              }
            }
            v174 = v52;
            v54 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v174) >> 12) & 0xFFFFFFFFFFLL)
                - 0x220000000000LL;
            v166 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v54 + 24), 0x3FuLL) )
            {
              do
                KeYieldProcessorEx(&v166, v53, v55, v56);
              while ( *(__int64 *)(v54 + 24) < 0 );
            }
            *(_QWORD *)(v54 + 16) ^= ((unsigned int)*(_QWORD *)(v54 + 16) ^ ((unsigned int)*(_QWORD *)(v54 + 16)
                                                                           + 0x10000)) & 0x3FF0000;
            _InterlockedAnd64((volatile signed __int64 *)(v54 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            MmIsAddressValidEx(*(_QWORD *)(v54 + 8) | 0x8000000000000000uLL);
            if ( v145 != 5 && (v50 || !MiPteNeedsCommitCharge(a2, v15)) )
              ++v154;
            v144 = (*(unsigned __int16 *)(*(_QWORD *)(a2 + 72) + 32LL) >> 1) & 0x1F;
            v57 = MiSanitizePfnProtection(0LL, v144, v151);
            v58 = MiSwizzleInvalidPte(32 * (v57 & 0x1F | 0xFFFFFFFFF8000020uLL));
          }
          else
          {
            if ( !v32 )
              goto LABEL_69;
            v144 = (v32 >> 5) & 0x1F;
            v148 = MiSanitizePfnProtection(a2, (v32 >> 5) & 0x1F, v148);
            v58 = v32 ^ ((unsigned __int16)v32 ^ (unsigned __int16)(32 * v148)) & 0x3E0;
          }
          v155 = v58;
          *(_QWORD *)v15 = v58;
          goto LABEL_43;
        }
        if ( a6 )
        {
          v100 = MiTryDeleteTransitionPte(v15);
          if ( v100 == 3 )
          {
            ++v161;
            goto LABEL_156;
          }
          if ( v100 != 1 )
            goto LABEL_156;
        }
        else if ( !(unsigned int)MiSetProtectionOnTransitionPte(a2, v15, v148, 1LL) )
        {
          goto LABEL_43;
        }
      }
LABEL_44:
      v31 = v169;
      if ( v15 > v158 )
      {
        v29 = a2;
        break;
      }
      v21 = v146;
    }
  }
  MiFlushTbList(&v182);
  if ( v159 )
    MiUnlockPageTableInternal(v146, v159);
  MiUnlockWorkingSetShared(v146, v152);
  if ( v157 )
  {
    v73 = a1 + 1232;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1232), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v73);
    v74 = KeGetCurrentThread();
    if ( v73 - qword_140C50630 < 0x8000000000LL )
      v75 = (unsigned int)MmGetSessionIdEx((__int64)v74->ApcState.Process);
    else
      v75 = 0xFFFFFFFFLL;
    _disable();
    v76 = (char *)&v74[1].Process;
    v77 = 0LL;
    do
    {
      if ( (*(_QWORD *)v76 & 0x7FFFFFFFFFFFFFFCLL) == (v73 & 0x7FFFFFFFFFFFFFFCLL)
        && v76[18]
        && (*(_DWORD *)v76 & 1) == 0
        && *((_DWORD *)v76 + 2) == (_DWORD)v75 )
      {
        v76[18] = 0;
        if ( *(__int64 *)v76 < 0 )
        {
          *v76 |= 2u;
          _enable();
          KiAbEntryRemoveFromTree(v76, 0x7FFFFFFFFFFFFFFCLL, v77);
          _disable();
        }
        v78 = *((_DWORD *)v76 + 22);
        *((_DWORD *)v76 + 22) = 0;
        v76[17] = 0;
        *(_QWORD *)v76 = 0LL;
        v74->AbEntrySummary |= 1 << v76[16];
        _enable();
        if ( v78 )
          KiAbThreadRemoveBoostsSlow((ULONG_PTR)v74, v73, v78);
        goto LABEL_109;
      }
      v77 = (unsigned int)(v77 + 1);
      v76 += 96;
    }
    while ( (unsigned int)v77 < 6 );
    if ( (*((_DWORD *)&v74->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v74, v73, v75, 0LL);
    _enable();
LABEL_109:
    v79 = v153;
    v70 = v153->SpecialApcDisable++ == -1;
    if ( v70 && ($CEA84C04E3712D858E5667A507841A2A *)v79->ApcState.ApcListHead[0].Flink != &v79->152 )
      KiCheckForKernelApcDelivery();
  }
  v44 = v161;
  v45 = v160;
  if ( v161 && v145 == 5 )
  {
    v45 = v160 - v161;
    v44 = 0LL;
    v161 = 0LL;
  }
  if ( v45 )
  {
    MiReturnCommit(v162, v45);
    v44 = v161;
  }
  v46 = v154;
  if ( v154 )
  {
    v102 = *(unsigned int *)(v29 + 52);
    LODWORD(v102) = v102 & 0x7FFFFFFF;
    v103 = v154 - v44;
    v104 = (v102 | ((unsigned __int64)*(unsigned __int8 *)(v29 + 34) << 31)) - v154;
    v105 = v162;
    *(_DWORD *)(v29 + 52) ^= (v104 ^ *(_DWORD *)(v29 + 52)) & 0x7FFFFFFF;
    *(_BYTE *)(v29 + 34) = v104 >> 31;
    MiReturnCommit(v105, v103);
    MiReturnFullProcessCharges(a1, v46);
  }
  if ( v149 )
    MiReturnFullProcessCommitment(a1, v149);
  return 0LL;
}
