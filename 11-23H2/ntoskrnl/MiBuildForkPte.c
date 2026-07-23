/*
 * XREFs of MiBuildForkPte @ 0x140662750
 * Callers:
 *     MiCloneVads @ 0x1406637C8 (MiCloneVads.c)
 * Callees:
 *     MI_PROTO_FORMAT_COMBINED @ 0x14020AE38 (MI_PROTO_FORMAT_COMBINED.c)
 *     MiGetWsleProtection @ 0x140216124 (MiGetWsleProtection.c)
 *     MiFlushTbListEarly @ 0x140216C24 (MiFlushTbListEarly.c)
 *     MiSetWsleProtection @ 0x140216EC0 (MiSetWsleProtection.c)
 *     MiGetWsleContents @ 0x140216FB0 (MiGetWsleContents.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x1402170B0 (MiCaptureWriteWatchDirtyBit.c)
 *     MiIncrementCombinedPte @ 0x140217740 (MiIncrementCombinedPte.c)
 *     MiLockPageTablePage @ 0x140237BD0 (MiLockPageTablePage.c)
 *     KeYieldProcessorEx @ 0x140242F10 (KeYieldProcessorEx.c)
 *     ExAcquireSpinLockExclusive @ 0x14024D430 (ExAcquireSpinLockExclusive.c)
 *     MiGetPage @ 0x14026D5F0 (MiGetPage.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402715F0 (MiPteInShadowRange.c)
 *     MiMakeSystemAddressValid @ 0x1402776C0 (MiMakeSystemAddressValid.c)
 *     MiFlushTbList @ 0x140279B10 (MiFlushTbList.c)
 *     MiIsPrototypePteVadLookup @ 0x14027D190 (MiIsPrototypePteVadLookup.c)
 *     MiInsertTbFlushEntry @ 0x14027F800 (MiInsertTbFlushEntry.c)
 *     MiCaptureDirtyBitToPfn @ 0x140283390 (MiCaptureDirtyBitToPfn.c)
 *     MiWriteValidPteNewProtection @ 0x140284A90 (MiWriteValidPteNewProtection.c)
 *     MiSwizzleInvalidPte @ 0x140285A30 (MiSwizzleInvalidPte.c)
 *     MiTransferSoftwarePte @ 0x140285A60 (MiTransferSoftwarePte.c)
 *     MiGetSharedVm @ 0x140287104 (MiGetSharedVm.c)
 *     MiIsVadLargePrivate @ 0x140288300 (MiIsVadLargePrivate.c)
 *     MiUnlockWorkingSetExclusive @ 0x14028A580 (MiUnlockWorkingSetExclusive.c)
 *     MiReleasePageFileInfo @ 0x14029556C (MiReleasePageFileInfo.c)
 *     MiSetPfnPteFrame @ 0x1402E1830 (MiSetPfnPteFrame.c)
 *     MiFinalizePageAttribute @ 0x1402E1874 (MiFinalizePageAttribute.c)
 *     MiInitializePageColorBase @ 0x1402E1920 (MiInitializePageColorBase.c)
 *     MiTransferPageFileOwnership @ 0x1402ED440 (MiTransferPageFileOwnership.c)
 *     MI_MAKE_PROTECT_WRITE_COPY @ 0x1402ED468 (MI_MAKE_PROTECT_WRITE_COPY.c)
 *     MiUpdateWorkingSetPrivateSize @ 0x1402ED5E4 (MiUpdateWorkingSetPrivateSize.c)
 *     MiPrefetchVirtualMemory @ 0x1402EE458 (MiPrefetchVirtualMemory.c)
 *     MiIncreaseUsedPtesCount @ 0x1402F1B64 (MiIncreaseUsedPtesCount.c)
 *     MiReturnCrossPartitionCloneCharges @ 0x1402F4050 (MiReturnCrossPartitionCloneCharges.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x14033ED54 (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MI_IS_SOFTWARE_PTE_SHADOW_STACK @ 0x140355810 (MI_IS_SOFTWARE_PTE_SHADOW_STACK.c)
 *     MiWritePteShadow @ 0x1403574EC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14035754C (MiPteHasShadow.c)
 *     MiLockAndInsertPageInFreeList @ 0x14038CFE4 (MiLockAndInsertPageInFreeList.c)
 *     MiWaitForFreePage @ 0x140653F98 (MiWaitForFreePage.c)
 *     MiDuplicateCloneLeaf @ 0x1406645D8 (MiDuplicateCloneLeaf.c)
 *     MiFindZeroCloneBlock @ 0x140664A14 (MiFindZeroCloneBlock.c)
 *     MiGetCrossPartitionCloneCharges @ 0x140664D5C (MiGetCrossPartitionCloneCharges.c)
 *     MiHandleForkTransitionPte @ 0x140664E98 (MiHandleForkTransitionPte.c)
 *     MiMakePerSessionProtoPte @ 0x140665804 (MiMakePerSessionProtoPte.c)
 *     MiReferenceExistingCloneProto @ 0x1406658FC (MiReferenceExistingCloneProto.c)
 *     MiWriteSharedDemandZeroPte @ 0x140665CA8 (MiWriteSharedDemandZeroPte.c)
 *     MiWriteUselessChildPte @ 0x140665E6C (MiWriteUselessChildPte.c)
 *     MiUpdatePageFileBlockOwner @ 0x1406671EC (MiUpdatePageFileBlockOwner.c)
 */

__int64 __fastcall MiBuildForkPte(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        _QWORD *a4,
        __int64 a5,
        unsigned __int64 a6,
        _QWORD *a7,
        __int64 a8,
        int *a9,
        __int64 a10,
        __int64 a11,
        int a12,
        unsigned __int8 a13,
        _QWORD *a14,
        _DWORD *a15)
{
  unsigned int v15; // r14d
  ULONG_PTR v17; // rsi
  unsigned __int64 v19; // rbx
  __int64 ZeroCloneBlock; // rax
  int v21; // ebx
  int v22; // edx
  __int64 v24; // rdx
  __int64 v25; // r10
  __int64 v26; // r12
  int v27; // r8d
  unsigned __int64 v28; // rsi
  signed __int32 v29; // r9d
  __int64 *v30; // rax
  __int64 v31; // r8
  __int64 v32; // r9
  volatile LONG *SharedVm; // rbx
  KIRQL v34; // al
  unsigned __int8 WsleContents; // al
  __int64 v36; // r10
  unsigned __int8 v37; // bl
  __int64 *v38; // r9
  __int64 v39; // r12
  __int64 v40; // rsi
  __int64 v41; // r8
  int v42; // eax
  int v43; // edx
  char v44; // r8
  __int64 v45; // r10
  __int64 v46; // rbx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rax
  __int64 v50; // r12
  volatile signed __int32 *v51; // rbx
  __int64 v52; // rax
  unsigned __int64 v53; // rcx
  __int64 v54; // rax
  __int64 *v55; // rax
  unsigned __int64 v56; // rax
  unsigned __int64 v57; // rbx
  int v58; // esi
  _KPROCESS *Process; // rcx
  __int64 v60; // r8
  __int64 v61; // rax
  __int64 v62; // rdx
  __int64 v63; // rsi
  __int64 v64; // rax
  unsigned __int64 v65; // rbx
  int v66; // edi
  __int64 v67; // r8
  int WsleProtection; // eax
  __int64 v69; // r10
  __int64 v70; // r9
  __int64 v71; // r10
  __int64 v72; // r11
  __int64 v73; // rcx
  __int64 v74; // rax
  int v75; // edi
  __int64 v76; // r8
  int v77; // ebx
  int v78; // r9d
  __int64 v79; // rax
  __int64 v80; // rsi
  __int64 v81; // rax
  unsigned __int16 v82; // cx
  __int64 v83; // rbx
  unsigned __int64 *v84; // rsi
  __int64 v85; // r8
  int v86; // eax
  __int64 v87; // rax
  __int64 v88; // rax
  char v89; // di
  __int64 v90; // rbx
  __int64 v91; // r8
  unsigned int v92; // eax
  __int64 v93; // rbx
  int v94; // edi
  __int64 v95; // r8
  __int64 v96; // rdx
  __int64 v97; // rax
  int v98; // edx
  __int64 v99; // r11
  __int64 v100; // r10
  int v101; // r11d
  __int64 v102; // rcx
  __int64 PerSessionProtoPte; // rax
  int v104; // [rsp+50h] [rbp-B1h]
  unsigned __int64 v105; // [rsp+68h] [rbp-99h] BYREF
  int v106; // [rsp+70h] [rbp-91h]
  int v107; // [rsp+74h] [rbp-8Dh]
  __int64 v108; // [rsp+78h] [rbp-89h]
  unsigned int v109; // [rsp+80h] [rbp-81h]
  __int64 *v110; // [rsp+88h] [rbp-79h]
  __int64 v111; // [rsp+90h] [rbp-71h] BYREF
  unsigned __int64 v112; // [rsp+98h] [rbp-69h]
  unsigned __int64 v113; // [rsp+A0h] [rbp-61h]
  __int64 v114; // [rsp+A8h] [rbp-59h] BYREF
  __int64 Page; // [rsp+B0h] [rbp-51h] BYREF
  unsigned __int64 v116; // [rsp+B8h] [rbp-49h]
  __int64 v117; // [rsp+C0h] [rbp-41h]
  int v118; // [rsp+C8h] [rbp-39h] BYREF
  int v119; // [rsp+CCh] [rbp-35h] BYREF
  __int64 *v120; // [rsp+D0h] [rbp-31h]
  __int64 v121; // [rsp+D8h] [rbp-29h] BYREF
  __int128 v122; // [rsp+E0h] [rbp-21h] BYREF
  _QWORD v123[9]; // [rsp+F0h] [rbp-11h] BYREF

  v15 = 0;
  v121 = 0LL;
  v114 = 0LL;
  v122 = 0LL;
  v17 = a3;
  v105 = MI_READ_PTE_LOCK_FREE(a3);
  v19 = v105;
  if ( !v105 )
  {
    if ( a5 && *(int *)(a11 + 52) < 0 )
    {
      ZeroCloneBlock = MiFindZeroCloneBlock(a5, (*(_DWORD *)(a10 + 48) >> 7) & 0x1F);
      v21 = ZeroCloneBlock;
      if ( ZeroCloneBlock )
      {
        MiIncreaseUsedPtesCount(a8, 1u);
        MiWriteSharedDemandZeroPte(a2, v22, v21, (_DWORD)a4, (__int64)a14);
      }
    }
    return 0LL;
  }
  MiIncreaseUsedPtesCount(a8, 1u);
  v25 = a1;
  v26 = a2 + 1664;
  Page = -1LL;
  v111 = a2 + 1664;
  v117 = a1 + 1664;
  v27 = a12;
  v107 = a12;
  LODWORD(v108) = 0;
  while ( 1 )
  {
    v106 = 0;
    v109 = 0;
    if ( (v19 & 1) != 0 )
      break;
    if ( (v19 & 0x400) != 0 )
    {
      if ( MI_PROTO_FORMAT_COMBINED(v19, v24) )
      {
        if ( (unsigned int)MiIncrementCombinedPte(v26, v100) )
          goto LABEL_164;
      }
      else if ( (unsigned int)MiReferenceExistingCloneProto(v26, v100, v107, v101, (__int64)&v114) )
      {
        if ( v114 )
        {
          if ( ((*(_QWORD *)(v114 + 16) >> 55) & 0x1F) == 0x18 )
            goto LABEL_164;
          v19 |= 8uLL;
        }
        else
        {
          if ( MiIsPrototypePteVadLookup(v19) || (*(_BYTE *)(a10 + 48) & 0x70) != 0x20 || MiIsVadLargePrivate(a10) )
            goto LABEL_164;
          PerSessionProtoPte = MiMakePerSessionProtoPte(a1, a2, v17, v102);
          if ( PerSessionProtoPte )
            v19 = PerSessionProtoPte;
        }
LABEL_163:
        v105 = v19;
        goto LABEL_164;
      }
LABEL_91:
      MiWriteUselessChildPte(a4);
      *a15 = 1;
      goto LABEL_192;
    }
    if ( (v19 & 0x800) == 0 )
    {
      v110 = (__int64 *)((v19 >> 5) & 0x1F);
      if ( !(unsigned int)IS_PTE_NOT_DEMAND_ZERO(v19) )
      {
        if ( (v19 & 2) != 0 )
        {
          v19 &= ~2uLL;
          v105 = v19;
        }
        if ( (unsigned int)MI_IS_SOFTWARE_PTE_SHADOW_STACK(&v105) )
          goto LABEL_164;
        if ( !a5 )
          goto LABEL_164;
        v97 = MiFindZeroCloneBlock(a5, v96);
        v114 = v97;
        if ( !v97 )
          goto LABEL_164;
        MiWriteSharedDemandZeroPte(a2, v98, v97, (_DWORD)a4, v99);
        goto LABEL_192;
      }
      if ( v43 == 16 )
      {
        if ( (v19 & 2) != 0 )
        {
          v19 &= ~2uLL;
          goto LABEL_163;
        }
LABEL_164:
        v75 = 0;
        if ( MiPteInShadowRange((unsigned __int64)a4) )
        {
          if ( MiPteHasShadow() )
          {
            v75 = 1;
            if ( !HIBYTE(word_140C66CFC) )
            {
LABEL_188:
              if ( (v19 & 1) != 0 )
                goto LABEL_189;
            }
          }
          else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
          {
            goto LABEL_188;
          }
        }
        goto LABEL_190;
      }
      if ( (v43 & 0xFFFFFFF8) != 0x10 && !(unsigned int)MI_IS_SOFTWARE_PTE_SHADOW_STACK(&v105) )
      {
        v79 = *(unsigned __int16 *)(v45 + 1838);
        v106 = 0;
        v80 = *(_QWORD *)(qword_140C673C8 + 8 * v79);
        v81 = *(unsigned __int16 *)(v26 + 174);
        v116 = v80;
        if ( *(_QWORD *)(qword_140C673C8 + 8 * v81) == v80 )
          goto LABEL_115;
        v109 = (v44 & 1) + 2;
        if ( (unsigned int)MiGetCrossPartitionCloneCharges(v80, v109) )
        {
          v106 = 1;
LABEL_115:
          if ( (v19 & 4) != 0 )
          {
            v82 = v19;
            if ( qword_140C65B40 && (v19 & 0x10) == 0 )
              v19 &= ~qword_140C65B40;
            MiUpdatePageFileBlockOwner(*(_QWORD *)(v80 + 8LL * (v82 >> 12) + 17056), HIDWORD(v19), a6, a3, 0);
          }
          MI_MAKE_PROTECT_WRITE_COPY((__int64 *)&v105);
          v83 = v105;
          if ( (v105 & 2) != 0 )
          {
            MiReleasePageFileInfo(v80, v105 & 0xFFFFFFFFFFFFFFFBuLL, 1);
            v83 &= ~2uLL;
            v105 = v83;
          }
          v84 = (unsigned __int64 *)(a6 + 16);
          *(_QWORD *)a6 = 0LL;
          *(_QWORD *)(a6 + 16) = 0LL;
          if ( MiPteInShadowRange(a6) )
          {
            if ( MiPteHasShadow() )
            {
              v86 = 1;
              if ( !HIBYTE(word_140C66CFC) )
              {
LABEL_125:
                if ( (v83 & 1) != 0 )
                  v83 |= 0x8000000000000000uLL;
              }
            }
            else
            {
              v86 = 0;
              if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
                goto LABEL_125;
            }
          }
          else
          {
            v86 = 0;
          }
          *(_QWORD *)a6 = v83;
          if ( v86 )
            MiWritePteShadow(a6, v83, v85);
          if ( v106 )
          {
            *v84 |= 0x1000000000000000uLL;
            v87 = 1LL;
          }
          else
          {
            v87 = 0LL;
          }
          *(_QWORD *)(a6 + 8) = v87;
          *(_QWORD *)(a6 + 24) = 2LL;
          v88 = MiSwizzleInvalidPte((a6 << 16) | 0x400);
          v89 = v88;
          v105 = v88;
          v90 = v88;
          v106 = 0;
          if ( MiPteInShadowRange(a3) )
          {
            if ( MiPteHasShadow() )
            {
              v106 = 1;
              if ( !HIBYTE(word_140C66CFC) )
                goto LABEL_140;
            }
            else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
            {
LABEL_140:
              if ( (v89 & 1) != 0 )
                v90 |= 0x8000000000000000uLL;
            }
          }
          *(_QWORD *)a3 = v90;
          if ( v106 )
            MiWritePteShadow(a3, v90, v91);
          if ( (v107 & 1) != 0 )
          {
            *v84 = *v84 & 0xDF80000000000000uLL | 0x2000000000000001LL;
            _InterlockedAdd64((volatile signed __int64 *)(v116 + 17848), 1uLL);
            if ( (v109 & 1) != 0 )
              ++*a14;
            else
              ++a14[1];
            v92 = (unsigned int)v110;
            if ( (_DWORD)v110 != 24 )
              v105 |= 8uLL;
          }
          else
          {
            v92 = (unsigned int)v110;
          }
          v93 = v105;
          v94 = 0;
          *v84 = *v84 & 0xF07FFFFFFFFFFFFFuLL | ((unsigned __int64)v92 << 55);
          if ( MiPteInShadowRange((unsigned __int64)a4) )
          {
            if ( MiPteHasShadow() )
            {
              v94 = 1;
              if ( !HIBYTE(word_140C66CFC) )
                goto LABEL_156;
            }
            else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
            {
LABEL_156:
              if ( (v93 & 1) != 0 )
                v93 |= 0x8000000000000000uLL;
            }
          }
          *a4 = v93;
          if ( v94 )
            MiWritePteShadow((__int64)a4, v93, v95);
          _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1272), 0xFFFFFFFFFFFFFFFFuLL);
          goto LABEL_85;
        }
        goto LABEL_91;
      }
      MiFlushTbList(a9);
      v46 = v117;
      MiUnlockWorkingSetExclusive(v117, a13, v47, v48);
      v123[1] = 4096LL;
      v123[0] = (__int64)(v17 << 25) >> 16;
      MiPrefetchVirtualMemory(1uLL, (__int64)v123, v46, 45);
      SharedVm = (volatile LONG *)MiGetSharedVm(v46);
      v34 = ExAcquireSpinLockExclusive(SharedVm);
      goto LABEL_33;
    }
    LOBYTE(v104) = a13;
    v42 = MiHandleForkTransitionPte(v25, a2, v17, a4, a6, a7, a9, &Page, v27, v104, a14, a15);
    if ( v42 )
    {
      LOBYTE(v15) = v42 != 1;
      goto LABEL_192;
    }
LABEL_34:
    MiMakeSystemAddressValid(v17, 0LL, 0, a13, 1);
    v49 = MI_READ_PTE_LOCK_FREE(v17);
    v25 = a1;
    v19 = v49;
    v27 = v107;
    v105 = v49;
  }
  v28 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v105) >> 12) & 0xFFFFFFFFFFLL)
      - 0x220000000000LL;
  v113 = v28;
  if ( (_DWORD)v108 )
    goto LABEL_12;
  v120 = (__int64 *)(v28 + 40);
  if ( *(_WORD *)(v28 + 32) <= 1u )
  {
    v120 = (__int64 *)(v28 + 40);
  }
  else if ( *(__int64 *)(v28 + 40) >= 0 )
  {
    goto LABEL_12;
  }
  v110 = (__int64 *)(v28 + 16);
  if ( (unsigned int)MI_IS_SOFTWARE_PTE_SHADOW_STACK((_QWORD *)(v28 + 16)) )
  {
LABEL_12:
    MiInitializePageColorBase(v117, 0, (__int64)&v122);
    v29 = _InterlockedExchangeAdd((volatile signed __int32 *)v122, 1u);
    v30 = *(__int64 **)(qword_140C673C8 + 8LL * *(unsigned __int16 *)(v26 + 174));
    v110 = v30;
    if ( Page != -1 || (Page = MiGetPage((__int64)v30, HIDWORD(v122) | (unsigned int)v29 & DWORD2(v122), 0), Page != -1) )
    {
      v77 = Page;
      MiFinalizePageAttribute(48 * Page - 0x220000000000LL, *(unsigned __int8 *)(v28 + 34) >> 6, 0);
      LOBYTE(v78) = a13;
      MiDuplicateCloneLeaf(a3, (_DWORD)a4, v77, v78, 17);
      ++*a7;
      return 0LL;
    }
    MiFlushTbList(a9);
    MiUnlockWorkingSetExclusive(v117, a13, v31, v32);
    MiWaitForFreePage(v110);
    SharedVm = (volatile LONG *)MiGetSharedVm(v117);
    v34 = ExAcquireSpinLockExclusive(SharedVm);
    v17 = a3;
LABEL_33:
    *((_DWORD *)SharedVm + 1) = 0;
    a13 = v34;
    goto LABEL_34;
  }
  v108 = (__int64)(a3 << 25) >> 16;
  WsleContents = MiGetWsleContents(v108, v108);
  v37 = WsleContents;
  v112 = *v38;
  if ( (v112 & 0x8000000000000000uLL) == 0LL )
  {
    v121 = MI_READ_PTE_LOCK_FREE(v36 + ((a6 >> 9) & 0x7FFFFFFFF8LL));
    v39 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v121) >> 12) & 0xFFFFFFFFFFLL)
        - 0x220000000000LL;
    v40 = ZeroPte;
    v41 = *(_QWORD *)(qword_140C673C8 + 8 * ((v112 >> 43) & 0x3FF));
    v112 = v41;
    if ( *(_QWORD *)(qword_140C673C8 + 8LL * *(unsigned __int16 *)(v111 + 174)) != v41 )
    {
      v109 = (v107 & 1) + 2;
      if ( !(unsigned int)MiGetCrossPartitionCloneCharges(v41, v109) )
        goto LABEL_91;
      v106 = 1;
    }
    if ( (v37 & 0xF) != 8 || (unsigned int)MiLockPageTablePage(v39, 3) )
    {
      v118 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v39 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v118);
        while ( *(__int64 *)(v39 + 24) < 0 );
      }
      *(_QWORD *)(v39 + 24) ^= (*(_QWORD *)(v39 + 24) ^ (*(_QWORD *)(v39 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
      _InterlockedAnd64((volatile signed __int64 *)(v39 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( (v105 & 0x42) != 0 )
      {
        if ( (*(_DWORD *)(a10 + 48) & 0x600000) == 0x600000 && *v120 >= 0 )
          MiCaptureWriteWatchDirtyBit(a1, v108, a10);
        v50 = v113;
        v119 = 0;
        v51 = (volatile signed __int32 *)(v113 + 24);
        while ( _interlockedbittestandset64(v51, 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v119);
          while ( *(__int64 *)v51 < 0 );
        }
        v52 = MiCaptureDirtyBitToPfn(v50);
        v105 &= 0xFFFFFFFFFFFFFFBDuLL;
        v40 = v52;
      }
      else
      {
        v50 = v113;
        LODWORD(v111) = 0;
        v51 = (volatile signed __int32 *)(v113 + 24);
        while ( _interlockedbittestandset64(v51, 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v111);
          while ( *(__int64 *)v51 < 0 );
        }
      }
      v53 = *(_QWORD *)(v50 + 16);
      v116 = v53;
      if ( (v53 & 2) != 0 )
      {
        HIDWORD(v54) = HIDWORD(v53);
        if ( qword_140C65B40 && (v53 & 0x10) == 0 )
          v54 = ~qword_140C65B40 & v53;
        v40 = MiTransferSoftwarePte(
                *(_QWORD *)(v50 + 16),
                *(_QWORD *)(v112 + 8LL * ((unsigned __int16)v53 >> 12) + 17056),
                HIDWORD(v54),
                (v40 != 0) + 2);
        *(_QWORD *)(v50 + 16) = v116 & 0xFFFFFFFFFFFFFFFDuLL;
      }
      v55 = v120;
      *(_QWORD *)(v50 + 8) = a6;
      *v55 |= 0x8000000000000000uLL;
      v56 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v121);
      MiSetPfnPteFrame(v113, (v56 >> 12) & 0xFFFFFFFFFFLL);
      MI_MAKE_PROTECT_WRITE_COPY(v110);
      v116 = (unsigned __int64)*v110 >> 5;
      MiTransferPageFileOwnership(v113, a3);
      _InterlockedAnd64((volatile signed __int64 *)v51, 0x7FFFFFFFFFFFFFFFuLL);
      if ( v40 )
        MiReleasePageFileInfo(v112, v40, 1);
      v57 = v105;
      if ( (v105 & 0x800) != 0 )
      {
        v57 = v105 & 0xFFFFFFFFFFFFF5FFuLL | 0x200;
        v105 = v57;
      }
      MiWriteValidPteNewProtection(a3, v57);
      MiInsertTbFlushEntry((__int64)a9, v108, 1LL, 0);
      MiFlushTbListEarly((__int64)a9, 0);
      *(_QWORD *)(a6 + 16) = 0LL;
      *(_QWORD *)a6 = 0LL;
      v58 = 0;
      if ( MiPteInShadowRange(a6) )
      {
        if ( MiPteHasShadow() )
        {
          v58 = 1;
          if ( !HIBYTE(word_140C66CFC) )
            goto LABEL_63;
        }
        else
        {
          Process = KeGetCurrentThread()->ApcState.Process;
          if ( (HIDWORD(Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
          {
LABEL_63:
            if ( (v57 & 1) != 0 )
              v57 |= 0x8000000000000000uLL;
          }
        }
      }
      *(_QWORD *)a6 = v57;
      if ( v58 )
        MiWritePteShadow(a6, v57, v60);
      if ( v106 )
      {
        *(_QWORD *)(a6 + 16) |= 0x1000000000000000uLL;
        v61 = 1LL;
      }
      else
      {
        v61 = 0LL;
      }
      v62 = v108;
      *(_QWORD *)(a6 + 8) = v61;
      *(_QWORD *)(a6 + 24) = 2LL;
      MiSetWsleProtection((__int64)Process, v62, 0LL);
      v63 = MiSwizzleInvalidPte((*(_QWORD *)(v113 + 8) << 16) | 0x400LL);
      if ( (v107 & 1) != 0 )
      {
        v64 = v112;
        *(_QWORD *)(a6 + 16) = *(_QWORD *)(a6 + 16) & 0xDF80000000000000uLL | 0x2000000000000001LL;
        _InterlockedAdd64((volatile signed __int64 *)(v64 + 17848), 1uLL);
        if ( (v109 & 1) != 0 )
          ++*a14;
        else
          ++a14[1];
        v63 |= 8uLL;
        v105 = v63;
      }
      v65 = v63;
      *(_QWORD *)(a6 + 16) ^= (*(_QWORD *)(a6 + 16) ^ ((unsigned __int64)(unsigned int)v116 << 55)) & 0xF80000000000000LL;
      v66 = 0;
      if ( MiPteInShadowRange((unsigned __int64)a4) )
      {
        if ( MiPteHasShadow() )
        {
          v66 = 1;
          if ( !HIBYTE(word_140C66CFC) )
            goto LABEL_80;
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        {
LABEL_80:
          if ( (v63 & 1) != 0 )
            v65 = v63 | 0x8000000000000000uLL;
        }
      }
      *a4 = v65;
      if ( v66 )
        MiWritePteShadow((__int64)a4, v65, v67);
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1272), 0xFFFFFFFFFFFFFFFFuLL);
      MiUpdateWorkingSetPrivateSize(v117, v108, 0xFFFFFFFFFFFFFFFFuLL, 0);
LABEL_85:
      v15 = 1;
      goto LABEL_192;
    }
    MiReturnCrossPartitionCloneCharges(v112, v109);
    v26 = v111;
    v17 = a3;
    LODWORD(v108) = 1;
    goto LABEL_34;
  }
  WsleProtection = MiGetWsleProtection(v108, WsleContents);
  if ( WsleProtection )
  {
    v19 = MiSwizzleInvalidPte(32 * (WsleProtection & 0x1F | 0xFFFFFFFFF8000020uLL));
    v105 = v19;
LABEL_88:
    if ( v70 >= 0 && (v72 & 0x10000000000LL) == 0 && v70 )
    {
LABEL_90:
      if ( !(unsigned int)MiIncrementCombinedPte(v111, v71) )
        goto LABEL_91;
      goto LABEL_104;
    }
  }
  else
  {
    v105 = MiSwizzleInvalidPte((v69 << 16) | 0x400);
    v19 = v105;
    if ( v70 < 0 || (v72 & 0x10000000000LL) != 0 )
      goto LABEL_88;
    if ( v70 )
    {
      v19 = v105 | 0x800;
      v105 |= 0x800uLL;
      goto LABEL_90;
    }
  }
  if ( !(unsigned int)MiReferenceExistingCloneProto(v111, v71, v107, (_DWORD)a14, (__int64)&v114) )
    goto LABEL_91;
  if ( v114 )
  {
    v19 |= 8uLL;
  }
  else
  {
    if ( MiIsPrototypePteVadLookup(*(_QWORD *)(v28 + 16))
      || (*(_BYTE *)(a10 + 48) & 0x70) != 0x20
      || MiIsVadLargePrivate(a10) )
    {
      goto LABEL_104;
    }
    v74 = MiMakePerSessionProtoPte(a1, a2, a3, v73);
    if ( v74 )
      v19 = v74;
  }
  v105 = v19;
LABEL_104:
  v75 = 0;
  if ( MiPteInShadowRange((unsigned __int64)a4) )
  {
    if ( MiPteHasShadow() )
    {
      v75 = 1;
      if ( HIBYTE(word_140C66CFC) )
        goto LABEL_190;
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
    {
      goto LABEL_190;
    }
    if ( (v19 & 1) != 0 )
LABEL_189:
      v19 |= 0x8000000000000000uLL;
  }
LABEL_190:
  *a4 = v19;
  if ( v75 )
    MiWritePteShadow((__int64)a4, v19, v76);
LABEL_192:
  if ( Page != -1 )
    MiLockAndInsertPageInFreeList(48 * Page - 0x220000000000LL);
  return v15;
}
