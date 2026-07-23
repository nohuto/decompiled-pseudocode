/*
 * XREFs of MiUnloadSystemImage @ 0x1406962FC
 * Callers:
 *     MmUnloadSystemImage @ 0x140696020 (MmUnloadSystemImage.c)
 *     MmLoadSystemImageEx @ 0x140703FD0 (MmLoadSystemImageEx.c)
 *     MmChangeImageProtection @ 0x140724040 (MmChangeImageProtection.c)
 *     MiDereferenceSingleImport @ 0x1407E9978 (MiDereferenceSingleImport.c)
 *     MiActOnPatchInAllSessions @ 0x140A348C0 (MiActOnPatchInAllSessions.c)
 *     MmRegisterHotPatches @ 0x140B73D38 (MmRegisterHotPatches.c)
 * Callees:
 *     MiSessionRemoveImage @ 0x1402009A8 (MiSessionRemoveImage.c)
 *     MiDeleteSessionPdes @ 0x140200FD8 (MiDeleteSessionPdes.c)
 *     MiGetSessionVm @ 0x14020B11C (MiGetSessionVm.c)
 *     MiFreePrivateFixupEntryForSystemImage @ 0x14020B148 (MiFreePrivateFixupEntryForSystemImage.c)
 *     MiGetPdeAddress @ 0x14020B2BC (MiGetPdeAddress.c)
 *     LdrUnloadAlternateResourceModule @ 0x14020B5FC (LdrUnloadAlternateResourceModule.c)
 *     KasanDriverUnloadImage @ 0x14020B620 (KasanDriverUnloadImage.c)
 *     DbgUnLoadImageSymbolsUnicode @ 0x14020B814 (DbgUnLoadImageSymbolsUnicode.c)
 *     MiDereferenceControlArea @ 0x14020B890 (MiDereferenceControlArea.c)
 *     ObDereferenceObjectDeferDelete @ 0x14020B8D0 (ObDereferenceObjectDeferDelete.c)
 *     MiPartitionIdToPointer @ 0x14020B9C4 (MiPartitionIdToPointer.c)
 *     MiIsRetpolineEnabled @ 0x14020EBA0 (MiIsRetpolineEnabled.c)
 *     MiGetAnyMultiplexedVm @ 0x1402146B4 (MiGetAnyMultiplexedVm.c)
 *     MiGetSystemRegionType @ 0x140284B00 (MiGetSystemRegionType.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140284B40 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiProcessLoaderEntry @ 0x140290C58 (MiProcessLoaderEntry.c)
 *     MiReturnResident @ 0x1402930A0 (MiReturnResident.c)
 *     MiSectionControlArea @ 0x14029FB10 (MiSectionControlArea.c)
 *     MiManageSubsectionView @ 0x1402A0790 (MiManageSubsectionView.c)
 *     MmGetSessionIdEx @ 0x1402A19B0 (MmGetSessionIdEx.c)
 *     MiWalkEntireImage @ 0x1402DB270 (MiWalkEntireImage.c)
 *     MiReturnCommit @ 0x1402DC4E0 (MiReturnCommit.c)
 *     MiGetPteAddress @ 0x1402DE29C (MiGetPteAddress.c)
 *     MiDeleteSystemPagableVm @ 0x1402E96D0 (MiDeleteSystemPagableVm.c)
 *     MmGetMinWsPagePriority @ 0x1402FC030 (MmGetMinWsPagePriority.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     KeFlushRsb @ 0x140573F24 (KeFlushRsb.c)
 *     MiLogPerfMemoryRangeEvent @ 0x14061DDC8 (MiLogPerfMemoryRangeEvent.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x14062624C (MiReturnCrossPartitionControlAreaCharges.c)
 *     MiUnmapRetpolineStubs @ 0x140641764 (MiUnmapRetpolineStubs.c)
 *     MiInitPerfMemoryFlags @ 0x140641B3C (MiInitPerfMemoryFlags.c)
 *     MiClearDriverHotPatchPtes @ 0x14064233C (MiClearDriverHotPatchPtes.c)
 *     MiVaToSoftwareWsle @ 0x140662430 (MiVaToSoftwareWsle.c)
 *     MiDeleteSessionDriverProtos @ 0x140682C1C (MiDeleteSessionDriverProtos.c)
 *     MiReleaseSessionDriverCharges @ 0x140683154 (MiReleaseSessionDriverCharges.c)
 *     MiBytesToMapSystemImage @ 0x140696AE4 (MiBytesToMapSystemImage.c)
 *     MiFreeLoadedImportList @ 0x140696D20 (MiFreeLoadedImportList.c)
 *     ExCovReadjustUnloadedModuleEntry @ 0x140696D48 (ExCovReadjustUnloadedModuleEntry.c)
 *     MmHasImageBeenImportOptimized @ 0x14069707C (MmHasImageBeenImportOptimized.c)
 *     MiMarkKernelImageCfgBits @ 0x1406970A4 (MiMarkKernelImageCfgBits.c)
 *     KseDriverUnloadImage @ 0x140697128 (KseDriverUnloadImage.c)
 *     MiReleasePrivilegedPtes @ 0x1406971C4 (MiReleasePrivilegedPtes.c)
 *     MiReleaseDriverPtes @ 0x140697280 (MiReleaseDriverPtes.c)
 *     KeCleanupImageTracepoints @ 0x1406973DC (KeCleanupImageTracepoints.c)
 *     PerfLogImageUnload @ 0x140697438 (PerfLogImageUnload.c)
 *     MiReturnSystemImageAddress @ 0x140698C68 (MiReturnSystemImageAddress.c)
 *     MiDereferencePerSessionProtos @ 0x1407B5E98 (MiDereferencePerSessionProtos.c)
 *     MiDereferenceSingleImport @ 0x1407E9978 (MiDereferenceSingleImport.c)
 *     MiUnlockDriverCode @ 0x140851610 (MiUnlockDriverCode.c)
 *     MiRememberUnloadedDriver @ 0x140858488 (MiRememberUnloadedDriver.c)
 *     MiFreeRetpolineImportInfo @ 0x14085ECD4 (MiFreeRetpolineImportInfo.c)
 *     MiReturnSystemImageCommitment @ 0x140861A40 (MiReturnSystemImageCommitment.c)
 *     MiFreeRetpolineRelocationInformation @ 0x140865928 (MiFreeRetpolineRelocationInformation.c)
 *     MiIsImageFullyRetpolined @ 0x140A34538 (MiIsImageFullyRetpolined.c)
 *     MiMarkKernelImageRetpolineBits @ 0x140A346E4 (MiMarkKernelImageRetpolineBits.c)
 *     MiFreePatchTableProtos @ 0x140A371EC (MiFreePatchTableProtos.c)
 *     MiUnmapPatchTable @ 0x140A3C460 (MiUnmapPatchTable.c)
 *     MiUnmapLargeDriver @ 0x140A4A1C8 (MiUnmapLargeDriver.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     VfDriverUnloadImage @ 0x140ABCEC4 (VfDriverUnloadImage.c)
 */

void __fastcall MiUnloadSystemImage(__int64 BugCheckParameter2, char a2)
{
  void *v4; // r12
  ULONG_PTR v5; // r15
  __int64 PteAddress; // rax
  __int64 v7; // rcx
  __int64 *v8; // r13
  unsigned __int64 v9; // rdi
  _QWORD *v11; // r14
  unsigned __int64 v12; // r13
  int v13; // esi
  unsigned __int64 SessionVm; // rax
  unsigned __int64 PdeAddress; // rdx
  unsigned __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // rsi
  __int64 v19; // rax
  void *v20; // rcx
  char v21; // si
  unsigned __int64 v22; // r14
  unsigned __int64 v23; // rdi
  unsigned int v24; // esi
  __int64 v25; // rax
  ULONG_PTR v26; // rcx
  char v27; // r13
  char v28; // r14
  __int64 v29; // rdi
  ULONG_PTR v30; // rsi
  unsigned __int64 v31; // rax
  char *AnyMultiplexedVm; // r12
  int v33; // r15d
  int v34; // edi
  void *v35; // rcx
  void *v36; // rcx
  unsigned __int64 v37; // rdx
  unsigned __int64 v38; // rax
  __int64 v39; // rdi
  __int128 *v40; // rsi
  unsigned int v41; // r14d
  __int64 v42; // rax
  ULONG_PTR v43; // rcx
  __int128 *v44; // rsi
  unsigned int v45; // r14d
  __int64 v46; // rax
  ULONG_PTR v47; // rcx
  unsigned int inited; // eax
  void *v49; // rax
  int v50; // edx
  PVOID Object; // [rsp+50h] [rbp-B0h]
  ULONG_PTR BugCheckParameter2a; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v53; // [rsp+60h] [rbp-A0h]
  __int128 v54; // [rsp+68h] [rbp-98h] BYREF
  __int128 v55; // [rsp+78h] [rbp-88h] BYREF
  __int64 v56; // [rsp+88h] [rbp-78h] BYREF
  __int128 v57; // [rsp+90h] [rbp-70h] BYREF
  __int128 v58; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v59; // [rsp+B0h] [rbp-50h]
  _OWORD v60[2]; // [rsp+B8h] [rbp-48h] BYREF
  __int128 v61; // [rsp+D8h] [rbp-28h]
  __int64 v62; // [rsp+E8h] [rbp-18h]
  __int64 v63[28]; // [rsp+F0h] [rbp-10h] BYREF
  int v64; // [rsp+1E0h] [rbp+E0h]
  int v65; // [rsp+1E8h] [rbp+E8h]
  unsigned __int64 v66; // [rsp+1F0h] [rbp+F0h]
  unsigned __int64 v67; // [rsp+1F8h] [rbp+F8h]

  LOBYTE(v65) = a2;
  v56 = 0LL;
  v59 = 0LL;
  v58 = 0LL;
  memset(v63, 0, 0x98uLL);
  memset(v60, 0, sizeof(v60));
  v62 = 0LL;
  v61 = 0LL;
  if ( *(_QWORD *)(BugCheckParameter2 + 136) == 1LL )
    return;
  v4 = *(void **)(BugCheckParameter2 + 48);
  BugCheckParameter2a = (ULONG_PTR)v4;
  v5 = (BugCheckParameter2 + 160) & -(__int64)((a2 & 4) != 0);
  *(_QWORD *)&v55 = v5;
  PteAddress = MiGetPteAddress((unsigned __int64)v4);
  v7 = *(unsigned int *)(BugCheckParameter2 + 64);
  v8 = 0LL;
  v67 = PteAddress;
  Object = *(PVOID *)(BugCheckParameter2 + 112);
  v66 = (unsigned __int64)(unsigned int)v7 >> 12;
  v53 = (unsigned __int64)MiBytesToMapSystemImage(v7) >> 12;
  v9 = 0LL;
  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)v4) == 1 )
  {
    v64 = 0;
    v11 = (_QWORD *)MiSessionRemoveImage(BugCheckParameter2, (__int64)&v58);
    if ( !v11 )
      return;
    *(_QWORD *)&v54 = MiSectionControlArea((__int64)Object);
    if ( *(_QWORD *)BugCheckParameter2 )
      ExCovReadjustUnloadedModuleEntry(BugCheckParameter2, 0LL);
    v12 = KeGetCurrentThread()->ApcState.Process[1].Affinity.StaticBitmap[25];
    v13 = a2 & 1;
    if ( v13 )
    {
      if ( MiIsRetpolineEnabled() )
      {
        MiUnmapRetpolineStubs(BugCheckParameter2, 0);
        if ( (unsigned int)MiIsImageFullyRetpolined(BugCheckParameter2) )
          KeFlushRsb();
        _mm_lfence();
      }
      SessionVm = MiGetSessionVm();
      MiDeleteSystemPagableVm(SessionVm, v54, v67, v66, 3, (struct _KTHREAD *)v60);
    }
    MiReleaseSessionDriverCharges((__int64)v11);
    if ( v13 )
    {
      if ( ((unsigned int)dword_140C6987C >> 12) + ((dword_140C6987C & 0xFFF) != 0) )
        MiUnmapPatchTable(v67 + 8 * v66);
      if ( (*(_DWORD *)(v54 + 56) & 0x8000000) != 0 )
      {
        MmGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
        MiDereferencePerSessionProtos(v54);
      }
      MiGetPdeAddress((unsigned __int64)v4);
      if ( (_QWORD)v58 && (_QWORD)v58 != -1LL )
        MiGetPdeAddress(v58 + 1);
      PdeAddress = MiGetPdeAddress((unsigned __int64)v4 + (unsigned int)(*(_DWORD *)(BugCheckParameter2 + 64) - 1));
      if ( *((_QWORD *)&v58 + 1) )
      {
        v17 = MiGetPdeAddress(*((unsigned __int64 *)&v58 + 1));
        if ( v17 == PdeAddress )
          PdeAddress -= 8LL;
      }
      if ( PdeAddress >= v16 )
        MiDeleteSessionPdes();
    }
    v18 = v59;
    if ( v59 )
    {
      v19 = MiPartitionIdToPointer(*(_WORD *)(v12 + 366));
      MiReturnCommit(v19, v18 - *((_QWORD *)&v60[0] + 1));
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v12 + 40), -v18);
    }
    if ( (v65 & 0x10) != 0 )
      v9 = v11[11];
    ExFreePoolWithTag(v11, 0);
    v8 = (__int64 *)v54;
  }
  else
  {
    v64 = 1;
  }
  if ( (*(_WORD *)(BugCheckParameter2 + 108))-- != 1 )
  {
    if ( v9 )
    {
      v40 = (__int128 *)v9;
      v55 = 0LL;
      if ( v9 != -2LL && v9 != 1 )
      {
        if ( (v9 & 1) != 0 )
        {
          *(_QWORD *)&v55 = 1LL;
          v40 = &v55;
          *((_QWORD *)&v55 + 1) = v9 & 0xFFFFFFFFFFFFFFFEuLL;
        }
        v41 = 0;
        if ( *(_QWORD *)v40 )
        {
          v42 = 0LL;
          do
          {
            v43 = *((_QWORD *)v40 + v42 + 1);
            if ( !v43 )
              break;
            if ( !(unsigned int)MiDereferenceSingleImport(v43) )
              break;
            v42 = ++v41;
          }
          while ( (unsigned __int64)v41 < *(_QWORD *)v40 );
        }
      }
      MiFreeLoadedImportList(v9);
    }
    if ( !v64 && (v65 & 2) != 0 )
      VfDriverUnloadImage(BugCheckParameter2);
    return;
  }
  KeCleanupImageTracepoints(BugCheckParameter2);
  if ( (int)MiMarkKernelImageCfgBits(BugCheckParameter2, 0LL) < 0 )
    KeBugCheckEx(0x1Au, 0x1015uLL, (ULONG_PTR)v4, BugCheckParameter2, 0LL);
  if ( v9 )
  {
    v44 = (__int128 *)v9;
    v54 = 0LL;
    if ( v9 != -2LL && v9 != 1 )
    {
      if ( (v9 & 1) != 0 )
      {
        *(_QWORD *)&v54 = 1LL;
        v44 = &v54;
        *((_QWORD *)&v54 + 1) = v9 & 0xFFFFFFFFFFFFFFFEuLL;
      }
      v45 = 0;
      if ( *(_QWORD *)v44 )
      {
        v46 = 0LL;
        do
        {
          v47 = *((_QWORD *)v44 + v46 + 1);
          if ( !v47 )
            break;
          if ( !(unsigned int)MiDereferenceSingleImport(v47) )
            break;
          v46 = ++v45;
        }
        while ( (unsigned __int64)v45 < *(_QWORD *)v44 );
      }
    }
    MiFreeLoadedImportList(v9);
  }
  if ( !v64 )
    MiDeleteSessionDriverProtos(v8);
  if ( dword_140C6987C )
    MiClearDriverHotPatchPtes(BugCheckParameter2);
  if ( (unsigned int)MmHasImageBeenImportOptimized(BugCheckParameter2) )
    MiFreeRetpolineImportInfo();
  if ( MiIsRetpolineEnabled() )
  {
    if ( v64 && !(unsigned int)MI_IS_PHYSICAL_ADDRESS(*(_QWORD *)(BugCheckParameter2 + 48)) )
      MiUnmapRetpolineStubs(BugCheckParameter2, v64);
    MiMarkKernelImageRetpolineBits(BugCheckParameter2, 0LL);
    if ( (unsigned int)MiIsImageFullyRetpolined(BugCheckParameter2) )
      KeFlushRsb();
    _mm_lfence();
  }
  if ( v5 )
  {
    v20 = *(void **)(v5 + 160);
    if ( v20 )
    {
      MiFreeRetpolineRelocationInformation(v20);
      *(_QWORD *)(v5 + 160) = 0LL;
    }
  }
  v21 = v65;
  if ( (v65 & 2) != 0 )
  {
    VfDriverUnloadImage(BugCheckParameter2);
    KseDriverUnloadImage(BugCheckParameter2);
  }
  if ( (v65 & 0x40) != 0 )
    KasanDriverUnloadImage(BugCheckParameter2);
  if ( v64 )
  {
    v22 = v66;
  }
  else
  {
    MiReleasePrivilegedPtes(v67, (unsigned int)v53);
    v22 = 0LL;
    v66 = 0LL;
  }
  if ( (v65 & 0x10) != 0 )
  {
    v23 = *(_QWORD *)(BugCheckParameter2 + 136);
    v57 = 0LL;
    if ( v23 != -2LL && v23 != 1 )
    {
      if ( (v23 & 1) != 0 )
      {
        *(_QWORD *)&v57 = 1LL;
        *((_QWORD *)&v57 + 1) = v23 & 0xFFFFFFFFFFFFFFFEuLL;
        v23 = (unsigned __int64)&v57;
      }
      v24 = 0;
      if ( *(_QWORD *)v23 )
      {
        v25 = 0LL;
        do
        {
          v26 = *(_QWORD *)(v23 + 8 * v25 + 8);
          if ( !v26 )
            break;
          if ( !(unsigned int)MiDereferenceSingleImport(v26) )
            break;
          v25 = ++v24;
        }
        while ( (unsigned __int64)v24 < *(_QWORD *)v23 );
      }
      v21 = v65;
    }
  }
  MiFreeLoadedImportList(*(_QWORD *)(BugCheckParameter2 + 136));
  *(_QWORD *)(BugCheckParameter2 + 136) = 1LL;
  LdrUnloadAlternateResourceModule(v4);
  if ( (*(_DWORD *)(BugCheckParameter2 + 104) & 0x100000) != 0 )
    DbgUnLoadImageSymbolsUnicode((PCUNICODE_STRING)(BugCheckParameter2 + 88), (__int64)v4, 0xFFFFFFFFLL);
  if ( *(_QWORD *)BugCheckParameter2 && v22 )
  {
    ExCovReadjustUnloadedModuleEntry(BugCheckParameter2, 0LL);
    v27 = 0;
    v28 = 0;
  }
  else
  {
    v27 = 0;
    v28 = 0;
    if ( !v66 )
      goto LABEL_120;
  }
  if ( (v21 & 1) != 0 )
  {
    MiRememberUnloadedDriver(BugCheckParameter2 + 88, v4, v53 << 12);
    v29 = (__int64)Object;
    v30 = 0LL;
    if ( Object )
    {
      v31 = MiSectionControlArea((__int64)Object);
      v30 = v31;
      if ( *(_QWORD *)BugCheckParameter2 )
      {
        v63[0] = v31;
        MiManageSubsectionView(v63, (_QWORD *)v5, 4);
      }
    }
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
    if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(BugCheckParameter2a) )
    {
      if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
      {
        inited = MiInitPerfMemoryFlags(0, 6);
        v4 = (void *)BugCheckParameter2a;
        MiLogPerfMemoryRangeEvent(BugCheckParameter2a, 0LL, inited, (v66 + 511) & 0xFFFFFFFFFFFFFE00uLL);
      }
      else
      {
        v4 = (void *)BugCheckParameter2a;
      }
      MiUnmapLargeDriver(v4, v66);
      v27 = 1;
    }
    else
    {
      if ( v5 )
        MiUnlockDriverCode(BugCheckParameter2);
      qword_140C65930 = BugCheckParameter2;
      MiDeleteSystemPagableVm((__int64)AnyMultiplexedVm, v30, v67, v66, 5, (struct _KTHREAD *)v60);
      v33 = v61;
      v34 = v60[0];
      if ( v30 )
        MiWalkEntireImage(v30, (ULONG_PTR)&v56, 4u, 0xFFFFFFFF);
      qword_140C65930 = 0LL;
      _InterlockedExchangeAdd((_DWORD *)&xmmword_140C65950 + 3, v34 - v33);
      v29 = (__int64)Object;
      if ( !Object )
      {
        MiReleasePrivilegedPtes(v67, (unsigned int)v53);
        if ( !(unsigned int)MmGetMinWsPagePriority() )
        {
          v49 = (void *)MiVaToSoftwareWsle((__int64)AnyMultiplexedVm, (__int64)((v66 << 28) + (v67 << 25)) >> 16);
          if ( v53 != v66 )
          {
            LOBYTE(v50) = 10;
            memset(v49, v50, v53 - v66);
          }
        }
        v28 = 1;
      }
      v5 = v55;
      v4 = (void *)BugCheckParameter2a;
    }
    goto LABEL_77;
  }
LABEL_120:
  v29 = (__int64)Object;
LABEL_77:
  if ( v64 == 1 )
  {
    if ( v29 )
      MiReleasePrivilegedPtes(v67, (unsigned int)v53);
    if ( (v65 & 1) != 0 )
      MiReturnSystemImageCommitment(BugCheckParameter2, v60);
  }
  if ( *(_QWORD *)BugCheckParameter2 )
  {
    MiProcessLoaderEntry((unsigned __int64 *)BugCheckParameter2, 0);
    if ( (PerfGlobalGroupMask & 4) != 0 )
      PerfLogImageUnload(
        BugCheckParameter2 + 72,
        0LL,
        0LL,
        v4,
        *(unsigned int *)(BugCheckParameter2 + 64),
        *(_DWORD *)(BugCheckParameter2 + 120),
        *(_WORD *)(BugCheckParameter2 + 110) & 0xF,
        (*(unsigned __int16 *)(BugCheckParameter2 + 110) >> 4) & 7,
        0);
  }
  if ( v28 )
    MiReleaseDriverPtes(0LL, v67, (unsigned int)v53);
  v35 = *(void **)(BugCheckParameter2 + 80);
  if ( v35 )
    ExFreePoolWithTag(v35, 0);
  if ( v5 )
  {
    v36 = *(void **)(v5 + 128);
    if ( v36 )
      MiFreePatchTableProtos(v36);
  }
  if ( v29 )
  {
    if ( v5 )
    {
      v37 = *(_QWORD *)(v5 + 56);
      if ( v37 )
        MiReturnResident((__int64)MiSystemPartition, v37);
    }
    v38 = MiSectionControlArea(v29);
    v39 = v38;
    if ( !v27 && v4 != *(void **)(*(_QWORD *)v38 + 32LL) )
    {
      MiFreePrivateFixupEntryForSystemImage((ULONG_PTR)v4, 1);
      MiReturnSystemImageAddress(v4, *(unsigned int *)(BugCheckParameter2 + 64));
    }
    if ( v5 && v64 && (*(_DWORD *)(v5 + 36) & 0x80u) != 0 )
      MiReturnCrossPartitionControlAreaCharges(v39);
    MiDereferenceControlArea(v39);
    ObDereferenceObjectDeferDelete(Object);
  }
  ExFreePoolWithTag((PVOID)BugCheckParameter2, 0);
}
