/*
 * XREFs of MiMapViewOfDataSection @ 0x1406FB4D0
 * Callers:
 *     MiMapViewOfSection @ 0x1406FCA10 (MiMapViewOfSection.c)
 * Callees:
 *     MmGetCurrentProcessorColor @ 0x140221E50 (MmGetCurrentProcessorColor.c)
 *     MiDereferenceExtendInfo @ 0x1402583CC (MiDereferenceExtendInfo.c)
 *     MiDereferenceControlArea @ 0x14025E274 (MiDereferenceControlArea.c)
 *     MiLocatePagefileSubsection @ 0x14026F0F0 (MiLocatePagefileSubsection.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x140281A58 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     MiUnlockVad @ 0x140281C44 (MiUnlockVad.c)
 *     MiAllocatePool @ 0x1402828F0 (MiAllocatePool.c)
 *     MiRemoveViewsFromSectionWithPfn @ 0x140283DF0 (MiRemoveViewsFromSectionWithPfn.c)
 *     MiGetControlAreaPtes @ 0x140287070 (MiGetControlAreaPtes.c)
 *     MiLocateSubsectionNode @ 0x140287180 (MiLocateSubsectionNode.c)
 *     MiCheckPurgeAndUpMapCount @ 0x140287450 (MiCheckPurgeAndUpMapCount.c)
 *     MiAweControlArea @ 0x14028799C (MiAweControlArea.c)
 *     MiComputeContiguousSubsectionPte @ 0x1402879C8 (MiComputeContiguousSubsectionPte.c)
 *     MiGetCommittedPages @ 0x140287C30 (MiGetCommittedPages.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     MiUpdateVadStartVpn @ 0x14030B420 (MiUpdateVadStartVpn.c)
 *     MiLockVad @ 0x14030B7F0 (MiLockVad.c)
 *     LOCK_ADDRESS_SPACE @ 0x14030B820 (LOCK_ADDRESS_SPACE.c)
 *     ExAllocatePoolMm @ 0x14030B860 (ExAllocatePoolMm.c)
 *     MiInsertVad @ 0x14030E390 (MiInsertVad.c)
 *     MiReferenceVad @ 0x14030EB64 (MiReferenceVad.c)
 *     MiAddViewsForSection @ 0x140311CC0 (MiAddViewsForSection.c)
 *     MiUnlockAndDereferenceVad @ 0x14032E700 (MiUnlockAndDereferenceVad.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     MiDecrementLargeSubsections @ 0x14059DF58 (MiDecrementLargeSubsections.c)
 *     MiIncrementLargeSubsections @ 0x14059F23C (MiIncrementLargeSubsections.c)
 *     MiUnlockAndDereferenceNestedVad @ 0x1405B204C (MiUnlockAndDereferenceNestedVad.c)
 *     MiFindPlaceholderVadToReplace @ 0x1405B2088 (MiFindPlaceholderVadToReplace.c)
 *     MiSecureVad @ 0x1406A2588 (MiSecureVad.c)
 *     MiChargeSegmentCommit @ 0x1406A4140 (MiChargeSegmentCommit.c)
 *     MiFreePlaceholderStorage @ 0x1406EBA90 (MiFreePlaceholderStorage.c)
 *     MiCommitVadMetadataBits @ 0x1406F74A8 (MiCommitVadMetadataBits.c)
 *     MiIsVaRangeAvailable @ 0x1406F8804 (MiIsVaRangeAvailable.c)
 *     MiUnmapVad @ 0x1406F9060 (MiUnmapVad.c)
 *     MiReferenceFileObjectForMap @ 0x1406FC03C (MiReferenceFileObjectForMap.c)
 *     MiRemoveSharedCommitNode @ 0x1406FC2F0 (MiRemoveSharedCommitNode.c)
 *     MiInsertSharedCommitNode @ 0x1406FC590 (MiInsertSharedCommitNode.c)
 *     MiAdvanceVadHint @ 0x1406FCFF0 (MiAdvanceVadHint.c)
 *     MiSelectUserAddress @ 0x1407B83C0 (MiSelectUserAddress.c)
 *     MiInsertVadCharges @ 0x1407B88C0 (MiInsertVadCharges.c)
 *     MiAddSecureEntry @ 0x1407B9190 (MiAddSecureEntry.c)
 *     MiLogMapFileEvent @ 0x14096CDB8 (MiLogMapFileEvent.c)
 *     MiCreatePlaceholderStorage @ 0x14097EE60 (MiCreatePlaceholderStorage.c)
 *     MiFinishPlaceholderVadReplacement @ 0x14097EF10 (MiFinishPlaceholderVadReplacement.c)
 *     MiPreparePlaceholderVadReplacement @ 0x14097F038 (MiPreparePlaceholderVadReplacement.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiMapViewOfDataSection(
        __int64 a1,
        __int64 a2,
        unsigned __int64 *a3,
        unsigned __int64 *a4,
        __int64 a5,
        int a6,
        int a7,
        unsigned __int64 a8)
{
  int v8; // eax
  __int64 v12; // rdx
  __int64 *v13; // rcx
  void *v14; // r9
  __int64 v15; // r8
  __int64 v16; // r13
  int v17; // edx
  int v18; // eax
  unsigned __int64 v20; // rax
  __int64 v21; // rdi
  struct _KTHREAD *CurrentThread; // r12
  __int64 v23; // rax
  unsigned __int64 v24; // rbx
  unsigned __int64 v25; // rax
  unsigned int inserted; // esi
  unsigned __int64 v27; // rbx
  bool v28; // si
  __int64 *SubsectionNode; // r9
  unsigned __int64 v30; // rcx
  unsigned __int64 v31; // rax
  __int64 *v32; // rsi
  __int64 v33; // rax
  __int64 v34; // rbx
  int v35; // eax
  _QWORD *PoolMm; // rax
  __int64 *v37; // rbx
  void *v38; // rcx
  int v39; // ecx
  bool v40; // zf
  int v41; // eax
  unsigned int v42; // ecx
  int v43; // eax
  unsigned int v44; // edx
  int v45; // ecx
  unsigned int v46; // eax
  int v47; // ecx
  unsigned __int64 v48; // r12
  unsigned __int64 v49; // r10
  __int64 v50; // r10
  __int64 v51; // r10
  unsigned __int64 v52; // r9
  unsigned __int64 v53; // r11
  _DWORD *v54; // rsi
  _DWORD *Pool; // rax
  __int64 v56; // rcx
  unsigned __int64 v57; // rax
  unsigned __int64 v58; // r8
  __int64 *v59; // rsi
  int v60; // r10d
  __int64 *v61; // rax
  __int64 v62; // r8
  PVOID v63; // r14
  ULONG_PTR v64; // rdi
  unsigned __int64 v65; // r12
  int v66; // r8d
  int v67; // r9d
  int v68; // eax
  PVOID v69; // rbx
  PVOID v70; // r14
  __int64 v71; // [rsp+50h] [rbp-99h]
  __int64 *BugCheckParameter2; // [rsp+58h] [rbp-91h]
  unsigned __int64 v73; // [rsp+60h] [rbp-89h] BYREF
  PVOID PlaceholderVadToReplace; // [rsp+68h] [rbp-81h]
  int v75; // [rsp+70h] [rbp-79h]
  int v76; // [rsp+74h] [rbp-75h]
  unsigned __int64 v77; // [rsp+78h] [rbp-71h]
  unsigned __int64 v78; // [rsp+80h] [rbp-69h]
  unsigned __int64 ControlAreaPtes; // [rsp+88h] [rbp-61h]
  unsigned __int64 v80; // [rsp+90h] [rbp-59h]
  __int64 v81; // [rsp+98h] [rbp-51h]
  __int64 v82; // [rsp+A0h] [rbp-49h]
  signed __int64 v83; // [rsp+A8h] [rbp-41h]
  __int64 *v84; // [rsp+B0h] [rbp-39h]
  __int64 v85; // [rsp+B8h] [rbp-31h] BYREF
  unsigned __int64 v86; // [rsp+C0h] [rbp-29h]
  __int64 v87; // [rsp+C8h] [rbp-21h] BYREF
  PVOID P; // [rsp+D0h] [rbp-19h]
  unsigned __int64 v89; // [rsp+D8h] [rbp-11h] BYREF
  ULONG_PTR v90; // [rsp+E0h] [rbp-9h]
  int PlaceholderStorage; // [rsp+138h] [rbp+4Fh] BYREF
  unsigned __int64 *v92; // [rsp+140h] [rbp+57h]
  unsigned __int64 *v93; // [rsp+148h] [rbp+5Fh]

  v93 = a4;
  v92 = a3;
  v8 = *(_DWORD *)(a2 + 64);
  v73 = 0LL;
  v87 = 0LL;
  v76 = 0;
  if ( (v8 & 2) != 0 )
    return 3221225485LL;
  if ( MiAweControlArea(a1) )
    return 3221225485LL;
  v15 = *v13;
  v16 = *(_QWORD *)(v12 + 88);
  v17 = *(_DWORD *)(v12 + 40);
  v83 = (signed __int64)v14;
  v81 = v15;
  if ( (v17 & 0x2000) != 0 && *(void **)(a1 + 64) == v14 )
    return 3221225485LL;
  v18 = v17 & 0x40000000;
  if ( (v17 & 0x20000000) != 0 )
  {
    if ( v18 || (v17 & 0x2000) != 0 || a7 == 24 || (a7 & 0xFFFFFFF8) == 0x10 || (a7 & 5) == 5 )
      return 3221225485LL;
    if ( *(void **)(a1 + 64) == v14 )
    {
      if ( !_bittest16((const signed __int16 *)(v15 + 12), 0xCu) )
        return 3221225485LL;
    }
    else if ( (*(_BYTE *)(a1 + 62) & 0xC) != 4 )
    {
      return 3221225485LL;
    }
  }
  else if ( v18 && ((v17 & 0x2000) != 0 || *(void **)(v16 + 2240) == v14 && (*(_DWORD *)(a2 + 60) & 1) == 0) )
  {
    return 3221225485LL;
  }
  v20 = *(_QWORD *)(a2 + 16);
  if ( v20 >= 0x200000 && ((v20 - 1) & *(_QWORD *)(a2 + 32)) != 0 || (v17 & 0x2000) != 0 && *a4 >= 0x10000000000LL )
    return 3221225503LL;
  v21 = (__int64)v14;
  CurrentThread = KeGetCurrentThread();
  v23 = *(_QWORD *)(v16 + 1680) + 48LL;
  PlaceholderVadToReplace = v14;
  v82 = v23;
  P = v14;
  v75 = (int)v14;
  v71 = (__int64)CurrentThread;
  MiCheckPurgeAndUpMapCount(a1);
  v24 = *a4;
  v25 = v24 + *(_QWORD *)(a2 + 24);
  v77 = v24 >> 12;
  v78 = v25 >> 12;
  ControlAreaPtes = MiGetControlAreaPtes(a1);
  if ( v24 >> 12 < ControlAreaPtes )
  {
    v27 = a8;
    v28 = 0;
    if ( *(_QWORD *)(a1 + 64) == v21 )
    {
      v89 = v77;
      BugCheckParameter2 = (__int64 *)MiLocatePagefileSubsection((unsigned int *)(a1 + 128), &v89);
      SubsectionNode = BugCheckParameter2;
      if ( !v27 && a7 == 24 )
        v28 = (*(_DWORD *)(a1 + 56) & 0x1000) != 0;
    }
    else
    {
      SubsectionNode = MiLocateSubsectionNode(a1, *v93, 0);
      BugCheckParameter2 = SubsectionNode;
    }
    v30 = *((unsigned int *)SubsectionNode + 9) | ((unsigned __int64)((_WORD)SubsectionNode[4] & 0xFFC0) << 26);
    v77 -= v30;
    v31 = v78 - v30;
    if ( v28 )
      v31 = 1LL;
    v78 = v31;
    PlaceholderStorage = MiAddViewsForSection(SubsectionNode, v31, (_DWORD *)8, (__int64)SubsectionNode);
    inserted = PlaceholderStorage;
    if ( PlaceholderStorage < 0 )
      goto LABEL_41;
    v32 = BugCheckParameter2;
    v84 = (__int64 *)(BugCheckParameter2[1] + 8 * v77);
    if ( *(_QWORD *)(a1 + 64) == v21 && v27 && MiGetCommittedPages((_QWORD *)a1) < ControlAreaPtes )
    {
      v33 = v21;
      LOBYTE(v33) = (v27 & 0xFFF) != 0;
      v83 = (v27 >> 12) + v33;
    }
    v85 = v21;
    v34 = *(_QWORD *)(a5 + 24) << 12;
    LOWORD(v35) = MmGetCurrentProcessorColor();
    PoolMm = ExAllocatePoolMm(64LL, 0x88uLL, 0x20646156u, v35 | 0x80000000);
    v21 = (__int64)PoolMm;
    if ( !PoolMm )
    {
      inserted = -1073741670;
      goto LABEL_39;
    }
    PoolMm[2] = -2LL;
    v39 = 0;
    v40 = a6 == 1;
    PoolMm[10] = v84;
    v41 = *((_DWORD *)PoolMm + 16);
    if ( v40 )
      v39 = 0x4000000;
    *(_QWORD *)(v21 + 72) = BugCheckParameter2;
    v42 = v41 & 0xFBFFFFFF | v39;
    v43 = (*(_DWORD *)(v21 + 48) ^ (a7 << 7)) & 0xF80;
    *(_DWORD *)(v21 + 64) = v42;
    *(_DWORD *)(v21 + 48) ^= v43;
    *(_DWORD *)(v21 + 48) ^= (*(_DWORD *)(v21 + 48) ^ (*(_DWORD *)(a2 + 52) << 12)) & 0x7F000;
    if ( *(_DWORD *)(a2 + 52) )
      *(_BYTE *)(*(_QWORD *)(v16 + 1680) + 340LL) = 1;
    if ( *(_QWORD *)(a1 + 64) && (*(_DWORD *)(a2 + 40) & 0x20002000) == 0 )
      *(_DWORD *)(v21 + 64) |= 0x2000000u;
    *(_QWORD *)(v21 + 40) = 0LL;
    v90 = v21 + 40;
    *(_DWORD *)(v21 + 64) = ((__int64)*v93 >> 16) & 0xFFFFFF | *(_DWORD *)(v21 + 64) & 0xFF000000;
    if ( (*(_DWORD *)(a2 + 64) & 0x4000000) != 0 )
    {
      PlaceholderStorage = MiCreatePlaceholderStorage(v21);
      inserted = PlaceholderStorage;
      if ( PlaceholderStorage < 0 )
        goto LABEL_39;
      v32 = BugCheckParameter2;
    }
    *(_QWORD *)(v21 + 128) = MiReferenceFileObjectForMap(a5);
    if ( (*(_DWORD *)(a2 + 40) & 0x20000000) != 0 )
    {
      if ( *(_QWORD *)(a1 + 64) )
      {
        v44 = MiIncrementLargeSubsections(v32, v78);
        if ( v44 > 1 )
        {
          inserted = -1073741280;
          goto LABEL_39;
        }
        v45 = *(_DWORD *)(v21 + 48);
        v76 = 1;
        v46 = v45 & 0xFFE7FFFF | 0x100000;
        v47 = v45 | 0x180000;
        if ( v44 == 1 )
          v47 = v46;
        *(_DWORD *)(v21 + 48) = v47;
      }
      else
      {
        *(_DWORD *)(v21 + 48) = *(_DWORD *)(v21 + 48) & 0xFFE7FFFF | 0x100000;
      }
    }
    LOCK_ADDRESS_SPACE((__int64)CurrentThread, v16);
    if ( (*(_DWORD *)(v16 + 1124) & 0x20) != 0 )
    {
      inserted = -1073741558;
      UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, v16);
      goto LABEL_123;
    }
    if ( (*(_DWORD *)(a2 + 60) & 1) != 0 )
    {
      v48 = *v92;
    }
    else
    {
      if ( !v34 )
      {
        PlaceholderStorage = MiSelectUserAddress(
                               *(_DWORD *)(a2 + 40),
                               *(_QWORD *)a2,
                               *(_QWORD *)(a2 + 8),
                               *(_QWORD *)(a2 + 24),
                               *(_QWORD *)(a2 + 16),
                               0LL,
                               a7,
                               0,
                               (__int64)&v85,
                               (__int64)&v73);
        inserted = PlaceholderStorage;
        if ( PlaceholderStorage >= 0 )
        {
          v48 = v73;
          v49 = *(_QWORD *)(a2 + 24) + v73 - 1;
          v80 = v49;
          goto LABEL_84;
        }
LABEL_121:
        UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, v16);
        if ( v75 )
          MiRemoveSharedCommitNode(a1, v16, 0LL);
LABEL_123:
        if ( v76 )
        {
          v61 = MiLocateSubsectionNode(a1, *(_QWORD *)(a2 + 32) + *v93 - 1, 0);
          v37 = BugCheckParameter2;
          MiDecrementLargeSubsections(BugCheckParameter2, v61);
          goto LABEL_40;
        }
LABEL_39:
        v37 = BugCheckParameter2;
LABEL_40:
        MiRemoveViewsFromSectionWithPfn(v37);
LABEL_41:
        MiDereferenceControlArea(a1);
        if ( v21 )
        {
          if ( *(__int64 *)(v21 + 120) < 0 )
            MiDereferenceExtendInfo(v21, a1);
          v38 = *(void **)(v21 + 128);
          if ( v38 )
            ObfDereferenceObject(v38);
          MiFreePlaceholderStorage(v21);
          ExFreePoolWithTag((PVOID)v21, 0);
        }
        if ( P )
          ExFreePoolWithTag(P, 0);
        return inserted;
      }
      v48 = v34 + *v93;
    }
    v50 = *(_QWORD *)(a2 + 24) - 1LL;
    v73 = v48;
    v51 = v48 + v50;
    v40 = (*(_DWORD *)(a2 + 64) & 0x4000000) == 0;
    v80 = v51;
    if ( v40 )
    {
      if ( !MiIsVaRangeAvailable(v16, v48, v51 - v48 + 1, *(_QWORD *)a2, *(_QWORD *)(a2 + 8)) )
      {
        inserted = -1073741800;
        UNLOCK_ADDRESS_SPACE_UNORDERED(v71, v16);
        goto LABEL_123;
      }
    }
    else
    {
      PlaceholderVadToReplace = (PVOID)MiFindPlaceholderVadToReplace(v48, v51, *(_BYTE *)(a2 + 57), &PlaceholderStorage);
      if ( !PlaceholderVadToReplace )
      {
        inserted = PlaceholderStorage;
        CurrentThread = (struct _KTHREAD *)v71;
        goto LABEL_121;
      }
      v49 = v80;
    }
LABEL_84:
    ControlAreaPtes = v48 >> 12;
    v86 = v49 >> 12;
    MiUpdateVadStartVpn(v21, v48 >> 12);
    *(_DWORD *)(v21 + 28) = v52;
    *(_BYTE *)(v21 + 33) = BYTE4(v52);
    if ( (*(_DWORD *)(a2 + 40) & 0x2000) != 0 )
    {
      CurrentThread = (struct _KTHREAD *)v71;
      --*(_WORD *)(v71 + 486);
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&::BugCheckParameter2, 0LL);
      v54 = *(_DWORD **)(v81 + 32);
      if ( v54 )
      {
        ++v54[2];
      }
      else
      {
        Pool = MiAllocatePool(64, 0x10uLL, 0x78436D4Du);
        v54 = Pool;
        if ( !Pool )
        {
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&::BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(&::BugCheckParameter2);
          KeAbPostRelease((ULONG_PTR)&::BugCheckParameter2);
          v40 = (*(_WORD *)(v71 + 486))++ == 0xFFFF;
          if ( v40 && *(_QWORD *)(v71 + 152) != v71 + 152 )
            KiCheckForKernelApcDelivery();
          inserted = -1073741670;
          goto LABEL_119;
        }
        v56 = v81;
        Pool[2] = 1;
        *(_QWORD *)Pool = _InterlockedCompareExchange64((volatile signed __int64 *)(v56 + 24), -1LL, -1LL);
        *(_QWORD *)(v56 + 32) = Pool;
      }
      v57 = *(_QWORD *)(a5 + 48);
      if ( *(_QWORD *)v54 < v57 )
        *(_QWORD *)v54 = v57;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&::BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(&::BugCheckParameter2);
      KeAbPostRelease((ULONG_PTR)&::BugCheckParameter2);
      v40 = (*(_WORD *)(v71 + 486))++ == 0xFFFF;
      if ( v40 && *(_QWORD *)(v71 + 152) != v71 + 152 )
        KiCheckForKernelApcDelivery();
      v48 = v73;
      v52 = v86;
      v53 = ControlAreaPtes;
      *(_QWORD *)(v21 + 120) = v54;
    }
    if ( (a7 & 5) == 5 )
    {
      v58 = (*(unsigned int *)(v21 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v21 + 33) << 32))
          - (*(unsigned int *)(v21 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v21 + 32) << 32))
          + 1;
      *(_DWORD *)(v21 + 52) ^= ((*(_DWORD *)(v21 + 28) - *(_DWORD *)(v21 + 24) + 1) ^ *(_DWORD *)(v21 + 52)) & 0x7FFFFFFF;
      *(_BYTE *)(v21 + 34) = v58 >> 31;
    }
    v59 = BugCheckParameter2;
    *(_QWORD *)(v21 + 88) = MiComputeContiguousSubsectionPte((__int64)BugCheckParameter2, v52 + v77 - v53);
    if ( (*(_DWORD *)(a2 + 40) & 0x400000) != 0 || (*(_DWORD *)(a5 + 56) & 0x4000) != 0 )
    {
      P = (PVOID)MiAddSecureEntry(v21, v48, v60, 0x80000000, 0);
      if ( !P )
      {
        inserted = -1073741670;
LABEL_118:
        CurrentThread = (struct _KTHREAD *)v71;
LABEL_119:
        if ( PlaceholderVadToReplace )
          MiUnlockVad((__int64)CurrentThread, (__int64)PlaceholderVadToReplace);
        goto LABEL_121;
      }
    }
    if ( (*(_DWORD *)(a2 + 40) & 0x20000000) != 0 )
    {
      *(_DWORD *)(v21 + 48) = *(_DWORD *)(v21 + 48) & 0xFFFFFF8F | 0x50;
      v48 = v73;
      *(_DWORD *)(v21 + 64) |= 0x1000000u;
    }
    if ( !*(_QWORD *)(a1 + 64) )
    {
      inserted = MiInsertSharedCommitNode(a1, v16, 0LL);
      if ( (inserted & 0x80000000) != 0 )
        goto LABEL_118;
      v59 = BugCheckParameter2;
      v75 = 1;
    }
    if ( v83 && !(unsigned int)MiChargeSegmentCommit(v59, v84, v83) )
    {
      inserted = -1073741523;
      goto LABEL_118;
    }
    PlaceholderStorage = MiInsertVadCharges(v21, v16);
    inserted = PlaceholderStorage;
    if ( PlaceholderStorage < 0 )
      goto LABEL_118;
    if ( !*(_QWORD *)(a1 + 64) && *(int *)(a1 + 56) < 0 )
      *(_DWORD *)(v21 + 48) = *(_DWORD *)(v21 + 48) & 0xFFE7FFFF | 0x80000;
    if ( PlaceholderVadToReplace )
    {
      MiPreparePlaceholderVadReplacement(PlaceholderVadToReplace, v16, v82);
      ExAcquirePushLockExclusiveEx(v21 + 40, 0LL);
    }
    else
    {
      MiLockVad(v71, v21);
    }
    MiInsertVad(v21, v16, 0);
    if ( !*(_QWORD *)(a1 + 64) && !*(_QWORD *)(v81 + 56) )
      *(_QWORD *)(v81 + 56) = v48;
    v62 = v85;
    if ( v85 )
      MiAdvanceVadHint(ControlAreaPtes, v86);
    if ( ((a7 - 4) & 0xFFFFFFFD) == 0 && *(_QWORD *)(a1 + 64) )
    {
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 92));
      v48 = v73;
    }
    if ( (PerfGlobalGroupMask[0] & 0x8000) != 0 )
      MiLogMapFileEvent(v21, 1061LL, v62);
    inserted = 0;
    PlaceholderStorage = 0;
    if ( !*(_DWORD *)(a2 + 120) && !*(_QWORD *)(a2 + 72) )
    {
      v63 = PlaceholderVadToReplace;
      if ( PlaceholderVadToReplace )
      {
        v64 = v90;
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v90, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v64);
        KeAbPostRelease(v64);
        UNLOCK_ADDRESS_SPACE_UNORDERED(v71, v16);
        v65 = v73;
        inserted = PlaceholderStorage;
        MiFinishPlaceholderVadReplacement(v63);
        *v92 = v65;
      }
      else
      {
        MiUnlockVad(v71, v21);
        UNLOCK_ADDRESS_SPACE_UNORDERED(v71, v16);
        *v92 = v48;
      }
      return inserted;
    }
    UNLOCK_ADDRESS_SPACE_UNORDERED(v71, v16);
    MiReferenceVad(v21);
    v66 = *(_DWORD *)(a2 + 120);
    if ( v66 )
    {
      inserted = MiCommitVadMetadataBits(v21, 0LL, v66);
      if ( (inserted & 0x80000000) != 0 )
      {
LABEL_157:
        v69 = PlaceholderVadToReplace;
        MiUnmapVad((unsigned int *)v21, (__int64)PlaceholderVadToReplace, 0LL);
        if ( v69 )
          MiFinishPlaceholderVadReplacement(v69);
        return inserted;
      }
    }
    if ( *(_QWORD *)(a2 + 72) )
    {
      v67 = *(_DWORD *)(a2 + 68);
      if ( (unsigned int)(v67 - 1) > 1 && v67 != -2147483647 && v67 != 4 )
      {
        v68 = -1073741755;
LABEL_156:
        inserted = v68;
        goto LABEL_157;
      }
      v68 = MiSecureVad(v21, v48, *(_QWORD *)(a2 + 24), v67, 0, &v87);
      if ( v68 < 0 )
        goto LABEL_156;
      **(_QWORD **)(a2 + 72) = qword_140C50680 ^ v87 ^ v16;
    }
    v70 = PlaceholderVadToReplace;
    if ( PlaceholderVadToReplace )
    {
      MiUnlockAndDereferenceNestedVad((PVOID)v21);
      MiFinishPlaceholderVadReplacement(v70);
    }
    else
    {
      MiUnlockAndDereferenceVad((char *)v21);
    }
    *v92 = v48;
    return inserted;
  }
  inserted = -1073741793;
  MiDereferenceControlArea(a1);
  return inserted;
}
