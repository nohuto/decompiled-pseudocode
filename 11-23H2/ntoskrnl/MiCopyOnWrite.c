/*
 * XREFs of MiCopyOnWrite @ 0x140270030
 * Callers:
 *     MiCopyToUserVa @ 0x14021CBDC (MiCopyToUserVa.c)
 *     MiSplitPrivatePage @ 0x14021CE44 (MiSplitPrivatePage.c)
 *     MiProbeLeafPteAccess @ 0x140236D20 (MiProbeLeafPteAccess.c)
 *     MiSystemFault @ 0x140261430 (MiSystemFault.c)
 *     MiCompleteProtoPteFault @ 0x140268E70 (MiCompleteProtoPteFault.c)
 *     MiSetProtectionOnSection @ 0x140277F10 (MiSetProtectionOnSection.c)
 *     MiLockCode @ 0x1402825C0 (MiLockCode.c)
 *     MiMakeDriverPagesPrivate @ 0x140291CE0 (MiMakeDriverPagesPrivate.c)
 *     MiWalkVaRange @ 0x140293FE4 (MiWalkVaRange.c)
 *     MmProtectPool @ 0x140297250 (MmProtectPool.c)
 *     MiLockPagedAddress @ 0x1402ED780 (MiLockPagedAddress.c)
 *     MiValidFault @ 0x140333770 (MiValidFault.c)
 *     MiValidVirtualizationFault @ 0x14046CD22 (MiValidVirtualizationFault.c)
 *     MiLockDriverPageRange @ 0x14061A380 (MiLockDriverPageRange.c)
 *     MiSplitReducedCommitClonePage @ 0x14061CFB4 (MiSplitReducedCommitClonePage.c)
 *     MiReplaceImportEntry @ 0x14062CC00 (MiReplaceImportEntry.c)
 *     MiFaultInPagedPool @ 0x1406310A8 (MiFaultInPagedPool.c)
 *     MiPrepareImagePagesForHotPatch @ 0x140642E18 (MiPrepareImagePagesForHotPatch.c)
 *     MiMakeProtoPrivate @ 0x14064D824 (MiMakeProtoPrivate.c)
 * Callees:
 *     MiGetSessionVm @ 0x14020B11C (MiGetSessionVm.c)
 *     EtwTraceKernelEvent @ 0x140211EDC (EtwTraceKernelEvent.c)
 *     MiGetAnyMultiplexedVm @ 0x1402146B4 (MiGetAnyMultiplexedVm.c)
 *     MiGetWsleProtection @ 0x140216124 (MiGetWsleProtection.c)
 *     MiWriteValidPteVolatile @ 0x140217020 (MiWriteValidPteVolatile.c)
 *     MiLocateAddress @ 0x140217240 (MiLocateAddress.c)
 *     MiIdentifyPfn @ 0x14023E590 (MiIdentifyPfn.c)
 *     KeYieldProcessorEx @ 0x140242F10 (KeYieldProcessorEx.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14025AFA0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiComputeFaultNode @ 0x14025D820 (MiComputeFaultNode.c)
 *     MiGetPage @ 0x14026D5F0 (MiGetPage.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402715F0 (MiPteInShadowRange.c)
 *     MiChargeCommit @ 0x140276750 (MiChargeCommit.c)
 *     MiFlushTbList @ 0x140279B10 (MiFlushTbList.c)
 *     MiLogPageAccess @ 0x14027CE40 (MiLogPageAccess.c)
 *     MiInsertTbFlushEntry @ 0x14027F800 (MiInsertTbFlushEntry.c)
 *     MiDecrementShareCount @ 0x140280A40 (MiDecrementShareCount.c)
 *     MiCopyPage @ 0x1402840A0 (MiCopyPage.c)
 *     MiGetSystemRegionType @ 0x140284B00 (MiGetSystemRegionType.c)
 *     MiSwizzleInvalidPte @ 0x140285A30 (MiSwizzleInvalidPte.c)
 *     MiUnlockVadTree @ 0x140287B08 (MiUnlockVadTree.c)
 *     MiLockVadTree @ 0x14028AB50 (MiLockVadTree.c)
 *     MiLocateCloneAddress @ 0x140294828 (MiLocateCloneAddress.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402A7E90 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiReturnCommit @ 0x1402DC4E0 (MiReturnCommit.c)
 *     MiGetContainingPageTable @ 0x1402E1500 (MiGetContainingPageTable.c)
 *     PsGetPagePriorityThread @ 0x1402E17B0 (PsGetPagePriorityThread.c)
 *     MiSetPfnPteFrame @ 0x1402E1830 (MiSetPfnPteFrame.c)
 *     MiSetPfnTbFlushStamp @ 0x1402E18C0 (MiSetPfnTbFlushStamp.c)
 *     MiInitializePageColorBase @ 0x1402E1920 (MiInitializePageColorBase.c)
 *     MiUnlockPageTableCharges @ 0x1402E2DD0 (MiUnlockPageTableCharges.c)
 *     MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED @ 0x1402E4C90 (MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED.c)
 *     MI_INTERLOCKED_EXCHANGE_PTE @ 0x1402E5FD0 (MI_INTERLOCKED_EXCHANGE_PTE.c)
 *     MiDecrementCombinedPteEx @ 0x1402F3DA8 (MiDecrementCombinedPteEx.c)
 *     MiWritePteShadow @ 0x1403574EC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14035754C (MiPteHasShadow.c)
 *     MiChangePageAttribute @ 0x14036F55C (MiChangePageAttribute.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MiDecrementCloneBlockReference @ 0x14066429C (MiDecrementCloneBlockReference.c)
 */

__int64 __fastcall MiCopyOnWrite(ULONG_PTR BugCheckParameter2, unsigned __int64 a2, unsigned __int64 Page, int a4)
{
  ULONG_PTR v7; // rdi
  ULONG_PTR v8; // r15
  unsigned int v9; // r14d
  BOOL v10; // r12d
  _KPROCESS *Process; // rsi
  unsigned int SystemRegionType; // eax
  int v13; // ecx
  unsigned __int64 SessionVm; // r13
  unsigned int v15; // esi
  bool v16; // zf
  volatile unsigned __int64 v17; // rdi
  unsigned __int8 v18; // cl
  int v19; // edi
  __int64 v20; // rax
  int v21; // eax
  signed __int32 v22; // eax
  __int64 v23; // rdi
  volatile LONG *v24; // rcx
  volatile LONG *v25; // r14
  unsigned __int64 *v26; // rdx
  __int64 v27; // r8
  __int64 ContainingPageTable; // rax
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v30; // rdx
  char v31; // di
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rbx
  __int64 v34; // rcx
  __int64 v35; // r8
  unsigned __int64 v36; // rdx
  unsigned __int64 *v37; // rdi
  __int64 v38; // rcx
  __int64 v39; // r8
  unsigned __int64 v40; // rdx
  _KPROCESS *v41; // rbx
  __int64 v42; // r8
  ULONG_PTR CloneAddress; // rax
  ULONG_PTR v44; // rdx
  char v46; // al
  __int64 v47; // r14
  int v48; // eax
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v50; // rax
  struct _LIST_ENTRY *v51; // rdx
  __int64 v52; // rax
  __int64 **v53; // rdi
  char v54; // al
  __int64 **Address; // rax
  __int64 v56; // rdx
  unsigned int v57; // ecx
  struct _LIST_ENTRY *v58; // r9
  __int64 v59; // rax
  unsigned __int64 *v60; // rcx
  __int64 v61; // rdx
  int v62; // [rsp+30h] [rbp-D0h]
  int v63; // [rsp+34h] [rbp-CCh]
  char v64; // [rsp+38h] [rbp-C8h]
  unsigned int v65; // [rsp+3Ch] [rbp-C4h]
  unsigned int PagePriorityThread; // [rsp+3Ch] [rbp-C4h]
  int v67; // [rsp+40h] [rbp-C0h] BYREF
  int v68; // [rsp+44h] [rbp-BCh]
  ULONG_PTR BugCheckParameter2a; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v70; // [rsp+50h] [rbp-B0h]
  __int64 v71; // [rsp+58h] [rbp-A8h]
  __int64 v72; // [rsp+60h] [rbp-A0h] BYREF
  int v73; // [rsp+68h] [rbp-98h]
  int v74; // [rsp+6Ch] [rbp-94h] BYREF
  BOOL v75; // [rsp+70h] [rbp-90h]
  __int64 **v76; // [rsp+78h] [rbp-88h] BYREF
  ULONG_PTR v77; // [rsp+80h] [rbp-80h]
  _KPROCESS *v78; // [rsp+88h] [rbp-78h]
  unsigned __int64 v79; // [rsp+90h] [rbp-70h]
  __int64 v80; // [rsp+98h] [rbp-68h]
  ULONG_PTR v81; // [rsp+A0h] [rbp-60h]
  __int128 v82; // [rsp+A8h] [rbp-58h] BYREF
  __int128 v83; // [rsp+B8h] [rbp-48h] BYREF
  __int128 v84; // [rsp+C8h] [rbp-38h]
  _QWORD v85[18]; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v86[2]; // [rsp+170h] [rbp+70h] BYREF
  int v87; // [rsp+180h] [rbp+80h] BYREF
  __int16 v88; // [rsp+184h] [rbp+84h]
  __int16 v89; // [rsp+186h] [rbp+86h]
  __int64 v90; // [rsp+188h] [rbp+88h]
  __int64 v91; // [rsp+190h] [rbp+90h]
  __int64 v92; // [rsp+198h] [rbp+98h]
  _BYTE v93[152]; // [rsp+1A0h] [rbp+A0h] BYREF

  v70 = a2;
  BugCheckParameter2a = BugCheckParameter2;
  v68 = a4;
  v89 = 0;
  v82 = 0LL;
  memset(v93, 0, sizeof(v93));
  v7 = *(_QWORD *)a2;
  v83 = 0LL;
  v84 = 0LL;
  v67 = MiPteInShadowRange(a2);
  if ( v67
    && (MiFlags & 0x600000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v7 & 1) != 0
    && ((v7 & 0x20) == 0 || (v7 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v50 = *((_QWORD *)&Flink->Flink + ((a2 >> 3) & 0x1FF));
      if ( (v50 & 0x20) != 0 )
        v7 |= 0x20uLL;
      if ( (v50 & 0x42) != 0 )
        v7 |= 0x42uLL;
    }
  }
  v72 = v7;
  v81 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v72) >> 12) & 0xFFFFFFFFFFLL;
  v8 = 48 * v81 - 0x220000000000LL;
  v76 = 0LL;
  v9 = 0;
  v10 = (v7 & 0x200) == 0;
  v71 = *(_QWORD *)(v8 + 8);
  v79 = v71 | 0x8000000000000000uLL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v78 = Process;
  SystemRegionType = MiGetSystemRegionType(BugCheckParameter2);
  if ( SystemRegionType == 1 )
  {
    SessionVm = MiGetSessionVm();
    v15 = (v7 & 0x200) == 0;
    if ( !_bittest64((const signed __int64 *)(v8 + 40), 0x28u) && v71 >= 0 && v71 )
      v15 = v10 | 2;
    v62 = 2;
  }
  else if ( SystemRegionType == 12 )
  {
    v62 = 0;
    SessionVm = (unsigned __int64)MiGetAnyMultiplexedVm(1);
    v15 = (v7 & 0x200) == 0;
    if ( !_bittest64((const signed __int64 *)(v8 + 40), 0x28u) && v71 >= 0 && v71 )
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
      v62 = 0;
      v15 = v10 | 2;
      SessionVm = (unsigned __int64)MiGetAnyMultiplexedVm(2);
      if ( _bittest64((const signed __int64 *)(v8 + 40), 0x28u) || v71 < 0 || !v71 )
        KeBugCheckEx(0x1Au, 0x3300uLL, BugCheckParameter2a, v7, 0LL);
    }
    else
    {
      if ( SystemRegionType == 5 )
        KeBugCheckEx(0x1Au, 0x3300uLL, BugCheckParameter2, v7, 1uLL);
      if ( Process[1].Affinity.StaticBitmap[10] )
        return 3221226548LL;
      SessionVm = (unsigned __int64)&Process[1].ActiveProcessors.StaticBitmap[26];
      v62 = 1;
      v15 = (v7 & 0x200) == 0;
      if ( ((v71 >= 0) & !_bittest64((const signed __int64 *)(v8 + 40), 0x28u)) != 0 && v71 )
        v15 = v10 | 2;
      memset(v85, 0, 0x88uLL);
      v85[0] = BugCheckParameter2a;
      v85[7] = SessionVm;
      v9 = MiComputeFaultNode((__int64)v85, 0LL, &v76);
    }
  }
  v65 = 0;
  v16 = (*(_BYTE *)v8 & 1) == 0;
  v80 = *(_QWORD *)(qword_140C673C8 + 8LL * *(unsigned __int16 *)(SessionVm + 174));
  v75 = !v16;
  v77 = ((BugCheckParameter2a >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v17 = *(_QWORD *)v77;
  v73 = MiPteInShadowRange(v77);
  if ( v73
    && (MiFlags & 0x600000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v17 & 1) != 0
    && ((v17 & 0x20) == 0 || (v17 & 0x42) == 0) )
  {
    v51 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v51 )
    {
      v52 = *((_QWORD *)&v51->Flink + ((v77 >> 3) & 0x1FF));
      if ( (v52 & 0x20) != 0 )
        v17 |= 0x20uLL;
      if ( (v52 & 0x42) != 0 )
        v17 |= 0x42uLL;
    }
  }
  v18 = HIBYTE(v17) & 0xF | (16 * ((v17 >> 60) & 7));
  LODWORD(v71) = v68 & 1;
  if ( (v68 & 1) != 0 || (HIBYTE(v17) & 0xF) == 0xA )
  {
    v19 = v62;
  }
  else
  {
    v19 = v62;
    if ( (v18 & 0xF) == 9 )
    {
      v18 = v18 & 0xF0 | 0xA;
    }
    else if ( v62 != 1 && (*(_BYTE *)(v8 + 35) & 8) != 0 )
    {
      v18 = v18 & 0xF0 | 0xA;
    }
  }
  v64 = v18 & 0xF;
  if ( (v18 & 0xF) == 0xA )
    goto LABEL_21;
  if ( (v18 & 0xF) == 8 && v19 != 2 )
  {
    v65 = 1;
    if ( (*(_DWORD *)(v8 + 16) & 0x400LL) != 0 )
      v65 = 2;
  }
  LODWORD(v20) = MiGetWsleProtection(BugCheckParameter2a, v18);
  if ( !(_DWORD)v20 )
LABEL_21:
    v20 = (*(_QWORD *)(v8 + 16) >> 5) & 0x1FLL;
  v21 = MmMakeProtectNotWriteCopy[(unsigned int)v20];
  v63 = v21;
  if ( Page != -1LL )
  {
LABEL_25:
    if ( v65 )
    {
      if ( v65 >= 2 )
      {
        v47 = *(_QWORD *)(qword_140C673C8 + 8 * ((*(_QWORD *)(v8 + 40) >> 43) & 0x3FFLL));
        MiReturnCommit(v47, 1LL);
        if ( v19 == 1 )
          _InterlockedDecrement64((volatile signed __int64 *)(v47 + 17840));
      }
      MiUnlockPageTableCharges(48 * (*(_QWORD *)(v8 + 40) & 0xFFFFFFFFFFLL) - 0x220000000000LL);
      v21 = v63;
    }
    if ( v21 == 24 )
    {
      v53 = v76;
      v54 = 1;
      LOBYTE(v63) = 1;
      if ( !v76 )
      {
        MiLockVadTree(1LL);
        Address = MiLocateAddress(BugCheckParameter2a);
        LOBYTE(v56) = 17;
        v76 = Address;
        v53 = Address;
        MiUnlockVadTree(1LL, v56);
        if ( !v53 )
          goto LABEL_27;
        v54 = 1;
      }
      v57 = (*((_DWORD *)v53 + 12) >> 7) & 0x1F;
      if ( v57 >> 3 == 3 )
      {
        if ( (v57 & 7) != 0 )
          LOBYTE(v63) = 25;
      }
      else
      {
        if ( v57 >> 3 == 1 )
          v54 = 9;
        LOBYTE(v63) = v54;
      }
    }
LABEL_27:
    v23 = 48 * Page - 0x220000000000LL;
    *(_QWORD *)(v23 + 16) = MiSwizzleInvalidPte(32LL * (v63 & 0x1F));
    if ( v64 == 10 )
    {
      v26 = (unsigned __int64 *)v70;
    }
    else
    {
      v24 = (volatile LONG *)&unk_140C6A180;
      if ( (*(_BYTE *)(SessionVm + 184) & 7) != 2 )
        v24 = (volatile LONG *)(SessionVm + 192);
      v25 = (volatile LONG *)(SessionVm + 192);
      ExAcquireSpinLockSharedAtDpcLevel(v24 + 16);
      _InterlockedExchangeAdd64((volatile signed __int64 *)(SessionVm + 152), 1uLL);
      if ( BugCheckParameter2a < 0xFFFFF68000000000uLL || BugCheckParameter2a > 0xFFFFF6FFFFFFFFFFuLL )
        _InterlockedExchangeAdd64((volatile signed __int64 *)(SessionVm + 136), 1uLL);
      if ( (*(_BYTE *)(SessionVm + 184) & 7) == 2 )
        v25 = (volatile LONG *)&unk_140C6A180;
      ExReleaseSpinLockSharedFromDpcLevel(v25 + 16);
      MiWriteValidPteVolatile((volatile signed __int64 *)v77, 0x80000000, HIBYTE(*(_QWORD *)v77) & 0xF);
      v26 = (unsigned __int64 *)v70;
      v27 = *(_QWORD *)v70;
      if ( v67
        && (MiFlags & 0x600000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v27 & 1) != 0
        && ((v27 & 0x20) == 0 || (v27 & 0x42) == 0) )
      {
        v58 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v58 )
        {
          v59 = *((_QWORD *)&v58->Flink + ((v70 >> 3) & 0x1FF));
          if ( (v59 & 0x20) != 0 )
            v27 |= 0x20uLL;
          if ( (v59 & 0x42) != 0 )
            v27 |= 0x42uLL;
        }
      }
      v72 = v27;
    }
    *(_WORD *)(v23 + 32) = 1;
    ContainingPageTable = MiGetContainingPageTable(v26);
    MiSetPfnPteFrame(v23, ContainingPageTable);
    CurrentThread = KeGetCurrentThread();
    if ( ((__int64)CurrentThread[1].Queue & 0x100) != 0 )
      PagePriorityThread = (unsigned __int64)((__int64)CurrentThread[1].Queue & 0xE00) >> 9;
    else
      PagePriorityThread = PsGetPagePriorityThread(CurrentThread);
    if ( (DWORD1(PerfGlobalGroupMask) & 0x8000001) != 0 )
      v15 |= 4u;
    v74 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v23 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v74);
      while ( *(__int64 *)(v23 + 24) < 0 );
    }
    if ( v75 )
      *(_QWORD *)v23 |= 1uLL;
    *(_BYTE *)(v23 + 34) |= 0x10u;
    if ( v62 || (((v68 & 1) == 0) & (*(_BYTE *)(v8 + 35) >> 3)) == 0 )
      *(_BYTE *)(v23 + 35) &= ~8u;
    else
      *(_BYTE *)(v23 + 35) |= 8u;
    v30 = *(unsigned __int8 *)(v8 + 34) >> 6;
    if ( *(unsigned __int8 *)(v23 + 34) >> 6 != (_DWORD)v30 )
      MiChangePageAttribute(v23, v30, 1LL);
    MiSetPfnTbFlushStamp(v23, 0LL, 1LL);
    *(_QWORD *)(v23 + 24) = *(_QWORD *)(v23 + 24) & 0xC000000000000000uLL | 1;
    *(_BYTE *)(v23 + 35) ^= (*(_BYTE *)(v23 + 35) ^ PagePriorityThread) & 7;
    *(_QWORD *)(v23 + 8) = v70;
    *(_BYTE *)(v23 + 34) = *(_BYTE *)(v23 + 34) & 0xF8 | 6;
    if ( v15 >= 4 )
    {
      MiIdentifyPfn(Page, &v83);
      _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      *((_QWORD *)&v84 + 1) |= 8uLL;
      v86[0] = &v83;
      v86[1] = 32LL;
      EtwTraceKernelEvent((int)v86, 1, 0x28000001u, 642, 289413892);
    }
    else
    {
      _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    __incgsdword(0x2E94u);
    v31 = 0;
    if ( (v63 & 2) != 0 )
    {
      if ( (MiFlags & 0x28000) == 0x8000 )
      {
        if ( BugCheckParameter2a >= 0xFFFF800000000000uLL )
        {
          v31 = 16;
          if ( (v68 & 2) != 0 )
            v31 = 48;
LABEL_54:
          MiCopyPage(Page, v81);
          if ( dword_140C67FE8 && PagePriorityThread >= dword_140C67FEC )
            MiLogPageAccess(SessionVm, v70);
          v32 = v72;
          if ( (v15 & 1) == 0 )
          {
            if ( v72 < 0 || v62 != 1 )
              v32 = v72 | 0x42;
            v32 = v32 & 0xFFFFFFFFFFFFF5DFuLL | 0x820;
          }
          v90 = 20LL;
          v87 = v62;
          v33 = v32 ^ (v32 ^ (Page << 12)) & 0xFFFFFFFFFF000LL;
          v88 = 0;
          v91 = 0LL;
          v92 = 0LL;
          if ( (v68 & 8) != 0 && !(unsigned int)MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED(v70, v33, 4LL) )
            v15 |= 8u;
          v72 = v33;
          if ( v15 >= 8 )
            goto LABEL_66;
          MiInsertTbFlushEntry(&v87, BugCheckParameter2a & 0xFFFFFFFFFFFFF000uLL, 1LL, 0LL);
          if ( (v31 & 0x20) != 0 || (v33 & 0x42) == 0 )
          {
            MI_INTERLOCKED_EXCHANGE_PTE(v70, v33);
            MiFlushTbList(&v87);
            goto LABEL_66;
          }
          v36 = v33 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
          if ( v67 )
          {
            if ( (unsigned int)MiPteHasShadow(v34, v36, v35) )
            {
              v37 = (unsigned __int64 *)v70;
              v60 = (unsigned __int64 *)v70;
              *(_QWORD *)v70 = v36;
              MiWritePteShadow(v60, v36);
              MiFlushTbList(&v87);
              v40 = v33;
LABEL_174:
              if ( !(unsigned int)MiPteHasShadow(v38, v40, v39) )
              {
                if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
                  && (v61 & 1) != 0 )
                {
                  v33 = v61 | 0x8000000000000000uLL;
                }
                goto LABEL_65;
              }
              if ( !HIBYTE(word_140C66CFC) && (v61 & 1) != 0 )
                v33 = v61 | 0x8000000000000000uLL;
              *v37 = v33;
              MiWritePteShadow(v37, v33);
LABEL_66:
              v41 = v78;
              if ( v62 == 1 )
                _InterlockedExchangeAdd64((volatile signed __int64 *)&v78[1].Affinity.StaticBitmap[13], 1uLL);
              v67 = 0;
              while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
              {
                do
                  KeYieldProcessorEx(&v67);
                while ( *(__int64 *)(v8 + 24) < 0 );
              }
              if ( !v62 && !(_DWORD)v71 )
              {
                v46 = *(_BYTE *)(v8 + 35);
                if ( (v46 & 8) != 0 )
                  *(_BYTE *)(v8 + 35) = v46 & 0xF7;
              }
              MiDecrementShareCount(v8);
              _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              if ( (v15 & 2) != 0 )
              {
                v48 = MiDecrementCombinedPteEx(SessionVm, v79, 0LL);
              }
              else
              {
                if ( (*(_BYTE *)(SessionVm + 184) & 7) != 0 )
                  return 0LL;
                CloneAddress = MiLocateCloneAddress(v41, v79, v42);
                if ( !CloneAddress )
                  return 0LL;
                v48 = MiDecrementCloneBlockReference(CloneAddress, v44);
              }
              if ( v48 == 3 )
                MiChargeCommit(v80, 1LL, 4LL);
              return 0LL;
            }
            v33 = v72;
          }
          v37 = (unsigned __int64 *)v70;
          *(_QWORD *)v70 = v36;
          MiFlushTbList(&v87);
          v40 = v33;
          if ( !v67 )
          {
LABEL_65:
            *v37 = v33;
            goto LABEL_66;
          }
          goto LABEL_174;
        }
LABEL_52:
        if ( (KeGetCurrentThread()->ApcState.Process->SecureState.SecureHandle & 1) != 0 )
          v31 |= 0x10u;
        goto LABEL_54;
      }
    }
    else
    {
      v31 = 8;
    }
    if ( BugCheckParameter2a >= 0xFFFF800000000000uLL )
      goto LABEL_54;
    goto LABEL_52;
  }
  MiInitializePageColorBase(SessionVm, v9, &v82);
  v22 = _InterlockedExchangeAdd((volatile signed __int32 *)v82, 1u);
  Page = MiGetPage(v80, DWORD2(v82) & (unsigned int)v22 | HIDWORD(v82), 0);
  if ( Page != -1LL )
  {
    v21 = v63;
    goto LABEL_25;
  }
  return 3221225495LL;
}
