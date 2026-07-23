/*
 * XREFs of MiMapViewOfDataSection @ 0x140720480
 * Callers:
 *     MiMapViewOfSection @ 0x140721860 (MiMapViewOfSection.c)
 * Callees:
 *     MiDereferenceControlArea @ 0x14020B890 (MiDereferenceControlArea.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x140214D94 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     MiGetCommittedPages @ 0x1402197C0 (MiGetCommittedPages.c)
 *     KeAbPreAcquire @ 0x140230FD0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     MiLocatePagefileSubsection @ 0x140273AD0 (MiLocatePagefileSubsection.c)
 *     MiUnlockAndDereferenceVad @ 0x140274D20 (MiUnlockAndDereferenceVad.c)
 *     MiReferenceVad @ 0x1402756E4 (MiReferenceVad.c)
 *     MiCheckPurgeAndUpMapCount @ 0x140287480 (MiCheckPurgeAndUpMapCount.c)
 *     MiInsertVad @ 0x140287F20 (MiInsertVad.c)
 *     MiGetControlAreaPtes @ 0x1402888A0 (MiGetControlAreaPtes.c)
 *     MiAddViewsForSection @ 0x140288A00 (MiAddViewsForSection.c)
 *     MiLocateSubsectionNode @ 0x140289550 (MiLocateSubsectionNode.c)
 *     MiUnlockVad @ 0x140289F30 (MiUnlockVad.c)
 *     MiLockVad @ 0x14029CA60 (MiLockVad.c)
 *     MiUpdateVadStartVpn @ 0x14029CB98 (MiUpdateVadStartVpn.c)
 *     MiComputeContiguousSubsectionPte @ 0x14029CBAC (MiComputeContiguousSubsectionPte.c)
 *     LOCK_ADDRESS_SPACE @ 0x14029CBDC (LOCK_ADDRESS_SPACE.c)
 *     MiRemoveViewsFromSectionWithPfn @ 0x14029CD14 (MiRemoveViewsFromSectionWithPfn.c)
 *     MiAweControlArea @ 0x1402A1134 (MiAweControlArea.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     MiAllocatePool @ 0x1402DF430 (MiAllocatePool.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FD0A0 (ExfAcquirePushLockExclusiveEx.c)
 *     KiCheckForKernelApcDelivery @ 0x14030FAB0 (KiCheckForKernelApcDelivery.c)
 *     MiDereferenceExtendInfo @ 0x140366904 (MiDereferenceExtendInfo.c)
 *     MiDecrementLargeSubsections @ 0x14063CC44 (MiDecrementLargeSubsections.c)
 *     MiIncrementLargeSubsections @ 0x14063DEA8 (MiIncrementLargeSubsections.c)
 *     MiUnlockAndDereferenceNestedVad @ 0x14066116C (MiUnlockAndDereferenceNestedVad.c)
 *     MiFindPlaceholderVadToReplace @ 0x140661250 (MiFindPlaceholderVadToReplace.c)
 *     MiFreePlaceholderStorage @ 0x1406834D8 (MiFreePlaceholderStorage.c)
 *     MiCommitVadMetadataBits @ 0x1406AE7C0 (MiCommitVadMetadataBits.c)
 *     MiIsVaRangeAvailable @ 0x1406AF82C (MiIsVaRangeAvailable.c)
 *     MiInsertVadCharges @ 0x1406FAAC0 (MiInsertVadCharges.c)
 *     MiUnmapVad @ 0x14071F4A4 (MiUnmapVad.c)
 *     MiAdvanceVadHint @ 0x14071FB60 (MiAdvanceVadHint.c)
 *     MiSelectUserAddress @ 0x14071FEC0 (MiSelectUserAddress.c)
 *     MiReferenceFileObjectForMap @ 0x140721018 (MiReferenceFileObjectForMap.c)
 *     MiInsertSharedCommitNode @ 0x140722220 (MiInsertSharedCommitNode.c)
 *     MiRemoveSharedCommitNode @ 0x1407225A0 (MiRemoveSharedCommitNode.c)
 *     MiAddSecureEntry @ 0x140745F74 (MiAddSecureEntry.c)
 *     MiChargeSegmentCommit @ 0x1407481F8 (MiChargeSegmentCommit.c)
 *     MiSecureVad @ 0x1407BACEC (MiSecureVad.c)
 *     MiLogMapFileEvent @ 0x1408AC292 (MiLogMapFileEvent.c)
 *     MiCreatePlaceholderStorage @ 0x140A47EE0 (MiCreatePlaceholderStorage.c)
 *     MiFinishPlaceholderVadReplacement @ 0x140A47FA8 (MiFinishPlaceholderVadReplacement.c)
 *     MiPreparePlaceholderVadReplacement @ 0x140A480D8 (MiPreparePlaceholderVadReplacement.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
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
  void *v14; // r10
  __int64 v15; // r9
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
  ULONG_PTR SubsectionNode; // r9
  unsigned __int64 v30; // rcx
  unsigned __int64 v31; // rax
  __int64 *v32; // rsi
  __int64 v33; // rax
  __int64 v34; // rbx
  _DWORD *Pool; // rax
  int v36; // ecx
  unsigned int v37; // ecx
  int v38; // eax
  bool v39; // zf
  int v40; // ecx
  unsigned int v41; // edx
  int v42; // ecx
  unsigned int v43; // eax
  int v44; // ecx
  unsigned __int64 v45; // rsi
  unsigned __int64 v46; // r9
  unsigned __int64 v47; // r10
  __int64 v48; // rax
  __int64 v49; // rsi
  unsigned __int64 v50; // rcx
  __int64 v51; // rsi
  _DWORD *v52; // rax
  __int64 v53; // rcx
  unsigned __int64 v54; // rax
  unsigned __int64 v55; // r8
  __int64 *v56; // rax
  void *v57; // rcx
  __int64 v58; // rax
  __int64 v59; // rsi
  PVOID v60; // r14
  volatile signed __int64 *v61; // rdi
  int v62; // r8d
  int v63; // r9d
  int v64; // eax
  PVOID v65; // rbx
  PVOID v66; // r14
  unsigned __int64 v67; // [rsp+50h] [rbp-89h] BYREF
  ULONG_PTR v68; // [rsp+58h] [rbp-81h]
  PVOID PlaceholderVadToReplace; // [rsp+60h] [rbp-79h]
  int v70; // [rsp+68h] [rbp-71h]
  int v71; // [rsp+6Ch] [rbp-6Dh]
  unsigned __int64 v72; // [rsp+70h] [rbp-69h]
  unsigned __int64 v73; // [rsp+78h] [rbp-61h]
  unsigned __int64 ControlAreaPtes; // [rsp+80h] [rbp-59h]
  __int64 v75; // [rsp+88h] [rbp-51h]
  __int64 v76; // [rsp+90h] [rbp-49h]
  unsigned __int64 v77; // [rsp+98h] [rbp-41h]
  unsigned __int64 v78; // [rsp+A0h] [rbp-39h]
  __int64 v79; // [rsp+A8h] [rbp-31h]
  _QWORD *v80; // [rsp+B0h] [rbp-29h] BYREF
  unsigned __int64 v81; // [rsp+B8h] [rbp-21h]
  __int64 v82; // [rsp+C0h] [rbp-19h] BYREF
  PVOID P; // [rsp+C8h] [rbp-11h]
  unsigned __int64 v84; // [rsp+D0h] [rbp-9h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+D8h] [rbp-1h]
  int PlaceholderStorage; // [rsp+128h] [rbp+4Fh] BYREF
  unsigned __int64 *v87; // [rsp+130h] [rbp+57h]
  unsigned __int64 *v88; // [rsp+138h] [rbp+5Fh]

  v88 = a4;
  v87 = a3;
  v8 = *(_DWORD *)(a2 + 64);
  v67 = 0LL;
  v82 = 0LL;
  v71 = 0;
  if ( (v8 & 2) != 0 )
    return 3221225485LL;
  if ( (unsigned int)MiAweControlArea(a1) )
    return 3221225485LL;
  v15 = *v13;
  v16 = *(_QWORD *)(v12 + 88);
  v17 = *(_DWORD *)(v12 + 40);
  v78 = (unsigned __int64)v14;
  v75 = v15;
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
  v76 = v23;
  P = v14;
  v70 = (int)v14;
  MiCheckPurgeAndUpMapCount(a1);
  v24 = *a4;
  v25 = v24 + *(_QWORD *)(a2 + 24);
  v72 = v24 >> 12;
  v73 = v25 >> 12;
  ControlAreaPtes = MiGetControlAreaPtes(a1);
  if ( v24 >> 12 < ControlAreaPtes )
  {
    v27 = a8;
    v28 = 0;
    if ( *(_QWORD *)(a1 + 64) == v21 )
    {
      v84 = v72;
      v68 = (ULONG_PTR)MiLocatePagefileSubsection((unsigned int *)(a1 + 128), &v84);
      SubsectionNode = v68;
      if ( !v27 && a7 == 24 )
        v28 = (*(_DWORD *)(a1 + 56) & 0x1000) != 0;
    }
    else
    {
      SubsectionNode = (ULONG_PTR)MiLocateSubsectionNode(a1, *v88, 0);
      v68 = SubsectionNode;
    }
    v30 = *(unsigned int *)(SubsectionNode + 36) | ((unsigned __int64)(*(_WORD *)(SubsectionNode + 32) & 0xFFC0) << 26);
    v72 -= v30;
    v31 = v73 - v30;
    if ( v28 )
      v31 = 1LL;
    v73 = v31;
    PlaceholderStorage = MiAddViewsForSection(SubsectionNode, v31, 8u);
    inserted = PlaceholderStorage;
    if ( PlaceholderStorage < 0 )
      goto LABEL_118;
    v32 = (__int64 *)v68;
    v79 = *(_QWORD *)(v68 + 8) + 8 * v72;
    if ( *(_QWORD *)(a1 + 64) == v21 && v27 && MiGetCommittedPages((_QWORD *)a1) < ControlAreaPtes )
    {
      v33 = v21;
      LOBYTE(v33) = (v27 & 0xFFF) != 0;
      v78 = (v27 >> 12) + v33;
    }
    v80 = (_QWORD *)v21;
    v34 = *(_QWORD *)(a5 + 24) << 12;
    Pool = MiAllocatePool(64, 0x88uLL, 0x20646156u);
    v21 = (__int64)Pool;
    if ( !Pool )
    {
      inserted = -1073741670;
LABEL_117:
      MiRemoveViewsFromSectionWithPfn((__int64 *)v68);
LABEL_118:
      MiDereferenceControlArea(a1);
      if ( v21 )
      {
        if ( *(__int64 *)(v21 + 120) < 0 )
          MiDereferenceExtendInfo(v21, a1);
        v57 = *(void **)(v21 + 128);
        if ( v57 )
          ObfDereferenceObject(v57);
        MiFreePlaceholderStorage(v21);
        ExFreePoolWithTag((PVOID)v21, 0);
      }
      if ( P )
        ExFreePoolWithTag(P, 0);
      return inserted;
    }
    v36 = Pool[16];
    *((_QWORD *)Pool + 2) = -2LL;
    v37 = v36 & 0xFBFFFFFF;
    *((_QWORD *)Pool + 10) = v79;
    v38 = 0;
    v39 = a6 == 1;
    *(_QWORD *)(v21 + 72) = v32;
    if ( v39 )
      v38 = 0x4000000;
    *(_DWORD *)(v21 + 64) = v38 | v37;
    v40 = *(_DWORD *)(v21 + 48) ^ (*(_DWORD *)(v21 + 48) ^ (a7 << 7)) & 0xF80;
    *(_DWORD *)(v21 + 48) = v40;
    *(_DWORD *)(v21 + 48) = v40 ^ (v40 ^ (*(_DWORD *)(a2 + 52) << 12)) & 0x7F000;
    if ( *(_DWORD *)(a2 + 52) )
      *(_BYTE *)(*(_QWORD *)(v16 + 1680) + 340LL) = 1;
    if ( *(_QWORD *)(a1 + 64) && (*(_DWORD *)(a2 + 40) & 0x20002000) == 0 )
      *(_DWORD *)(v21 + 64) |= 0x2000000u;
    *(_QWORD *)(v21 + 40) = 0LL;
    BugCheckParameter2 = v21 + 40;
    *(_DWORD *)(v21 + 64) = ((__int64)*v88 >> 16) & 0xFFFFFF | *(_DWORD *)(v21 + 64) & 0xFF000000;
    if ( (*(_DWORD *)(a2 + 64) & 0x4000000) != 0 )
    {
      PlaceholderStorage = MiCreatePlaceholderStorage(v21);
      inserted = PlaceholderStorage;
      if ( PlaceholderStorage < 0 )
        goto LABEL_117;
      v32 = (__int64 *)v68;
    }
    *(_QWORD *)(v21 + 128) = MiReferenceFileObjectForMap(a5);
    if ( (*(_DWORD *)(a2 + 40) & 0x20000000) != 0 )
    {
      if ( *(_QWORD *)(a1 + 64) )
      {
        v41 = MiIncrementLargeSubsections(v32, v73);
        if ( v41 > 1 )
        {
          inserted = -1073741280;
          goto LABEL_117;
        }
        v42 = *(_DWORD *)(v21 + 48);
        v71 = 1;
        v43 = v42 & 0xFFE7FFFF | 0x100000;
        v44 = v42 | 0x180000;
        if ( v41 == 1 )
          v44 = v43;
        *(_DWORD *)(v21 + 48) = v44;
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
      goto LABEL_115;
    }
    if ( (*(_DWORD *)(a2 + 60) & 1) != 0 )
    {
      v50 = *v87;
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
                               &v80,
                               &v67);
        inserted = PlaceholderStorage;
        if ( PlaceholderStorage >= 0 )
        {
          v45 = v67 - 1 + *(_QWORD *)(a2 + 24);
          v77 = v45;
          goto LABEL_66;
        }
LABEL_113:
        UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, v16);
        if ( v70 )
          MiRemoveSharedCommitNode(a1, v16, 0LL);
        goto LABEL_115;
      }
      v50 = v34 + *v88;
    }
    v51 = *(_QWORD *)(a2 + 24) - 1LL;
    v67 = v50;
    v45 = v50 + v51;
    v39 = (*(_DWORD *)(a2 + 64) & 0x4000000) == 0;
    v77 = v45;
    if ( v39 )
    {
      if ( !(unsigned int)MiIsVaRangeAvailable(v16, v50, v45 - v50 + 1, *(_QWORD *)a2, *(_QWORD *)(a2 + 8)) )
      {
        inserted = -1073741800;
        UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, v16);
LABEL_115:
        if ( v71 )
        {
          v56 = MiLocateSubsectionNode(a1, *(_QWORD *)(a2 + 32) + *v88 - 1, 0);
          MiDecrementLargeSubsections((__int64 *)v68, v56);
        }
        goto LABEL_117;
      }
    }
    else
    {
      PlaceholderVadToReplace = (PVOID)MiFindPlaceholderVadToReplace(v50, v45, *(_BYTE *)(a2 + 57), &PlaceholderStorage);
      if ( !PlaceholderVadToReplace )
      {
        inserted = PlaceholderStorage;
        goto LABEL_113;
      }
    }
LABEL_66:
    ControlAreaPtes = v67 >> 12;
    v81 = v45 >> 12;
    MiUpdateVadStartVpn(v21, v67 >> 12);
    *(_DWORD *)(v21 + 28) = v46;
    *(_BYTE *)(v21 + 33) = BYTE4(v46);
    if ( (*(_DWORD *)(a2 + 40) & 0x2000) != 0 )
    {
      --CurrentThread->SpecialApcDisable;
      v48 = KeAbPreAcquire((__int64)&qword_140C65550, 0LL);
      v49 = v48;
      if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140C65550, 0LL) )
        ExfAcquirePushLockExclusiveEx(&qword_140C65550, v48, (__int64)&qword_140C65550);
      if ( v49 )
        *(_BYTE *)(v49 + 18) = 1;
      v45 = *(_QWORD *)(v75 + 32);
      if ( v45 )
      {
        ++*(_DWORD *)(v45 + 8);
      }
      else
      {
        v52 = MiAllocatePool(64, 0x10uLL, 0x78436D4Du);
        v45 = (unsigned __int64)v52;
        if ( !v52 )
        {
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C65550, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C65550);
          KeAbPostRelease((ULONG_PTR)&qword_140C65550);
          v39 = CurrentThread->SpecialApcDisable++ == -1;
          if ( v39
            && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
          {
            KiCheckForKernelApcDelivery();
          }
          inserted = -1073741670;
          goto LABEL_111;
        }
        v53 = v75;
        v52[2] = 1;
        *(_QWORD *)v52 = _InterlockedCompareExchange64((volatile signed __int64 *)(v53 + 24), -1LL, -1LL);
        *(_QWORD *)(v53 + 32) = v52;
      }
      v54 = *(_QWORD *)(a5 + 48);
      if ( *(_QWORD *)v45 < v54 )
        *(_QWORD *)v45 = v54;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C65550, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C65550);
      KeAbPostRelease((ULONG_PTR)&qword_140C65550);
      v39 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v39
        && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery();
      }
      v46 = v81;
      v47 = ControlAreaPtes;
      *(_QWORD *)(v21 + 120) = v45;
      LODWORD(v45) = v77;
    }
    if ( (a7 & 5) == 5 )
    {
      v55 = (*(unsigned int *)(v21 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v21 + 33) << 32))
          - (*(unsigned int *)(v21 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v21 + 32) << 32))
          + 1;
      *(_DWORD *)(v21 + 52) ^= (*(_DWORD *)(v21 + 52) ^ (*(_DWORD *)(v21 + 28) - *(_DWORD *)(v21 + 24) + 1)) & 0x7FFFFFFF;
      *(_BYTE *)(v21 + 34) = v55 >> 31;
    }
    *(_QWORD *)(v21 + 88) = MiComputeContiguousSubsectionPte(v68, v46 + v72 - v47);
    if ( (*(_DWORD *)(a2 + 40) & 0x400000) != 0 || (*(_DWORD *)(a5 + 56) & 0x4000) != 0 )
    {
      P = (PVOID)MiAddSecureEntry(v21, v67, v45, 0x80000000, 0);
      if ( !P )
      {
        inserted = -1073741670;
        goto LABEL_111;
      }
    }
    if ( (*(_DWORD *)(a2 + 40) & 0x20000000) != 0 )
    {
      *(_DWORD *)(v21 + 48) = *(_DWORD *)(v21 + 48) & 0xFFFFFF8F | 0x50;
      *(_DWORD *)(v21 + 64) |= 0x1000000u;
    }
    if ( !*(_QWORD *)(a1 + 64) )
    {
      inserted = MiInsertSharedCommitNode(a1, v16, 0LL);
      if ( (inserted & 0x80000000) != 0 )
        goto LABEL_111;
      v70 = 1;
    }
    if ( v78 && !(unsigned int)MiChargeSegmentCommit(v68, v79, v78) )
    {
      inserted = -1073741523;
      goto LABEL_111;
    }
    PlaceholderStorage = MiInsertVadCharges(v21, (struct _KPROCESS *)v16);
    inserted = PlaceholderStorage;
    if ( PlaceholderStorage < 0 )
    {
LABEL_111:
      if ( PlaceholderVadToReplace )
        MiUnlockVad((__int64)CurrentThread, (__int64)PlaceholderVadToReplace);
      goto LABEL_113;
    }
    if ( !*(_QWORD *)(a1 + 64) && *(int *)(a1 + 56) < 0 )
      *(_DWORD *)(v21 + 48) = *(_DWORD *)(v21 + 48) & 0xFFE7FFFF | 0x80000;
    if ( PlaceholderVadToReplace )
    {
      MiPreparePlaceholderVadReplacement(PlaceholderVadToReplace, v16, v76);
      v58 = KeAbPreAcquire(v21 + 40, 0LL);
      v59 = v58;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v21 + 40), 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v21 + 40), v58, v21 + 40);
      if ( v59 )
        *(_BYTE *)(v59 + 18) = 1;
    }
    else
    {
      MiLockVad((__int64)CurrentThread, v21);
    }
    MiInsertVad(v21, v16, 0);
    if ( !*(_QWORD *)(a1 + 64) && !*(_QWORD *)(v75 + 56) )
      *(_QWORD *)(v75 + 56) = v67;
    if ( v80 )
      MiAdvanceVadHint(ControlAreaPtes, v81, v80);
    if ( ((a7 - 4) & 0xFFFFFFFD) == 0 && *(_QWORD *)(a1 + 64) )
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 92));
    if ( (PerfGlobalGroupMask & 0x8000) != 0 )
      MiLogMapFileEvent(v21, 1061LL);
    inserted = 0;
    PlaceholderStorage = 0;
    if ( !*(_DWORD *)(a2 + 120) && !*(_QWORD *)(a2 + 72) )
    {
      v60 = PlaceholderVadToReplace;
      if ( PlaceholderVadToReplace )
      {
        v61 = (volatile signed __int64 *)BugCheckParameter2;
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v61);
        KeAbPostRelease((ULONG_PTR)v61);
        UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, v16);
        inserted = PlaceholderStorage;
        MiFinishPlaceholderVadReplacement(v60);
        *v87 = v67;
      }
      else
      {
        MiUnlockVad((__int64)CurrentThread, v21);
        UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, v16);
        *v87 = v67;
      }
      return inserted;
    }
    UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, v16);
    MiReferenceVad(v21);
    v62 = *(_DWORD *)(a2 + 120);
    if ( v62 )
    {
      inserted = MiCommitVadMetadataBits(v21, 0LL, v62);
      if ( (inserted & 0x80000000) != 0 )
      {
LABEL_161:
        v65 = PlaceholderVadToReplace;
        MiUnmapVad((unsigned int *)v21, (__int64)PlaceholderVadToReplace, 0);
        if ( v65 )
          MiFinishPlaceholderVadReplacement(v65);
        return inserted;
      }
    }
    if ( *(_QWORD *)(a2 + 72) )
    {
      v63 = *(_DWORD *)(a2 + 68);
      if ( (unsigned int)(v63 - 1) > 1 && v63 != -2147483647 && v63 != 4 )
      {
        v64 = -1073741755;
LABEL_160:
        inserted = v64;
        goto LABEL_161;
      }
      v64 = MiSecureVad(v21, v67, *(_QWORD *)(a2 + 24), v63, 0, (__int64)&v82);
      if ( v64 < 0 )
        goto LABEL_160;
      **(_QWORD **)(a2 + 72) = qword_140C65A40 ^ v82 ^ v16;
    }
    v66 = PlaceholderVadToReplace;
    if ( PlaceholderVadToReplace )
    {
      MiUnlockAndDereferenceNestedVad((PVOID)v21);
      MiFinishPlaceholderVadReplacement(v66);
    }
    else
    {
      MiUnlockAndDereferenceVad((char *)v21);
    }
    *v87 = v67;
    return inserted;
  }
  inserted = -1073741793;
  MiDereferenceControlArea(a1);
  return inserted;
}
