/*
 * XREFs of MiResolveProtoPteFault @ 0x140268160
 * Callers:
 *     MiDispatchFault @ 0x140238000 (MiDispatchFault.c)
 * Callees:
 *     MiWriteValidPteVolatile @ 0x140217020 (MiWriteValidPteVolatile.c)
 *     MiLocateAddress @ 0x140217240 (MiLocateAddress.c)
 *     KeYieldProcessorEx @ 0x140242F10 (KeYieldProcessorEx.c)
 *     MiResolveTransitionFault @ 0x140262760 (MiResolveTransitionFault.c)
 *     MiCompleteProtoPteFault @ 0x140268E70 (MiCompleteProtoPteFault.c)
 *     MiResolveDemandZeroFault @ 0x140269FD0 (MiResolveDemandZeroFault.c)
 *     MiPteInShadowRange @ 0x1402715F0 (MiPteInShadowRange.c)
 *     MiChargeCommit @ 0x140276750 (MiChargeCommit.c)
 *     MiIsPrototypePteVadLookup @ 0x14027D190 (MiIsPrototypePteVadLookup.c)
 *     MiSwizzleInvalidPte @ 0x140285A30 (MiSwizzleInvalidPte.c)
 *     MiUnlockVadTree @ 0x140287B08 (MiUnlockVadTree.c)
 *     MiLockVadTree @ 0x14028AB50 (MiLockVadTree.c)
 *     MiPfnReferenceCountIsZero @ 0x1402D9270 (MiPfnReferenceCountIsZero.c)
 *     MiUnlockProtoPoolPage @ 0x1402DB180 (MiUnlockProtoPoolPage.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1402DB214 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiReturnCommit @ 0x1402DC4E0 (MiReturnCommit.c)
 *     MiGetPfnPriority @ 0x1402DF4E8 (MiGetPfnPriority.c)
 *     MiResolveMappedFileFault @ 0x1402E0870 (MiResolveMappedFileFault.c)
 *     MiChargePartitionResidentAvailable @ 0x1402E6508 (MiChargePartitionResidentAvailable.c)
 *     MiLockPageInline @ 0x1402EF910 (MiLockPageInline.c)
 *     MiGetPagingFileOffset @ 0x1402F2AF4 (MiGetPagingFileOffset.c)
 *     MiAllowGuardFault @ 0x140341E20 (MiAllowGuardFault.c)
 *     KeInvalidAccessAllowed @ 0x140341F80 (KeInvalidAccessAllowed.c)
 *     MiWritePteShadow @ 0x1403574EC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14035754C (MiPteHasShadow.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1403CD4A0 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     HvlNotifyLongSpinWait @ 0x1403CD4D0 (HvlNotifyLongSpinWait.c)
 *     MiBadRefCount @ 0x14064DB90 (MiBadRefCount.c)
 *     MiLockSpecialPurposeMemoryCachedPage @ 0x140660DA8 (MiLockSpecialPurposeMemoryCachedPage.c)
 *     MiResolvePageFileFault @ 0x14066BA0C (MiResolvePageFileFault.c)
 */

__int64 __fastcall MiResolveProtoPteFault(struct _LIST_ENTRY *a1, __int64 a2, _QWORD *a3)
{
  unsigned __int64 CurrentPrcb; // rdx
  int v4; // r15d
  unsigned __int64 Flink; // rax
  __int64 v6; // rcx
  unsigned __int64 *v7; // rdi
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rbx
  __int64 v10; // r8
  unsigned __int64 *v11; // r13
  __int64 v12; // rsi
  unsigned __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r9
  __int64 v16; // r8
  __int64 v17; // rax
  char v18; // di
  _QWORD *v19; // r12
  unsigned __int64 v20; // rdx
  void *v21; // rbx
  signed __int32 v22; // eax
  signed __int32 v23; // ett
  int v24; // eax
  volatile signed __int64 *v25; // rbx
  char v26; // al
  unsigned __int64 v27; // rbx
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rax
  __int64 v30; // r14
  unsigned __int64 v31; // rdi
  unsigned __int64 v32; // r13
  ULONG_PTR v33; // rbx
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rdi
  __int64 v37; // rdi
  __int64 v38; // rbx
  __int64 v39; // rdx
  __int16 v40; // cx
  bool v41; // zf
  __int16 v42; // cx
  __int64 v43; // r8
  int v44; // edx
  __int64 v45; // rax
  unsigned __int64 v46; // r11
  unsigned __int64 v47; // rdx
  char v48; // al
  __int64 v49; // rcx
  __int64 v50; // rbx
  struct _KPRCB *v51; // r8
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v53; // eax
  __int64 result; // rax
  __int64 v55; // r9
  __int64 v56; // rdx
  unsigned __int64 v57; // r15
  unsigned __int64 v58; // rax
  __int64 v59; // r10
  char v60; // cl
  struct _LIST_ENTRY *v61; // r14
  __int16 v62; // ax
  unsigned __int64 v63; // rdi
  __int64 v64; // rdx
  __int64 v65; // r8
  __int64 v66; // rax
  unsigned __int64 v67; // rcx
  int IsPrototypePteVadLookup; // eax
  unsigned __int64 v69; // r15
  unsigned __int64 v70; // r13
  unsigned int v71; // eax
  int v72; // r15d
  __int64 v73; // rax
  _QWORD *v74; // rdi
  __int64 v75; // rbx
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // r8
  __int64 v79; // r8
  __int64 v80; // rax
  unsigned __int64 v81; // rcx
  unsigned int v82; // edi
  unsigned int PfnPriority; // eax
  __int64 v84; // rdx
  int v85; // eax
  unsigned __int64 v86; // r13
  unsigned __int64 v87; // r15
  __int64 v88; // rax
  __int64 **Address; // rax
  __int64 v90; // rdx
  __int64 **v91; // r15
  __int64 v92; // rax
  __int64 v93; // rax
  unsigned int v94; // ebx
  unsigned __int64 v95; // rbx
  __int64 v96; // rcx
  __int64 v97; // r8
  __int64 v98; // rcx
  __int64 v99; // r8
  unsigned __int64 v100; // [rsp+30h] [rbp-98h]
  _QWORD *v101; // [rsp+38h] [rbp-90h]
  __int64 v102; // [rsp+40h] [rbp-88h]
  unsigned __int64 v103; // [rsp+48h] [rbp-80h]
  __int64 v104; // [rsp+50h] [rbp-78h]
  unsigned __int64 v105; // [rsp+58h] [rbp-70h]
  int v106; // [rsp+60h] [rbp-68h] BYREF
  unsigned __int64 v107; // [rsp+68h] [rbp-60h]
  unsigned __int64 v108; // [rsp+70h] [rbp-58h] BYREF
  __int64 v109; // [rsp+78h] [rbp-50h]
  struct _LIST_ENTRY *Blink; // [rsp+80h] [rbp-48h]
  struct _LIST_ENTRY *v111; // [rsp+D0h] [rbp+8h] BYREF
  __int64 v112; // [rsp+D8h] [rbp+10h]
  _QWORD *v113; // [rsp+E0h] [rbp+18h] BYREF
  int v114; // [rsp+E8h] [rbp+20h] BYREF

  v113 = a3;
  v112 = a2;
  v111 = a1;
  CurrentPrcb = (unsigned __int64)a1;
  v4 = 0;
  Blink = a1[3].Blink;
  Flink = (unsigned __int64)a1->Flink;
  v108 = 0LL;
  *a3 = 0LL;
  v100 = Flink;
  v107 = ((Flink >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v6 = (__int64)a1[1].Flink;
  v102 = v6;
  v104 = v6 & 1;
  if ( (v6 & 1) == 0 || (v105 = v6 & 0xFFFFFFFFFFFFFFFEuLL, *(_BYTE *)(v6 & 0xFFFFFFFFFFFFFFFEuLL) != 1) )
    v105 = 0LL;
  v103 = *(_QWORD *)(CurrentPrcb + 96);
  v7 = (unsigned __int64 *)(((v103 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  while ( 1 )
  {
    v8 = *v7;
    if ( (*v7 & 1) == 0 || (v8 & 0x200) != 0 )
      return 3221225494LL;
    do
    {
      do
        v9 = (v8 >> 12) & 0xFFFFFFFFFFLL;
      while ( v9 > qword_140C65BA0 );
      v10 = 48 * v9;
      v109 = 48 * v9;
    }
    while ( (*(_QWORD *)(48 * v9 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) == 0 );
    v11 = (unsigned __int64 *)v103;
    v12 = v10 - 0x220000000000LL;
    v114 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v114);
      while ( *(__int64 *)(v12 + 24) < 0 );
    }
    v13 = *v7;
    if ( (*v7 & 1) == 0 || (v13 & 0x200) != 0 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      return 3221225494LL;
    }
    if ( v9 == ((v13 >> 12) & 0xFFFFFFFFFFLL) )
      break;
    _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  v14 = *(_QWORD *)(v12 + 40);
  v15 = 0x3FFFFFFF78LL;
  v16 = 0x3FFFFFFFFFFFFFFFLL;
  if ( (v14 & 0x10000000000LL) != 0 || (v14 & 0x20000000000000LL) != 0 )
    goto LABEL_29;
  CurrentPrcb = *(unsigned __int16 *)(v12 + 32);
  v17 = *(_QWORD *)(v12 + 24) & 0x3FFFFFFFFFFFFFFFLL;
  v16 = 0LL;
  if ( (_WORD)CurrentPrcb )
  {
    if ( (_WORD)CurrentPrcb == 1 )
    {
      if ( v17 || (*(_BYTE *)(v12 + 34) & 8) != 0 )
        v16 = 1LL;
      if ( !(_DWORD)v16 )
        goto LABEL_29;
    }
    else if ( (_WORD)CurrentPrcb != 2 || !v17 || (*(_BYTE *)(v12 + 34) & 8) == 0 )
    {
      goto LABEL_29;
    }
  }
  v18 = 0;
  if ( v14 < 0 && (*(_DWORD *)(v12 + 16) & 0x400LL) != 0 )
  {
    v19 = (_QWORD *)(v12 + 8);
    v101 = (_QWORD *)(v12 + 8);
  }
  else
  {
    v19 = (_QWORD *)(v12 + 8);
    v20 = *(_QWORD *)(v12 + 8) | 0x8000000000000000uLL;
    v101 = (_QWORD *)(v12 + 8);
    if ( v20 > 0xFFFFF6BFFFFFFF78uLL || v20 < 0xFFFFF68000000000uLL || (*(_BYTE *)(v12 + 35) & 0x20) == 0 )
    {
      v21 = *(void **)(qword_140C673C8 + 8 * (((unsigned __int64)v14 >> 43) & 0x3FF));
      goto LABEL_22;
    }
  }
  v18 = 1;
  v21 = *(void **)(qword_140C673C8 + 8 * (((unsigned __int64)v14 >> 43) & 0x3FF));
  if ( !(unsigned int)MiChargeCommit(v21, 1LL, 4LL) )
    goto LABEL_31;
LABEL_22:
  if ( v21 == &MiSystemPartition )
  {
    CurrentPrcb = (unsigned __int64)KeGetCurrentPrcb();
    v22 = *(_DWORD *)(CurrentPrcb + 34460);
    while ( v22 )
    {
      if ( v22 == -1 )
        break;
      v14 = (unsigned int)(v22 - 1);
      v23 = v22;
      v22 = _InterlockedCompareExchange((volatile signed __int32 *)(CurrentPrcb + 34460), v14, v22);
      if ( v23 == v22 )
        goto LABEL_29;
    }
  }
  v24 = MiChargePartitionResidentAvailable(v21, 1LL, 0xFFFFFFFFLL);
  if ( !v24 && v18 )
  {
    MiReturnCommit(v21, 1LL);
    goto LABEL_30;
  }
  v101 = v19;
  if ( v24 )
  {
LABEL_29:
    ++*(_WORD *)(v12 + 32);
    v19 = (_QWORD *)(v12 + 8);
LABEL_30:
    v101 = v19;
  }
LABEL_31:
  v25 = (volatile signed __int64 *)(*v19 | 0x8000000000000000uLL);
  v26 = *(_BYTE *)(v12 + 34);
  if ( (v26 & 0x20) != 0 )
  {
    do
    {
      _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v82 = 0;
      while ( (*(_BYTE *)(v12 + 34) & 0x20) != 0 )
      {
        if ( (++v82 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v14) )
        {
          HvlNotifyLongSpinWait(v82);
        }
        else
        {
          _mm_pause();
        }
      }
      MiLockPageInline(v12);
      v26 = *(_BYTE *)(v12 + 34);
    }
    while ( (v26 & 0x20) != 0 );
    v11 = (unsigned __int64 *)v103;
  }
  *(_BYTE *)(v12 + 34) = v26 | 0x20;
  if ( (*(_QWORD *)(v12 + 24) & 0x4000000000000000LL) == 0 && (*v25 & 0x20) == 0 )
    MiWriteValidPteVolatile(v25, 1, 0);
  _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  while ( 1 )
  {
    while ( 1 )
    {
      v27 = *v11;
      v28 = *v11;
      if ( (*v11 & 1) != 0 )
        goto LABEL_37;
      if ( (*v11 & 0xC00) != 0x800 )
      {
        v30 = 0LL;
        goto LABEL_43;
      }
      if ( !v27 || !qword_140C65B40 || (v27 & qword_140C65B40) != 0 )
      {
        v28 = *v11;
        if ( qword_140C65B40 && (v27 & 0x10) == 0 )
          v28 = v27 & ~qword_140C65B40;
LABEL_37:
        v29 = (v28 >> 12) & 0xFFFFFFFFFFLL;
        if ( v29 <= qword_140C65BA0 )
        {
          CurrentPrcb = 6 * v29;
          if ( _bittest64((const signed __int64 *)(48 * v29 - 0x21FFFFFFFFD8LL), 0x36u) )
            break;
        }
      }
    }
    v30 = 48 * v29 - 0x220000000000LL;
    v106 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v30 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v106);
      while ( *(__int64 *)(v30 + 24) < 0 );
    }
    if ( *v11 == v27 )
      break;
    _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  CurrentPrcb = *(_QWORD *)(qword_140C673C8 + 8 * ((*(_QWORD *)(v30 + 40) >> 43) & 0x3FFLL));
  if ( (*(_DWORD *)(CurrentPrcb + 4) & 0x80u) != 0 )
    v30 = MiLockSpecialPurposeMemoryCachedPage(v30, 2LL, v16, v15);
LABEL_43:
  v31 = *v11;
  v32 = *v11;
  v33 = v103;
  if ( v103 >= 0xFFFFF6FB7DBED000uLL
    && v103 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0x600000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v32 & 1) != 0
    && ((v32 & 0x20) == 0 || (v32 & 0x42) == 0) )
  {
    CurrentPrcb = (unsigned __int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( CurrentPrcb )
    {
      v88 = *(_QWORD *)(CurrentPrcb + 8 * ((v103 >> 3) & 0x1FF));
      if ( (v88 & 0x20) != 0 )
        v32 |= 0x20uLL;
      if ( (v88 & 0x42) != 0 )
        v32 |= 0x42uLL;
    }
  }
  v108 = v32;
  if ( (v32 & 1) == 0 )
  {
    if ( !v32 )
      goto LABEL_178;
    v55 = v107;
    v56 = 0LL;
    v57 = *(_QWORD *)v107;
    if ( v107 >= 0xFFFFF6FB7DBED000uLL
      && v107 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0x600000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v57 & 1) != 0
      && ((v57 & 0x20) == 0 || (v57 & 0x42) == 0) )
    {
      v16 = (__int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v16 )
      {
        v92 = *(_QWORD *)(v16 + 8 * ((v107 >> 3) & 0x1FF));
        if ( (v92 & 0x20) != 0 )
          v57 |= 0x20uLL;
        if ( (v92 & 0x42) != 0 )
          v57 |= 0x42uLL;
      }
    }
    if ( (v57 & 0x400) == 0 )
      goto LABEL_92;
    v58 = v57;
    if ( qword_140C65B40 && (v57 & 0x10) == 0 )
      v58 = v57 & ~qword_140C65B40;
    v55 = 0xFFFFFFFFLL;
    if ( HIDWORD(v58) == 0xFFFFFFFF )
    {
      v61 = v111;
      v56 = (v57 >> 5) & 0x1F;
      if ( ((v57 >> 5) & 0x18) == 0x10 && (BYTE5(v111[4].Flink) & 8) != 0 )
        goto LABEL_190;
    }
    else
    {
LABEL_92:
      if ( (v57 & 8) == 0 )
      {
        v56 = (v32 >> 5) & 0x1F;
        v16 = ((v32 >> 5) & 0x1F) >> 3;
        if ( (_DWORD)v16 == 2 && (BYTE5(v111[4].Flink) & 8) != 0 )
          goto LABEL_190;
        if ( v103 >= 0xFFFFF6FB7DBED000uLL
          && v103 <= 0xFFFFF6FB7DBED7F8uLL
          && (MiFlags & 0x600000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1 )
        {
          if ( (v31 & 1) == 0 )
            goto LABEL_96;
          if ( (v31 & 0x20) == 0 || (v31 & 0x42) == 0 )
          {
            v55 = (__int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( v55 )
            {
              v93 = *(_QWORD *)(v55 + 8 * ((v103 >> 3) & 0x1FF));
              if ( (v93 & 0x20) != 0 )
                v31 |= 0x20uLL;
              if ( (v93 & 0x42) != 0 )
                v31 |= 0x42uLL;
            }
          }
        }
        if ( (v31 & 1) != 0 )
        {
          v59 = v112;
          if ( !v112 || (v31 & 0xA00) != 0 )
          {
LABEL_101:
            v61 = v111;
LABEL_102:
            v62 = v32;
            if ( qword_140C65B40 && (v32 & 0x10) == 0 )
              v62 = v32 & ~(_WORD)qword_140C65B40;
            if ( (v62 & 0x400) != 0
              || (v62 & 0x800) != 0
              || (v62 & 4) != 0
              || (v56 & 5) != 5
              || !v59 && (((unsigned __int8)v32 >> 5) & 5) == 4
              || ((__int64)Blink[11].Blink & 7) == 0
              && KeGetCurrentThread()->ApcState.Process[1].Affinity.StaticBitmap[12] )
            {
              v63 = v100;
            }
            else
            {
              v63 = v100;
              if ( (MiFlags & 0x8000) == 0 || v100 < 0xFFFF800000000000uLL || (v56 & 2) == 0 )
              {
                LODWORD(v111) = 0;
                while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) )
                {
                  do
                    KeYieldProcessorEx(&v111);
                  while ( *(__int64 *)(v12 + 24) < 0 );
                }
                *(_BYTE *)(v12 + 34) &= ~0x20u;
                MiRemoveLockedPageChargeAndDecRef(v12);
                _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                if ( v105 )
                {
                  if ( !v104 )
                    return 0LL;
                  v67 = v102 & 0xFFFFFFFFFFFFFFFEuLL;
                  if ( *(_BYTE *)(v102 & 0xFFFFFFFFFFFFFFFEuLL) != 1 || (*(_DWORD *)(v67 + 80) & 0x4000) == 0 )
                    return 0LL;
                  v66 = v102;
                }
                else
                {
                  v66 = v102;
                  v67 = v102 & 0xFFFFFFFFFFFFFFFEuLL;
                }
                if ( v104 )
                {
                  if ( *(_BYTE *)v67 != 1 && *(_BYTE *)v67 != 3 && *(_BYTE *)v67 != 6 || *(_BYTE *)v67 == 6 )
                  {
LABEL_131:
                    IsPrototypePteVadLookup = MiIsPrototypePteVadLookup(v57, v64, v65);
                    v69 = v57 >> 5;
                    v70 = v32 >> 5;
                    v41 = IsPrototypePteVadLookup == 0;
                    v71 = 4;
                    if ( v41 )
                      LOBYTE(v69) = v70;
                    if ( (v69 & 2) != 0 )
                      v71 = 6;
                    v72 = v69 & 0x18;
                    if ( v72 == 8 )
                    {
                      v71 |= 8u;
                    }
                    else if ( v72 == 24 )
                    {
                      v71 |= 0x18u;
                    }
                    v73 = MiSwizzleInvalidPte(32LL * v71);
                    v74 = (_QWORD *)v107;
                    v75 = v73;
                    if ( (unsigned int)MiPteInShadowRange(v107) )
                    {
                      if ( (unsigned int)MiPteHasShadow(v77, v76, v78) )
                      {
                        if ( !HIBYTE(word_140C66CFC) && (v75 & 1) != 0 )
                          v75 |= 0x8000000000000000uLL;
                        *v74 = v75;
                        MiWritePteShadow(v74, v75);
                        return MiResolveDemandZeroFault(v61, v74, 0LL, v112);
                      }
                      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
                        && (v75 & 1) != 0 )
                      {
                        v75 |= 0x8000000000000000uLL;
                      }
                    }
                    *v74 = v75;
                    return MiResolveDemandZeroFault(v61, v74, 0LL, v112);
                  }
                }
                else if ( !(unsigned __int8)KeInvalidAccessAllowed(v66, 0LL) )
                {
                  goto LABEL_131;
                }
                if ( v100 < 0xFFFF800000000000uLL )
                  goto LABEL_131;
                return 3221225477LL;
              }
            }
            if ( (v32 & 0x400) != 0 )
            {
              if ( (BYTE5(v61[4].Flink) & 8) == 0 )
                return MiResolveMappedFileFault(v61, v33, v12, v113);
            }
            else
            {
              if ( (v32 & 0x800) != 0 )
                return MiResolveTransitionFault(v61, v33, v12, v59, v113);
              if ( !(unsigned int)MiGetPagingFileOffset(&v108, v56, v16, v55) )
              {
                if ( v105 )
                {
                  if ( !v104
                    || (v81 = v102 & 0xFFFFFFFFFFFFFFFEuLL, *(_BYTE *)(v102 & 0xFFFFFFFFFFFFFFFEuLL) != 1)
                    || (*(_DWORD *)(v81 + 80) & 0x4000) == 0 )
                  {
                    LOBYTE(v56) = 17;
                    MiUnlockProtoPoolPage(v12, v56);
                    return 0LL;
                  }
                  v80 = v102;
                }
                else
                {
                  v80 = v102;
                  v81 = v102 & 0xFFFFFFFFFFFFFFFEuLL;
                }
                if ( v104 )
                {
                  if ( *(_BYTE *)v81 != 1 && *(_BYTE *)v81 != 3 && *(_BYTE *)v81 != 6 || *(_BYTE *)v81 == 6 )
                    return MiResolveDemandZeroFault(v61, v33, v12, v112);
                }
                else if ( !(unsigned __int8)KeInvalidAccessAllowed(v80, 0LL) )
                {
                  return MiResolveDemandZeroFault(v61, v33, v12, v112);
                }
                if ( v63 < 0xFFFF800000000000uLL )
                  return MiResolveDemandZeroFault(v61, v33, v12, v112);
                v85 = MiIsPrototypePteVadLookup(v57, v56, v79);
                v86 = v32 >> 5;
                v87 = v57 >> 5;
                if ( v85 )
                  LOBYTE(v86) = v87;
                if ( (v86 & 0x18) != 0x10 )
                  return MiResolveDemandZeroFault(v61, v33, v12, v112);
LABEL_178:
                LOBYTE(CurrentPrcb) = 17;
                MiUnlockProtoPoolPage(v12, CurrentPrcb);
                return 3221225477LL;
              }
              if ( (BYTE5(v61[4].Flink) & 8) == 0 )
                return MiResolvePageFileFault(v61, v33, v12, v113);
            }
LABEL_190:
            LOBYTE(v56) = 17;
            MiUnlockProtoPoolPage(v12, v56);
            return 3221226548LL;
          }
          v94 = -1073741819;
LABEL_322:
          if ( v30 )
            _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          LOBYTE(v56) = 17;
          MiUnlockProtoPoolPage(v12, v56);
          return v94;
        }
LABEL_96:
        v59 = v112;
        v55 = (__int64)MiReadWrite;
        v60 = 1;
        if ( !v112 )
          v60 = v112;
        if ( *((char *)MiReadWrite + ((unsigned __int8)v32 >> 5)) - v60 >= 10 )
        {
          if ( (_DWORD)v16 == 2 && (!v104 || *(_BYTE *)(v102 & 0xFFFFFFFFFFFFFFFEuLL) != 1) )
          {
            if ( !(unsigned int)MiAllowGuardFault(v102) )
            {
              v94 = -1073741819;
              goto LABEL_322;
            }
            v95 = v31 & 0xFFFFFFFFFFFFFC1FuLL | (32 * ((v32 >> 5) & 0xF));
            if ( (v31 & 0xC00) == 0x800 )
            {
              if ( !(unsigned int)MiPteInShadowRange(v103) )
                goto LABEL_320;
              if ( (unsigned int)MiPteHasShadow(v96, v56, v97) )
              {
                if ( HIBYTE(word_140C66CFC) || (v31 & 1) == 0 )
                  goto LABEL_308;
                goto LABEL_307;
              }
              if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0
                || (v31 & 1) == 0 )
              {
                goto LABEL_320;
              }
            }
            else
            {
              if ( !(unsigned int)MiPteInShadowRange(v103) )
                goto LABEL_320;
              if ( (unsigned int)MiPteHasShadow(v98, v56, v99) )
              {
                if ( HIBYTE(word_140C66CFC) || (v31 & 1) == 0 )
                  goto LABEL_308;
LABEL_307:
                v95 |= 0x8000000000000000uLL;
LABEL_308:
                *(_QWORD *)v103 = v95;
                MiWritePteShadow(v103, v95);
LABEL_321:
                v94 = -2147483647;
                goto LABEL_322;
              }
              if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0
                || (v31 & 1) == 0 )
              {
LABEL_320:
                *(_QWORD *)v103 = v95;
                goto LABEL_321;
              }
            }
            v95 |= 0x8000000000000000uLL;
            goto LABEL_320;
          }
          v33 = v103;
          goto LABEL_101;
        }
        v94 = -1073741819;
        goto LABEL_322;
      }
      v61 = v111;
    }
    v59 = v112;
    goto LABEL_102;
  }
  if ( v105 )
  {
    PfnPriority = MiGetPfnPriority(v30);
    if ( (unsigned int)v84 > PfnPriority )
      *(_BYTE *)(v30 + 35) = v84 | *(_BYTE *)(v30 + 35) & 0xF8;
    _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    LOBYTE(v84) = 17;
    MiUnlockProtoPoolPage(v12, v84);
    return 0LL;
  }
  else
  {
    v34 = *(_QWORD *)(v30 + 40);
    if ( v34 >= 0 )
      goto LABEL_55;
    v35 = *(_QWORD *)(v30 + 16);
    if ( (v35 & 0x400) == 0 || (((unsigned __int64)v34 >> 60) & 7) == 3 )
      goto LABEL_55;
    v36 = *(_QWORD *)(v30 + 16);
    if ( qword_140C65B40 && (v35 & 0x10) == 0 )
      v36 = ~qword_140C65B40 & v35;
    v37 = v36 >> 16;
    if ( (*(_DWORD *)(*(_QWORD *)v37 + 56LL) & 0x20) == 0 )
      goto LABEL_55;
    v38 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v37 + 96LL) + 40LL);
    if ( !v38 || (v38 & 0xFFFFFFFFFFFFFFF8uLL) == 8 || (v38 & 3) == 2 )
      goto LABEL_55;
    if ( v100 < 0xFFFF800000000000uLL )
    {
      MiLockVadTree(1LL);
      Address = MiLocateAddress(v100);
      LOBYTE(v90) = 17;
      v91 = Address;
      MiUnlockVadTree(1LL, v90);
      if ( v91 )
      {
        CurrentPrcb = *((unsigned int *)v91 + 12);
        if ( ((_DWORD)v91[6] & 0x70) == 0x20 )
        {
          CurrentPrcb &= 0xF80u;
          if ( (_DWORD)CurrentPrcb == 128
            || ((_DWORD)v91[8] & 0x8000000) != 0 && (v38 & 4) == 0
            || (MiFlags & 0x400) != 0 && (*(_BYTE *)(v37 + 34) & 2) != 0 )
          {
            v4 = 0;
            goto LABEL_250;
          }
        }
      }
LABEL_248:
      _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      LOBYTE(CurrentPrcb) = 17;
      MiUnlockProtoPoolPage(v12, CurrentPrcb);
      return 3221226536LL;
    }
    else
    {
      if ( (MiFlags & 0x8000) != 0 && (v35 & 0x40) != 0 )
        goto LABEL_248;
LABEL_250:
      v19 = v101;
LABEL_55:
      v39 = *(_QWORD *)(v30 + 24);
      *(_QWORD *)(v30 + 24) = v39 ^ ((v39 + 1) ^ v39) & 0x3FFFFFFFFFFFFFFFLL;
      _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      LODWORD(v113) = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v113);
        while ( *(__int64 *)(v12 + 24) < 0 );
      }
      *(_BYTE *)(v12 + 34) &= ~0x20u;
      v40 = *(_WORD *)(v12 + 32);
      if ( !v40 )
        MiBadRefCount(v12, v39, v16);
      v41 = v40 == 1;
      v42 = v40 - 1;
      *(_WORD *)(v12 + 32) = v42;
      if ( v41 && (*(_QWORD *)(v12 + 40) & 0x20000000000000LL) != 0 )
      {
LABEL_253:
        MiPfnReferenceCountIsZero(v12, 0xAAAAAAAAAAAAAAABuLL * (v109 >> 4));
        goto LABEL_75;
      }
      v43 = *(_QWORD *)(v12 + 40);
      if ( (v43 & 0x10000000000LL) == 0 && (v43 & 0x20000000000000LL) == 0 )
      {
        v44 = 0;
        v45 = *(_QWORD *)(v12 + 24) & 0x3FFFFFFFFFFFFFFFLL;
        if ( !v42 )
        {
          v46 = 1LL;
          v4 = 1;
          goto LABEL_65;
        }
        if ( v42 == 1 )
        {
          if ( v45 || (*(_BYTE *)(v12 + 34) & 8) != 0 )
          {
            v46 = 1LL;
            v44 = 1;
          }
          else
          {
            v46 = 1LL;
          }
          if ( v44 )
          {
LABEL_65:
            v47 = *v19 | 0x8000000000000000uLL;
            if ( (v47 > 0xFFFFF6BFFFFFFF78uLL || v47 < 0xFFFFF68000000000uLL)
              && (v48 = *(_BYTE *)(v12 + 35), (v48 & 0x20) != 0) )
            {
              *(_BYTE *)(v12 + 35) = v48 & 0xDF;
            }
            else
            {
              v49 = ((unsigned __int64)v43 >> 43) & 0x3FF;
              v50 = *(_QWORD *)(qword_140C673C8 + 8 * v49);
              if ( v43 < 0 && (*(_DWORD *)(v12 + 16) & 0x400LL) != 0
                || v47 <= 0xFFFFF6BFFFFFFF78uLL && v47 >= 0xFFFFF68000000000uLL && (*(_BYTE *)(v12 + 35) & 0x20) != 0
                || v4 && (*(_QWORD *)(v12 + 24) & 0x4000000000000000LL) != 0 )
              {
                MiReturnCommit(*(_QWORD *)(qword_140C673C8 + 8 * v49), 1LL);
                v46 = 1LL;
              }
              if ( (_UNKNOWN *)v50 != &MiSystemPartition )
                goto LABEL_197;
              v51 = KeGetCurrentPrcb();
              CachedResidentAvailable = (int)v51->CachedResidentAvailable;
              if ( (_DWORD)CachedResidentAvailable == -1 )
                goto LABEL_197;
              if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
              {
                do
                {
                  v53 = _InterlockedCompareExchange(
                          (volatile signed __int32 *)&v51->CachedResidentAvailable,
                          CachedResidentAvailable + 1,
                          CachedResidentAvailable);
                  v41 = (_DWORD)CachedResidentAvailable == v53;
                  LODWORD(CachedResidentAvailable) = v53;
                  if ( v41 )
                    goto LABEL_74;
                }
                while ( v53 != -1 && (unsigned __int64)(v53 + 1LL) <= 0x100 );
              }
              if ( (int)CachedResidentAvailable > 192
                && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                        (volatile signed __int32 *)&v51->CachedResidentAvailable,
                                                        192,
                                                        CachedResidentAvailable) )
              {
                v46 = (int)CachedResidentAvailable - 192 + 1LL;
              }
              if ( v46 )
LABEL_197:
                _InterlockedExchangeAdd64((volatile signed __int64 *)(v50 + 17280), v46);
            }
LABEL_74:
            if ( v4 )
              goto LABEL_253;
          }
        }
        else if ( v42 == 2 && v45 && (*(_BYTE *)(v12 + 34) & 8) != 0 )
        {
          v46 = 1LL;
          goto LABEL_65;
        }
      }
LABEL_75:
      _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __incgsdword(0x2E98u);
      result = MiCompleteProtoPteFault((_DWORD)v111, v32, v112, 0, v102);
      if ( (int)result >= 0 )
        return 272LL;
    }
  }
  return result;
}
