/*
 * XREFs of MiCopyOnWrite @ 0x140316400
 * Callers:
 *     MiMakeProtoPrivate @ 0x1402011DC (MiMakeProtoPrivate.c)
 *     MiFaultInPagedPool @ 0x1402019FC (MiFaultInPagedPool.c)
 *     MiLockPagedAddress @ 0x140245DF4 (MiLockPagedAddress.c)
 *     MiSystemFault @ 0x140279590 (MiSystemFault.c)
 *     MiCopyToUserVa @ 0x14028DF40 (MiCopyToUserVa.c)
 *     MiSplitPrivatePage @ 0x14028E238 (MiSplitPrivatePage.c)
 *     MiValidFault @ 0x140291FC0 (MiValidFault.c)
 *     MiLockCode @ 0x140312BB0 (MiLockCode.c)
 *     MiProbeLeafPteAccess @ 0x14031C290 (MiProbeLeafPteAccess.c)
 *     MiCompleteProtoPteFault @ 0x1403203D0 (MiCompleteProtoPteFault.c)
 *     MiSetProtectionOnSection @ 0x14032D1C0 (MiSetProtectionOnSection.c)
 *     MiWalkVaRange @ 0x14033E5D0 (MiWalkVaRange.c)
 *     MiMakeDriverPagesPrivate @ 0x14033F41C (MiMakeDriverPagesPrivate.c)
 *     MmProtectPool @ 0x140367190 (MmProtectPool.c)
 *     MiValidVirtualizationFault @ 0x14045C52A (MiValidVirtualizationFault.c)
 *     MiLockDriverPageRange @ 0x140581D58 (MiLockDriverPageRange.c)
 *     MiSplitReducedCommitClonePage @ 0x1405845D4 (MiSplitReducedCommitClonePage.c)
 *     MiReplaceImportEntry @ 0x1405905F0 (MiReplaceImportEntry.c)
 *     MiPrepareImagePagesForHotPatch @ 0x1405A3818 (MiPrepareImagePagesForHotPatch.c)
 * Callees:
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     MiLocateCloneAddress @ 0x140234F14 (MiLocateCloneAddress.c)
 *     MiDecrementCombinedPte @ 0x1402399A8 (MiDecrementCombinedPte.c)
 *     MiChangePageAttribute @ 0x140267E78 (MiChangePageAttribute.c)
 *     MiGetAnyMultiplexedVm @ 0x14026DFC0 (MiGetAnyMultiplexedVm.c)
 *     MiDecrementShareCount @ 0x140273FD0 (MiDecrementShareCount.c)
 *     MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED @ 0x140274148 (MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED.c)
 *     MI_INTERLOCKED_EXCHANGE_PTE @ 0x1402746C0 (MI_INTERLOCKED_EXCHANGE_PTE.c)
 *     MiGetSystemRegionType @ 0x14027B080 (MiGetSystemRegionType.c)
 *     MiGetSessionVm @ 0x14027B520 (MiGetSessionVm.c)
 *     MiUnlockVadTree @ 0x1402806E0 (MiUnlockVadTree.c)
 *     MiReturnCommit @ 0x14028CE10 (MiReturnCommit.c)
 *     MiIdentifyPfn @ 0x1402B1E40 (MiIdentifyPfn.c)
 *     MiSwizzleInvalidPte @ 0x1402CCC50 (MiSwizzleInvalidPte.c)
 *     MiInsertTbFlushEntry @ 0x1402CF280 (MiInsertTbFlushEntry.c)
 *     MiUnlockPageTableCharges @ 0x1402E5B0C (MiUnlockPageTableCharges.c)
 *     MiCopyPage @ 0x1402E7D60 (MiCopyPage.c)
 *     MiLockVadTree @ 0x1402ED128 (MiLockVadTree.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     MiLocateAddress @ 0x1403126F0 (MiLocateAddress.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1403127E0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     MiGetPage @ 0x1403250B0 (MiGetPage.c)
 *     MiChargeCommit @ 0x14032A4B0 (MiChargeCommit.c)
 *     MiFlushTbList @ 0x14032F1B0 (MiFlushTbList.c)
 *     MiLogPageAccess @ 0x140333040 (MiLogPageAccess.c)
 *     MiComputeFaultNode @ 0x140339370 (MiComputeFaultNode.c)
 *     MiInitializePageColorBase @ 0x140339C20 (MiInitializePageColorBase.c)
 *     MiGetWsleProtection @ 0x14033A4C0 (MiGetWsleProtection.c)
 *     MiWriteValidPteVolatile @ 0x14033A510 (MiWriteValidPteVolatile.c)
 *     MiSetPfnTbFlushStamp @ 0x14033C33C (MiSetPfnTbFlushStamp.c)
 *     PsGetPagePriorityThread @ 0x14033D720 (PsGetPagePriorityThread.c)
 *     EtwTraceKernelEvent @ 0x14035EDE4 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MiDecrementCloneBlockReference @ 0x1405BA498 (MiDecrementCloneBlockReference.c)
 */

__int64 __fastcall MiCopyOnWrite(ULONG_PTR BugCheckParameter2, unsigned __int64 a2, ULONG_PTR Page, int a4)
{
  ULONG_PTR v7; // rdi
  __int64 v8; // r15
  unsigned int v9; // r14d
  BOOL v10; // r12d
  _KPROCESS *Process; // rsi
  unsigned int SystemRegionType; // eax
  int v13; // ecx
  __int64 SessionVm; // r13
  unsigned int v15; // esi
  bool v16; // zf
  unsigned __int64 v17; // rdi
  unsigned __int8 v18; // cl
  int v19; // eax
  char v20; // di
  __int64 v21; // rax
  int v22; // eax
  signed __int32 v23; // eax
  __int64 v24; // r14
  volatile LONG *v25; // rcx
  volatile LONG *v26; // rdi
  unsigned __int64 v27; // rdi
  ULONG_PTR v28; // rcx
  unsigned __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // rdi
  unsigned __int64 v32; // rdx
  __int64 v33; // r9
  __int64 v34; // r8
  signed __int64 v35; // rax
  signed __int64 v36; // rax
  struct _KTHREAD *CurrentThread; // rcx
  unsigned int PagePriorityThread; // eax
  unsigned int v39; // edi
  unsigned int v40; // edx
  __int16 v41; // di
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // r9
  unsigned __int64 v45; // rax
  __int64 v46; // rbx
  unsigned __int64 v47; // rdx
  __int64 *v48; // rdi
  __int64 v49; // rbx
  _QWORD *CloneAddress; // rax
  ULONG_PTR v51; // rdx
  int v53; // eax
  __int64 v54; // r14
  char v55; // al
  ULONG_PTR BugCheckParameter4; // rdx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v58; // rax
  struct _LIST_ENTRY *v59; // rdx
  __int64 v60; // rax
  __int64 **v61; // r14
  unsigned int v62; // eax
  unsigned int v63; // ecx
  char v64; // al
  struct _LIST_ENTRY *v65; // r9
  __int64 v66; // rax
  struct _LIST_ENTRY *v67; // rdx
  __int64 v68; // rax
  __int64 *v69; // rcx
  int v70; // [rsp+30h] [rbp-D0h]
  int v71; // [rsp+34h] [rbp-CCh]
  __int64 v72; // [rsp+38h] [rbp-C8h]
  ULONG_PTR v73; // [rsp+38h] [rbp-C8h]
  unsigned __int64 v74; // [rsp+38h] [rbp-C8h]
  unsigned int v75; // [rsp+40h] [rbp-C0h]
  unsigned int v76; // [rsp+40h] [rbp-C0h]
  int v77; // [rsp+44h] [rbp-BCh] BYREF
  int v78; // [rsp+48h] [rbp-B8h]
  ULONG_PTR BugCheckParameter2a; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v80; // [rsp+58h] [rbp-A8h]
  __int64 v81; // [rsp+60h] [rbp-A0h] BYREF
  int v82; // [rsp+68h] [rbp-98h] BYREF
  BOOL v83; // [rsp+6Ch] [rbp-94h]
  int v84; // [rsp+70h] [rbp-90h]
  __int64 **Address; // [rsp+78h] [rbp-88h] BYREF
  _KPROCESS *v86; // [rsp+80h] [rbp-80h]
  unsigned __int64 v87; // [rsp+88h] [rbp-78h]
  __int64 v88; // [rsp+90h] [rbp-70h]
  __int128 v89; // [rsp+98h] [rbp-68h] BYREF
  __int64 v90; // [rsp+A8h] [rbp-58h] BYREF
  ULONG_PTR v91; // [rsp+B0h] [rbp-50h]
  __int128 v92; // [rsp+B8h] [rbp-48h] BYREF
  __int128 v93; // [rsp+C8h] [rbp-38h]
  __int128 v94; // [rsp+D8h] [rbp-28h]
  __int128 v95; // [rsp+E8h] [rbp-18h]
  __int64 v96; // [rsp+F8h] [rbp-8h]
  signed __int64 v97; // [rsp+100h] [rbp+0h]
  __int128 v98; // [rsp+108h] [rbp+8h]
  __int128 v99; // [rsp+118h] [rbp+18h]
  __int128 v100; // [rsp+128h] [rbp+28h]
  _QWORD v101[18]; // [rsp+140h] [rbp+40h] BYREF
  _QWORD v102[2]; // [rsp+1D0h] [rbp+D0h] BYREF
  int v103; // [rsp+1E0h] [rbp+E0h] BYREF
  __int16 v104; // [rsp+1E4h] [rbp+E4h]
  __int16 v105; // [rsp+1E6h] [rbp+E6h]
  __int64 v106; // [rsp+1E8h] [rbp+E8h]
  __int64 v107; // [rsp+1F0h] [rbp+F0h]
  __int64 v108; // [rsp+1F8h] [rbp+F8h]
  _BYTE v109[152]; // [rsp+200h] [rbp+100h] BYREF

  v80 = a2;
  BugCheckParameter2a = BugCheckParameter2;
  v78 = a4;
  v105 = 0;
  v89 = 0LL;
  memset(v109, 0, sizeof(v109));
  v7 = *(_QWORD *)a2;
  v92 = 0LL;
  v93 = 0LL;
  v77 = MiPteInShadowRange(a2);
  if ( v77
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v7 & 1) != 0
    && ((v7 & 0x20) == 0 || (v7 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v58 = *((_QWORD *)&Flink->Flink + ((a2 >> 3) & 0x1FF));
      if ( (v58 & 0x20) != 0 )
        v7 |= 0x20uLL;
      if ( (v58 & 0x42) != 0 )
        v7 |= 0x42uLL;
    }
  }
  v81 = v7;
  v91 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v81) >> 12) & 0xFFFFFFFFFFLL;
  v8 = 48 * v91 - 0x220000000000LL;
  Address = 0LL;
  v9 = 0;
  v10 = (v7 & 0x200) == 0;
  v72 = *(_QWORD *)(v8 + 8);
  v87 = v72 | 0x8000000000000000uLL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v86 = Process;
  SystemRegionType = MiGetSystemRegionType(BugCheckParameter2);
  if ( SystemRegionType == 1 )
  {
    SessionVm = MiGetSessionVm();
    v15 = (v7 & 0x200) == 0;
    if ( ((v72 >= 0) & !_bittest64((const signed __int64 *)(v8 + 40), 0x28u)) != 0 && v72 )
      v15 = v10 | 2;
    v70 = 2;
  }
  else if ( SystemRegionType == 12 )
  {
    v70 = 0;
    SessionVm = (__int64)MiGetAnyMultiplexedVm(1);
    v15 = (v7 & 0x200) == 0;
    if ( ((v72 >= 0) & !_bittest64((const signed __int64 *)(v8 + 40), 0x28u)) != 0 && v72 )
      v15 = v10 | 2;
  }
  else
  {
    if ( SystemRegionType <= 0x10 )
    {
      v13 = 82432;
      if ( _bittest(&v13, SystemRegionType) )
        KeBugCheckEx(0x1Au, 0x3300uLL, BugCheckParameter2, v7, 2uLL);
    }
    if ( SystemRegionType == 6 )
    {
      v70 = 0;
      v15 = v10 | 2;
      SessionVm = (__int64)MiGetAnyMultiplexedVm(2);
      if ( ((v72 >= 0) & !_bittest64((const signed __int64 *)(v8 + 40), 0x28u)) == 0 || !v72 )
        KeBugCheckEx(0x1Au, 0x3300uLL, BugCheckParameter2a, v7, BugCheckParameter4);
    }
    else
    {
      if ( SystemRegionType == 5 )
        KeBugCheckEx(0x1Au, 0x3300uLL, BugCheckParameter2, v7, 1uLL);
      if ( Process[1].Affinity.StaticBitmap[10] )
        return 3221226548LL;
      SessionVm = (__int64)&Process[1].ActiveProcessors.StaticBitmap[26];
      v70 = 1;
      v15 = (v7 & 0x200) == 0;
      if ( ((v72 >= 0) & !_bittest64((const signed __int64 *)(v8 + 40), 0x28u)) != 0 && v72 )
        v15 = v10 | 2;
      memset(v101, 0, 0x88uLL);
      v101[0] = BugCheckParameter2a;
      v101[7] = SessionVm;
      v9 = MiComputeFaultNode(v101, 0LL, &Address);
    }
  }
  v75 = 0;
  v16 = (*(_BYTE *)v8 & 1) == 0;
  v88 = *(_QWORD *)(qword_140C51F48 + 8LL * *(unsigned __int16 *)(SessionVm + 174));
  v83 = !v16;
  v73 = ((BugCheckParameter2a >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v17 = *(_QWORD *)v73;
  if ( (unsigned int)MiPteInShadowRange(v73)
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v17 & 1) != 0
    && ((v17 & 0x20) == 0 || (v17 & 0x42) == 0) )
  {
    v59 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v59 )
    {
      v60 = *((_QWORD *)&v59->Flink + ((v73 >> 3) & 0x1FF));
      if ( (v60 & 0x20) != 0 )
        v17 |= 0x20uLL;
      if ( (v60 & 0x42) != 0 )
        v17 |= 0x42uLL;
    }
  }
  v18 = HIBYTE(v17) & 0xF | (16 * ((v17 >> 60) & 7));
  v84 = v78 & 1;
  if ( (v78 & 1) != 0 || (HIBYTE(v17) & 0xF) == 0xA )
  {
    v19 = v70;
  }
  else
  {
    v19 = v70;
    if ( (HIBYTE(v17) & 0xF) == 9 )
    {
      v18 = (16 * ((v17 >> 60) & 7)) | 0xA;
    }
    else if ( v70 != 1 && (*(_BYTE *)(v8 + 35) & 8) != 0 )
    {
      v18 = (16 * ((v17 >> 60) & 7)) | 0xA;
    }
  }
  v20 = v18 & 0xF;
  if ( (v18 & 0xF) == 0xA )
    goto LABEL_21;
  if ( v20 == 8 && v19 != 2 )
  {
    v75 = 1;
    if ( (*(_DWORD *)(v8 + 16) & 0x400LL) != 0 )
      v75 = 2;
  }
  LODWORD(v21) = MiGetWsleProtection(BugCheckParameter2a, v18);
  if ( !(_DWORD)v21 )
LABEL_21:
    v21 = (*(_QWORD *)(v8 + 16) >> 5) & 0x1FLL;
  v22 = MmMakeProtectNotWriteCopy[(unsigned int)v21];
  v71 = v22;
  if ( Page != -1LL )
  {
LABEL_25:
    if ( v75 )
    {
      if ( v75 >= 2 )
      {
        v54 = *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(v8 + 40) >> 43) & 0x3FFLL));
        MiReturnCommit(v54, 1LL);
        if ( v70 == 1 )
          _InterlockedDecrement64((volatile signed __int64 *)(v54 + 17520));
      }
      MiUnlockPageTableCharges(48 * (*(_QWORD *)(v8 + 40) & 0xFFFFFFFFFFLL) - 0x220000000000LL, 1);
      v22 = v71;
    }
    if ( v22 == 24 )
    {
      v61 = Address;
      LOBYTE(v71) = 1;
      if ( Address
        || (MiLockVadTree(1),
            Address = MiLocateAddress(BugCheckParameter2a),
            v61 = Address,
            MiUnlockVadTree(1, 0x11u),
            v61) )
      {
        v62 = (*((_DWORD *)v61 + 12) >> 7) & 0x1F;
        v63 = v62 >> 3;
        if ( v62 >> 3 == 3 )
        {
          if ( (v62 & 7) != 0 )
            LOBYTE(v71) = 25;
        }
        else
        {
          v64 = 1;
          if ( v63 == 1 )
            v64 = 9;
          LOBYTE(v71) = v64;
        }
      }
    }
    v24 = 48 * Page - 0x220000000000LL;
    *(_QWORD *)(v24 + 16) = MiSwizzleInvalidPte(32LL * (v71 & 0x1F));
    if ( v20 == 10 )
    {
      v29 = v80;
    }
    else
    {
      v25 = (volatile LONG *)&unk_140C53D00;
      if ( (*(_BYTE *)(SessionVm + 184) & 7) != 2 )
        v25 = (volatile LONG *)(SessionVm + 192);
      v26 = (volatile LONG *)(SessionVm + 192);
      ExAcquireSpinLockSharedAtDpcLevel(v25 + 16);
      _InterlockedExchangeAdd64((volatile signed __int64 *)(SessionVm + 152), 1uLL);
      if ( BugCheckParameter2a < 0xFFFFF68000000000uLL || BugCheckParameter2a > 0xFFFFF6FFFFFFFFFFuLL )
        _InterlockedExchangeAdd64((volatile signed __int64 *)(SessionVm + 136), 1uLL);
      if ( (*(_BYTE *)(SessionVm + 184) & 7) == 2 )
        v26 = (volatile LONG *)&unk_140C53D00;
      ExReleaseSpinLockSharedFromDpcLevel(v26 + 16);
      v27 = *(_QWORD *)v73;
      if ( !(unsigned int)MiPteInShadowRange(v73)
        || (MiFlags & 0xC00000) == 0
        || KeGetCurrentThread()->ApcState.Process->AddressPolicy == 1
        || (v27 & 1) == 0
        || (v27 & 0x20) != 0 && (v27 & 0x42) != 0 )
      {
        v28 = v73;
      }
      else
      {
        v28 = v73;
      }
      MiWriteValidPteVolatile(v28, 0x80000000LL);
      v29 = v80;
      v30 = *(_QWORD *)v80;
      if ( v77
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v30 & 1) != 0
        && ((v30 & 0x20) == 0 || (v30 & 0x42) == 0) )
      {
        v65 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v65 )
        {
          v66 = *((_QWORD *)&v65->Flink + ((v80 >> 3) & 0x1FF));
          if ( (v66 & 0x20) != 0 )
            v30 |= 0x20uLL;
          if ( (v66 & 0x42) != 0 )
            v30 |= 0x42uLL;
        }
      }
      v81 = v30;
    }
    *(_WORD *)(v24 + 32) = 1;
    v74 = ((v29 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v31 = *(_QWORD *)v74;
    if ( (unsigned int)MiPteInShadowRange(v74)
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v31 & 1) != 0
      && ((v31 & 0x20) == 0 || (v31 & 0x42) == 0) )
    {
      v67 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v67 )
      {
        v68 = *((_QWORD *)&v67->Flink + ((v74 >> 3) & 0x1FF));
        if ( (v68 & 0x20) != 0 )
          v31 |= 0x20uLL;
        if ( (v68 & 0x42) != 0 )
          v31 |= 0x42uLL;
      }
    }
    v90 = v31;
    v32 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v90) >> 12) & 0xFFFFFFFFFFLL;
    v34 = 0xFFFFFF0000000000uLL;
    v35 = *(_QWORD *)(v24 + 40);
    v96 = 0LL;
    v97 = v35;
    v94 = 0LL;
    v95 = 0LL;
    v98 = 0LL;
    v99 = 0LL;
    v100 = 0LL;
    v36 = _InterlockedCompareExchange64((volatile signed __int64 *)(v24 + 40), v32 | v35 & 0xFFFFFF0000000000uLL, v35);
    for ( *((_QWORD *)&v100 + 1) = v36; v97 != v36; *((_QWORD *)&v100 + 1) = v36 )
    {
      v97 = v36;
      v36 = _InterlockedCompareExchange64((volatile signed __int64 *)(v24 + 40), v32 | v36 & 0xFFFFFF0000000000uLL, v36);
    }
    CurrentThread = KeGetCurrentThread();
    if ( ((__int64)CurrentThread[1].Queue & 0x100) != 0 )
    {
      v39 = (unsigned __int64)((__int64)CurrentThread[1].Queue & 0xE00) >> 9;
      v76 = v39;
    }
    else
    {
      PagePriorityThread = PsGetPagePriorityThread(CurrentThread);
      LOBYTE(v39) = PagePriorityThread;
      v76 = PagePriorityThread;
    }
    if ( (DWORD1(PerfGlobalGroupMask) & 0x8000001) != 0 )
      v15 |= 4u;
    v82 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v24 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v82, v32, v34, v33);
      while ( *(__int64 *)(v24 + 24) < 0 );
    }
    if ( v83 )
      *(_QWORD *)v24 |= 1uLL;
    *(_BYTE *)(v24 + 34) |= 0x10u;
    if ( v70 || (((v78 & 1) == 0) & (*(_BYTE *)(v8 + 35) >> 3)) == 0 )
      *(_BYTE *)(v24 + 35) &= ~8u;
    else
      *(_BYTE *)(v24 + 35) |= 8u;
    v40 = *(unsigned __int8 *)(v8 + 34) >> 6;
    if ( *(unsigned __int8 *)(v24 + 34) >> 6 != v40 )
      MiChangePageAttribute(48 * Page - 0x220000000000LL, v40, 1);
    MiSetPfnTbFlushStamp(48 * Page - 0x220000000000LL, 0LL, 1LL);
    *(_QWORD *)(v24 + 24) = *(_QWORD *)(v24 + 24) & 0xC000000000000000uLL | 1;
    *(_BYTE *)(v24 + 35) ^= (*(_BYTE *)(v24 + 35) ^ v39) & 7;
    *(_QWORD *)(v24 + 8) = v80;
    *(_BYTE *)(v24 + 34) = *(_BYTE *)(v24 + 34) & 0xF8 | 6;
    if ( v15 >= 4 )
    {
      MiIdentifyPfn((__m128i *)(48 * Page - 0x220000000000LL), &v92);
      _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      *((_QWORD *)&v93 + 1) |= 8uLL;
      v102[0] = &v92;
      v102[1] = 32LL;
      EtwTraceKernelEvent((unsigned int)v102, 1, 671088641, 642, 289413892);
    }
    else
    {
      _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    __incgsdword(0x2E94u);
    v41 = 1;
    if ( (v71 & 2) != 0 )
    {
      if ( (MiFlags & 0x20000) == 0 && (MiFlags & 0x8000) != 0 )
      {
        if ( BugCheckParameter2a >= 0xFFFF800000000000uLL )
        {
          v41 = 17;
          if ( (v78 & 2) != 0 )
            v41 = 49;
LABEL_58:
          MiCopyPage(Page, v91, 0LL, v41);
          if ( dword_140C52B68 && v76 >= dword_140C52B6C )
            MiLogPageAccess(SessionVm, v80);
          v45 = v81;
          if ( (v15 & 1) == 0 )
          {
            if ( v81 < 0 || v70 != 1 )
              v45 = v81 | 0x42;
            v45 = v45 & 0xFFFFFFFFFFFFF5DFuLL | 0x820;
          }
          v106 = 20LL;
          v103 = v70;
          v46 = v45 ^ (v45 ^ (Page << 12)) & 0xFFFFFFFFFF000LL;
          v104 = 0;
          v107 = 0LL;
          v108 = 0LL;
          if ( (v78 & 8) != 0 && !MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED((__int64 *)v80, v46, 4) )
            v15 |= 8u;
          v81 = v46;
          if ( v15 >= 8 )
          {
LABEL_70:
            v49 = (__int64)v86;
            if ( v70 == 1 )
              _InterlockedExchangeAdd64((volatile signed __int64 *)&v86[1].Affinity.StaticBitmap[13], 1uLL);
            v77 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
            {
              do
                KeYieldProcessorEx(&v77, v42, v43, v44);
              while ( *(__int64 *)(v8 + 24) < 0 );
            }
            if ( !v70 && !v84 )
            {
              v55 = *(_BYTE *)(v8 + 35);
              if ( (v55 & 8) != 0 )
                *(_BYTE *)(v8 + 35) = v55 & 0xF7;
            }
            MiDecrementShareCount(v8, v42, v43, v44);
            _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( (v15 & 2) != 0 )
            {
              v53 = MiDecrementCombinedPte(SessionVm, v87);
            }
            else
            {
              if ( (*(_BYTE *)(SessionVm + 184) & 7) != 0 )
                return 0LL;
              CloneAddress = MiLocateCloneAddress(v49, v87);
              if ( !CloneAddress )
                return 0LL;
              v53 = MiDecrementCloneBlockReference((ULONG_PTR)CloneAddress, v51);
            }
            if ( v53 == 3 )
              MiChargeCommit(v88, 1LL, 4LL);
            return 0LL;
          }
          MiInsertTbFlushEntry((__int64)&v103, BugCheckParameter2a & 0xFFFFFFFFFFFFF000uLL, 1LL, 0);
          if ( (v41 & 0x20) != 0 || (v46 & 0x42) == 0 )
          {
            MI_INTERLOCKED_EXCHANGE_PTE((volatile __int64 *)v80, v46);
            MiFlushTbList(&v103);
            goto LABEL_70;
          }
          v47 = v46 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
          if ( v77 && (unsigned int)MiPteHasShadow() )
          {
            v48 = (__int64 *)v80;
            v69 = (__int64 *)v80;
            *(_QWORD *)v80 = v47;
            MiWritePteShadow((__int64)v69, v47);
            MiFlushTbList(&v103);
          }
          else
          {
            v48 = (__int64 *)v80;
            *(_QWORD *)v80 = v47;
            MiFlushTbList(&v103);
            v42 = v46;
            if ( !v77 )
              goto LABEL_69;
          }
          if ( (unsigned int)MiPteHasShadow() )
          {
            if ( !HIBYTE(word_140C51864) && (v42 & 1) != 0 )
              v46 = v42 | 0x8000000000000000uLL;
            *v48 = v46;
            MiWritePteShadow((__int64)v48, v46);
            goto LABEL_70;
          }
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
            && (v42 & 1) != 0 )
          {
            v46 = v42 | 0x8000000000000000uLL;
          }
LABEL_69:
          *v48 = v46;
          goto LABEL_70;
        }
LABEL_56:
        if ( (KeGetCurrentThread()->ApcState.Process->SecureState.SecureHandle & 1) != 0 )
          v41 |= 0x10u;
        goto LABEL_58;
      }
    }
    else
    {
      v41 = 9;
    }
    if ( BugCheckParameter2a >= 0xFFFF800000000000uLL )
      goto LABEL_58;
    goto LABEL_56;
  }
  MiInitializePageColorBase(SessionVm, v9, &v89);
  v23 = _InterlockedExchangeAdd((volatile signed __int32 *)v89, 1u);
  Page = MiGetPage(v88, DWORD2(v89) & (unsigned int)v23 | HIDWORD(v89), 0LL);
  if ( Page != -1LL )
  {
    v22 = v71;
    goto LABEL_25;
  }
  return 3221225495LL;
}
