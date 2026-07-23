/*
 * XREFs of MiCombineInitialInstance @ 0x1402EC920
 * Callers:
 *     MiConvertPrivateToProto @ 0x1402175A8 (MiConvertPrivateToProto.c)
 *     MiConvertStandbyToProto @ 0x14035A020 (MiConvertStandbyToProto.c)
 * Callees:
 *     MiLockAndDecrementShareCount @ 0x140211BAC (MiLockAndDecrementShareCount.c)
 *     EtwTraceKernelEvent @ 0x140211EDC (EtwTraceKernelEvent.c)
 *     MiHashIsCommon @ 0x140215F30 (MiHashIsCommon.c)
 *     MiSetWsleProtection @ 0x140216EC0 (MiSetWsleProtection.c)
 *     MiChargeCrossPartitionSharedPage @ 0x140217824 (MiChargeCrossPartitionSharedPage.c)
 *     MiMapSinglePage @ 0x140217D58 (MiMapSinglePage.c)
 *     MiCopyPfnEntryEx @ 0x140219D60 (MiCopyPfnEntryEx.c)
 *     MiIdentifyPfn @ 0x14023E590 (MiIdentifyPfn.c)
 *     KeYieldProcessorEx @ 0x140242F10 (KeYieldProcessorEx.c)
 *     MiUnlinkPageFromListEx @ 0x1402668C0 (MiUnlinkPageFromListEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402715F0 (MiPteInShadowRange.c)
 *     MiInsertTbFlushEntry @ 0x14027F800 (MiInsertTbFlushEntry.c)
 *     MiComputeHash64 @ 0x1402831D0 (MiComputeHash64.c)
 *     MiSwizzleInvalidPte @ 0x140285A30 (MiSwizzleInvalidPte.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x140285C64 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiReleasePageFileInfo @ 0x14029556C (MiReleasePageFileInfo.c)
 *     MiPfnReferenceCountIsZero @ 0x1402D9270 (MiPfnReferenceCountIsZero.c)
 *     MiGetPfnPriority @ 0x1402DF4E8 (MiGetPfnPriority.c)
 *     MiGetContainingPageTable @ 0x1402E1500 (MiGetContainingPageTable.c)
 *     MiSetPfnPteFrame @ 0x1402E1830 (MiSetPfnPteFrame.c)
 *     MiFinalizePageAttribute @ 0x1402E1874 (MiFinalizePageAttribute.c)
 *     MiWriteValidPteNewPage @ 0x1402EB2DC (MiWriteValidPteNewPage.c)
 *     MiAbandonPrivatePfn @ 0x1402ED384 (MiAbandonPrivatePfn.c)
 *     MiTransferPageFileOwnership @ 0x1402ED440 (MiTransferPageFileOwnership.c)
 *     MI_MAKE_PROTECT_WRITE_COPY @ 0x1402ED468 (MI_MAKE_PROTECT_WRITE_COPY.c)
 *     MiActivateCombineBlock @ 0x1402ED4C0 (MiActivateCombineBlock.c)
 *     MiUpdateWorkingSetPrivateSize @ 0x1402ED5E4 (MiUpdateWorkingSetPrivateSize.c)
 *     MiDecrementCloneBlock @ 0x1402F3EB8 (MiDecrementCloneBlock.c)
 *     MiLockNestedPageAtDpcInline @ 0x140348B00 (MiLockNestedPageAtDpcInline.c)
 *     MiWritePteShadow @ 0x1403574EC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14035754C (MiPteHasShadow.c)
 *     MiStandbyPageStillCombineCandidate @ 0x14035A650 (MiStandbyPageStillCombineCandidate.c)
 *     MiRecheckCombineVm @ 0x14035A704 (MiRecheckCombineVm.c)
 *     MiWriteRepurposedTransitionPte @ 0x14035A7F8 (MiWriteRepurposedTransitionPte.c)
 *     MiChangePageAttribute @ 0x14036F55C (MiChangePageAttribute.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     KeCopyPage @ 0x140424A70 (KeCopyPage.c)
 *     MiDiscardTransitionPteEx @ 0x140650B74 (MiDiscardTransitionPteEx.c)
 */

__int64 __fastcall MiCombineInitialInstance(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r13
  __int64 v4; // r11
  __int64 v5; // r15
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rdi
  __int64 *v8; // rcx
  unsigned int v9; // edx
  __int64 v10; // r12
  unsigned __int64 v11; // rbx
  _QWORD *v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r12
  int v15; // r13d
  __int64 v16; // rax
  unsigned __int64 v17; // rax
  __int64 v18; // r8
  __int64 v19; // r11
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // r13
  _QWORD *v23; // rdx
  __int64 v24; // rcx
  int v25; // edi
  BOOL v26; // edi
  __int64 v27; // rax
  unsigned __int64 v28; // rsi
  __int64 v29; // rdi
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rcx
  volatile signed __int64 *v34; // rdi
  ULONG_PTR v35; // rbx
  int v36; // edi
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  unsigned __int64 *v40; // rax
  unsigned __int64 v41; // rbx
  __int64 v42; // rcx
  __int64 v43; // rdi
  __int64 v45; // r9
  int v46; // esi
  unsigned __int64 v47; // rax
  unsigned __int64 v48; // rdi
  int v49; // r13d
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  unsigned __int64 *v53; // r11
  __int64 v54; // rax
  __int64 v55; // rbx
  unsigned int v57; // [rsp+38h] [rbp-1A0h]
  BOOL v58; // [rsp+38h] [rbp-1A0h]
  unsigned int v59; // [rsp+3Ch] [rbp-19Ch] BYREF
  __int64 *v60; // [rsp+40h] [rbp-198h]
  unsigned __int64 *v61; // [rsp+48h] [rbp-190h]
  _QWORD *v62; // [rsp+50h] [rbp-188h]
  __int64 v63; // [rsp+58h] [rbp-180h]
  unsigned __int64 v64; // [rsp+60h] [rbp-178h]
  __int64 v65; // [rsp+68h] [rbp-170h] BYREF
  __int64 v66; // [rsp+70h] [rbp-168h]
  __int64 v67; // [rsp+78h] [rbp-160h]
  __int64 v68; // [rsp+80h] [rbp-158h]
  int v69; // [rsp+88h] [rbp-150h] BYREF
  ULONG_PTR v70; // [rsp+90h] [rbp-148h]
  unsigned __int64 v71; // [rsp+98h] [rbp-140h]
  __int64 *v72; // [rsp+A0h] [rbp-138h]
  unsigned __int64 ContainingPageTable; // [rsp+A8h] [rbp-130h]
  __int64 v74; // [rsp+B0h] [rbp-128h]
  _QWORD *v75; // [rsp+B8h] [rbp-120h]
  __int64 v76; // [rsp+C0h] [rbp-118h]
  __int64 v77; // [rsp+C8h] [rbp-110h]
  __int64 v78; // [rsp+D0h] [rbp-108h]
  unsigned __int64 v79; // [rsp+D8h] [rbp-100h]
  _BYTE *v80; // [rsp+E0h] [rbp-F8h]
  __int64 v81; // [rsp+E8h] [rbp-F0h]
  __int64 v82; // [rsp+F0h] [rbp-E8h]
  __int64 v83; // [rsp+F8h] [rbp-E0h]
  unsigned __int64 v84; // [rsp+100h] [rbp-D8h]
  unsigned __int64 v85; // [rsp+108h] [rbp-D0h]
  __int64 v86; // [rsp+110h] [rbp-C8h]
  __int64 *v87; // [rsp+118h] [rbp-C0h]
  _QWORD *v88; // [rsp+120h] [rbp-B8h]
  __int64 v89; // [rsp+128h] [rbp-B0h]
  __int64 v90; // [rsp+130h] [rbp-A8h]
  __int64 v91; // [rsp+138h] [rbp-A0h]
  __int64 v92; // [rsp+140h] [rbp-98h]
  __int64 v93; // [rsp+148h] [rbp-90h]
  unsigned int *v94; // [rsp+150h] [rbp-88h]
  __int64 v95; // [rsp+158h] [rbp-80h]
  __int64 v96; // [rsp+160h] [rbp-78h]
  _QWORD *v97; // [rsp+168h] [rbp-70h]
  _QWORD *v98; // [rsp+170h] [rbp-68h]
  __int128 v99; // [rsp+178h] [rbp-60h] BYREF
  __int128 v100; // [rsp+188h] [rbp-50h]
  __int64 *v101; // [rsp+198h] [rbp-40h] BYREF
  int v102; // [rsp+1A0h] [rbp-38h]
  int v103; // [rsp+1A4h] [rbp-34h]

  v63 = a2;
  v74 = a1;
  v89 = a1;
  v90 = a2;
  v91 = a3;
  v99 = 0LL;
  v100 = 0LL;
  v97 = (_QWORD *)(a1 + 296);
  v62 = *(_QWORD **)(a1 + 296);
  v88 = v62;
  v98 = (_QWORD *)(a1 + 304);
  v3 = *(_QWORD *)(a1 + 304);
  v67 = v3;
  v93 = v3;
  v77 = v3;
  v72 = *(__int64 **)a1;
  v87 = v72;
  v59 = *(_DWORD *)(a1 + 140);
  v68 = *(_QWORD *)(a1 + 112);
  v86 = v68;
  v79 = *(_QWORD *)(qword_140C673C8 + 8LL * *(unsigned __int16 *)(v68 + 174));
  ContainingPageTable = v79;
  v64 = v79;
  v4 = *(_QWORD *)(a1 + 144);
  v71 = v4;
  v83 = v4;
  v5 = 48 * v4 - 0x220000000000LL;
  v82 = v5;
  v96 = v5;
  v6 = *(_QWORD *)(a1 + 96);
  v84 = v6;
  v78 = *v72;
  v92 = v78;
  v66 = v78;
  v7 = v6 + 4096;
  v85 = v6 + 4096;
  v101 = (__int64 *)(a2 + 16);
  v8 = (__int64 *)(((*(_QWORD *)(a2 + 16) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v60 = v8;
  v94 = (unsigned int *)(a2 + 32);
  v9 = *(_DWORD *)(a2 + 32);
  v57 = v9;
  v10 = v3 + 0x220000000000LL;
  if ( a3 )
  {
    v11 = *v8;
    v81 = *v8;
    MiMapSinglePage(v6, v4, -1073741808, 0);
    v65 = 56LL;
  }
  else
  {
    v11 = MiSwizzleInvalidPte(32 * (v9 & 0x1F | (((0xAAAAAAAAAAAAAAABuLL * (v10 >> 4)) & 0xFFFFFFFFFFLL) << 7) | 0x40));
    v81 = v11;
    v65 = v45 + 72;
  }
  v12 = v62 + 4;
  v75 = v62 + 4;
  v61 = v62 + 4;
  v76 = (unsigned __int64)(v62 + 4) & 0x7FFFFFFFFFFFFFFFLL;
  *((_OWORD *)v62 + 2) = 0LL;
  *((_OWORD *)v12 + 1) = 0LL;
  v95 = v3 + 16;
  MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)(v3 + 16));
  v14 = v13 * (v10 >> 4);
  v70 = v14;
  v80 = (_BYTE *)(v5 + 34);
  if ( ((*(_BYTE *)(v3 + 34) ^ *(_BYTE *)(v5 + 34)) & 0xC0) != 0 )
    MiChangePageAttribute(v3, *(unsigned __int8 *)(v5 + 34) >> 6, 0LL);
  MiMapSinglePage(v6 + 4096, v14, 1073741840, 0);
  v15 = 1;
  if ( a3 )
  {
    KeCopyPage(v6 + 4096, v6);
LABEL_7:
    v16 = a3;
    goto LABEL_8;
  }
  v69 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v5 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v69);
    while ( *(__int64 *)(v5 + 24) < 0 );
  }
  if ( (**(_DWORD **)v65 & 1) == 0
    || !(unsigned int)MiStandbyPageStillCombineCandidate(v5, v64, v60, v57)
    || !(unsigned int)MiRecheckCombineVm(v72, v59, v5, v68) )
  {
    v15 = 0;
    goto LABEL_7;
  }
  KeCopyPage(v6 + 4096, v6);
  v16 = 0LL;
LABEL_8:
  if ( v16 )
    *(_QWORD *)(((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = ZeroPte;
  if ( v15 )
  {
    v17 = MiComputeHash64(v7);
    if ( v17 == v19 )
    {
      if ( *(_QWORD *)(v18 + 24) == qword_140C67250 )
        v15 = MiHashIsCommon(v74, v19, (void *)v7) ? v15 : 0;
    }
    else
    {
      v15 = 0;
    }
  }
  *(_QWORD *)(((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = ZeroPte;
  if ( v15 )
  {
    ContainingPageTable = MiGetContainingPageTable((unsigned __int64)v61);
    v22 = 48 * ContainingPageTable - 0x220000000000LL;
    v23 = v62;
    v62[6] ^= (v62[6] ^ ((unsigned __int64)*v94 << 55)) & 0xF80000000000000LL;
    v24 = v63;
    v23[3] = *(_QWORD *)(v63 + 8);
    v23[8] = *(_QWORD *)(v24 + 24);
    v25 = 0;
    if ( a3 )
    {
      v59 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v5 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v59);
        while ( *(__int64 *)(v5 + 24) < 0 );
      }
      if ( (*(_QWORD *)(v5 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1
        || *(_WORD *)(v5 + 32) != 1
        || !(unsigned int)MiChargeCrossPartitionSharedPage(v66, v64, (__int64)v75, 0) )
      {
        v25 = -1073741800;
      }
    }
    else
    {
      v46 = (int)v75;
      if ( !(unsigned int)MiChargeCrossPartitionSharedPage(v66, v64, (__int64)v75, 0) )
      {
        v25 = -1073741800;
        goto LABEL_74;
      }
      if ( (MiUnlinkPageFromListEx(v5, 0LL) & 3) != 0 )
      {
        LODWORD(v65) = 0;
        MiDiscardTransitionPteEx(v5, 0LL);
        v62[7] = 1LL;
        MiDecrementCloneBlock(v66, v68, v46, 4, (__int64)&v65);
        v25 = -1073741800;
      }
    }
    if ( v25 >= 0 )
    {
      v62[7] = 1LL;
      v26 = v66 != v64;
      if ( a3 )
      {
        v58 = (DWORD1(PerfGlobalGroupMask) & 0x8000001) != 0;
        if ( (DWORD1(PerfGlobalGroupMask) & 0x8000001) != 0 )
          MiIdentifyPfn(v71, &v99);
        v27 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v60);
        v11 = v27;
        if ( (v27 & 0x42) != 0 )
          v11 = v27 & 0xFFFFFFFFFFFFFFBDuLL;
      }
      else
      {
        v58 = 0;
      }
      MiLockNestedPageAtDpcInline(v22, v23, v20, v21);
      *(_QWORD *)(v22 + 24) ^= (*(_QWORD *)(v22 + 24) ^ (*(_QWORD *)(v22 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
      _InterlockedAnd64((volatile signed __int64 *)(v22 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v28 = MiAbandonPrivatePfn(v5, v26);
      v29 = v67;
      MiLockNestedPageAtDpcInline(v67, v30, v31, v32);
      MiFinalizePageAttribute(v29, (unsigned __int8)*v80 >> 6, 1u);
      MiCopyPfnEntryEx(v29, (__int128 *)v5);
      if ( (unsigned int)MiGetPfnPriority(v29) < 5 )
        *(_BYTE *)(v29 + 35) = *(_BYTE *)(v29 + 35) & 0xF8 | 5;
      *(_QWORD *)(v29 + 8) = v76;
      *(_QWORD *)(v29 + 40) |= 0x8000000000000000uLL;
      MiSetPfnPteFrame(v33, ContainingPageTable);
      MI_MAKE_PROTECT_WRITE_COPY(v95);
      if ( a3 )
      {
        MiTransferPageFileOwnership(v29, v60);
        v34 = (volatile signed __int64 *)(v96 + 24);
        goto LABEL_31;
      }
      *(_QWORD *)(v77 + 24) &= 0xC000000000000000uLL;
      v47 = (unsigned __int64)v61;
      *v61 = 0LL;
      v48 = v11;
      v49 = 0;
      if ( !MiPteInShadowRange(v47) )
      {
LABEL_63:
        v53 = v61;
        *v61 = v48;
        if ( v49 )
          MiWritePteShadow(v53, v48);
        v54 = MiSwizzleInvalidPte(((_QWORD)v53 << 16) | 0x400LL);
        MiWriteRepurposedTransitionPte(v5, v54 | 0x800);
        v34 = (volatile signed __int64 *)(v5 + 24);
        *(_QWORD *)(v5 + 24) |= 0x4000000000000000uLL;
        MiTransferPageFileOwnership(v67, v60);
        MiPfnReferenceCountIsZero(v67, v70);
LABEL_31:
        _InterlockedAnd64((volatile signed __int64 *)(v77 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v78 == v79 && (*(_QWORD *)(v5 + 16) & 4) != 0 )
        {
          *(_QWORD *)(v5 + 16) &= ~4uLL;
          if ( v28 )
            v28 &= ~4uLL;
        }
        if ( !a3 )
        {
          v55 = *(_QWORD *)(v5 + 40) & 0xFFFFFFFFFFLL;
          *v34 &= 0xC000000000000000uLL;
          MiPfnReferenceCountIsZero(v5, v71);
          _InterlockedAnd64(v34, 0x7FFFFFFFFFFFFFFFuLL);
          MiLockAndDecrementShareCount(48 * v55 - 0x220000000000LL, 0);
LABEL_43:
          if ( v28 )
            MiReleasePageFileInfo(v64, v28, 1);
          *v97 = 0LL;
          *v98 = 0LL;
          MiActivateCombineBlock(v72, v62);
          return 0LL;
        }
        v35 = (v11 ^ (v70 << 12)) & 0xFFFFFFFFFF000LL ^ v11;
        if ( (v35 & 0x800) != 0 )
          v35 = v35 & 0xFFFFFFFFFFFFF5FFuLL | 0x200;
        MiWriteValidPteNewPage(v60, v35, 0);
        v36 = 0;
        if ( !MiPteInShadowRange((unsigned __int64)v61) )
        {
LABEL_37:
          v40 = v61;
          *v61 = v35;
          if ( v36 )
            MiWritePteShadow(v40, v35);
          *(_QWORD *)(v5 + 24) |= 0x4000000000000000uLL;
          *(_BYTE *)(v5 + 34) = *v80 | 7;
          _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v41 = *v101 & 0xFFFFFFFFFFFFF000uLL;
          *v101 = v5;
          MiInsertTbFlushEntry(a3, v41, 1LL, 0);
          v43 = v68;
          if ( (*(_BYTE *)(v68 + 184) & 7) == 0 )
            MiSetWsleProtection(v42, v41, 0LL);
          MiUpdateWorkingSetPrivateSize(v43, v41, -1LL, 0LL);
          if ( v58 )
          {
            *((_QWORD *)&v100 + 1) = v61;
            v101 = (__int64 *)&v99;
            v102 = 32;
            v103 = 0;
            EtwTraceKernelEvent((int)&v101, 1, 0x28000001u, 634, 289413892);
          }
          goto LABEL_43;
        }
        if ( (unsigned int)MiPteHasShadow(v38, v37, v39) )
        {
          v36 = 1;
          if ( HIBYTE(word_140C66CFC) )
            goto LABEL_37;
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        {
          goto LABEL_37;
        }
        if ( (v35 & 1) != 0 )
          v35 |= 0x8000000000000000uLL;
        goto LABEL_37;
      }
      if ( (unsigned int)MiPteHasShadow(v51, v50, v52) )
      {
        v49 = 1;
        if ( HIBYTE(word_140C66CFC) )
          goto LABEL_63;
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
      {
        goto LABEL_63;
      }
      if ( (v11 & 1) != 0 )
        v48 = v11 | 0x8000000000000000uLL;
      goto LABEL_63;
    }
LABEL_74:
    _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    return (unsigned int)v25;
  }
  if ( !a3 )
    _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return 3221225496LL;
}
