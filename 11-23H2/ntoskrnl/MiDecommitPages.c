/*
 * XREFs of MiDecommitPages @ 0x14027FA60
 * Callers:
 *     MmStoreDecommitVirtualMemory @ 0x14065D4C4 (MmStoreDecommitVirtualMemory.c)
 *     MiDecommitRegion @ 0x140744750 (MiDecommitRegion.c)
 *     MmStoreAllocateVirtualMemory @ 0x140A45E10 (MmStoreAllocateVirtualMemory.c)
 * Callees:
 *     MI_PROTO_FORMAT_COMBINED @ 0x14020AE38 (MI_PROTO_FORMAT_COMBINED.c)
 *     MiGetAnyMultiplexedVm @ 0x1402146B4 (MiGetAnyMultiplexedVm.c)
 *     MiReleasePageFileSpace @ 0x14021941C (MiReleasePageFileSpace.c)
 *     MiFastLockLeafPageTable @ 0x140237350 (MiFastLockLeafPageTable.c)
 *     MiUnlockWorkingSetShared @ 0x14023C5D0 (MiUnlockWorkingSetShared.c)
 *     KeYieldProcessorEx @ 0x140242F10 (KeYieldProcessorEx.c)
 *     MiWalkPageTables @ 0x14025BF90 (MiWalkPageTables.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402715F0 (MiPteInShadowRange.c)
 *     MiTerminateWsle @ 0x140274AE0 (MiTerminateWsle.c)
 *     MiMakeSystemAddressValid @ 0x1402776C0 (MiMakeSystemAddressValid.c)
 *     MiVadPureReserve @ 0x140277E00 (MiVadPureReserve.c)
 *     MiTerminateWsleCluster @ 0x140279430 (MiTerminateWsleCluster.c)
 *     MiIsPrototypePteVadLookup @ 0x14027D190 (MiIsPrototypePteVadLookup.c)
 *     MiInsertTbFlushEntry @ 0x14027F800 (MiInsertTbFlushEntry.c)
 *     MiDeletePteWsleCluster @ 0x140280940 (MiDeletePteWsleCluster.c)
 *     MiLockWorkingSetShared @ 0x140283F20 (MiLockWorkingSetShared.c)
 *     MiSwizzleInvalidPte @ 0x140285A30 (MiSwizzleInvalidPte.c)
 *     MiTransferSoftwarePte @ 0x140285A60 (MiTransferSoftwarePte.c)
 *     MiLocateCloneAddress @ 0x140294828 (MiLocateCloneAddress.c)
 *     MiReleasePageFileInfo @ 0x14029556C (MiReleasePageFileInfo.c)
 *     MiDeletePteList @ 0x1402D26E0 (MiDeletePteList.c)
 *     MiDeleteTransitionPte @ 0x1402DD110 (MiDeleteTransitionPte.c)
 *     MiGetLeafVa @ 0x1402E5CB0 (MiGetLeafVa.c)
 *     MiGetUsedPtesHandle @ 0x1402E5D00 (MiGetUsedPtesHandle.c)
 *     MiIncreaseUsedPtesCount @ 0x1402F1B64 (MiIncreaseUsedPtesCount.c)
 *     MiDecrementCombinedPteEx @ 0x1402F3DA8 (MiDecrementCombinedPteEx.c)
 *     MiUnlockPageTableInternal @ 0x140319850 (MiUnlockPageTableInternal.c)
 *     MiReducePteUseCount @ 0x14033B2D0 (MiReducePteUseCount.c)
 *     MiLockTransitionLeafPageEx @ 0x140347F38 (MiLockTransitionLeafPageEx.c)
 *     MI_IS_PTE_IN_WS_SWAP_SET @ 0x14034F6B4 (MI_IS_PTE_IN_WS_SWAP_SET.c)
 *     MiWritePteShadow @ 0x1403574EC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14035754C (MiPteHasShadow.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     EtwTraceShouldYieldProcessor @ 0x1405FDA1C (EtwTraceShouldYieldProcessor.c)
 *     MiFlushGraphicsPtes @ 0x140626978 (MiFlushGraphicsPtes.c)
 *     MiDecommitLargePte @ 0x140635E20 (MiDecommitLargePte.c)
 *     MiDecrementCloneBlockReference @ 0x14066429C (MiDecrementCloneBlockReference.c)
 */

__int64 __fastcall MiDecommitPages(
        unsigned __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        _QWORD *a6)
{
  int v9; // edx
  __int64 v10; // r12
  __int64 v11; // rax
  unsigned __int64 v12; // rdx
  __int64 v13; // r10
  __int64 v14; // rcx
  __int64 v15; // r14
  __int64 v16; // rsi
  unsigned __int64 v17; // r9
  int v18; // r8d
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rbx
  unsigned __int64 v25; // r13
  unsigned __int64 v26; // r15
  bool i; // cc
  int v28; // ecx
  ULONG_PTR v29; // rdi
  unsigned __int64 v30; // rbx
  __int64 v31; // r12
  unsigned __int64 v32; // r8
  unsigned __int64 v33; // rax
  char v34; // di
  __int64 v35; // rax
  BOOL v36; // r15d
  struct _KPRCB *CurrentPrcb; // rax
  int v38; // r8d
  __int64 v39; // r9
  volatile int DpcRequestSummary; // edx
  unsigned int DpcWatchdogCount; // edi
  unsigned int DpcTimeCount; // r15d
  _KTHREAD *NextThread; // rcx
  __int16 v44; // ax
  int v45; // r12d
  __int64 v46; // rdi
  unsigned __int64 v47; // r8
  __int64 v48; // rax
  ULONG_PTR v49; // rbx
  int v50; // edx
  unsigned __int64 v51; // rbx
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 UsedPtesHandle; // rax
  unsigned __int64 v56; // rbx
  unsigned __int64 v57; // rax
  __int64 v58; // rbx
  _DWORD *v59; // rax
  __int64 v60; // rbx
  unsigned __int64 LeafVa; // rax
  unsigned __int64 v62; // r9
  char *AnyMultiplexedVm; // rdi
  int v64; // eax
  unsigned int v65; // ecx
  unsigned __int64 v66; // r8
  _QWORD *v67; // rdi
  __int64 v68; // rdx
  __int64 v69; // rax
  unsigned int v70; // r15d
  __int64 v72; // r9
  __int64 v73; // rax
  unsigned int v74; // ebx
  __int64 v75; // rbx
  __int64 v76; // rax
  ULONG_PTR v77; // r10
  __int64 v78; // rdi
  __int64 v79; // r15
  unsigned __int64 v80; // rcx
  __int64 v81; // rcx
  __int64 v82; // rbx
  unsigned __int64 v83; // rdi
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // r8
  __int64 v87; // rax
  struct _KPRCB *v88; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v90; // eax
  signed __int32 v91; // ett
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // rcx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v96; // rax
  int v97; // eax
  int v98; // ecx
  struct _LIST_ENTRY *v99; // rcx
  __int64 v100; // rcx
  struct _LIST_ENTRY *v101; // r8
  __int64 v102; // rcx
  int v103; // eax
  int v104; // ecx
  __int64 v106; // r9
  int v107; // eax
  __int64 v108; // r8
  __int64 v109; // r9
  ULONG_PTR CloneAddress; // rax
  ULONG_PTR v111; // rdx
  unsigned __int64 v112; // rbx
  __int64 v113; // rdx
  __int64 v114; // rcx
  __int64 v115; // r8
  __int64 v116; // rax
  struct _LIST_ENTRY *v117; // rcx
  __int64 v118; // rcx
  unsigned __int8 v119; // [rsp+30h] [rbp-D0h]
  int v120; // [rsp+34h] [rbp-CCh]
  __int64 v121; // [rsp+38h] [rbp-C8h]
  __int64 v122; // [rsp+48h] [rbp-B8h]
  int v123; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v124; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v125; // [rsp+58h] [rbp-A8h]
  ULONG_PTR v127; // [rsp+68h] [rbp-98h]
  __int64 v128; // [rsp+70h] [rbp-90h]
  unsigned int v129; // [rsp+78h] [rbp-88h]
  int v130; // [rsp+7Ch] [rbp-84h]
  __int64 v131; // [rsp+80h] [rbp-80h]
  BOOL v132; // [rsp+88h] [rbp-78h]
  int v133; // [rsp+8Ch] [rbp-74h]
  __int64 v134; // [rsp+90h] [rbp-70h]
  __int64 v135; // [rsp+98h] [rbp-68h] BYREF
  unsigned __int64 v136; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v137; // [rsp+A8h] [rbp-58h] BYREF
  __int128 v138; // [rsp+B8h] [rbp-48h]
  int v139; // [rsp+C8h] [rbp-38h] BYREF
  int v140; // [rsp+CCh] [rbp-34h] BYREF
  __int64 v141; // [rsp+D0h] [rbp-30h]
  __int64 v142; // [rsp+D8h] [rbp-28h]
  __int64 v143; // [rsp+E0h] [rbp-20h]
  unsigned __int64 v144; // [rsp+E8h] [rbp-18h]
  unsigned __int64 v145; // [rsp+F0h] [rbp-10h]
  unsigned __int64 v146; // [rsp+F8h] [rbp-8h] BYREF
  __int128 v147; // [rsp+100h] [rbp+0h] BYREF
  __int64 v148; // [rsp+110h] [rbp+10h] BYREF
  __int64 v149; // [rsp+118h] [rbp+18h] BYREF
  _QWORD v150[22]; // [rsp+120h] [rbp+20h] BYREF
  int v151; // [rsp+1D0h] [rbp+D0h] BYREF
  __int16 v152; // [rsp+1D4h] [rbp+D4h]
  __int16 v153; // [rsp+1D6h] [rbp+D6h]
  __int64 v154; // [rsp+1D8h] [rbp+D8h]
  __int64 v155; // [rsp+1E0h] [rbp+E0h]
  __int64 v156; // [rsp+1E8h] [rbp+E8h]
  _BYTE v157[2040]; // [rsp+1F0h] [rbp+F0h] BYREF

  v144 = a2;
  v153 = 0;
  v143 = a4;
  v135 = 0LL;
  memset(v157, 0, sizeof(v157));
  v9 = *(_DWORD *)(a4 + 48);
  v154 = 256LL;
  v151 = 1;
  v152 = 0;
  v138 = 0LL;
  v123 = v9 & 0x2200000;
  v137 = 0LL;
  DWORD2(v138) = 2;
  v10 = 1LL;
  v155 = 0LL;
  v156 = 0LL;
  v121 = 1LL;
  v132 = 0;
  v133 = 0;
  v11 = MiSwizzleInvalidPte(512LL);
  v14 = *(unsigned __int8 *)(a4 + 33);
  v15 = v11;
  v141 = v11;
  v16 = v11;
  v17 = 0xFFFFF68000000000uLL;
  v18 = *(_DWORD *)(a4 + 52);
  v19 = 8 * ((*(unsigned int *)(a4 + 28) | (unsigned __int64)(v14 << 32)) & 0xFFFFFFFFFLL) - 0x98000000000LL;
  v20 = *(unsigned __int8 *)(a4 + 34);
  v145 = v19;
  v21 = (unsigned int)v18;
  LODWORD(v21) = v18 & 0x7FFFFFFF;
  if ( (v21 | (v20 << 31)) == 0x7FFFFFFFELL )
  {
    v15 = MiSwizzleInvalidPte(32LL * (((unsigned int)v12 >> 7) & 0x1F));
    v141 = v15;
    v16 = v15;
  }
  else if ( v18 >= 0 )
  {
    if ( (v12 & 0x6200000) != 0x4200000 )
      v16 = 0LL;
    v145 = 0LL;
    v132 = MiVadPureReserve(a4);
  }
  v142 = v13;
  v129 = 3;
  if ( (v12 & 0xA00000) == 0xA00000 )
  {
    v22 = (v12 >> 19) & 3;
    v10 = MiVadPageSizes[v22];
    v129 = MiVadPageIndices[v22];
    v23 = 16LL;
    v121 = v10;
    if ( v10 != 16 )
      v23 = v13;
    v142 = v23;
  }
  v24 = 0LL;
  v127 = 0LL;
  v122 = 0LL;
  if ( !a5 )
    v133 = 2;
  v131 = 0LL;
  v25 = v17 + ((a1 >> 9) & 0x7FFFFFFFF8LL);
  v26 = a1 & 0xFFFFFFFFFFFFF000uLL;
  v130 = v13;
  v124 = v26;
  v120 = 0;
  v128 = a3 + 1664;
  v134 = *(_QWORD *)(qword_140C673C8 + 8LL * *(unsigned __int16 *)(a3 + 1838));
  v119 = MiLockWorkingSetShared(a3 + 1664);
  for ( i = v25 <= a2; ; i = v25 <= v144 )
  {
    if ( !i )
    {
      v67 = a6;
      goto LABEL_95;
    }
    v28 = 0;
    v29 = v25;
    if ( v130 )
    {
      v28 = 1;
    }
    else if ( v129 <= 1 )
    {
      v92 = 2 - v129;
      do
      {
        v29 = ((v29 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        --v92;
      }
      while ( v92 );
      v15 = v141;
      v10 = v121;
    }
    if ( (v29 & 0xFFF) == 0 || v28 )
      break;
LABEL_18:
    v30 = *(_QWORD *)v29;
    if ( v29 >= 0xFFFFF6FB7DBED000uLL
      && v29 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0x600000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v30 & 1) != 0
      && ((v30 & 0x20) == 0 || (v30 & 0x42) == 0) )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v96 = *((_QWORD *)&Flink->Flink + ((v29 >> 3) & 0x1FF));
        if ( (v96 & 0x20) != 0 )
          v30 |= 0x20uLL;
        if ( (v96 & 0x42) != 0 )
          v30 |= 0x42uLL;
      }
    }
    v146 = v30;
    if ( !v30 )
    {
      if ( v25 > v145 )
        a6[4] += v10;
      if ( v16 )
      {
        UsedPtesHandle = MiGetUsedPtesHandle((__int64)(v29 << 25) >> 16);
        v56 = v142;
        MiIncreaseUsedPtesCount(UsedPtesHandle, (unsigned int)v142);
        v57 = 0LL;
        do
          *(_QWORD *)(v29 + 8 * v57++) = v16;
        while ( v57 < v56 );
      }
LABEL_34:
      v25 += 8 * v10;
      if ( (v25 & 0x78) == 0 )
      {
        v58 = a3 + 1664;
        v59 = (*(_BYTE *)(a3 + 1848) & 7) == 2 ? &unk_140C6A180 : (_DWORD *)(a3 + 1856);
        if ( (*v59 & 0x40000000) != 0 )
        {
LABEL_114:
          if ( (unsigned int)MiDeletePteWsleCluster(&v137, a3, v16, a6) )
            v120 = 1;
          if ( v123 == 35651584 && v122 )
          {
            MiFlushGraphicsPtes(v127, v122);
            v127 = 0LL;
            v122 = 0LL;
          }
          if ( HIDWORD(v154) && (unsigned int)MiDeletePteList((unsigned int)&v151, a3, v16, (_DWORD)a6, 1) )
            v120 = 1;
          if ( v131 )
          {
            MiUnlockPageTableInternal(v58, v131);
            v131 = 0LL;
          }
          MiUnlockWorkingSetShared(v58, v119);
          v130 = 1;
          MiLockWorkingSetShared(v58);
          goto LABEL_41;
        }
      }
      CurrentPrcb = KeGetCurrentPrcb();
      v38 = 0;
      v39 = 0LL;
      DpcRequestSummary = CurrentPrcb->DpcRequestSummary;
      DpcWatchdogCount = CurrentPrcb->DpcWatchdogCount;
      DpcTimeCount = CurrentPrcb->DpcTimeCount;
      if ( (DpcRequestSummary & 1) != 0 )
      {
        v38 = 1;
        if ( DpcTimeCount <= 7 )
          goto LABEL_40;
        if ( CurrentPrcb->QuantumEnd )
        {
          v74 = 1;
          goto LABEL_110;
        }
      }
      else if ( CurrentPrcb->NestingLevel )
      {
        v39 = 1LL;
        if ( DpcWatchdogCount <= 7 )
          goto LABEL_41;
        if ( CurrentPrcb->QuantumEnd )
        {
          v74 = 7;
          goto LABEL_110;
        }
      }
      else
      {
        if ( (DpcRequestSummary & 0x1E) != 0 )
        {
          v74 = 2;
LABEL_110:
          if ( (DWORD1(PerfGlobalGroupMask) & 0x4000000) != 0 )
            EtwTraceShouldYieldProcessor(v74, DpcWatchdogCount, DpcTimeCount, v39);
          if ( v74 )
          {
            v58 = a3 + 1664;
            goto LABEL_114;
          }
          goto LABEL_41;
        }
        if ( CurrentPrcb->QuantumEnd )
        {
          v74 = 3;
          goto LABEL_110;
        }
        NextThread = CurrentPrcb->NextThread;
        if ( NextThread && NextThread != CurrentPrcb->CurrentThread )
        {
          v74 = 4;
          goto LABEL_110;
        }
LABEL_40:
        if ( DpcWatchdogCount <= 7 )
        {
LABEL_41:
          v26 = (v10 << 12) + v124;
          v124 = v26;
          goto LABEL_42;
        }
        if ( !v38 )
        {
LABEL_154:
          _disable();
          v74 = 0;
          CurrentPrcb->DpcWatchdogCount = 0;
          CurrentPrcb->DpcTimeCount = 0;
          v88 = KeGetCurrentPrcb();
          SchedulerAssist = (signed __int32 *)v88->SchedulerAssist;
          if ( SchedulerAssist )
          {
            _m_prefetchw(SchedulerAssist);
            v90 = *SchedulerAssist;
            do
            {
              v91 = v90;
              v90 = _InterlockedCompareExchange(SchedulerAssist, v90 & 0xFFDFFFFF, v90);
            }
            while ( v91 != v90 );
            if ( (v90 & 0x200000) != 0 )
              KiRemoveSystemWorkPriorityKick(v88);
          }
          _enable();
          goto LABEL_110;
        }
      }
      if ( (DpcRequestSummary & 0x1E) != 0 )
      {
        v74 = 5;
        goto LABEL_110;
      }
      if ( CurrentPrcb->CurrentThread != CurrentPrcb->IdleThread )
      {
        v74 = 6;
        goto LABEL_110;
      }
      goto LABEL_154;
    }
    if ( (v30 & 1) != 0 )
    {
      v31 = v142 + v122;
      if ( !v127 )
        v127 = v29;
      if ( v121 != 1 )
      {
        v97 = MiDecommitLargePte(v143, v29, v16, (_DWORD)a6, (__int64)&v151);
        v98 = v120;
        v122 = v31;
        if ( v97 )
          v98 = 1;
        v120 = v98;
        goto LABEL_33;
      }
      v139 = 0;
      if ( (HIBYTE(*(_QWORD *)(((v26 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL)) & 0xF) == 8 )
      {
LABEL_65:
        MiTerminateWsle(v128, v26, 0, &v139);
        MiInsertTbFlushEntry((__int64)&v151, v26, 1LL, 0);
        v51 = v30 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
        v146 = v51;
        if ( MiPteInShadowRange(v25) && (unsigned int)MiPteHasShadow(v53, v52, v54) )
        {
          *(_QWORD *)v25 = v51;
          MiWritePteShadow(v25, v51);
        }
        else
        {
          *(_QWORD *)v25 = v51;
        }
      }
      else
      {
        v32 = (((unsigned __int64)((__int64)(v25 << 25) >> 16) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v33 = *(_QWORD *)v32;
        if ( v32 >= 0xFFFFF6FB7DBED000uLL
          && v32 <= 0xFFFFF6FB7DBED7F8uLL
          && (MiFlags & 0x600000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v33 & 1) != 0
          && ((v33 & 0x20) == 0 || (v33 & 0x42) == 0) )
        {
          v99 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( v99 )
          {
            v100 = *((_QWORD *)&v99->Flink + ((v32 >> 3) & 0x1FF));
            if ( (v100 & 0x20) != 0 )
              v33 |= 0x20uLL;
            if ( (v100 & 0x42) != 0 )
              v33 |= 0x42uLL;
          }
        }
        v34 = HIBYTE(v33) & 0xF | (16 * ((v33 >> 60) & 7));
        v35 = *(_QWORD *)v25;
        if ( v25 >= 0xFFFFF6FB7DBED000uLL
          && v25 <= 0xFFFFF6FB7DBED7F8uLL
          && (MiFlags & 0x600000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v35 & 1) != 0
          && ((v35 & 0x20) == 0 || (v35 & 0x42) == 0) )
        {
          v101 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( v101 )
          {
            v102 = *((_QWORD *)&v101->Flink + ((v25 >> 3) & 0x1FF));
            if ( (v102 & 0x20) != 0 )
              v35 |= 0x20uLL;
            if ( (v102 & 0x42) != 0 )
              v35 |= 0x42uLL;
          }
        }
        v148 = v35;
        v36 = *(_QWORD *)(48
                        * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v148) >> 12) & 0xFFFFFFFFFFLL)
                        - 0x220000000000LL
                        + 40) >= 0LL;
        if ( *((_QWORD *)&v137 + 1) )
        {
          if ( v25 == *((_QWORD *)&v137 + 1) + 8LL * (_QWORD)v138 && v34 == BYTE12(v138) && v36 == (BYTE8(v138) & 1) )
          {
            *(_QWORD *)&v138 = v138 + 1;
            goto LABEL_32;
          }
          if ( (BYTE8(v138) & 2) != 0 )
          {
            v26 = v124;
            goto LABEL_65;
          }
          MiTerminateWsleCluster((__int64 *)&v137);
        }
        *(_QWORD *)&v137 = a3 + 1664;
        *(_QWORD *)&v138 = 1LL;
        *((_QWORD *)&v137 + 1) = v25;
        BYTE12(v138) = v34;
        DWORD2(v138) = v36 | DWORD2(v138) & 0xFFFFFFFE;
      }
LABEL_32:
      v122 = v31;
      if ( HIDWORD(v154) == (_DWORD)v154 - 1 )
      {
        v103 = MiDeletePteWsleCluster(&v137, a3, v16, a6);
        v104 = v120;
        v122 = v31;
        if ( v103 )
          v104 = 1;
        v120 = v104;
        if ( v123 == 35651584 )
        {
          v122 = v31;
          if ( v31 )
          {
            MiFlushGraphicsPtes(v127, v31);
            v127 = 0LL;
            v122 = 0LL;
          }
        }
        v10 = 1LL;
        if ( (unsigned int)MiDeletePteList((unsigned int)&v151, a3, v16, (_DWORD)a6, 1) )
          v120 = 1;
        goto LABEL_34;
      }
      goto LABEL_33;
    }
    if ( (v30 & 0x400) != 0 )
    {
      if ( MI_PROTO_FORMAT_COMBINED(v30, 0xFFFFF6FB7DBED000uLL) )
      {
        v107 = MiDecrementCombinedPteEx(v128, v106, 0LL);
LABEL_236:
        if ( v107 == 3 )
        {
          ++a6[1];
        }
        else if ( v107 == 5 )
        {
          ++a6[3];
        }
      }
      else if ( !MiIsPrototypePteVadLookup(v30) )
      {
        CloneAddress = MiLocateCloneAddress(a3, v109, v108);
        if ( CloneAddress )
        {
          v107 = MiDecrementCloneBlockReference(CloneAddress, v111);
          goto LABEL_236;
        }
      }
      v112 = v16;
      if ( MiPteInShadowRange(v25) )
      {
        if ( (unsigned int)MiPteHasShadow(v114, v113, v115) )
        {
          if ( !HIBYTE(word_140C66CFC) && (v16 & 1) != 0 )
            v112 = v16 | 0x8000000000000000uLL;
          *(_QWORD *)v25 = v112;
          MiWritePteShadow(v25, v112);
          goto LABEL_250;
        }
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (v16 & 1) != 0 )
        {
          v112 = v16 | 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)v25 = v112;
LABEL_250:
      if ( !v16 && (unsigned int)MiReducePteUseCount(v25, 1LL) )
        v120 = 1;
      goto LABEL_34;
    }
    if ( (v30 & 0x800) == 0 )
    {
      if ( ((v30 >> 5) & 0x1F) == 0x10 )
      {
        a6[4] += v10;
        goto LABEL_34;
      }
      v44 = v30;
      if ( qword_140C65B40 && (v30 & 0x10) == 0 )
        v44 = v30 & ~(_WORD)qword_140C65B40;
      if ( (v44 & 0x400) != 0 || (v44 & 0x800) != 0 || (v44 & 4) != 0 )
        _InterlockedExchangeAdd64((volatile signed __int64 *)(a3 + 1272), 0xFFFFFFFFFFFFFFFFuLL);
      v45 = 1;
      v46 = v16;
      v134 = *(_QWORD *)(qword_140C673C8 + 8LL * *(unsigned __int16 *)(a3 + 1838));
      if ( ((v30 >> 1) & 1) != 0
        && !(unsigned int)MI_IS_PTE_IN_WS_SWAP_SET(
                            *(_QWORD *)(qword_140C673C8 + 8LL * *(unsigned __int16 *)(a3 + 1838)),
                            &v146) )
      {
        v45 = 0;
        HIDWORD(v73) = HIDWORD(v30);
        if ( qword_140C65B40 && (v30 & 0x10) == 0 )
          v73 = v30 & ~qword_140C65B40;
        v46 = MiTransferSoftwarePte(v15, *(_QWORD *)(v72 + 8LL * ((unsigned __int16)v30 >> 12) + 17056), HIDWORD(v73));
      }
      v136 = v30;
      *(_QWORD *)v25 = v46;
      if ( (v30 & 4) != 0 )
      {
        v116 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v136);
        if ( !v45 )
          v116 &= ~2uLL;
      }
      else
      {
        if ( !v45 || ((v30 >> 1) & 1) == 0 )
        {
          v136 = 0LL;
          goto LABEL_57;
        }
        v116 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v136);
      }
      v136 = v116;
      if ( v116 )
        MiReleasePageFileInfo(v134, v116, 0LL);
LABEL_57:
      if ( !v46 )
      {
        v47 = ((((__int64)(v25 << 25) >> 16) & 0xFFFFFFE00000uLL) >> 18) - 0x904C0000000LL;
        v48 = *(_QWORD *)v47;
        if ( v47 >= 0xFFFFF6FB7DBED000uLL
          && v47 <= 0xFFFFF6FB7DBED7F8uLL
          && (MiFlags & 0x600000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v48 & 1) != 0
          && ((v48 & 0x20) == 0 || (v48 & 0x42) == 0) )
        {
          v117 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( v117 )
          {
            v118 = *((_QWORD *)&v117->Flink + ((v47 >> 3) & 0x1FF));
            if ( (v118 & 0x20) != 0 )
              v48 |= 0x20uLL;
            if ( (v118 & 0x42) != 0 )
              v48 |= 0x42uLL;
          }
        }
        v149 = v48;
        v49 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v149) >> 12) & 0xFFFFFFFFFFLL)
            - 0x220000000000LL;
        if ( (*(_DWORD *)(v49 + 16) & 0x3FF0000) == 0 )
          KeBugCheckEx(0x1Au, 0x41790uLL, v49, HIWORD(*(_DWORD *)(v49 + 16)) & 0x3FF, 1uLL);
        v140 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v49 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v140);
          while ( *(__int64 *)(v49 + 24) < 0 );
        }
        v50 = ((*(_QWORD *)(v49 + 16) >> 16) & 0x3FF) - 1;
        *(_QWORD *)(v49 + 16) ^= ((unsigned int)*(_QWORD *)(v49 + 16) ^ (v50 << 16)) & 0x3FF0000;
        _InterlockedAnd64((volatile signed __int64 *)(v49 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v10 = v121;
        if ( !v50 )
          v120 = 1;
        goto LABEL_34;
      }
      goto LABEL_33;
    }
    if ( v10 != 1 )
    {
      if ( (unsigned int)MiDecommitLargePte(v143, v29, v16, (_DWORD)a6, (__int64)&v151) )
        v120 = 1;
      goto LABEL_34;
    }
    v75 = 0LL;
    v135 = 0LL;
    v76 = MiLockTransitionLeafPageEx(v25);
    v77 = v76;
    if ( v76 )
    {
      v78 = 0LL;
      v79 = 0LL;
      if ( !*(_WORD *)(v76 + 32) )
      {
        v75 = *(_QWORD *)(v76 + 16);
        v80 = *(_QWORD *)(v76 + 40);
        v78 = v75;
        v79 = v75;
        v135 = v75;
        v81 = *(_QWORD *)(qword_140C673C8 + 8 * ((v80 >> 43) & 0x3FF));
        v134 = v81;
        if ( (v75 & 2) != 0 )
          LODWORD(v10) = MI_IS_PTE_IN_WS_SWAP_SET(v81, &v135) != 0;
      }
      if ( (unsigned int)MiDeleteTransitionPte(v25, v77) == 3 )
      {
        v78 = v79;
        ++a6[1];
      }
      if ( v78 )
        MiReleasePageFileSpace(v134, v75, v10);
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a3 + 1272), 0xFFFFFFFFFFFFFFFFuLL);
      v82 = v16;
      if ( !(_DWORD)v10 )
      {
        HIDWORD(v87) = HIDWORD(v135);
        if ( qword_140C65B40 && (v135 & 0x10) == 0 )
          v87 = v135 & ~qword_140C65B40;
        v82 = MiTransferSoftwarePte(v15, *(_QWORD *)(v134 + 8LL * ((unsigned __int16)v135 >> 12) + 17056), HIDWORD(v87));
      }
      v83 = v82;
      if ( MiPteInShadowRange(v25) )
      {
        if ( !(unsigned int)MiPteHasShadow(v85, v84, v86) )
        {
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
            && (v82 & 1) != 0 )
          {
            v83 = v82 | 0x8000000000000000uLL;
          }
          goto LABEL_134;
        }
        if ( !HIBYTE(word_140C66CFC) && (v82 & 1) != 0 )
          v83 = v82 | 0x8000000000000000uLL;
        *(_QWORD *)v25 = v83;
        MiWritePteShadow(v25, v83);
      }
      else
      {
LABEL_134:
        *(_QWORD *)v25 = v83;
      }
      if ( !v82 )
      {
        v10 = v121;
        if ( (unsigned int)MiReducePteUseCount(v25, 1LL) )
          v120 = 1;
        goto LABEL_34;
      }
LABEL_33:
      v10 = v121;
      goto LABEL_34;
    }
LABEL_42:
    v24 = v122;
  }
  if ( (unsigned int)MiDeletePteWsleCluster(&v137, a3, v16, a6) )
    v120 = 1;
  if ( v123 == 35651584 && v24 )
  {
    MiFlushGraphicsPtes(v127, v24);
    v127 = 0LL;
    v122 = 0LL;
  }
  if ( HIDWORD(v154) && (unsigned int)MiDeletePteList((unsigned int)&v151, a3, v16, (_DWORD)a6, 1) )
    v120 = 1;
  if ( v131 )
  {
    MiUnlockPageTableInternal(v128, v131);
    v131 = 0LL;
  }
  if ( !v132 )
  {
    v29 = v25;
    if ( v129 <= 1 )
    {
      v94 = 2 - v129;
      do
      {
        v29 = ((v29 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        --v94;
      }
      while ( v94 );
      v15 = v141;
      v10 = v121;
    }
    MiMakeSystemAddressValid(v29, 0LL, (*(_DWORD *)(v143 + 48) >> 12) & 0x7F, v119, v133);
    goto LABEL_91;
  }
  v147 = 0LL;
  memset((char *)v150 + 4, 0, 0xACuLL);
  v125 = (__int64)(v25 << 25) >> 16;
  v60 = (__int64)(v144 << 25) >> 16;
  LODWORD(v150[0]) = 2145;
  LeafVa = MiGetLeafVa(v125);
  if ( LeafVa < 0xFFFF800000000000uLL || LeafVa >= qword_140C6A558 && LeafVa <= qword_140C67070 )
    AnyMultiplexedVm = (char *)&KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[26];
  else
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  v64 = MiFastLockLeafPageTable((__int64)AnyMultiplexedVm, v62, 0);
  if ( v64 )
  {
    v65 = v64 - 1;
    LODWORD(v147) = v64 - 1;
    v66 = ((v125 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    *((_QWORD *)&v147 + 1) = v66;
  }
  else
  {
    LODWORD(v150[0]) |= 4u;
    v150[21] = &v147;
    v150[2] = 0LL;
    v150[3] = AnyMultiplexedVm;
    BYTE4(v150[0]) = BYTE4(v150[0]) & 0xE3 | 4;
    v150[20] = MiGetNextPageTableTail;
    HIBYTE(v150[0]) = v119;
    v150[4] = (__int64)(v25 << 25) >> 16;
    v150[5] = v60;
    MiWalkPageTables((__m128i *)v150);
    v66 = *((_QWORD *)&v147 + 1);
    v65 = v147;
  }
  v67 = a6;
  v68 = a6[4];
  if ( v66 )
  {
    v69 = v66 - v25;
    v25 = v66;
    a6[4] = v68 + (v69 >> 3);
    v29 = v66;
    if ( v65 )
    {
      v29 = ((v66 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      if ( v65 > 1 )
      {
        v93 = v65 - 1;
        do
        {
          v29 = ((v29 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          --v93;
        }
        while ( v93 );
      }
    }
    v26 = (__int64)(v66 << 25) >> 16;
    v124 = v26;
LABEL_91:
    v130 = 0;
    v131 = ((v29 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    goto LABEL_18;
  }
  v24 = v122;
  a6[4] = v68 + ((__int64)(v144 - v25) >> 3) + 1;
LABEL_95:
  if ( (unsigned int)MiDeletePteWsleCluster(&v137, a3, v16, v67) )
    v70 = 1;
  else
    v70 = v120;
  if ( v123 == 35651584 && v24 )
    MiFlushGraphicsPtes(v127, v24);
  if ( HIDWORD(v154) && (unsigned int)MiDeletePteList((unsigned int)&v151, a3, v16, (_DWORD)v67, 1) )
    v70 = 1;
  if ( v131 )
    MiUnlockPageTableInternal(v128, v131);
  MiUnlockWorkingSetShared(v128, v119);
  return v70;
}
