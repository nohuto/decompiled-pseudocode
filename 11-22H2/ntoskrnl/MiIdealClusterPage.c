/*
 * XREFs of MiIdealClusterPage @ 0x14066A500
 * Callers:
 *     MiHandleTransitionFault @ 0x140262D30 (MiHandleTransitionFault.c)
 * Callees:
 *     MiReturnPfnReferenceCount @ 0x14020DC60 (MiReturnPfnReferenceCount.c)
 *     KeYieldProcessorEx @ 0x140242E20 (KeYieldProcessorEx.c)
 *     MiSearchNumaNodeTable @ 0x14026E9B0 (MiSearchNumaNodeTable.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402711D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetProtoPteAddress @ 0x140272D70 (MiGetProtoPteAddress.c)
 *     MiCopyPage @ 0x140283CF0 (MiCopyPage.c)
 *     MiRelockFaultState @ 0x140286D78 (MiRelockFaultState.c)
 *     MiConvertEntireLargePageToSmall @ 0x1402D2AD0 (MiConvertEntireLargePageToSmall.c)
 *     MiGetLargePage @ 0x1402D7A80 (MiGetLargePage.c)
 *     MiUnlockProtoPoolPage @ 0x1402DAEF0 (MiUnlockProtoPoolPage.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1402DAF84 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiRemoveLockedPageCharge @ 0x1402DBB20 (MiRemoveLockedPageCharge.c)
 *     MiReturnCommit @ 0x1402DC250 (MiReturnCommit.c)
 *     MiProtectionToCacheAttribute @ 0x1402E1560 (MiProtectionToCacheAttribute.c)
 *     MiInitializePageColorBase @ 0x1402E1690 (MiInitializePageColorBase.c)
 *     MiAcquireNonPagedResources @ 0x1402E4314 (MiAcquireNonPagedResources.c)
 *     MiReleaseFreshPage @ 0x1402E7F20 (MiReleaseFreshPage.c)
 *     MiRelockProtoPoolPage @ 0x1402EF244 (MiRelockProtoPoolPage.c)
 *     MiReleaseFaultState @ 0x1402EF2A0 (MiReleaseFaultState.c)
 *     MiObtainProtoReference @ 0x1402EF318 (MiObtainProtoReference.c)
 *     MiAddLockedPageCharge @ 0x1402EF368 (MiAddLockedPageCharge.c)
 *     MiIsFaultPteIntact @ 0x1402EF3C8 (MiIsFaultPteIntact.c)
 *     MiFindContiguousPagesEx @ 0x1403BA9B8 (MiFindContiguousPagesEx.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     memcmp @ 0x1403D9CF0 (memcmp.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     MiArePageContentsZero @ 0x14064D490 (MiArePageContentsZero.c)
 *     MiSwapHardFaultPage @ 0x14066C9E8 (MiSwapHardFaultPage.c)
 */

volatile signed __int32 *__fastcall MiIdealClusterPage(
        unsigned __int64 *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned __int8 *a5,
        void *a6,
        _BYTE *a7)
{
  volatile signed __int32 *v7; // r14
  __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rbx
  bool v14; // zf
  __int64 ProtoPteAddress; // rax
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // rcx
  __int64 v18; // r9
  __int64 v19; // rcx
  unsigned __int64 v20; // rax
  __int64 v21; // rbx
  __int64 v22; // r13
  __int64 *v23; // r12
  unsigned __int64 v24; // rbx
  unsigned __int64 v25; // rsi
  unsigned __int64 v26; // r15
  __int64 v27; // rax
  __int64 *v28; // rcx
  ULONG_PTR v29; // rdx
  ULONG_PTR v30; // r8
  unsigned int v31; // ebx
  unsigned __int64 v32; // rax
  unsigned int v33; // ebx
  ULONG_PTR v34; // r8
  __int64 v36; // r8
  __int64 v37; // r9
  struct _KPRCB *CurrentPrcb; // r8
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v40; // eax
  __int128 v41; // xmm1
  __int128 v42; // xmm0
  __int128 v43; // xmm1
  __int128 v44; // xmm0
  unsigned __int8 CurrentIrql; // r13
  _DWORD *SchedulerAssist; // r9
  __int64 v47; // rdx
  unsigned int v48; // eax
  unsigned int v49; // r10d
  __int64 LargePage; // rax
  char *v51; // rbx
  unsigned __int8 v52; // cl
  struct _KPRCB *v53; // r9
  _DWORD *v54; // r8
  int v55; // eax
  unsigned __int64 v56; // r8
  struct _KPRCB *v57; // r9
  __int64 v58; // rdx
  signed __int32 v59; // eax
  int ContiguousPages; // edi
  unsigned __int64 v61; // rdi
  __int64 v62; // r14
  ULONG_PTR v63; // rcx
  unsigned __int8 v64; // cl
  struct _KPRCB *v65; // r9
  _DWORD *v66; // r8
  int v67; // eax
  int v68; // ecx
  bool v69; // bl
  void *v70; // rax
  void *v71; // r12
  void *v72; // rax
  struct _KPRCB *v73; // r8
  __int64 v74; // rdx
  signed __int32 v75; // eax
  __int64 v76; // rdx
  __int64 v77; // r8
  _WORD *v78; // rbx
  unsigned __int64 v79; // r8
  struct _KPRCB *v80; // r9
  __int64 v81; // rdx
  signed __int32 v82; // eax
  unsigned __int8 v83[8]; // [rsp+70h] [rbp-1C8h] BYREF
  void *Buf2; // [rsp+78h] [rbp-1C0h] BYREF
  int v85; // [rsp+80h] [rbp-1B8h] BYREF
  unsigned __int64 v86; // [rsp+88h] [rbp-1B0h]
  ULONG_PTR v87; // [rsp+90h] [rbp-1A8h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+98h] [rbp-1A0h]
  unsigned __int8 *v89; // [rsp+A0h] [rbp-198h]
  __int64 v90; // [rsp+A8h] [rbp-190h] BYREF
  unsigned __int64 *v91; // [rsp+B0h] [rbp-188h]
  unsigned __int64 v92; // [rsp+B8h] [rbp-180h] BYREF
  __int64 v93; // [rsp+C0h] [rbp-178h]
  __int64 v94; // [rsp+C8h] [rbp-170h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+D0h] [rbp-168h]
  __int64 v96; // [rsp+D8h] [rbp-160h]
  _BYTE *v97; // [rsp+E0h] [rbp-158h]
  __int64 v98; // [rsp+E8h] [rbp-150h] BYREF
  unsigned __int64 v99; // [rsp+F0h] [rbp-148h]
  volatile signed __int32 *v100; // [rsp+F8h] [rbp-140h]
  __int128 v101; // [rsp+100h] [rbp-138h] BYREF
  __int128 Buf1; // [rsp+110h] [rbp-128h] BYREF
  __int128 v103; // [rsp+120h] [rbp-118h]
  __int128 v104; // [rsp+130h] [rbp-108h]
  _OWORD v105[3]; // [rsp+140h] [rbp-F8h] BYREF
  _BYTE v106[128]; // [rsp+170h] [rbp-C8h] BYREF

  v7 = (volatile signed __int32 *)a5;
  v90 = a2;
  v92 = a4;
  v91 = a1;
  v96 = a3;
  v85 = *((_DWORD *)a1 + 20) >> 5;
  Buf2 = a6;
  v11 = a1[7];
  v12 = *a1;
  *a7 = 0;
  v97 = a7;
  v100 = (volatile signed __int32 *)a5;
  v94 = 0LL;
  v87 = 0LL;
  v13 = ((v12 & 0xFFFFFFFFFFFFF000uLL) - (v12 & 0xFFFFFFFFFFFF0000uLL)) >> 12;
  v14 = (*(_DWORD *)(a2 + 48) & 0x200000) == 0;
  Buf1 = 0LL;
  v93 = v11;
  v103 = 0LL;
  v99 = v12 & 0xFFFFFFFFFFFF0000uLL;
  v104 = 0LL;
  v86 = v13;
  v101 = 0LL;
  if ( v14 )
  {
    ProtoPteAddress = MiGetProtoPteAddress(a2, v12 >> 12, 4, &v94);
    if ( !ProtoPteAddress || !v94 || ProtoPteAddress != a3 )
      return v7;
    v16 = *(_QWORD *)(v94 + 8);
    v17 = v16 + 8 * (*(unsigned int *)(v94 + 44) - (unsigned __int64)(*(_DWORD *)(v94 + 52) & 0x3FFFFFFF));
    if ( (a3 & 0xFFFFFFFFFFFFF000uLL) > v16 )
      v16 = a3 & 0xFFFFFFFFFFFFF000uLL;
    if ( v17 > (a3 & 0xFFFFFFFFFFFFF000uLL) + 4096 )
      v17 = (a3 & 0xFFFFFFFFFFFFF000uLL) + 4096;
    if ( v16 >= v17 )
      return v7;
    v18 = 8 * v13;
    if ( a3 - 8 * v13 < v16 || a3 + 8 * (16 - v13) > v17 )
      return v7;
    v19 = *(_WORD *)(*(_QWORD *)v94 + 60LL) & 0x3FF;
  }
  else
  {
    v20 = *((_QWORD *)a5 + 1) | 0x8000000000000000uLL;
    if ( v20 < 0xFFFFF68000000000uLL || v20 > 0xFFFFF6FFFFFFFFFFuLL )
      return v7;
    v19 = *(unsigned __int16 *)(v11 + 174);
    v18 = 8 * v13;
  }
  v21 = a3;
  v22 = 16LL;
  v23 = (__int64 *)v106;
  v24 = v21 - v18;
  v25 = 1LL;
  v26 = *(_QWORD *)(qword_140C674C8 + 8 * v19);
  do
  {
    v27 = MI_READ_PTE_LOCK_FREE(v24);
    v24 += 8LL;
    *v23++ = v27;
    --v22;
  }
  while ( v22 );
  v28 = (__int64 *)v106;
  v29 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a5 + 0x220000000000LL) >> 4);
  v30 = -1LL;
  v31 = 0;
  BugCheckParameter2 = v29;
  BugCheckParameter3 = -1LL;
  while ( 1 )
  {
    v98 = *v28;
    if ( (v98 & 1) != 0 )
      break;
    ++v31;
    ++v28;
    if ( v31 >= 0x10 )
      goto LABEL_24;
  }
  v32 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v98);
  v30 = (v32 >> 12) & 0xFFFFFFFFFFLL;
  BugCheckParameter3 = v30;
  if ( (unsigned __int16)v32 >> 12 != (unsigned __int64)v31 )
    return v7;
  LOBYTE(v29) = BugCheckParameter2;
LABEL_24:
  v89 = 0LL;
  if ( v31 != 16 )
  {
    v34 = v86 - v31 + v30;
    BugCheckParameter3 = v34;
    if ( v34 > qword_140C65CA0 || !_bittest64((const signed __int64 *)(48 * v34 - 0x21FFFFFFFFD8LL), 0x36u) )
      return v7;
    v89 = (unsigned __int8 *)(48 * v34 - 0x220000000000LL);
    if ( v89 != a5 )
    {
      v33 = *((_DWORD *)MiSearchNumaNodeTable(v34) + 2);
      goto LABEL_34;
    }
LABEL_31:
    *v97 = 1;
    return v7;
  }
  if ( (v29 & 0xF) == v86 )
    goto LABEL_31;
  if ( (int)MiAcquireNonPagedResources(v26, 1uLL, 0LL, 0) < 0 )
    return v7;
  LOBYTE(v22) = 1;
  MiInitializePageColorBase(v93, (*(_DWORD *)(v90 + 48) >> 12) & 0x7F, (__int64)&v101);
  v33 = HIDWORD(v101) >> byte_140C65B8D;
  _InterlockedAdd((volatile signed __int32 *)v101, 1u);
LABEL_34:
  *(_BYTE *)(*(_QWORD *)(v26 + 16) + 25408LL * v33 + 3251) = 1;
  *((_QWORD *)a5 + 3) &= 0xC000000000000000uLL;
  if ( !(unsigned int)MiAddLockedPageCharge((__int64)a5, 0) )
  {
    if ( (_BYTE)v22 == 1 )
    {
      MiReturnCommit(v26, 1LL);
      if ( (unsigned __int16 *)v26 != MiSystemPartition )
        goto LABEL_46;
      CurrentPrcb = KeGetCurrentPrcb();
      CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
      if ( (_DWORD)CachedResidentAvailable == -1 )
        goto LABEL_46;
      if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
      {
        do
        {
          v40 = _InterlockedCompareExchange(
                  (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                  CachedResidentAvailable + 1,
                  CachedResidentAvailable);
          v14 = (_DWORD)CachedResidentAvailable == v40;
          LODWORD(CachedResidentAvailable) = v40;
          if ( v14 )
            return v7;
        }
        while ( v40 != -1 && (unsigned __int64)(v40 + 1LL) <= 0x100 );
      }
      if ( (int)CachedResidentAvailable > 192
        && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                                192,
                                                CachedResidentAvailable) )
      {
        v25 = (int)CachedResidentAvailable - 192 + 1LL;
      }
      if ( v25 )
LABEL_46:
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v26 + 17280), v25);
    }
    return v7;
  }
  v41 = *((_OWORD *)a5 + 1);
  v105[0] = *(_OWORD *)a5;
  v42 = *((_OWORD *)a5 + 2);
  v105[1] = v41;
  v105[2] = v42;
  _InterlockedAnd64((volatile signed __int64 *)a5 + 3, 0x7FFFFFFFFFFFFFFFuLL);
  if ( Buf2 )
  {
    MiObtainProtoReference((__int64)Buf2, 0LL, v36, v37);
    v43 = *((_OWORD *)Buf2 + 1);
    Buf1 = *(_OWORD *)Buf2;
    v44 = *((_OWORD *)Buf2 + 2);
    v103 = v43;
    v104 = v44;
    MiUnlockProtoPoolPage((__int64)Buf2, 0x11u);
  }
  v93 = MiReleaseFaultState((__int64)(v91 + 7), 1u, v83);
  if ( (_BYTE)v22 == 1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      if ( CurrentIrql == 2 )
        LODWORD(v47) = 4;
      else
        v47 = (-1LL << (CurrentIrql + 1)) & 4;
      SchedulerAssist[5] |= v47;
    }
    v83[0] = CurrentIrql;
    v48 = MiProtectionToCacheAttribute((v92 >> 5) & 0x1F);
    LargePage = MiGetLargePage(v26, v99, v49, v33, v48, 4, 0LL);
    v51 = (char *)LargePage;
    if ( !LargePage )
    {
      if ( (_DWORD)KiIrqlFlags )
      {
        v52 = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v52 <= 0xFu && CurrentIrql <= 0xFu && v52 >= 2u )
        {
          v53 = KeGetCurrentPrcb();
          v54 = v53->SchedulerAssist;
          v55 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v14 = (v55 & v54[5]) == 0;
          v54[5] &= v55;
          if ( v14 )
            KiRemoveSystemWorkPriorityKick((__int64)v53);
        }
      }
      __writecr8(CurrentIrql);
      MiReturnCommit(v26, 1LL);
      v56 = 1LL;
      if ( (unsigned __int16 *)v26 != MiSystemPartition )
        goto LABEL_75;
      v57 = KeGetCurrentPrcb();
      v58 = (int)v57->CachedResidentAvailable;
      if ( (_DWORD)v58 == -1 )
        goto LABEL_75;
      if ( (unsigned __int64)(v58 + 1) <= 0x100 )
      {
        do
        {
          v59 = _InterlockedCompareExchange((volatile signed __int32 *)&v57->CachedResidentAvailable, v58 + 1, v58);
          v14 = (_DWORD)v58 == v59;
          LODWORD(v58) = v59;
          if ( v14 )
            goto LABEL_76;
        }
        while ( v59 != -1 && (unsigned __int64)(v59 + 1LL) <= 0x100 );
      }
      if ( (int)v58 > 192
        && (_DWORD)v58 == _InterlockedCompareExchange(
                            (volatile signed __int32 *)&v57->CachedResidentAvailable,
                            192,
                            v58) )
      {
        v56 = (int)v58 - 192 + 1LL;
      }
      if ( v56 )
LABEL_75:
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v26 + 17280), v56);
LABEL_76:
      ContiguousPages = -1073741801;
      goto LABEL_96;
    }
    MiConvertEntireLargePageToSmall(LargePage, 2, 2, 1, 0LL, 0LL, 0LL);
    v61 = v86;
    v62 = 16LL;
    v63 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v51 + 0x220000000000LL) >> 4);
    v87 = v63;
    do
    {
      if ( (MiFlags & 0x80u) != 0LL && (++dword_140C68060 & MmPageValidationFrequency) == 0 )
      {
        MiArePageContentsZero(v63, 1uLL);
        v63 = v87;
      }
      if ( (v63 & 0xF) == v61 )
      {
        BugCheckParameter3 = v63;
        v89 = (unsigned __int8 *)v51;
      }
      else
      {
        MiReleaseFreshPage((__int64)v51);
        v63 = v87;
      }
      ++v63;
      v51 += 48;
      v87 = v63;
      --v62;
    }
    while ( v62 );
    v7 = v100;
    if ( (_DWORD)KiIrqlFlags )
    {
      v64 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v64 <= 0xFu && CurrentIrql <= 0xFu && v64 >= 2u )
      {
        v65 = KeGetCurrentPrcb();
        v66 = v65->SchedulerAssist;
        v67 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v14 = (v67 & v66[5]) == 0;
        v66[5] &= v67;
        if ( v14 )
          KiRemoveSystemWorkPriorityKick((__int64)v65);
      }
    }
    __writecr8(CurrentIrql);
    ContiguousPages = 0;
  }
  else
  {
    v89 = (unsigned __int8 *)(48 * BugCheckParameter3 - 0x220000000000LL);
    v68 = (((v85 & 1) == 0) + 8256) << 17;
    if ( KeGetCurrentThread() == *(struct _KTHREAD **)&KeSwapProcessOrStackThread )
      v68 |= 8u;
    ContiguousPages = MiFindContiguousPagesEx(
                        v26,
                        BugCheckParameter3,
                        BugCheckParameter3,
                        0LL,
                        0,
                        1uLL,
                        a5[34] >> 6,
                        v33,
                        0x80000000,
                        v68,
                        0,
                        0LL,
                        &v87);
  }
LABEL_96:
  v69 = 0;
  MiRelockFaultState((__int64)(v91 + 7), v93);
  if ( Buf2 )
  {
    *((_QWORD *)&v103 + 1) |= 0x8000000000000000uLL;
    MiRelockProtoPoolPage((__int64)Buf2, 0LL);
    v70 = Buf2;
    v85 = 0;
    if ( _interlockedbittestandset64((volatile signed __int32 *)Buf2 + 6, 0x3FuLL) )
    {
      v71 = v70;
      do
      {
        do
          KeYieldProcessorEx(&v85);
        while ( *((__int64 *)v71 + 3) < 0 );
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)v71 + 6, 0x3FuLL) );
      v70 = Buf2;
    }
    v14 = memcmp(&Buf1, v70, 0x30uLL) == 0;
    v72 = Buf2;
    v69 = !v14;
    _InterlockedAnd64((volatile signed __int64 *)Buf2 + 3, 0x7FFFFFFFFFFFFFFFuLL);
    MiReturnPfnReferenceCount((__int64)v72);
  }
  LODWORD(v90) = 0;
  while ( _interlockedbittestandset64(v7 + 6, 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v90);
    while ( *((__int64 *)v7 + 3) < 0 );
  }
  if ( !v69
    && !memcmp(v105, (const void *)v7, 0x30uLL)
    && (*((_QWORD *)v7 + 3) & 0x4000000000000000LL) == 0
    && (unsigned int)MiIsFaultPteIntact((__int64)v91, *v91, v96, &v92) )
  {
    if ( ContiguousPages < 0 )
    {
      MiRemoveLockedPageCharge((__int64)v7, v76, v77);
      return v7;
    }
    MiCopyPage(BugCheckParameter3, BugCheckParameter2, (v92 & 0x40) != 0 ? 16 : 8);
    v78 = v89;
    MiSwapHardFaultPage(v96, v7, v89);
    v78[16] = 0;
    v79 = 1LL;
    if ( (unsigned __int16 *)v26 != MiSystemPartition )
      goto LABEL_136;
    v80 = KeGetCurrentPrcb();
    v81 = (int)v80->CachedResidentAvailable;
    if ( (_DWORD)v81 == -1 )
      goto LABEL_136;
    if ( (unsigned __int64)(v81 + 1) <= 0x100 )
    {
      do
      {
        v82 = _InterlockedCompareExchange((volatile signed __int32 *)&v80->CachedResidentAvailable, v81 + 1, v81);
        v14 = (_DWORD)v81 == v82;
        LODWORD(v81) = v82;
        if ( v14 )
          goto LABEL_137;
      }
      while ( v82 != -1 && (unsigned __int64)(v82 + 1LL) <= 0x100 );
    }
    if ( (int)v81 > 192
      && (_DWORD)v81 == _InterlockedCompareExchange((volatile signed __int32 *)&v80->CachedResidentAvailable, 192, v81) )
    {
      v79 = (int)v81 - 192 + 1LL;
    }
    if ( v79 )
LABEL_136:
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v26 + 17280), v79);
LABEL_137:
    *v97 = 1;
    return (volatile signed __int32 *)v78;
  }
  if ( ContiguousPages >= 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)v7 + 3, 0x7FFFFFFFFFFFFFFFuLL);
    MiReleaseFreshPage((__int64)v89);
    MiReturnCommit(v26, 1LL);
    if ( (unsigned __int16 *)v26 != MiSystemPartition )
      goto LABEL_119;
    v73 = KeGetCurrentPrcb();
    v74 = (int)v73->CachedResidentAvailable;
    if ( (_DWORD)v74 == -1 )
      goto LABEL_119;
    if ( (unsigned __int64)(v74 + 1) <= 0x100 )
    {
      do
      {
        v75 = _InterlockedCompareExchange((volatile signed __int32 *)&v73->CachedResidentAvailable, v74 + 1, v74);
        v14 = (_DWORD)v74 == v75;
        LODWORD(v74) = v75;
        if ( v14 )
          goto LABEL_120;
      }
      while ( v75 != -1 && (unsigned __int64)(v75 + 1LL) <= 0x100 );
    }
    if ( (int)v74 > 192
      && (_DWORD)v74 == _InterlockedCompareExchange((volatile signed __int32 *)&v73->CachedResidentAvailable, 192, v74) )
    {
      v25 = (int)v74 - 192 + 1LL;
    }
    if ( v25 )
LABEL_119:
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v26 + 17280), v25);
LABEL_120:
    LODWORD(Buf2) = 0;
    while ( _interlockedbittestandset64(v7 + 6, 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&Buf2);
      while ( *((__int64 *)v7 + 3) < 0 );
    }
  }
  MiRemoveLockedPageChargeAndDecRef((__int64)v7);
  return 0LL;
}
