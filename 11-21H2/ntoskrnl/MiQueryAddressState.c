/*
 * XREFs of MiQueryAddressState @ 0x140318330
 * Callers:
 *     MiObtainRotateProtectionRanges @ 0x140200BAC (MiObtainRotateProtectionRanges.c)
 *     MiComparePteProtections @ 0x14022A470 (MiComparePteProtections.c)
 *     MiAllowProtectionChange @ 0x1402EDC48 (MiAllowProtectionChange.c)
 *     MiQueryAddressSpan @ 0x14030EC70 (MiQueryAddressSpan.c)
 *     MiSetProtectionOnSection @ 0x14032D1C0 (MiSetProtectionOnSection.c)
 * Callees:
 *     MiFaultInPagedPool @ 0x1402019FC (MiFaultInPagedPool.c)
 *     MiUnlockPageTableInternal @ 0x14020D8D0 (MiUnlockPageTableInternal.c)
 *     MiGetPageTableLockBuffer @ 0x14020DAE8 (MiGetPageTableLockBuffer.c)
 *     KiResetGlobalDpcWatchdogProfiler @ 0x140222280 (KiResetGlobalDpcWatchdogProfiler.c)
 *     MiQueryStateMatches @ 0x14023947C (MiQueryStateMatches.c)
 *     MiSkipFractionalPagefileRegion @ 0x1402471F8 (MiSkipFractionalPagefileRegion.c)
 *     MiGetSharedProtos @ 0x140256DF8 (MiGetSharedProtos.c)
 *     MiGetAnyMultiplexedVm @ 0x14026DFC0 (MiGetAnyMultiplexedVm.c)
 *     MiSkipEntirePagefileRegions @ 0x14026F050 (MiSkipEntirePagefileRegions.c)
 *     MiIsPrototypePteVadLookup @ 0x1402806A0 (MiIsPrototypePteVadLookup.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     MiUnlockWorkingSetShared @ 0x1402B0CE0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CF4F0 (MiLockWorkingSetShared.c)
 *     MiGetLeafVa @ 0x1402CFEB0 (MiGetLeafVa.c)
 *     MiLocateLockedVadEvent @ 0x1402EE0E0 (MiLocateLockedVadEvent.c)
 *     MiWalkPageTables @ 0x14030CF90 (MiWalkPageTables.c)
 *     MI_GET_GRAPHICS_PROTECTION_FROM_VAD @ 0x14030EBD0 (MI_GET_GRAPHICS_PROTECTION_FROM_VAD.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetPageProtection @ 0x140319160 (MiGetPageProtection.c)
 *     MiGetProtoPteAddress @ 0x140319600 (MiGetProtoPteAddress.c)
 *     MiVadPureReserve @ 0x140319990 (MiVadPureReserve.c)
 *     MiFastLockLeafPageTable @ 0x14031D9B0 (MiFastLockLeafPageTable.c)
 *     PsDereferencePartition @ 0x1403606C4 (PsDereferencePartition.c)
 *     PsReferencePartitionSafe @ 0x1403606EC (PsReferencePartitionSafe.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MiGetProtectionFromPte @ 0x1405A5FCC (MiGetProtectionFromPte.c)
 *     MiGetAweVadPartition @ 0x1405AAFD8 (MiGetAweVadPartition.c)
 *     EtwTraceShouldYieldProcessor @ 0x14062E40C (EtwTraceShouldYieldProcessor.c)
 */

__int64 __fastcall MiQueryAddressState(
        unsigned __int64 a1,
        unsigned __int64 a2,
        unsigned __int8 a3,
        ULONG_PTR a4,
        __int64 a5,
        int *a6,
        _DWORD *a7,
        _WORD *a8,
        _QWORD *a9,
        _DWORD *a10)
{
  unsigned __int64 v10; // rbx
  unsigned __int64 *v11; // r15
  unsigned __int64 v12; // rdi
  __int64 v13; // rcx
  __int16 v14; // ax
  unsigned __int64 v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rsi
  __int64 v18; // r13
  BOOL v19; // r14d
  unsigned __int64 v20; // r12
  unsigned __int64 v21; // rcx
  char *AnyMultiplexedVm; // rsi
  int v23; // eax
  unsigned int v24; // edx
  unsigned __int64 v25; // r12
  unsigned __int64 v26; // r13
  unsigned __int64 v27; // r15
  unsigned __int64 v28; // rcx
  int v29; // r15d
  int v30; // r13d
  int PageProtection; // eax
  ULONG_PTR v32; // rsi
  unsigned int v33; // esi
  unsigned __int64 v34; // rax
  unsigned int v35; // ebx
  __int64 v36; // r11
  char v37; // cl
  unsigned __int64 v38; // rax
  int v39; // eax
  bool v40; // zf
  _DWORD *v41; // rax
  struct _KPRCB *v42; // rcx
  volatile int DpcRequestSummary; // edx
  unsigned int DpcWatchdogCount; // r9d
  unsigned int DpcTimeCount; // r10d
  int v46; // r8d
  _KTHREAD *NextThread; // rax
  __int64 v48; // rax
  ULONG_PTR v49; // r10
  unsigned int v50; // r8d
  __int64 v51; // rbx
  _QWORD *v52; // rsi
  __int64 v53; // r14
  _QWORD *v54; // rax
  int v55; // r8d
  unsigned __int64 v56; // r9
  unsigned int v57; // edx
  __int64 v58; // rbx
  unsigned __int64 i; // rdx
  __int64 result; // rax
  _DWORD *v61; // rdx
  unsigned __int64 v62; // r8
  __int64 v63; // rdx
  unsigned __int64 v64; // rcx
  unsigned __int64 v65; // r8
  __int64 v66; // rbx
  unsigned __int64 v67; // r12
  unsigned __int64 v68; // r14
  int v69; // r12d
  unsigned __int64 v70; // rcx
  unsigned __int64 v71; // rbx
  __int16 v72; // ax
  __int64 v73; // rax
  unsigned __int64 v74; // r12
  unsigned __int64 v75; // r10
  __int64 v76; // r10
  __int64 v77; // rax
  unsigned __int64 v78; // rdx
  __int64 v79; // r12
  unsigned __int64 v80; // rcx
  unsigned __int64 v81; // rax
  unsigned __int64 v82; // rcx
  __int64 v83; // r14
  unsigned int SessionId; // eax
  __int64 SharedProtos; // rax
  unsigned __int64 v86; // rsi
  __int64 v87; // rcx
  ULONG_PTR v88; // rax
  unsigned __int64 v89; // rcx
  struct _LIST_ENTRY *Flink; // r8
  __int64 v91; // rax
  unsigned __int64 LockedVadEvent; // rax
  __int64 v94; // rdx
  __int64 v95; // r8
  __int64 v96; // rdx
  _WORD **v97; // r8
  struct _LIST_ENTRY *v98; // r9
  __int64 v99; // rcx
  struct _KPRCB *CurrentPrcb; // rax
  char v101; // cl
  _KLOCK_QUEUE_HANDLE *SelfmapLockHandle; // rax
  __int64 v103; // rcx
  char *PageTableLockBuffer; // rax
  struct _LIST_ENTRY *v105; // r8
  __int64 v106; // rcx
  struct _LIST_ENTRY *v107; // r8
  __int64 v108; // rcx
  __int16 v109; // bx
  unsigned int v110; // edx
  int ProtectionFromPte; // edx
  unsigned __int64 LeafVa; // rax
  int v113; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int8 v114; // [rsp+34h] [rbp-CCh]
  __int64 v115; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v116; // [rsp+40h] [rbp-C0h]
  unsigned __int64 *v117; // [rsp+48h] [rbp-B8h]
  __int16 v118; // [rsp+50h] [rbp-B0h]
  int v119; // [rsp+54h] [rbp-ACh]
  int v120; // [rsp+58h] [rbp-A8h]
  int v121; // [rsp+5Ch] [rbp-A4h]
  int v122; // [rsp+60h] [rbp-A0h]
  unsigned __int64 ProtoPteAddress; // [rsp+68h] [rbp-98h]
  ULONG_PTR BugCheckParameter2; // [rsp+70h] [rbp-90h]
  unsigned __int64 v125; // [rsp+78h] [rbp-88h]
  __int64 v126; // [rsp+80h] [rbp-80h] BYREF
  __int64 v127; // [rsp+88h] [rbp-78h] BYREF
  int v128; // [rsp+90h] [rbp-70h]
  unsigned __int64 v129; // [rsp+98h] [rbp-68h]
  unsigned __int64 v130; // [rsp+A8h] [rbp-58h]
  __int64 v131; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v132; // [rsp+B8h] [rbp-48h]
  _QWORD *v133; // [rsp+C0h] [rbp-40h]
  int *v134; // [rsp+C8h] [rbp-38h]
  _DWORD *v135; // [rsp+D0h] [rbp-30h]
  _WORD *v136; // [rsp+D8h] [rbp-28h]
  __int128 v137; // [rsp+E0h] [rbp-20h] BYREF
  _DWORD *v138; // [rsp+F0h] [rbp-10h]
  unsigned __int64 v139; // [rsp+F8h] [rbp-8h]
  __int64 v140; // [rsp+100h] [rbp+0h]
  _QWORD v141[22]; // [rsp+110h] [rbp+10h] BYREF

  v10 = a1;
  v134 = a6;
  v135 = a7;
  v136 = a8;
  v133 = a9;
  v114 = a3;
  BugCheckParameter2 = a4;
  v11 = &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[26];
  v12 = a1 >> 9;
  v138 = a10;
  ProtoPteAddress = 0LL;
  v13 = *((unsigned __int16 *)v11 + 87);
  v127 = 0LL;
  v117 = v11;
  v14 = **(_WORD **)(qword_140C51F48 + 8 * v13);
  *a10 = 1;
  v118 = v14;
  LOWORD(v115) = v14;
  v15 = (v12 & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v139 = v15;
  v16 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v132 = v15;
  v130 = v16;
  v128 = 0x2000;
  v122 = 0;
  v120 = 0;
  v125 = 0LL;
  v116 = 0LL;
  v17 = 0LL;
  v131 = 0LL;
  v18 = v16 << 25 >> 16;
  v140 = v18;
LABEL_2:
  v129 = v16;
  v121 = 0;
  v126 = 0LL;
  v19 = 0;
  v137 = 0LL;
  memset((char *)v141 + 4, 0, 0xACuLL);
  LODWORD(v141[0]) = 2145;
  v20 = (__int64)((v15 << 25) - v17) >> 16;
  v21 = v20;
  if ( v20 >= 0xFFFFF68000000000uLL )
  {
    do
    {
      if ( v21 > 0xFFFFF6FFFFFFFFFFuLL )
        break;
      v21 = (__int64)((v21 << 25) - v17) >> 16;
    }
    while ( v21 >= 0xFFFFF68000000000uLL );
    v11 = v117;
  }
  if ( v21 < 0xFFFF800000000000uLL || v21 >= qword_140C540C0 && v21 <= qword_140C51BF0 )
    AnyMultiplexedVm = (char *)&KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[26];
  else
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  v23 = MiFastLockLeafPageTable(AnyMultiplexedVm, v20, 0LL);
  if ( v23 )
  {
    v24 = v23 - 1;
    LODWORD(v137) = v23 - 1;
    v25 = ((v20 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    *((_QWORD *)&v137 + 1) = v25;
  }
  else
  {
    LODWORD(v141[0]) |= 4u;
    v141[3] = AnyMultiplexedVm;
    v141[2] = 0LL;
    v141[21] = &v137;
    v141[4] = v20;
    v141[5] = v18;
    BYTE4(v141[0]) = BYTE4(v141[0]) & 0xE3 | 4;
    v141[20] = MiGetNextPageTableTail;
    HIBYTE(v141[0]) = v114;
    MiWalkPageTables((__m128i *)v141);
    v24 = v137;
    v25 = *((_QWORD *)&v137 + 1);
  }
  if ( !v25 )
  {
    v25 = v130 + 8;
    goto LABEL_13;
  }
  v26 = ((v25 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v125 = v26;
  if ( v24 )
  {
    v86 = ((v25 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    if ( v24 > 1 )
    {
      v87 = v24 - 1;
      do
      {
        v86 = ((v86 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        --v87;
      }
      while ( v87 );
    }
    v26 = ((v86 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    if ( v25 == v15 )
    {
      v88 = MI_READ_PTE_LOCK_FREE(v86);
      v89 = v88;
      if ( (v88 & 1) == 0 && qword_140C50780 )
      {
        if ( (v88 & 0x10) != 0 )
          v89 = v88 & 0xFFFFFFFFFFFFFFEFuLL;
        else
          v89 = ~qword_140C50780 & v88;
      }
      v109 = (*(_QWORD *)(48 * ((v89 >> 12) & 0xFFFFFFFFFFLL) - 0x21FFFFFFFFD8LL) >> 43) & 0x3FF;
      v110 = *(_DWORD *)(BugCheckParameter2 + 48);
      if ( (*(_BYTE *)(BugCheckParameter2 + 48) & 0x70) == 0x30 || (v110 & 0xA00000) == 0xA00000 )
        ProtectionFromPte = MiGetProtectionFromPte(BugCheckParameter2, v88);
      else
        ProtectionFromPte = (v110 >> 7) & 0x1F;
      *v134 = ProtectionFromPte;
      MiUnlockPageTableInternal((__int64)v117, v26);
      *v135 = 0;
      *v136 = v109;
      LeafVa = MiGetLeafVa(v86 + 8);
      *v133 = LeafVa;
      return 4096LL;
    }
  }
  else if ( v15 == v25 )
  {
    v126 = MI_READ_PTE_LOCK_FREE(v15);
    v121 = 1;
    v25 = v15 + 8;
    v27 = (v15 & 0xFFFFFFFFFFFFF000uLL) + 4088;
    v19 = v126 == 0;
    goto LABEL_11;
  }
  MiUnlockPageTableInternal((__int64)v11, v26);
  v125 = 0LL;
  v27 = (v25 & 0xFFFFFFFFFFFFF000uLL) - 8;
LABEL_11:
  v129 = v27;
  if ( v27 > v130 )
    v129 = v130;
  while ( 1 )
  {
LABEL_13:
    v28 = v126;
    v29 = 0;
    v113 = 0x2000;
    v30 = 0;
    v119 = 0;
    if ( v126 )
    {
      if ( (unsigned __int64)&v126 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)&v126 <= 0xFFFFF6FB7DBED7F8uLL )
      {
        if ( (MiFlags & 0xC00000) == 0 || KeGetCurrentThread()->ApcState.Process->AddressPolicy == 1 )
        {
          v28 = v126;
        }
        else
        {
          v28 = v126;
          if ( (v126 & 1) != 0 && ((v126 & 0x20) == 0 || (v126 & 0x42) == 0) )
          {
            Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( Flink )
            {
              v28 = v126;
              v91 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&v126 >> 3) & 0x1FF));
              if ( (v91 & 0x20) != 0 )
                v28 = v126 | 0x20;
              if ( (v91 & 0x42) != 0 )
                v28 |= 0x42uLL;
            }
            else
            {
              v28 = v126;
            }
          }
        }
      }
      if ( (v28 & 0x3E0) == 0x200 && (v28 & 1) == 0 )
      {
        if ( (v28 & 0x400) == 0 )
          goto LABEL_18;
        if ( MiIsPrototypePteVadLookup(v28) )
          goto LABEL_18;
      }
      v113 = 4096;
      PageProtection = MiGetPageProtection(BugCheckParameter2, v15, (__int64)&v115);
      v32 = ProtoPteAddress;
      v29 = PageProtection;
      if ( ProtoPteAddress )
      {
        v11 = v117;
        MiUnlockPageTableInternal((__int64)v117, v125);
        v125 = 0LL;
        MiUnlockWorkingSetShared((__int64)v11, v114);
        MiFaultInPagedPool(v32);
        MiLockWorkingSetShared((__int64)v11);
        v16 = v130;
        v17 = v131;
        v18 = v140;
        goto LABEL_2;
      }
      if ( PageProtection )
        goto LABEL_18;
      v33 = 0x2000;
      goto LABEL_19;
    }
    v49 = BugCheckParameter2;
    *v138 = 0;
    v50 = *(_DWORD *)(v49 + 48);
    if ( (*(_BYTE *)(v49 + 48) & 0x70) == 0x30 )
    {
      LOWORD(v115) = *(_WORD *)MiGetAweVadPartition(v49, 0LL);
      goto LABEL_18;
    }
    if ( (v50 & 0x70) == 0x10 )
      goto LABEL_18;
    if ( (v50 & 0x200000) != 0 )
    {
      if ( *(int *)(v49 + 52) >= 0 )
      {
        v33 = v113;
      }
      else
      {
        v33 = 4096;
        v29 = (v50 >> 7) & 0x1F;
        v119 = MI_GET_GRAPHICS_PROTECTION_FROM_VAD(v49);
      }
      if ( (v50 & 0xA00000) == 0xA00000 )
      {
        LockedVadEvent = MiLocateLockedVadEvent(v49, 16);
        if ( LockedVadEvent )
        {
          v95 = *(_QWORD *)(LockedVadEvent + 24);
          if ( v95 )
          {
            if ( (unsigned __int8)PsReferencePartitionSafe(*(_QWORD *)(LockedVadEvent + 24), v94, v95) )
            {
              LOWORD(v115) = **v97;
              PsDereferencePartition(v97, v96, v97);
            }
          }
        }
      }
      goto LABEL_19;
    }
    v51 = v10 >> 12;
    LOWORD(v115) = **(_WORD **)(qword_140C51F48 + 8LL * (*(_WORD *)(**(_QWORD **)(v49 + 72) + 60LL) & 0x3FF));
    ProtoPteAddress = MiGetProtoPteAddress(v49, v51, 4LL, &v127);
    v52 = (_QWORD *)ProtoPteAddress;
    if ( !ProtoPteAddress )
    {
      if ( a5 && !MiQueryStateMatches(a5, 0x2000, 0, 0, 0) )
      {
        v30 = 1;
        v25 = v15;
      }
      else
      {
        if ( (unsigned int)MiVadPureReserve(BugCheckParameter2) && v127 && !*(_QWORD *)(v127 + 8) )
        {
          v77 = MiSkipEntirePagefileRegions(v76, v51, v15, v25, v127);
          v33 = v113;
          v25 = v77;
          if ( v77 == v15 )
            v25 = v15 + 8;
          goto LABEL_19;
        }
        v25 = v15 + 8;
      }
LABEL_18:
      v33 = v113;
      goto LABEL_19;
    }
    v40 = !v19;
    v53 = v127;
    if ( !v40 )
    {
      v62 = *(_QWORD *)(v127 + 8);
      v63 = ((__int64)(v129 - v15) >> 3) + 1;
      if ( v63 > 32 )
        v63 = 32LL;
      v64 = v62 + 8 * (*(unsigned int *)(v127 + 44) - (unsigned __int64)(*(_DWORD *)(v127 + 52) & 0x3FFFFFFF));
      if ( (*(_BYTE *)(v127 + 34) & 2) != 0 || ProtoPteAddress < v62 || ProtoPteAddress >= v64 )
      {
        v63 = 0LL;
      }
      else if ( ProtoPteAddress + 8 * v63 > v64 )
      {
        v63 = (__int64)(v64 - ProtoPteAddress) >> 3;
      }
      v65 = v15 + 8 * (v63 - 1);
      v25 = v15 + 8;
      if ( v15 + 8 <= v65 )
      {
        do
        {
          v73 = *(_QWORD *)v25;
          if ( v25 >= 0xFFFFF6FB7DBED000uLL
            && v25 <= 0xFFFFF6FB7DBED7F8uLL
            && (MiFlags & 0xC00000) != 0
            && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
            && (v73 & 1) != 0
            && ((v73 & 0x20) == 0 || (v73 & 0x42) == 0) )
          {
            v98 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( v98 )
            {
              v99 = *((_QWORD *)&v98->Flink + ((v25 >> 3) & 0x1FF));
              if ( (v99 & 0x20) != 0 )
                v73 |= 0x20uLL;
              if ( (v99 & 0x42) != 0 )
                v73 |= 0x42uLL;
            }
          }
          if ( v73 )
            break;
          v25 += 8LL;
        }
        while ( v25 <= v65 );
        v52 = (_QWORD *)ProtoPteAddress;
        v30 = 0;
        v53 = v127;
        v15 = v132;
      }
      if ( v121 )
        goto LABEL_56;
      goto LABEL_147;
    }
    if ( !v121 )
    {
      v78 = *(_QWORD *)(v127 + 8);
      v79 = (__int64)(v25 - v15) >> 3;
      v80 = v78 + 8 * (*(unsigned int *)(v127 + 44) - (unsigned __int64)(*(_DWORD *)(v127 + 52) & 0x3FFFFFFF));
      if ( (*(_BYTE *)(v127 + 34) & 2) != 0 || ProtoPteAddress < v78 || ProtoPteAddress >= v80 )
      {
        v79 = 1LL;
      }
      else if ( ProtoPteAddress + 8 * v79 > v80 )
      {
        v79 = (__int64)(v80 - ProtoPteAddress) >> 3;
      }
      v25 = v15 + 8 * v79;
LABEL_147:
      if ( (unsigned int)MiVadPureReserve(BugCheckParameter2) )
      {
        v81 = MiSkipFractionalPagefileRegion((unsigned __int64)v52, v53, (__int64)(v25 - v15) >> 3);
        if ( (_QWORD *)v81 != v52 )
        {
          v25 = v15 + 8 * ((__int64)(v81 - (_QWORD)v52) >> 3);
          v52 = 0LL;
          ProtoPteAddress = 0LL;
        }
      }
    }
LABEL_56:
    v54 = *(_QWORD **)(BugCheckParameter2 + 120);
    if ( (__int64)v54 < 0 )
    {
      v55 = 1;
      v56 = (unsigned __int64)(*v54 - 1LL) >> 12;
    }
    else
    {
      v55 = 0;
      v56 = -1LL;
    }
    if ( !v52 )
      goto LABEL_18;
    v57 = *(_DWORD *)(BugCheckParameter2 + 48);
    if ( (v57 & 0x70) == 0x20 )
    {
      v58 = *(_QWORD *)(BugCheckParameter2 + 72);
      for ( i = 0LL; v58; v58 = *(_QWORD *)(v58 + 16) )
      {
        if ( (*(_BYTE *)(v58 + 34) & 2) != 0
          && (v83 = *(_QWORD *)v58, (*(_DWORD *)(*(_QWORD *)v58 + 56LL) & 0x8000000) != 0) )
        {
          SessionId = MmGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
          SharedProtos = MiGetSharedProtos(v83, SessionId, v58);
          v52 = (_QWORD *)ProtoPteAddress;
          i = *(_QWORD *)(SharedProtos + 72);
        }
        else
        {
          i = *(_QWORD *)(v58 + 8);
        }
        if ( (unsigned __int64)v52 >= i && (unsigned __int64)v52 < i + 8LL * *(unsigned int *)(v58 + 44) )
          break;
      }
      if ( (__int64)((__int64)v52 - i) >> 3 >= (unsigned __int64)(*(_DWORD *)(v58 + 44)
                                                                - (*(_DWORD *)(v58 + 52) & 0x3FFFFFFFu)) )
      {
        v29 = 0;
      }
      else
      {
        v29 = (*(_DWORD *)(BugCheckParameter2 + 48) >> 7) & 0x1F;
        if ( v29 == 7 )
          v29 = (*(unsigned __int16 *)(v58 + 32) >> 1) & 0x1F;
        if ( v29 )
          v113 = 4096;
      }
      goto LABEL_18;
    }
    if ( !*(_QWORD *)(*(_QWORD *)v53 + 64LL) && (*(_DWORD *)(*(_QWORD *)v53 + 56LL) & 0x2000) == 0 )
    {
      v66 = (__int64)v117;
      if ( v125 )
      {
        MiUnlockPageTableInternal((__int64)v117, v125);
        v125 = 0LL;
      }
      MiUnlockWorkingSetShared(v66, v114);
      v67 = (__int64)(v25 - v15) >> 3;
      v68 = (__int64)(*(_QWORD *)(v53 + 8)
                    + 8 * (*(unsigned int *)(v53 + 44) - (unsigned __int64)(*(_DWORD *)(v53 + 52) & 0x3FFFFFFF))
                    - (_QWORD)v52) >> 3;
      if ( v68 > v67 )
        v68 = v67;
      if ( *v52 )
      {
        v69 = 4096;
        v113 = 4096;
        v29 = (*(_DWORD *)(BugCheckParameter2 + 48) >> 7) & 0x1F;
      }
      else
      {
        v69 = v113;
      }
      if ( !a5 || MiQueryStateMatches(a5, v69, v29, 0, v115) )
      {
        if ( v68 )
        {
          while ( 1 )
          {
LABEL_106:
            if ( *v52 )
            {
              if ( v69 != 4096 )
                break;
            }
            else if ( v69 == 4096 )
            {
              break;
            }
            ++v52;
            v70 = v116 + 1;
            ProtoPteAddress = (unsigned __int64)v52;
            ++v116;
            if ( !--v68 )
              goto LABEL_119;
            v71 = (unsigned __int64)v52;
            while ( (v71 & 0xFFF) == 0 )
            {
              v72 = MI_READ_PTE_LOCK_FREE(((v71 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
              if ( (v72 & 1) != 0 || (v72 & 0x3E0) != 0 )
              {
                if ( v69 == 4096 )
                  goto LABEL_106;
                goto LABEL_162;
              }
              if ( v69 == 4096 )
                goto LABEL_162;
              if ( v68 <= 0x200 )
              {
                ProtoPteAddress = v71 + 8 * v68;
                v116 += v68;
                v25 = v15 + 8 * v116;
                MiLockWorkingSetShared((__int64)v117);
                goto LABEL_18;
              }
              v116 += 512LL;
              v52 = (_QWORD *)(v71 + 4096);
              ProtoPteAddress = v71 + 4096;
              v71 += 4096LL;
              v68 -= 512LL;
              if ( !v68 )
                goto LABEL_162;
            }
          }
        }
LABEL_162:
        v70 = v116;
      }
      else
      {
        v70 = 0LL;
        v116 = 0LL;
        v30 = 1;
      }
LABEL_119:
      v25 = v15 + 8 * v70;
      MiLockWorkingSetShared((__int64)v117);
      goto LABEL_18;
    }
    v74 = (__int64)(v25 - v15) >> 3;
    v75 = (__int64)(*(_QWORD *)(v53 + 8)
                  + 8 * (*(unsigned int *)(v53 + 44) - (unsigned __int64)(*(_DWORD *)(v53 + 52) & 0x3FFFFFFF))
                  - (_QWORD)v52) >> 3;
    v116 = v75;
    if ( v75 > v74 )
    {
      v75 = v74;
      v116 = v74;
    }
    if ( v55
      && (v82 = *(unsigned int *)(BugCheckParameter2 + 24) | ((unsigned __int64)*(unsigned __int8 *)(BugCheckParameter2 + 32) << 32),
          v51 - v82 <= v56) )
    {
      if ( v75 > v82 - v51 + v56 + 1 )
      {
        v75 = v82 - v51 + v56 + 1;
        v116 = v75;
      }
      v25 = v15 + 8 * v75;
    }
    else
    {
      v25 = v15 + 8 * v75;
      if ( v55 )
        goto LABEL_18;
    }
    v33 = 4096;
    v29 = (v57 >> 7) & 0x1F;
LABEL_19:
    if ( v15 == v139 )
    {
      v128 = v33;
      v122 = v29;
      v120 = v119;
      v118 = v115;
      if ( a5 && !MiQueryStateMatches(a5, v33, v29, v119, v115) )
        goto LABEL_121;
      v34 = v116;
LABEL_75:
      if ( v30 || v34 )
        goto LABEL_77;
      goto LABEL_44;
    }
    if ( v33 != v128 || v29 != v122 || v119 != v120 || (_WORD)v115 != v118 )
    {
      v33 = v128;
      LOWORD(v115) = v118;
      v29 = v122;
      v119 = v120;
LABEL_121:
      v25 = v15;
LABEL_77:
      v36 = (__int64)v117;
      goto LABEL_78;
    }
    v34 = v116;
    if ( v116 )
      goto LABEL_75;
    if ( v30 )
      goto LABEL_77;
    if ( (__int64)((v15 - v139) & 0xFFFFFFFFFFFFFFF8uLL) < 256 )
      goto LABEL_44;
    v35 = 0;
    v36 = (__int64)v117;
    if ( v125 )
    {
      v37 = *((_BYTE *)v117 + 184);
      v113 = 0;
      if ( v125 == 0xFFFFF6FB7DBEDF68uLL )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v101 = v37 & 7;
        if ( v101 )
        {
          if ( v101 == 7 )
          {
            SelfmapLockHandle = &CurrentPrcb->SelfmapLockHandle[1];
          }
          else if ( v101 == 5 )
          {
            SelfmapLockHandle = CurrentPrcb->SelfmapLockHandle;
          }
          else
          {
            SelfmapLockHandle = &CurrentPrcb->SelfmapLockHandle[3];
          }
        }
        else
        {
          SelfmapLockHandle = &CurrentPrcb->SelfmapLockHandle[2];
        }
        v40 = SelfmapLockHandle->LockQueue.Next == 0LL;
        goto LABEL_34;
      }
      if ( (v37 & 7) == 0 )
      {
        if ( v125 >= 0xFFFFF6FB7DBED000uLL
          && v125 <= 0xFFFFF6FB7DBEDFFFuLL
          && (v103 = *(_QWORD *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[28] + 592)) != 0 )
        {
          v39 = (*(_DWORD *)(v103 + 4LL * (((unsigned int)v125 >> 3) & 0x1FF)) >> 30) & 1;
        }
        else
        {
LABEL_31:
          v38 = *(_QWORD *)v125;
          if ( v125 >= 0xFFFFF6FB7DBED000uLL
            && v125 <= 0xFFFFF6FB7DBED7F8uLL
            && (MiFlags & 0xC00000) != 0
            && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
            && (v38 & 1) != 0
            && ((v38 & 0x20) == 0 || (v38 & 0x42) == 0) )
          {
            v105 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( v105 )
            {
              v106 = *((_QWORD *)&v105->Flink + ((v125 >> 3) & 0x1FF));
              if ( (v106 & 0x20) != 0 )
                v38 |= 0x20uLL;
              if ( (v106 & 0x42) != 0 )
                v38 |= 0x42uLL;
            }
          }
          v39 = (v38 >> 60) & 2;
        }
        v40 = v39 == 0;
LABEL_34:
        if ( !v40 )
          goto LABEL_156;
        goto LABEL_35;
      }
      if ( v125 < 0xFFFFF6FB7DBED000uLL || v125 > 0xFFFFF6FB7DBEDFFFuLL )
        goto LABEL_31;
      PageTableLockBuffer = MiGetPageTableLockBuffer((__int64)v117, v125, &v113);
      if ( ((*(_DWORD *)PageTableLockBuffer >> v113) & 2) != 0 )
        goto LABEL_156;
    }
LABEL_35:
    if ( (*(_BYTE *)(v36 + 184) & 7) == 2 )
      v41 = &unk_140C53D00;
    else
      v41 = (_DWORD *)(v36 + 192);
    if ( (*v41 & 0x40000000) != 0 )
      goto LABEL_156;
    if ( v114 < 2u )
      break;
LABEL_44:
    v15 += 8LL;
    v132 = v15;
    if ( v25 > v129 || v25 != v15 )
      goto LABEL_77;
    if ( v121 )
    {
      v48 = *(_QWORD *)v15;
      if ( v15 >= 0xFFFFF6FB7DBED000uLL
        && v15 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v48 & 1) != 0
        && ((v48 & 0x20) == 0 || (v48 & 0x42) == 0) )
      {
        v107 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v107 )
        {
          v108 = *((_QWORD *)&v107->Flink + ((v15 >> 3) & 0x1FF));
          if ( (v108 & 0x20) != 0 )
            v48 |= 0x20uLL;
          if ( (v108 & 0x42) != 0 )
            v48 |= 0x42uLL;
        }
      }
      v126 = v48;
    }
    v25 += 8LL;
    v10 = (__int64)((v15 << 25) - v131) >> 16;
    v19 = 0;
  }
  v42 = KeGetCurrentPrcb();
  DpcRequestSummary = v42->DpcRequestSummary;
  DpcWatchdogCount = v42->DpcWatchdogCount;
  DpcTimeCount = v42->DpcTimeCount;
  if ( (DpcRequestSummary & 1) != 0 )
  {
    v46 = 1;
    if ( DpcTimeCount <= 7 )
      goto LABEL_43;
    if ( !v42->QuantumEnd )
      goto LABEL_259;
    v35 = 1;
  }
  else
  {
    v46 = 0;
    if ( (DpcRequestSummary & 0x1E) != 0 )
    {
      v35 = 2;
      goto LABEL_153;
    }
    if ( v42->QuantumEnd )
    {
      v35 = 3;
      goto LABEL_153;
    }
    NextThread = v42->NextThread;
    if ( NextThread && NextThread != v42->CurrentThread )
    {
      v35 = 4;
      goto LABEL_153;
    }
LABEL_43:
    if ( DpcWatchdogCount <= 7 )
      goto LABEL_44;
    if ( !v46 )
    {
LABEL_179:
      _disable();
      v42->DpcWatchdogCount = 0;
      v42->DpcTimeCount = 0;
      KiResetGlobalDpcWatchdogProfiler((__int64)v42);
      _enable();
      goto LABEL_153;
    }
LABEL_259:
    if ( (DpcRequestSummary & 0x1E) != 0 )
    {
      v35 = 5;
    }
    else
    {
      if ( v42->CurrentThread == v42->IdleThread )
        goto LABEL_179;
      v35 = 6;
    }
  }
LABEL_153:
  if ( (DWORD1(PerfGlobalGroupMask) & 0x4000000) != 0 )
  {
    EtwTraceShouldYieldProcessor(v35, DpcWatchdogCount, DpcTimeCount);
    v36 = (__int64)v117;
  }
  if ( !v35 )
    goto LABEL_44;
LABEL_156:
  v25 = v15 + 8;
LABEL_78:
  if ( v125 )
    MiUnlockPageTableInternal(v36, v125);
  result = v33;
  v61 = v135;
  *v133 = (__int64)((v25 << 25) - v131) >> 16;
  *v134 = v29;
  *v61 = v119;
  *v136 = v115;
  return result;
}
