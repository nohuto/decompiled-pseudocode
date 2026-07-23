/*
 * XREFs of MmCheckCachedPageStates @ 0x1402655B0
 * Callers:
 *     CcFetchDataForRead @ 0x140262550 (CcFetchDataForRead.c)
 *     CcPinFileData @ 0x140263B20 (CcPinFileData.c)
 *     CcMapAndRead @ 0x140265420 (CcMapAndRead.c)
 *     CcMapAndCopyInToCache @ 0x1402CCB80 (CcMapAndCopyInToCache.c)
 *     MiFinishHardFault @ 0x1402D9590 (MiFinishHardFault.c)
 *     CcMapDataForOverwrite @ 0x1402FC614 (CcMapDataForOverwrite.c)
 * Callees:
 *     MiWriteValidPteVolatile @ 0x140217020 (MiWriteValidPteVolatile.c)
 *     MiPfnZeroingNeeded @ 0x14021AEF4 (MiPfnZeroingNeeded.c)
 *     MmAccessFault @ 0x140235440 (MmAccessFault.c)
 *     KeYieldProcessorEx @ 0x140242F10 (KeYieldProcessorEx.c)
 *     MiReferenceControlAreaPfn @ 0x14025B5B0 (MiReferenceControlAreaPfn.c)
 *     MiUnlinkPageFromListEx @ 0x1402668C0 (MiUnlinkPageFromListEx.c)
 *     MiMakeSystemCacheRangeValid @ 0x140267AF0 (MiMakeSystemCacheRangeValid.c)
 *     MiGetPage @ 0x14026D5F0 (MiGetPage.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiChargeCommit @ 0x140276750 (MiChargeCommit.c)
 *     MiMakeValidPte @ 0x1402CF540 (MiMakeValidPte.c)
 *     MiPfnReferenceCountIsZero @ 0x1402D9270 (MiPfnReferenceCountIsZero.c)
 *     MiSetNonResidentPteHeat @ 0x1402D9340 (MiSetNonResidentPteHeat.c)
 *     MiUnlockProtoPoolPage @ 0x1402DB180 (MiUnlockProtoPoolPage.c)
 *     MiReturnCommit @ 0x1402DC4E0 (MiReturnCommit.c)
 *     MiLockOwnedProtoPage @ 0x1402DD6A0 (MiLockOwnedProtoPage.c)
 *     MiLockProtoPoolPageForce @ 0x1402DE264 (MiLockProtoPoolPageForce.c)
 *     MiGetContainingPageTable @ 0x1402E1500 (MiGetContainingPageTable.c)
 *     MiGetEffectivePagePriorityThread @ 0x1402E1780 (MiGetEffectivePagePriorityThread.c)
 *     MiProtectionToCacheAttribute @ 0x1402E17F0 (MiProtectionToCacheAttribute.c)
 *     MiSetPfnPteFrame @ 0x1402E1830 (MiSetPfnPteFrame.c)
 *     MiFinalizePageAttribute @ 0x1402E1874 (MiFinalizePageAttribute.c)
 *     MiInitializePageColorBase @ 0x1402E1920 (MiInitializePageColorBase.c)
 *     MiChargePartitionResidentAvailable @ 0x1402E6508 (MiChargePartitionResidentAvailable.c)
 *     MiReleaseFreshPage @ 0x1402E81B0 (MiReleaseFreshPage.c)
 *     MiLockPageInline @ 0x1402EF910 (MiLockPageInline.c)
 *     MiZeroPhysicalPage @ 0x14033948C (MiZeroPhysicalPage.c)
 *     MiUserPdeOrAbove @ 0x14033C8C0 (MiUserPdeOrAbove.c)
 *     MiLockNestedPageAtDpcInline @ 0x140348B00 (MiLockNestedPageAtDpcInline.c)
 *     MiMarkPteDirty @ 0x14034B6B0 (MiMarkPteDirty.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1403CD4A0 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     HvlNotifyLongSpinWait @ 0x1403CD4D0 (HvlNotifyLongSpinWait.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     MiBadRefCount @ 0x14064DB90 (MiBadRefCount.c)
 *     MiDiscardTransitionPteEx @ 0x140650B74 (MiDiscardTransitionPteEx.c)
 *     MiFreeTransitionPageHeatList @ 0x1406543F8 (MiFreeTransitionPageHeatList.c)
 *     MiMakeTransitionHeatBatch @ 0x140654808 (MiMakeTransitionHeatBatch.c)
 *     MiProcessTransitionHeatBatch @ 0x140654B84 (MiProcessTransitionHeatBatch.c)
 *     MiReplenishTransitionPageHeatList @ 0x140654DAC (MiReplenishTransitionPageHeatList.c)
 *     MiHandleSpecialPurposeMemoryCachedFault @ 0x140660958 (MiHandleSpecialPurposeMemoryCachedFault.c)
 *     MiLockSpecialPurposeMemoryCachedPage @ 0x140660DA8 (MiLockSpecialPurposeMemoryCachedPage.c)
 */

__int64 __fastcall MmCheckCachedPageStates(unsigned __int64 a1, __int64 a2, int a3, char *a4)
{
  int v4; // r15d
  char v5; // r11
  char v6; // r10
  unsigned int v7; // r9d
  unsigned int v8; // edi
  ULONG_PTR v9; // r8
  __int64 v10; // r12
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // r14
  __int64 v13; // r13
  __int64 v14; // rdx
  unsigned __int64 ValidPte; // rdx
  __int64 *v16; // rcx
  __int64 v17; // r9
  __int64 v18; // rax
  int v19; // ebx
  unsigned __int64 v20; // rax
  ULONG_PTR v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r8
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rcx
  __int64 v26; // rax
  int v27; // r8d
  unsigned __int64 v28; // rdx
  void *v29; // r9
  signed __int32 v30; // eax
  signed __int32 v31; // ett
  volatile signed __int64 *v32; // rcx
  char v33; // al
  __int64 v34; // rax
  signed __int32 v35; // edx
  __int64 Page; // rax
  __int64 v37; // r8
  __int64 v38; // rcx
  unsigned __int64 v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 ContainingPageTable; // rdi
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // r9
  int EffectivePagePriorityThread; // eax
  __int64 v47; // rdx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rdx
  unsigned __int64 v51; // rdi
  unsigned __int64 v52; // rax
  unsigned __int64 v53; // rax
  ULONG_PTR v54; // r9
  unsigned __int64 v55; // rdx
  unsigned __int64 v56; // rax
  __int64 v57; // r8
  _QWORD *v58; // r8
  __int64 v59; // rax
  int v60; // ecx
  unsigned __int64 v61; // rdi
  unsigned __int64 v62; // rdx
  int v63; // eax
  unsigned __int8 v64; // di
  struct _KTHREAD *CurrentThread; // rdi
  int v66; // eax
  unsigned int Flink; // ecx
  __int64 v68; // rax
  int v69; // eax
  __int64 v71; // rcx
  __int16 v72; // bx
  __int16 v73; // bx
  __int64 v74; // r8
  __int64 v75; // rax
  unsigned __int64 v76; // r11
  unsigned __int64 v77; // rdx
  char v78; // al
  __int64 v79; // rcx
  __int64 v80; // r14
  struct _KPRCB *v81; // r8
  __int64 CachedResidentAvailable; // rdx
  bool v83; // zf
  signed __int32 v84; // eax
  unsigned __int8 v85; // bl
  _DWORD *v86; // r9
  __int64 v87; // r10
  unsigned __int64 *v88; // rax
  unsigned __int64 v89; // rax
  unsigned __int64 v90; // r8
  __int64 CurrentIrql; // r11
  _DWORD *SchedulerAssist; // r10
  unsigned __int8 v93; // r14
  unsigned __int64 v94; // rdi
  char v95; // r13
  __int64 v96; // rcx
  __int64 v97; // rdi
  char v98; // al
  unsigned __int8 v99; // cl
  struct _KPRCB *v100; // r10
  _DWORD *v101; // r9
  int v102; // eax
  unsigned __int8 v103; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v105; // r9
  int v106; // eax
  unsigned __int8 v107; // cl
  struct _KPRCB *v108; // r10
  _DWORD *v109; // r9
  int v110; // edx
  __int64 v111; // rax
  _SLIST_ENTRY *TransitionHeatBatch; // rdi
  int v113; // eax
  unsigned __int8 v114; // cl
  struct _KPRCB *v115; // r10
  _DWORD *v116; // r9
  int v117; // eax
  int v118; // ecx
  unsigned __int8 v119; // cl
  struct _KPRCB *v120; // r9
  _DWORD *v121; // r8
  int v122; // eax
  unsigned __int8 v123; // [rsp+20h] [rbp-168h]
  char v124; // [rsp+21h] [rbp-167h]
  char v125; // [rsp+22h] [rbp-166h]
  unsigned int v126; // [rsp+24h] [rbp-164h]
  int v127; // [rsp+28h] [rbp-160h]
  unsigned int v128; // [rsp+28h] [rbp-160h]
  unsigned int v129; // [rsp+28h] [rbp-160h]
  __int64 v130; // [rsp+28h] [rbp-160h]
  unsigned int v131; // [rsp+28h] [rbp-160h]
  unsigned __int64 v132; // [rsp+30h] [rbp-158h]
  void *v133; // [rsp+30h] [rbp-158h]
  __int64 v134; // [rsp+30h] [rbp-158h]
  ULONG_PTR BugCheckParameter1; // [rsp+38h] [rbp-150h]
  volatile signed __int64 *v136; // [rsp+40h] [rbp-148h]
  __int64 v137; // [rsp+40h] [rbp-148h]
  _QWORD *v138; // [rsp+40h] [rbp-148h]
  unsigned __int64 *v139; // [rsp+40h] [rbp-148h]
  int v140; // [rsp+48h] [rbp-140h] BYREF
  __int64 v141; // [rsp+50h] [rbp-138h]
  __int64 v142; // [rsp+58h] [rbp-130h]
  int v143; // [rsp+60h] [rbp-128h]
  unsigned __int64 v144; // [rsp+68h] [rbp-120h]
  int v145; // [rsp+70h] [rbp-118h] BYREF
  int v146; // [rsp+74h] [rbp-114h] BYREF
  int v147; // [rsp+78h] [rbp-110h] BYREF
  int v148; // [rsp+7Ch] [rbp-10Ch] BYREF
  unsigned __int64 v149; // [rsp+80h] [rbp-108h]
  __int64 v150; // [rsp+88h] [rbp-100h]
  __int64 v151; // [rsp+90h] [rbp-F8h] BYREF
  __int128 v152; // [rsp+98h] [rbp-F0h] BYREF
  __int64 v153; // [rsp+A8h] [rbp-E0h]
  __int64 v154; // [rsp+B0h] [rbp-D8h]
  char *v155; // [rsp+B8h] [rbp-D0h]
  _QWORD v156[16]; // [rsp+C0h] [rbp-C8h] BYREF

  v4 = 0;
  v155 = a4;
  v140 = a3;
  v5 = 1;
  v143 = 0;
  v125 = 1;
  v6 = a3;
  v126 = 0;
  BugCheckParameter1 = 0LL;
  v152 = 0LL;
  v7 = 0;
  v123 = 17;
  v8 = 0;
  v9 = 0LL;
  v10 = 0LL;
  v11 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v142 = v11;
  v12 = (((a1 + a2 - 1) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v149 = v12;
  v13 = 48 * ((*(_QWORD *)(((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
  v153 = v13;
  v14 = *(_QWORD *)(48 * ((*(_QWORD *)(((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) >> 12) & 0xFFFFFFFFFFLL)
                  - 0x21FFFFFFFFF0LL);
  if ( v14 )
    v14 += 40 * ((a1 >> 18) & 7);
  ValidPte = *(_QWORD *)(v14 + 24);
  v16 = (__int64 *)(ValidPte & 0xFFFFFFFFFFFFFFFEuLL);
  if ( (ValidPte & 1) == 0 )
    v16 = (__int64 *)ValidPte;
  v150 = *v16;
  v154 = *(_QWORD *)(qword_140C673C8 + 8LL * (*(_WORD *)(v150 + 60) & 0x3FF));
  if ( v11 > v12 )
    goto LABEL_124;
  v17 = 0x40000000000000LL;
  do
  {
    v18 = *(_QWORD *)v11;
    v19 = 0;
    v127 = 0;
    if ( (*(_QWORD *)v11 & 1) != 0 )
    {
      if ( (v6 & 4) != 0 )
      {
        if ( v10 )
        {
          MiUnlockProtoPoolPage(v10, v123);
          v10 = 0LL;
        }
        MiMarkPteDirty(v11, ValidPte, v9, v17);
      }
      v11 += 8LL;
      v20 = 0LL;
      v142 = v11;
      goto LABEL_117;
    }
    if ( (v18 & 8) != 0 )
    {
      v19 = 1;
      v127 = 1;
    }
    ValidPte = qword_140C65B40;
    v21 = v9;
    v22 = *(_QWORD *)v11;
    if ( qword_140C65B40 && (v18 & 0x10) == 0 )
      v22 = v18 & ~qword_140C65B40;
    v23 = v22 >> 16;
    BugCheckParameter1 = v23;
    if ( v10 )
    {
      if ( ((v23 ^ v21) & 0xFFFFFFFFFFFFF000uLL) == 0 )
        goto LABEL_48;
      MiUnlockProtoPoolPage(v10, v123);
      v23 = BugCheckParameter1;
LABEL_17:
      if ( v8 )
      {
        MiMakeSystemCacheRangeValid(v11 - 8LL * v8, v156, v8, v13);
        v23 = BugCheckParameter1;
        v8 = 0;
        v126 = 0;
      }
      goto LABEL_19;
    }
    if ( (v23 & 0xFFFFFFFFFFFFF000uLL) != (v21 & 0xFFFFFFFFFFFFF000uLL) )
      goto LABEL_17;
LABEL_19:
    ValidPte = *(_QWORD *)v23;
    v132 = *(_QWORD *)v23;
    if ( (*(_QWORD *)v23 & 1) == 0 && (*(_QWORD *)v23 & 0xC00LL) != 0x800 )
    {
      v10 = 0LL;
      goto LABEL_51;
    }
    v88 = (unsigned __int64 *)(((BugCheckParameter1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v139 = v88;
    while ( 1 )
    {
      while ( 1 )
      {
        v89 = *v88;
        if ( (v89 & 1) == 0 || (v89 & 0x200) != 0 )
          goto LABEL_245;
        do
        {
          do
          {
            v90 = (v89 >> 12) & 0xFFFFFFFFFFLL;
            v144 = v90;
          }
          while ( v90 > qword_140C65BA0 );
        }
        while ( !_bittest64((const signed __int64 *)(48 * v90 - 0x21FFFFFFFFD8LL), 0x36u) );
        v10 = 48 * v90 - 0x220000000000LL;
        CurrentIrql = KeGetCurrentIrql();
        v141 = CurrentIrql;
        __writecr8(2uLL);
        if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
        {
          SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
          if ( (_BYTE)CurrentIrql == 2 )
            ValidPte = 4LL;
          else
            ValidPte = (-1LL << ((unsigned __int8)CurrentIrql + 1)) & 4;
          SchedulerAssist[5] |= ValidPte;
        }
        v145 = 0;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
        {
          do
          {
            do
              KeYieldProcessorEx(&v145);
            while ( *(__int64 *)(v10 + 24) < 0 );
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) );
          v90 = v144;
          LOBYTE(CurrentIrql) = v141;
        }
        v24 = *v139;
        if ( (*v139 & 1) != 0 && (v24 & 0x200) == 0 )
          break;
        _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( (_BYTE)CurrentIrql != 17 )
        {
          if ( (_DWORD)KiIrqlFlags )
          {
            v103 = KeGetCurrentIrql();
            if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
              && v103 <= 0xFu
              && (unsigned __int8)CurrentIrql <= 0xFu
              && v103 >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v105 = CurrentPrcb->SchedulerAssist;
              v106 = ~(unsigned __int16)(-1LL << ((unsigned __int8)CurrentIrql + 1));
              v83 = (v106 & v105[5]) == 0;
              v105[5] &= v106;
              if ( v83 )
              {
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
                LOBYTE(CurrentIrql) = v141;
              }
            }
          }
          __writecr8((unsigned __int8)CurrentIrql);
        }
LABEL_245:
        MmAccessFault(2uLL, BugCheckParameter1, 0, 0LL);
        v88 = (unsigned __int64 *)(((BugCheckParameter1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      }
      if ( v90 == ((v24 >> 12) & 0xFFFFFFFFFFLL) )
        break;
      _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v88 = (unsigned __int64 *)(((BugCheckParameter1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      if ( (_BYTE)CurrentIrql != 17 )
      {
        if ( (_DWORD)KiIrqlFlags )
        {
          v99 = KeGetCurrentIrql();
          if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
            && v99 <= 0xFu
            && (unsigned __int8)CurrentIrql <= 0xFu
            && v99 >= 2u )
          {
            v100 = KeGetCurrentPrcb();
            ValidPte = -1LL << ((unsigned __int8)CurrentIrql + 1);
            v101 = v100->SchedulerAssist;
            v102 = ~(unsigned __int16)ValidPte;
            v83 = (v102 & v101[5]) == 0;
            v101[5] &= v102;
            if ( v83 )
            {
              KiRemoveSystemWorkPriorityKick(v100);
              LOBYTE(CurrentIrql) = v141;
            }
          }
        }
        __writecr8((unsigned __int8)CurrentIrql);
        v88 = (unsigned __int64 *)(((BugCheckParameter1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      }
    }
    v25 = *(_QWORD *)(v10 + 40);
    v19 = v127;
    v11 = v142;
    v12 = v149;
    v8 = v126;
    if ( (v25 & 0x10000000000LL) != 0 || (v25 & 0x20000000000000LL) != 0 )
      goto LABEL_40;
    ValidPte = *(unsigned __int16 *)(v10 + 32);
    v26 = *(_QWORD *)(v10 + 24) & 0x3FFFFFFFFFFFFFFFLL;
    v27 = 0;
    if ( !(_WORD)ValidPte )
      goto LABEL_33;
    if ( (_WORD)ValidPte != 1 )
    {
      if ( (_WORD)ValidPte == 2 && v26 && (*(_BYTE *)(v10 + 34) & 8) != 0 )
        goto LABEL_33;
      goto LABEL_40;
    }
    if ( v26 || (*(_BYTE *)(v10 + 34) & 8) != 0 )
      v27 = 1;
    if ( !v27 )
      goto LABEL_40;
LABEL_33:
    v124 = 0;
    if ( (v25 & 0x8000000000000000uLL) == 0LL || (*(_DWORD *)(v10 + 16) & 0x400LL) == 0 )
    {
      v28 = *(_QWORD *)(v10 + 8) | 0x8000000000000000uLL;
      if ( v28 > 0xFFFFF6BFFFFFFF78uLL || v28 < 0xFFFFF68000000000uLL )
      {
        v29 = *(void **)(qword_140C673C8 + 8 * ((v25 >> 43) & 0x3FF));
        v133 = v29;
      }
      else
      {
        if ( (*(_BYTE *)(v10 + 35) & 0x20) != 0 )
          goto LABEL_249;
        v124 = 0;
        v29 = *(void **)(qword_140C673C8 + 8 * ((v25 >> 43) & 0x3FF));
        v133 = v29;
      }
LABEL_36:
      if ( v29 == &MiSystemPartition )
      {
        ValidPte = (unsigned __int64)KeGetCurrentPrcb();
        v30 = *(_DWORD *)(ValidPte + 34460);
        while ( v30 )
        {
          if ( v30 == -1 )
            break;
          v31 = v30;
          v30 = _InterlockedCompareExchange((volatile signed __int32 *)(ValidPte + 34460), v30 - 1, v30);
          if ( v31 == v30 )
            goto LABEL_40;
        }
      }
      if ( !(unsigned int)MiChargePartitionResidentAvailable(v29, 1LL, 0xFFFFFFFFLL) )
      {
        if ( v124 )
          MiReturnCommit(v133, 1LL);
        goto LABEL_41;
      }
LABEL_40:
      ++*(_WORD *)(v10 + 32);
      goto LABEL_41;
    }
LABEL_249:
    v124 = 1;
    v133 = *(void **)(qword_140C673C8 + 8 * ((v25 >> 43) & 0x3FF));
    if ( (unsigned int)MiChargeCommit(v133, 1LL, 4LL) )
    {
      v29 = v133;
      goto LABEL_36;
    }
LABEL_41:
    if ( (_BYTE)v141 == 17 )
    {
      LOBYTE(ValidPte) = 17;
      MiLockOwnedProtoPage(v10, ValidPte);
    }
    else
    {
      v123 = v141;
      v32 = (volatile signed __int64 *)(*(_QWORD *)(v10 + 8) | 0x8000000000000000uLL);
      v33 = *(_BYTE *)(v10 + 34);
      v136 = v32;
      if ( (v33 & 0x20) != 0 )
      {
        v93 = v141;
        v94 = (unsigned __int8)v141;
        v95 = v141;
        do
        {
          _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( (_DWORD)KiIrqlFlags )
          {
            v107 = KeGetCurrentIrql();
            if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v107 <= 0xFu && v93 <= 0xFu && v107 >= 2u )
            {
              v108 = KeGetCurrentPrcb();
              v109 = v108->SchedulerAssist;
              v110 = ~(unsigned __int16)(-1LL << (v95 + 1));
              v83 = (v110 & v109[5]) == 0;
              v109[5] &= v110;
              if ( v83 )
                KiRemoveSystemWorkPriorityKick(v108);
            }
          }
          __writecr8(v94);
          LODWORD(v96) = 0;
          while ( (*(_BYTE *)(v10 + 34) & 0x20) != 0 )
          {
            v96 = (unsigned int)(v96 + 1);
            LODWORD(v141) = v96;
            if ( ((unsigned int)v96 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && (v98 = KiCheckVpBackingLongSpinWaitHypercall(v96), LODWORD(v96) = v141, v98) )
            {
              HvlNotifyLongSpinWait((unsigned int)v141);
              LODWORD(v96) = v141;
            }
            else
            {
              _mm_pause();
            }
          }
          MiLockPageInline(v10);
          v33 = *(_BYTE *)(v10 + 34);
        }
        while ( (v33 & 0x20) != 0 );
        v11 = v142;
        v12 = v149;
        v13 = v153;
        v8 = v126;
        v32 = v136;
      }
      *(_BYTE *)(v10 + 34) = v33 | 0x20;
      if ( (*(_QWORD *)(v10 + 24) & 0x4000000000000000LL) == 0 && (*v32 & 0x20) == 0 )
        MiWriteValidPteVolatile(v32, 1, 0);
      _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    v23 = BugCheckParameter1;
LABEL_48:
    if ( (*(_BYTE *)v11 & 1) != 0 )
      goto LABEL_115;
    ValidPte = *(_QWORD *)v23;
    v132 = *(_QWORD *)v23;
    if ( (*(_QWORD *)v23 & 1) == 0 && (*(_QWORD *)v23 & 0xC00LL) != 0x800 )
    {
LABEL_51:
      v34 = ValidPte;
      if ( qword_140C65B40 && (ValidPte & 0x10) == 0 )
        v34 = ValidPte & ~qword_140C65B40;
      v141 = v34 >> 16;
      if ( (*(_BYTE *)(v150 + 62) & 0xC) == 0 && (v140 & 1) != 0 )
      {
        MiInitializePageColorBase(0LL, (*(_DWORD *)(v150 + 56) >> 20) & 0x7F, &v152);
        v35 = _InterlockedExchangeAdd((volatile signed __int32 *)v152, 1u);
        Page = MiGetPage(v154, HIDWORD(v152) | DWORD2(v152) & (unsigned int)v35, 2LL);
        v144 = Page;
        if ( Page != -1 )
        {
          v137 = 48 * Page - 0x220000000000LL;
          v128 = MiProtectionToCacheAttribute((v132 >> 5) & 0x1F);
          if ( MiPfnZeroingNeeded(v37) )
          {
            if ( v10 )
            {
              MiUnlockProtoPoolPage(v10, v123);
              v10 = 0LL;
            }
            MiZeroPhysicalPage(v38, v144, 0LL, v128);
            *(_QWORD *)(v137 + 16) &= 0xFFFFFFFFFFFFFC1FuLL;
          }
          if ( !v10 )
          {
            v10 = MiLockProtoPoolPageForce(BugCheckParameter1);
            v39 = *(_QWORD *)BugCheckParameter1;
            v132 = *(_QWORD *)BugCheckParameter1;
            if ( (*(_QWORD *)BugCheckParameter1 & 1) != 0 || (v39 & 0x800) != 0 && (v39 & 0x400) == 0 )
            {
              MiUnlockProtoPoolPage(v10, v123);
              MiReleaseFreshPage(v137);
              v10 = 0LL;
              BugCheckParameter1 = 0LL;
              goto LABEL_119;
            }
          }
          MiReferenceControlAreaPfn(v150, v141, 1u);
          v134 = (v132 >> 5) & 0x1F;
          v151 = MI_READ_PTE_LOCK_FREE(BugCheckParameter1);
          MiSetNonResidentPteHeat(&v151, 0LL);
          v40 = v151;
          *(_QWORD *)(v137 + 40) |= 0x8000000000000000uLL;
          *(_QWORD *)(v137 + 16) = v40;
          v129 = MiProtectionToCacheAttribute((unsigned int)v134);
          *(_WORD *)(v41 + 32) = 1;
          ContainingPageTable = MiGetContainingPageTable(BugCheckParameter1);
          MiSetPfnPteFrame(v137, ContainingPageTable);
          v142 = 48 * ContainingPageTable - 0x220000000000LL;
          EffectivePagePriorityThread = MiGetEffectivePagePriorityThread(KeGetCurrentThread(), v43, v44, v45);
          v147 = 0;
          LODWORD(v141) = EffectivePagePriorityThread;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v137 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v147);
            while ( *(__int64 *)(v137 + 24) < 0 );
          }
          MiLockNestedPageAtDpcInline(v142, v47, v48, v49);
          v50 = v142;
          *(_QWORD *)(v142 + 24) ^= (*(_QWORD *)(v142 + 24) ^ (*(_QWORD *)(v142 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
          _InterlockedAnd64((volatile signed __int64 *)(v50 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          MiFinalizePageAttribute(v137, v129, 1LL);
          *(_QWORD *)(v137 + 24) = *(_QWORD *)(v137 + 24) & 0xC000000000000000uLL | 1;
          *(_BYTE *)(v137 + 35) ^= (*(_BYTE *)(v137 + 35) ^ v141) & 7;
          *(_QWORD *)(v137 + 8) = BugCheckParameter1;
          *(_BYTE *)(v137 + 34) = *(_BYTE *)(v137 + 34) & 0xF8 | 6;
          *(_BYTE *)(v137 + 34) |= 0x10u;
          _InterlockedAnd64((volatile signed __int64 *)(v137 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          ValidPte = MiMakeValidPte(v11, v144, v134 | 0x20000000);
          v132 = ValidPte;
          *(_QWORD *)BugCheckParameter1 = ValidPte;
LABEL_102:
          v64 = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && v64 <= 0xFu )
          {
            v86 = KeGetCurrentPrcb()->SchedulerAssist;
            if ( v64 == 2 )
              LODWORD(v87) = 4;
            else
              v87 = (-1LL << (v64 + 1)) & 4;
            v86[5] |= v87;
          }
          v148 = 0;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 24), 0x3FuLL) )
          {
            do
            {
              do
                KeYieldProcessorEx(&v148);
              while ( *(__int64 *)(v13 + 24) < 0 );
            }
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 24), 0x3FuLL) );
            ValidPte = v132;
          }
          *(_QWORD *)(v13 + 24) ^= (*(_QWORD *)(v13 + 24) ^ (*(_QWORD *)(v13 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
          _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( (_DWORD)KiIrqlFlags )
          {
            v114 = KeGetCurrentIrql();
            if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v114 <= 0xFu && v64 <= 0xFu && v114 >= 2u )
            {
              v115 = KeGetCurrentPrcb();
              v116 = v115->SchedulerAssist;
              v117 = ~(unsigned __int16)(-1LL << (v64 + 1));
              v83 = (v117 & v116[5]) == 0;
              v116[5] &= v117;
              if ( v83 )
                KiRemoveSystemWorkPriorityKick(v115);
              ValidPte = v132;
            }
          }
          __writecr8(v64);
          if ( v19 )
          {
            ValidPte = MiMakeValidPte(v11, (ValidPte >> 12) & 0xFFFFFFFFFFLL, 536870913LL);
          }
          else if ( (v140 & 4) != 0 && (ValidPte & 0x42) == 0 && (ValidPte & 0x800) != 0 )
          {
            ValidPte |= 0x42uLL;
          }
          ValidPte &= 0xFFFFFFFFFFFFFEFBuLL;
          v20 = ValidPte | ((unsigned __int64)(word_140C66CFC & 1) << 8);
LABEL_116:
          v8 = v126;
          v11 += 8LL;
          v142 = v11;
LABEL_117:
          if ( v8 || v20 )
          {
            v71 = v8++;
            v126 = v8;
            v156[v71] = v20;
            if ( v8 == 16 )
            {
              if ( v10 )
              {
                MiUnlockProtoPoolPage(v10, v123);
                v10 = 0LL;
              }
              MiMakeSystemCacheRangeValid(v11 - 128, v156, 16LL, v13);
              v8 = 0;
              v126 = 0;
            }
          }
          goto LABEL_119;
        }
      }
      if ( (v140 & 2) == 0 )
      {
        if ( v10 )
        {
          MiUnlockProtoPoolPage(v10, v123);
          v10 = 0LL;
        }
        CurrentThread = KeGetCurrentThread();
        v66 = BYTE4(CurrentThread[1].Queue);
        Flink = (unsigned int)CurrentThread[1].WaitListEntry.Flink;
        BYTE4(CurrentThread[1].Queue) = 1;
        v131 = v66 + 2 * Flink;
        v68 = (__int64)(v12 - v11) >> 3;
        if ( (unsigned int)v68 > Flink )
        {
          if ( (unsigned int)v68 <= 0xF )
            LODWORD(CurrentThread[1].WaitListEntry.Flink) = v68;
          else
            LODWORD(CurrentThread[1].WaitListEntry.Flink) = 15;
        }
        v69 = MmAccessFault(0LL, (__int64)(v11 << 25) >> 16, 0, 0LL);
        if ( v69 < 0 )
        {
          v118 = v143;
          if ( v143 >= 0 )
            v118 = v69;
          v143 = v118;
        }
        LODWORD(CurrentThread[1].WaitListEntry.Flink) = v131 >> 1;
        BYTE4(CurrentThread[1].Queue) = v131 & 1;
      }
      v125 = 0;
LABEL_115:
      v20 = 0LL;
      goto LABEL_116;
    }
    while ( 2 )
    {
      while ( 2 )
      {
        while ( 1 )
        {
          ValidPte = *(_QWORD *)v23;
          v132 = ValidPte;
          v51 = *(_QWORD *)v23;
          v144 = *(_QWORD *)v23;
          v52 = ValidPte;
          if ( (ValidPte & 1) != 0 )
            break;
          if ( (ValidPte & 0xC00) != 0x800 )
            goto LABEL_223;
          if ( !ValidPte || !qword_140C65B40 || (ValidPte & qword_140C65B40) != 0 )
          {
            v52 = ValidPte;
            if ( qword_140C65B40 && (ValidPte & 0x10) == 0 )
              v52 = ValidPte & ~qword_140C65B40;
            break;
          }
        }
        v53 = (v52 >> 12) & 0xFFFFFFFFFFLL;
        if ( v53 > qword_140C65BA0 || (*(_QWORD *)(48 * v53 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) == 0 )
          continue;
        break;
      }
      v54 = 48 * v53 - 0x220000000000LL;
      v146 = 0;
      v130 = v54;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v54 + 24), 0x3FuLL) )
      {
        v97 = 48 * v53 - 0x220000000000LL;
        do
        {
          do
            KeYieldProcessorEx(&v146);
          while ( *(__int64 *)(v97 + 24) < 0 );
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v97 + 24), 0x3FuLL) );
        v51 = v144;
        v54 = v130;
        v23 = BugCheckParameter1;
      }
      ValidPte = *(_QWORD *)v23;
      v132 = *(_QWORD *)v23;
      if ( *(_QWORD *)v23 != v51 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v54 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        continue;
      }
      break;
    }
    if ( (*(_DWORD *)(*(_QWORD *)(qword_140C673C8 + 8 * ((*(_QWORD *)(v54 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x80u) != 0 )
    {
      v111 = MiLockSpecialPurposeMemoryCachedPage(v54, 2LL, v23, v54);
      v23 = BugCheckParameter1;
      v54 = v111;
      v130 = v111;
      ValidPte = *(_QWORD *)BugCheckParameter1;
      v132 = *(_QWORD *)BugCheckParameter1;
    }
    if ( !v54 )
    {
LABEL_223:
      v8 = v126;
      goto LABEL_51;
    }
    if ( (ValidPte & 1) != 0 )
    {
      if ( (*(_BYTE *)(v54 + 35) & 0x40) == 0 )
      {
        *(_QWORD *)(v54 + 24) ^= (*(_QWORD *)(v54 + 24) ^ (*(_QWORD *)(v54 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
        goto LABEL_101;
      }
LABEL_191:
      _InterlockedAnd64((volatile signed __int64 *)(v54 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      goto LABEL_115;
    }
    if ( (*(_DWORD *)(*(_QWORD *)(qword_140C673C8 + 8 * ((*(_QWORD *)(v54 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x80u) != 0 )
    {
      v130 = MiHandleSpecialPurposeMemoryCachedFault(0LL, (__int64)(v11 << 25) >> 16, v23, v54);
      v54 = v130;
      if ( !v130 )
      {
        v8 = v126;
        BugCheckParameter1 = 0LL;
        goto LABEL_119;
      }
    }
    if ( (*(_BYTE *)(v54 + 34) & 0x20) != 0 || (*(_BYTE *)(v54 + 35) & 0x40) != 0 )
      goto LABEL_191;
    v55 = *(_QWORD *)(v54 + 16);
    v56 = v55 >> 11;
    if ( (v55 & 0x400) == 0 )
      v56 = v55 >> 3;
    if ( (v56 & 1) != 0 )
    {
      TransitionHeatBatch = (_SLIST_ENTRY *)MiMakeTransitionHeatBatch(v54, 0LL, ((__int64)(v12 - v11) >> 3) + 1);
      if ( !TransitionHeatBatch )
      {
        v54 = v130;
        goto LABEL_87;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v130 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      MiUnlockProtoPoolPage(v10, v123);
      v10 = 0LL;
      if ( TransitionHeatBatch == (_SLIST_ENTRY *)-1LL )
      {
        MiReplenishTransitionPageHeatList();
      }
      else
      {
        MiProcessTransitionHeatBatch(TransitionHeatBatch);
        MiFreeTransitionPageHeatList(TransitionHeatBatch);
      }
      v8 = v126;
      BugCheckParameter1 = 0LL;
    }
    else
    {
LABEL_87:
      if ( (MiUnlinkPageFromListEx(v54) & 3) == 0 )
      {
        v54 = v130;
        v57 = *(_QWORD *)(v130 + 8);
        ++*(_WORD *)(v130 + 32);
        v58 = (_QWORD *)(v57 | 0x8000000000000000uLL);
        v138 = v58;
        *(_BYTE *)(v130 + 34) = *(_BYTE *)(v130 + 34) & 0xF8 | 6;
        v59 = (*(_QWORD *)(v130 + 16) >> 5) & 7LL;
        v60 = *(unsigned __int8 *)(v130 + 34) >> 6;
        if ( v60 != 1 )
        {
          if ( v60 )
          {
            if ( v60 == 2 )
              LOBYTE(v59) = v59 | 0x18;
          }
          else
          {
            LOBYTE(v59) = v59 | 8;
          }
        }
        v61 = (((0xAAAAAAAAAAAAAAABuLL * ((v130 + 0x220000000000LL) >> 4)) & 0xFFFFFFFFFFLL) << 12) | MmProtectToPteMask[v59 & 0x1F] & 0xFFF0000000000E7FuLL | 0x21;
        if ( v11 >= 0xFFFFF68000000000uLL && v11 <= 0xFFFFF6FFFFFFFFFFuLL )
        {
          v62 = (__int64)(v11 << 25) >> 16;
          v142 = v62;
          if ( v11 >= 0xFFFFF6FB40000000uLL && v11 <= 0xFFFFF6FB7FFFFFFFuLL )
          {
            if ( v11 == 0xFFFFF6FB7DBEDF68uLL )
              v61 |= 0x8000000000000000uLL;
            else
              v61 &= ~0x8000000000000000uLL;
            v113 = MiUserPdeOrAbove(v11, v62, v58);
            v54 = v130;
            v62 = v142;
            v58 = v138;
            if ( v113 )
              v61 |= 4uLL;
          }
          if ( v11 <= 0xFFFFF6BFFFFFFF78uLL )
            v61 |= 4uLL;
          if ( v62 < 0xFFFF800000000000uLL )
          {
            v63 = HIBYTE(word_140C66CFC);
          }
          else
          {
            if ( byte_140C6A3D8[((v62 >> 39) & 0x1FF) - 256] == 1
              || v62 >= 0xFFFFF68000000000uLL && v62 <= 0xFFFFF6FFFFFFFFFFuLL )
            {
LABEL_100:
              *v58 = (((unsigned __int16)v61 ^ (unsigned __int16)((unsigned __int8)word_140C66CFC << 8)) & 0x100 ^ v61) & 0xF0FFFFFFFFFFFFFFuLL | 0xA00000000000000LL;
              *(_QWORD *)(v54 + 24) = *(_QWORD *)(v54 + 24) & 0xC000000000000000uLL | 1;
              ValidPte = *(_QWORD *)BugCheckParameter1;
              v132 = *(_QWORD *)BugCheckParameter1;
LABEL_101:
              _InterlockedAnd64((volatile signed __int64 *)(v54 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              goto LABEL_102;
            }
            if ( v62 < qword_140C6A558 || v62 > qword_140C67070 )
              v63 = (unsigned __int8)word_140C66CFC;
            else
              v63 = HIBYTE(word_140C66CFC);
          }
          if ( !v63 )
            goto LABEL_100;
        }
        v61 |= 0x100uLL;
        goto LABEL_100;
      }
      MiDiscardTransitionPteEx(v130, 0LL);
      _InterlockedAnd64((volatile signed __int64 *)(v130 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v8 = v126;
      BugCheckParameter1 = 0LL;
    }
LABEL_119:
    v9 = BugCheckParameter1;
    v17 = 0x40000000000000LL;
    v6 = v140;
  }
  while ( v11 <= v12 );
  if ( !v10 )
    goto LABEL_121;
  v140 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v140);
    while ( *(__int64 *)(v10 + 24) < 0 );
  }
  *(_BYTE *)(v10 + 34) &= ~0x20u;
  v72 = *(_WORD *)(v10 + 32);
  if ( !v72 )
    MiBadRefCount(v10, ValidPte, v9);
  v73 = v72 - 1;
  *(_WORD *)(v10 + 32) = v73;
  if ( !v73 && (*(_QWORD *)(v10 + 40) & 0x20000000000000LL) != 0 )
  {
LABEL_307:
    MiPfnReferenceCountIsZero(v10, 0xAAAAAAAAAAAAAAABuLL * ((v10 + 0x220000000000LL) >> 4));
    goto LABEL_151;
  }
  v74 = *(_QWORD *)(v10 + 40);
  if ( (v74 & 0x10000000000LL) != 0 || (v74 & 0x20000000000000LL) != 0 )
    goto LABEL_151;
  v75 = *(_QWORD *)(v10 + 24) & 0x3FFFFFFFFFFFFFFFLL;
  if ( !v73 )
  {
LABEL_310:
    v76 = 1LL;
    goto LABEL_141;
  }
  if ( v73 != 1 )
  {
    if ( v73 != 2 || !v75 || (*(_BYTE *)(v10 + 34) & 8) == 0 )
      goto LABEL_151;
    goto LABEL_310;
  }
  if ( v75 || (*(_BYTE *)(v10 + 34) & 8) != 0 )
  {
    v76 = 1LL;
    v4 = 1;
  }
  else
  {
    v76 = 1LL;
  }
  if ( v4 )
  {
LABEL_141:
    v77 = *(_QWORD *)(v10 + 8) | 0x8000000000000000uLL;
    if ( (v77 > 0xFFFFF6BFFFFFFF78uLL || v77 < 0xFFFFF68000000000uLL) && (v78 = *(_BYTE *)(v10 + 35), (v78 & 0x20) != 0) )
    {
      *(_BYTE *)(v10 + 35) = v78 & 0xDF;
    }
    else
    {
      v79 = ((unsigned __int64)v74 >> 43) & 0x3FF;
      v80 = *(_QWORD *)(qword_140C673C8 + 8 * v79);
      if ( v74 < 0 && (*(_DWORD *)(v10 + 16) & 0x400LL) != 0
        || v77 <= 0xFFFFF6BFFFFFFF78uLL && v77 >= 0xFFFFF68000000000uLL && (*(_BYTE *)(v10 + 35) & 0x20) != 0
        || !v73 && (*(_QWORD *)(v10 + 24) & 0x4000000000000000LL) != 0 )
      {
        MiReturnCommit(*(_QWORD *)(qword_140C673C8 + 8 * v79), 1LL);
        v76 = 1LL;
      }
      if ( (_UNKNOWN *)v80 != &MiSystemPartition )
        goto LABEL_327;
      v81 = KeGetCurrentPrcb();
      CachedResidentAvailable = (int)v81->CachedResidentAvailable;
      if ( (_DWORD)CachedResidentAvailable == -1 )
        goto LABEL_327;
      if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
      {
        do
        {
          v84 = _InterlockedCompareExchange(
                  (volatile signed __int32 *)&v81->CachedResidentAvailable,
                  CachedResidentAvailable + 1,
                  CachedResidentAvailable);
          v83 = (_DWORD)CachedResidentAvailable == v84;
          LODWORD(CachedResidentAvailable) = v84;
          if ( v83 )
            goto LABEL_150;
        }
        while ( v84 != -1 && (unsigned __int64)(v84 + 1LL) <= 0x100 );
      }
      if ( (int)CachedResidentAvailable > 192
        && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                (volatile signed __int32 *)&v81->CachedResidentAvailable,
                                                192,
                                                CachedResidentAvailable) )
      {
        v76 = (int)CachedResidentAvailable - 192 + 1LL;
      }
      if ( v76 )
LABEL_327:
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v80 + 17280), v76);
    }
LABEL_150:
    if ( !v73 )
      goto LABEL_307;
  }
LABEL_151:
  _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v85 = v123;
  if ( v123 != 17 )
  {
    if ( (_DWORD)KiIrqlFlags )
    {
      v119 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v119 <= 0xFu && v123 <= 0xFu && v119 >= 2u )
      {
        v120 = KeGetCurrentPrcb();
        v121 = v120->SchedulerAssist;
        v85 = v123;
        v122 = ~(unsigned __int16)(-1LL << (v123 + 1));
        v83 = (v122 & v121[5]) == 0;
        v121[5] &= v122;
        if ( v83 )
          KiRemoveSystemWorkPriorityKick(v120);
      }
    }
    __writecr8(v85);
  }
LABEL_121:
  if ( v8 )
    MiMakeSystemCacheRangeValid(v11 - 8LL * v8, v156, v8, v13);
  v5 = v125;
  v7 = v143;
LABEL_124:
  if ( v155 )
    *v155 = v5;
  return v7;
}
