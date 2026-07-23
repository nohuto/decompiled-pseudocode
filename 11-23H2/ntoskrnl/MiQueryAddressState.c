/*
 * XREFs of MiQueryAddressState @ 0x140271E90
 * Callers:
 *     MiQueryAddressSpan @ 0x140273FF0 (MiQueryAddressSpan.c)
 *     MiSetProtectionOnSection @ 0x140277F10 (MiSetProtectionOnSection.c)
 *     MiAllowProtectionChange @ 0x140304278 (MiAllowProtectionChange.c)
 *     MiComparePteProtections @ 0x14034918C (MiComparePteProtections.c)
 *     MiObtainRotateProtectionRanges @ 0x140632E18 (MiObtainRotateProtectionRanges.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x1402146B4 (MiGetAnyMultiplexedVm.c)
 *     MiFastLockLeafPageTable @ 0x140237350 (MiFastLockLeafPageTable.c)
 *     MiUnlockWorkingSetShared @ 0x14023C5D0 (MiUnlockWorkingSetShared.c)
 *     MiWalkPageTables @ 0x14025BF90 (MiWalkPageTables.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetPageProtection @ 0x140272CB0 (MiGetPageProtection.c)
 *     MiGetProtoPteAddress @ 0x140273120 (MiGetProtoPteAddress.c)
 *     MI_GET_GRAPHICS_PROTECTION_FROM_VAD @ 0x1402756C0 (MI_GET_GRAPHICS_PROTECTION_FROM_VAD.c)
 *     MiVadPureReserve @ 0x140277E00 (MiVadPureReserve.c)
 *     MiIsPrototypePteVadLookup @ 0x14027D190 (MiIsPrototypePteVadLookup.c)
 *     MiLockWorkingSetShared @ 0x140283F20 (MiLockWorkingSetShared.c)
 *     MmGetSessionIdEx @ 0x1402A19B0 (MmGetSessionIdEx.c)
 *     MiGetLeafVa @ 0x1402E5CB0 (MiGetLeafVa.c)
 *     PsReferencePartitionSafe @ 0x1402F9EAC (PsReferencePartitionSafe.c)
 *     PsDereferencePartition @ 0x1402F9EDC (PsDereferencePartition.c)
 *     MiLocateLockedVadEvent @ 0x14030B6B4 (MiLocateLockedVadEvent.c)
 *     MiUnlockPageTableInternal @ 0x140319850 (MiUnlockPageTableInternal.c)
 *     MiGetPageTableLockBuffer @ 0x140319A68 (MiGetPageTableLockBuffer.c)
 *     MiQueryStateMatches @ 0x14034F8F0 (MiQueryStateMatches.c)
 *     MiSkipEntirePagefileRegions @ 0x140358C54 (MiSkipEntirePagefileRegions.c)
 *     MiSkipFractionalPagefileRegion @ 0x14035E9C4 (MiSkipFractionalPagefileRegion.c)
 *     MiGetSharedProtos @ 0x140369F2C (MiGetSharedProtos.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140435E00 (memset.c)
 *     EtwTraceShouldYieldProcessor @ 0x1405FDA1C (EtwTraceShouldYieldProcessor.c)
 *     MiFaultInPagedPool @ 0x1406310A8 (MiFaultInPagedPool.c)
 *     MiGetProtectionFromPte @ 0x14064940C (MiGetProtectionFromPte.c)
 *     MiGetAweVadPartition @ 0x14064AEB0 (MiGetAweVadPartition.c)
 */

__int64 __fastcall MiQueryAddressState(
        unsigned __int64 a1,
        unsigned __int64 a2,
        unsigned __int8 a3,
        ULONG_PTR a4,
        __int64 a5,
        int *a6,
        unsigned int *a7,
        _WORD *a8,
        __int64 *a9,
        _DWORD *a10)
{
  unsigned __int64 *v11; // rsi
  __int64 v12; // rcx
  __int16 v13; // ax
  __int64 v14; // rdx
  unsigned __int64 v15; // r13
  __int64 v16; // rdi
  __int64 v17; // r14
  BOOL v18; // r15d
  unsigned __int64 v19; // rbx
  unsigned __int64 v20; // rcx
  char *AnyMultiplexedVm; // rdi
  int v22; // eax
  unsigned int v23; // edx
  unsigned __int64 Flink; // r8
  unsigned __int64 v25; // rbx
  __int64 v26; // r14
  unsigned __int64 v27; // rsi
  int i; // r14d
  __int64 v29; // rcx
  int v30; // esi
  _KPROCESS *Process; // rdx
  int PageProtection; // eax
  ULONG_PTR v33; // rdi
  unsigned int v34; // r12d
  unsigned __int64 v35; // rax
  unsigned __int64 *v36; // r10
  char v37; // dl
  char v38; // cl
  unsigned __int64 v39; // rax
  int v40; // eax
  bool v41; // zf
  _DWORD *v42; // rax
  struct _KPRCB *v43; // rcx
  __int64 v44; // r9
  volatile int DpcRequestSummary; // edx
  unsigned int DpcWatchdogCount; // edi
  unsigned int DpcTimeCount; // r15d
  _KTHREAD *NextThread; // rax
  _QWORD *v49; // rax
  __int64 v50; // rax
  ULONG_PTR v51; // r10
  unsigned int v52; // r8d
  __int64 v53; // rax
  unsigned __int64 v54; // r12
  __int16 v55; // di
  _QWORD *v56; // r14
  __int64 v57; // rdi
  ULONG_PTR v58; // r15
  _QWORD *v59; // rax
  int v60; // r8d
  unsigned __int64 v61; // r9
  unsigned int v62; // edx
  __int64 *v63; // rdi
  unsigned __int64 j; // rdx
  __int64 result; // rax
  unsigned int *v66; // rdx
  ULONG_PTR v67; // r8
  __int64 v68; // rdx
  ULONG_PTR v69; // rcx
  unsigned __int64 v70; // r8
  __int64 v71; // r12
  unsigned __int64 v72; // rbx
  unsigned __int64 v73; // rdi
  int v74; // r15d
  unsigned __int64 v75; // rbx
  __int64 v76; // rax
  unsigned __int64 v77; // rbx
  unsigned __int64 v78; // r10
  __int16 v79; // ax
  unsigned __int64 v80; // rcx
  __int16 v81; // ax
  unsigned int v82; // r14d
  ULONG_PTR v83; // rdx
  __int64 v84; // rbx
  ULONG_PTR v85; // rcx
  __int64 v86; // rax
  int v87; // r10d
  unsigned __int64 v88; // rcx
  signed __int32 *v89; // rdx
  signed __int32 v90; // eax
  signed __int32 v91; // ett
  unsigned __int64 v92; // rdi
  __int64 v93; // rcx
  ULONG_PTR v94; // rax
  unsigned __int64 v95; // rdx
  __int64 v96; // rax
  __int64 LockedVadEvent; // rax
  __int16 **v98; // r8
  struct _LIST_ENTRY *v99; // r9
  __int64 v100; // rcx
  __int64 v101; // rsi
  unsigned int SessionId; // eax
  __int64 SharedProtos; // rax
  struct _KPRCB *CurrentPrcb; // rax
  _KLOCK_QUEUE_HANDLE *SelfmapLockHandle; // rax
  char v106; // dl
  __int64 v107; // rcx
  _DWORD *PageTableLockBuffer; // rax
  __int64 v109; // rcx
  __int64 v110; // rcx
  unsigned __int64 v111; // rdx
  unsigned __int64 v112; // rbx
  unsigned __int64 v113; // rbx
  __int16 v114; // cx
  __int16 v115; // bx
  unsigned int v116; // edx
  int ProtectionFromPte; // edx
  __int64 LeafVa; // rax
  __int16 v120; // [rsp+38h] [rbp-C8h] BYREF
  int v121; // [rsp+3Ch] [rbp-C4h]
  __int16 v122; // [rsp+40h] [rbp-C0h]
  unsigned int v123; // [rsp+44h] [rbp-BCh]
  unsigned __int64 v124; // [rsp+48h] [rbp-B8h]
  unsigned int v125; // [rsp+50h] [rbp-B0h]
  int v126; // [rsp+54h] [rbp-ACh]
  int v127; // [rsp+58h] [rbp-A8h]
  ULONG_PTR ProtoPteAddress; // [rsp+60h] [rbp-A0h]
  __int64 v129; // [rsp+68h] [rbp-98h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+70h] [rbp-90h]
  unsigned __int64 v131; // [rsp+78h] [rbp-88h]
  unsigned __int64 *v132; // [rsp+80h] [rbp-80h]
  __int64 v133; // [rsp+88h] [rbp-78h] BYREF
  int v134; // [rsp+90h] [rbp-70h]
  int v135; // [rsp+94h] [rbp-6Ch] BYREF
  unsigned __int64 v136; // [rsp+98h] [rbp-68h]
  unsigned __int64 v137; // [rsp+A0h] [rbp-60h]
  __int64 v138; // [rsp+A8h] [rbp-58h]
  int *v139; // [rsp+B0h] [rbp-50h]
  _QWORD *v140; // [rsp+B8h] [rbp-48h]
  __int64 *v141; // [rsp+C0h] [rbp-40h]
  unsigned int *v142; // [rsp+C8h] [rbp-38h]
  _WORD *v143; // [rsp+D0h] [rbp-30h]
  __int128 v144; // [rsp+D8h] [rbp-28h] BYREF
  _DWORD *v145; // [rsp+E8h] [rbp-18h]
  unsigned __int64 v146; // [rsp+F0h] [rbp-10h]
  __int64 v147; // [rsp+F8h] [rbp-8h]
  __int64 v148; // [rsp+100h] [rbp+0h]
  _QWORD v149[22]; // [rsp+110h] [rbp+10h] BYREF

  v139 = a6;
  v142 = a7;
  v143 = a8;
  v141 = a9;
  BugCheckParameter2 = a4;
  v11 = &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[26];
  v145 = a10;
  ProtoPteAddress = 0LL;
  v133 = 0LL;
  v12 = *((unsigned __int16 *)v11 + 87);
  v132 = v11;
  v13 = **(_WORD **)(qword_140C673C8 + 8 * v12);
  *a10 = 1;
  v122 = v13;
  v120 = v13;
  v147 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v14 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v140 = (_QWORD *)v147;
  v137 = v14;
  v15 = v147;
  v134 = 0x2000;
  v127 = 0;
  v125 = 0;
  v131 = 0LL;
  v124 = 0LL;
  v16 = 0LL;
  v138 = 0LL;
  v17 = v14 << 25 >> 16;
  v148 = v17;
LABEL_2:
  v136 = v14;
  v126 = 0;
  v129 = 0LL;
  v18 = 0;
  v144 = 0LL;
  memset((char *)v149 + 4, 0, 0xACuLL);
  LODWORD(v149[0]) = 2145;
  v19 = (__int64)((v15 << 25) - v16) >> 16;
  v20 = v19;
  if ( v19 >= 0xFFFFF68000000000uLL )
  {
    do
    {
      if ( v20 > 0xFFFFF6FFFFFFFFFFuLL )
        break;
      v20 = (__int64)((v20 << 25) - v16) >> 16;
    }
    while ( v20 >= 0xFFFFF68000000000uLL );
    v11 = v132;
  }
  if ( v20 < 0xFFFF800000000000uLL || v20 >= qword_140C6A558 && v20 <= qword_140C67070 )
    AnyMultiplexedVm = (char *)&KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[26];
  else
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  v22 = MiFastLockLeafPageTable((__int64)AnyMultiplexedVm, v19, 0);
  if ( v22 )
  {
    v23 = v22 - 1;
    LODWORD(v144) = v22 - 1;
    Flink = 0xFFFFF68000000000uLL;
    v25 = ((v19 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    *((_QWORD *)&v144 + 1) = v25;
  }
  else
  {
    LODWORD(v149[0]) |= 4u;
    v149[21] = &v144;
    v149[2] = 0LL;
    v149[3] = AnyMultiplexedVm;
    BYTE4(v149[0]) = BYTE4(v149[0]) & 0xE3 | 4;
    v149[20] = MiGetNextPageTableTail;
    HIBYTE(v149[0]) = a3;
    v149[4] = v19;
    v149[5] = v17;
    MiWalkPageTables((__m128i *)v149);
    v23 = v144;
    v25 = *((_QWORD *)&v144 + 1);
    Flink = 0xFFFFF68000000000uLL;
  }
  if ( v25 )
  {
    v26 = ((v25 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v131 = v26;
    if ( v23 )
    {
      v92 = ((v25 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      if ( v23 > 1 )
      {
        v93 = v23 - 1;
        do
        {
          v92 = ((v92 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          --v93;
        }
        while ( v93 );
      }
      v26 = ((v92 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      if ( v25 == v15 )
      {
        v94 = MI_READ_PTE_LOCK_FREE(v92);
        v95 = v94;
        if ( (v94 & 1) == 0 && qword_140C65B40 )
        {
          if ( (v94 & 0x10) != 0 )
            v95 = v94 & 0xFFFFFFFFFFFFFFEFuLL;
          else
            v95 = ~qword_140C65B40 & v94;
        }
        v111 = (v95 >> 12) & 0xFFFFFFFFFFLL;
        if ( v111 <= qword_140C65BA0
          && (v112 = *(_QWORD *)(48 * v111 - 0x21FFFFFFFFD8LL), (v112 & 0x40000000000000LL) != 0) )
        {
          v113 = v112 >> 43;
          v114 = 1023;
        }
        else
        {
          v114 = 2047;
          v113 = (unsigned __int64)*(unsigned int *)(qword_140C67DF0 + 8 * (v111 >> 18)) >> 4;
        }
        v115 = v114 & v113;
        v116 = *(_DWORD *)(BugCheckParameter2 + 48);
        if ( (*(_BYTE *)(BugCheckParameter2 + 48) & 0x70) == 0x30 || (v116 & 0xA00000) == 0xA00000 )
          ProtectionFromPte = MiGetProtectionFromPte(BugCheckParameter2, v94);
        else
          ProtectionFromPte = (v116 >> 7) & 0x1F;
        *v139 = ProtectionFromPte;
        MiUnlockPageTableInternal(v132, v26);
        *v142 = 0;
        *v143 = v115;
        LeafVa = MiGetLeafVa(v92 + 8);
        *v141 = LeafVa;
        return 4096LL;
      }
    }
    else if ( v15 == v25 )
    {
      v129 = MI_READ_PTE_LOCK_FREE(v15);
      v126 = 1;
      v25 = v15 + 8;
      v27 = (v15 & 0xFFFFFFFFFFFFF000uLL) + 4088;
      v18 = v129 == 0;
      goto LABEL_11;
    }
    MiUnlockPageTableInternal(v11, v26);
    v131 = 0LL;
    v27 = (v25 & 0xFFFFFFFFFFFFF000uLL) - 8;
LABEL_11:
    v136 = v27;
    if ( v27 > v137 )
      v136 = v137;
    goto LABEL_13;
  }
  v25 = v137 + 8;
LABEL_13:
  for ( i = 0; ; i = 0 )
  {
    v29 = v129;
    v30 = 0;
    v121 = 0x2000;
    v123 = 0;
    if ( v129 )
    {
      Process = (_KPROCESS *)&v129;
      if ( (unsigned __int64)&v129 >= 0xFFFFF6FB7DBED000uLL )
      {
        Process = (_KPROCESS *)&v129;
        if ( (unsigned __int64)&v129 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0x600000) != 0 )
        {
          Process = KeGetCurrentThread()->ApcState.Process;
          if ( Process->AddressPolicy != 1 && (v129 & 1) != 0 && ((v129 & 0x20) == 0 || (v129 & 0x42) == 0) )
          {
            Process = KeGetCurrentThread()->ApcState.Process;
            Flink = (unsigned __int64)Process[1].ProcessListEntry.Flink;
            if ( Flink )
            {
              v96 = *(_QWORD *)(Flink + 8 * (((unsigned __int64)&v129 >> 3) & 0x1FF));
              if ( (v96 & 0x20) != 0 )
                v29 = v129 | 0x20;
              if ( (v96 & 0x42) != 0 )
                v29 |= 0x42uLL;
            }
            else
            {
              v29 = v129;
            }
          }
        }
      }
      if ( (v29 & 0x3E0) == 0x200
        && (v29 & 1) == 0
        && ((v29 & 0x400) == 0 || (unsigned int)MiIsPrototypePteVadLookup(v29, Process, Flink)) )
      {
        goto LABEL_184;
      }
      v121 = 4096;
      PageProtection = MiGetPageProtection(BugCheckParameter2, v15, (__int64)&v120);
      v33 = ProtoPteAddress;
      v30 = PageProtection;
      if ( ProtoPteAddress )
      {
        v11 = v132;
        MiUnlockPageTableInternal(v132, v131);
        v131 = 0LL;
        MiUnlockWorkingSetShared((__int64)v11, a3);
        MiFaultInPagedPool(v33);
        MiLockWorkingSetShared(v11);
        v14 = v137;
        v16 = v138;
        v17 = v148;
        goto LABEL_2;
      }
      if ( !PageProtection )
        v121 = 0x2000;
      goto LABEL_20;
    }
    v51 = BugCheckParameter2;
    *v145 = 0;
    v52 = *(_DWORD *)(v51 + 48);
    if ( (*(_BYTE *)(v51 + 48) & 0x70) == 0x30 )
    {
      v120 = *(_WORD *)MiGetAweVadPartition(v51);
      goto LABEL_184;
    }
    if ( (v52 & 0x70) == 0x10 )
      goto LABEL_184;
    if ( (v52 & 0x200000) != 0 )
    {
      if ( *(int *)(v51 + 52) < 0 )
      {
        v30 = (v52 >> 7) & 0x1F;
        v121 = 4096;
        v123 = MI_GET_GRAPHICS_PROTECTION_FROM_VAD(v51);
      }
      if ( (v52 & 0xA00000) == 0xA00000 )
      {
        LockedVadEvent = MiLocateLockedVadEvent(v51, 16LL);
        if ( LockedVadEvent )
        {
          if ( *(_QWORD *)(LockedVadEvent + 24)
            && (unsigned __int8)PsReferencePartitionSafe(*(_QWORD *)(LockedVadEvent + 24)) )
          {
            v120 = **v98;
            PsDereferencePartition(v98);
          }
        }
      }
      goto LABEL_20;
    }
    v53 = *(_QWORD *)(v51 + 72);
    v54 = a1 >> 12;
    v146 = v54;
    v55 = **(_WORD **)(qword_140C673C8 + 8LL * (*(_WORD *)(*(_QWORD *)v53 + 60LL) & 0x3FF));
    v120 = v55;
    ProtoPteAddress = MiGetProtoPteAddress(v51, v54, 4LL, &v133);
    v56 = (_QWORD *)ProtoPteAddress;
    if ( ProtoPteAddress )
    {
      v57 = v133;
      if ( v18 )
      {
        v67 = *(_QWORD *)(v133 + 8);
        v68 = ((__int64)(v136 - v15) >> 3) + 1;
        if ( v68 > 32 )
          v68 = 32LL;
        v69 = v67 + 8 * (*(unsigned int *)(v133 + 44) - (unsigned __int64)(*(_DWORD *)(v133 + 52) & 0x3FFFFFFF));
        if ( (*(_BYTE *)(v133 + 34) & 2) != 0 || ProtoPteAddress < v67 || ProtoPteAddress >= v69 )
        {
          v68 = 0LL;
        }
        else if ( ProtoPteAddress + 8 * v68 > v69 )
        {
          v68 = (__int64)(v69 - ProtoPteAddress) >> 3;
        }
        v70 = v15 + 8 * v68 - 8;
        v25 = v15 + 8;
        if ( v15 + 8 <= v70 )
        {
          do
          {
            v76 = *(_QWORD *)v25;
            if ( v25 >= 0xFFFFF6FB7DBED000uLL
              && v25 <= 0xFFFFF6FB7DBED7F8uLL
              && (MiFlags & 0x600000) != 0
              && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
              && (v76 & 1) != 0
              && ((v76 & 0x20) == 0 || (v76 & 0x42) == 0) )
            {
              v99 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
              if ( v99 )
              {
                v100 = *((_QWORD *)&v99->Flink + ((v25 >> 3) & 0x1FF));
                if ( (v100 & 0x20) != 0 )
                  v76 |= 0x20uLL;
                if ( (v100 & 0x42) != 0 )
                  v76 |= 0x42uLL;
              }
            }
            if ( v76 )
              break;
            v25 += 8LL;
          }
          while ( v25 <= v70 );
          v56 = (_QWORD *)ProtoPteAddress;
          v57 = v133;
          v54 = v146;
          v15 = (unsigned __int64)v140;
        }
        if ( v126 )
          goto LABEL_58;
      }
      else
      {
        if ( v126 )
        {
LABEL_58:
          v58 = BugCheckParameter2;
          goto LABEL_59;
        }
        v83 = *(_QWORD *)(v133 + 8);
        v84 = (__int64)(v25 - v15) >> 3;
        v85 = v83 + 8 * (*(unsigned int *)(v133 + 44) - (unsigned __int64)(*(_DWORD *)(v133 + 52) & 0x3FFFFFFF));
        if ( (*(_BYTE *)(v133 + 34) & 2) != 0 || ProtoPteAddress < v83 || ProtoPteAddress >= v85 )
        {
          v84 = 1LL;
        }
        else if ( ProtoPteAddress + 8 * v84 > v85 )
        {
          v84 = (__int64)(v85 - ProtoPteAddress) >> 3;
        }
        v25 = v15 + 8 * v84;
      }
      v58 = BugCheckParameter2;
      if ( (unsigned int)MiVadPureReserve(BugCheckParameter2) )
      {
        v86 = MiSkipFractionalPagefileRegion(v56, v57, (__int64)(v25 - v15) >> 3);
        if ( (_QWORD *)v86 != v56 )
        {
          v25 = v15 + 8 * ((v86 - (__int64)v56) >> 3);
          v56 = 0LL;
          ProtoPteAddress = 0LL;
        }
      }
LABEL_59:
      v59 = *(_QWORD **)(v58 + 120);
      if ( (__int64)v59 < 0 )
      {
        v60 = 1;
        v61 = (unsigned __int64)(*v59 - 1LL) >> 12;
      }
      else
      {
        v60 = 0;
        v61 = -1LL;
      }
      if ( !v56 )
        goto LABEL_184;
      v62 = *(_DWORD *)(v58 + 48);
      if ( (v62 & 0x70) == 0x20 )
      {
        v63 = *(__int64 **)(v58 + 72);
        for ( j = 0LL; v63; v63 = (__int64 *)v63[2] )
        {
          if ( (*((_BYTE *)v63 + 34) & 2) != 0 && (v101 = *v63, (*(_DWORD *)(*v63 + 56) & 0x8000000) != 0) )
          {
            SessionId = MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
            SharedProtos = MiGetSharedProtos(v101, SessionId, v63);
            v56 = (_QWORD *)ProtoPteAddress;
            j = *(_QWORD *)(SharedProtos + 72);
          }
          else
          {
            j = v63[1];
          }
          if ( (unsigned __int64)v56 >= j && (unsigned __int64)v56 < j + 8LL * *((unsigned int *)v63 + 11) )
            break;
        }
        if ( (__int64)((__int64)v56 - j) >> 3 >= (unsigned __int64)(*((_DWORD *)v63 + 11)
                                                                  - (*((_DWORD *)v63 + 13) & 0x3FFFFFFFu)) )
        {
          i = 0;
          v30 = 0;
        }
        else
        {
          v30 = (*(_DWORD *)(v58 + 48) >> 7) & 0x1F;
          if ( v30 == 7 )
            v30 = (*((unsigned __int16 *)v63 + 16) >> 1) & 0x1F;
          i = 0;
          if ( v30 )
            v121 = 4096;
        }
      }
      else
      {
        if ( *(_QWORD *)(*(_QWORD *)v57 + 64LL) || (*(_DWORD *)(*(_QWORD *)v57 + 56LL) & 0x2000) != 0 )
        {
          v77 = (__int64)(v25 - v15) >> 3;
          v78 = (__int64)(*(_QWORD *)(v57 + 8)
                        + 8 * (*(unsigned int *)(v57 + 44) - (unsigned __int64)(*(_DWORD *)(v57 + 52) & 0x3FFFFFFF))
                        - (_QWORD)v56) >> 3;
          v124 = v78;
          if ( v78 > v77 )
          {
            v78 = v77;
            v124 = v77;
          }
          if ( v60 )
          {
            v88 = *(unsigned int *)(v58 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v58 + 32) << 32);
            if ( v54 - v88 <= v61 )
            {
              if ( v78 > v88 - v54 + v61 + 1 )
              {
                v78 = v88 - v54 + v61 + 1;
                v124 = v78;
              }
              v25 = v15 + 8 * v78;
LABEL_124:
              i = 0;
              v30 = (v62 >> 7) & 0x1F;
              v121 = 4096;
              goto LABEL_20;
            }
          }
          v25 = v15 + 8 * v78;
          if ( !v60 )
            goto LABEL_124;
          goto LABEL_184;
        }
        v71 = (__int64)v132;
        if ( v131 )
        {
          MiUnlockPageTableInternal(v132, v131);
          v131 = 0LL;
        }
        MiUnlockWorkingSetShared(v71, a3);
        v72 = (__int64)(v25 - v15) >> 3;
        v73 = (__int64)(*(_QWORD *)(v57 + 8)
                      + 8 * (*(unsigned int *)(v57 + 44) - (unsigned __int64)(*(_DWORD *)(v57 + 52) & 0x3FFFFFFF))
                      - (_QWORD)v56) >> 3;
        if ( v73 > v72 )
          v73 = v72;
        if ( *v56 )
        {
          v74 = 4096;
          v121 = 4096;
          v30 = (*(_DWORD *)(BugCheckParameter2 + 48) >> 7) & 0x1F;
        }
        else
        {
          v74 = v121;
        }
        if ( !a5 || (unsigned int)MiQueryStateMatches(a5, v74, v30, 0, v120) )
        {
          v75 = v124;
          if ( v73 )
          {
            while ( 1 )
            {
LABEL_107:
              if ( *v56 )
              {
                if ( v74 != 4096 )
                  break;
              }
              else if ( v74 == 4096 )
              {
                break;
              }
              ++v75;
              ++v56;
              v124 = v75;
              ProtoPteAddress = (ULONG_PTR)v56;
              if ( !--v73 )
                break;
              v79 = (__int16)v56;
              v80 = (unsigned __int64)v56;
              while ( (v79 & 0xFFF) == 0 )
              {
                v81 = MI_READ_PTE_LOCK_FREE(((v80 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
                if ( (v81 & 1) != 0 || (v81 & 0x3E0) != 0 )
                {
                  if ( v74 == 4096 )
                    goto LABEL_107;
                  goto LABEL_110;
                }
                if ( v74 == 4096 )
                  goto LABEL_110;
                if ( v73 <= 0x200 )
                {
                  v75 += v73;
                  v124 = v75;
                  ProtoPteAddress = (ULONG_PTR)&v56[v73];
                  goto LABEL_110;
                }
                v56 += 512;
                v75 += 512LL;
                v124 = v75;
                v79 = (__int16)v56;
                ProtoPteAddress = (ULONG_PTR)v56;
                v73 -= 512LL;
                if ( !v73 )
                  goto LABEL_110;
                v80 = (unsigned __int64)v56;
              }
            }
          }
LABEL_110:
          i = 0;
        }
        else
        {
          v75 = 0LL;
          i = 1;
          v124 = 0LL;
        }
        v25 = v15 + 8 * v75;
        MiLockWorkingSetShared(v71);
      }
      goto LABEL_20;
    }
    if ( a5 && !(unsigned int)MiQueryStateMatches(a5, 0x2000, 0, 0, v55) )
    {
      i = 1;
      v25 = v15;
      goto LABEL_20;
    }
    if ( !(unsigned int)MiVadPureReserve(BugCheckParameter2) || !v133 || *(_QWORD *)(v133 + 8) )
    {
      v25 = v15 + 8;
LABEL_184:
      i = 0;
      goto LABEL_20;
    }
    v25 = MiSkipEntirePagefileRegions(v87, v54, v15, v25, v133);
    i = 0;
    if ( v25 == v15 )
      v25 = v15 + 8;
LABEL_20:
    v34 = v121;
    if ( v15 == v147 )
    {
      Flink = v123;
      v134 = v121;
      v127 = v30;
      v125 = v123;
      v122 = v120;
      if ( a5 && !(unsigned int)MiQueryStateMatches(a5, v121, v30, v123, v120) )
        goto LABEL_115;
      v35 = v124;
LABEL_76:
      if ( i || v35 )
        goto LABEL_78;
      goto LABEL_46;
    }
    Flink = v125;
    if ( v121 != v134 || v30 != v127 || v120 != v122 || v123 != v125 )
    {
      v34 = v134;
      v120 = v122;
      v30 = v127;
      v123 = v125;
LABEL_115:
      v25 = v15;
      goto LABEL_78;
    }
    v35 = v124;
    if ( v124 )
      goto LABEL_76;
    if ( i )
      goto LABEL_78;
    if ( (__int64)((v15 - v147) & 0xFFFFFFFFFFFFFFF8uLL) < 256 )
      goto LABEL_46;
    v36 = v132;
    if ( v131 )
    {
      v37 = *((_BYTE *)v132 + 184);
      v135 = 0;
      v38 = v37 & 7;
      if ( v131 == 0xFFFFF6FB7DBEDF68uLL )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        if ( v38 )
        {
          v106 = v37 & 7;
          if ( v106 == 7 )
          {
            SelfmapLockHandle = &CurrentPrcb->SelfmapLockHandle[1];
          }
          else if ( v106 == 5 )
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
        v41 = SelfmapLockHandle->LockQueue.Next == 0LL;
        goto LABEL_35;
      }
      if ( !v38 )
      {
        if ( v131 >= 0xFFFFF6FB7DBED000uLL
          && v131 <= 0xFFFFF6FB7DBEDFFFuLL
          && (v107 = *(_QWORD *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[28] + 624)) != 0 )
        {
          v40 = (*(_DWORD *)(v107 + 4LL * (((unsigned int)v131 >> 3) & 0x1FF)) >> 30) & 1;
        }
        else
        {
LABEL_32:
          v39 = *(_QWORD *)v131;
          if ( v131 >= 0xFFFFF6FB7DBED000uLL
            && v131 <= 0xFFFFF6FB7DBED7F8uLL
            && (MiFlags & 0x600000) != 0
            && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
            && (v39 & 1) != 0
            && ((v39 & 0x20) == 0 || (v39 & 0x42) == 0) )
          {
            Flink = (unsigned __int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( Flink )
            {
              v109 = *(_QWORD *)(Flink + 8 * ((v131 >> 3) & 0x1FF));
              if ( (v109 & 0x20) != 0 )
                v39 |= 0x20uLL;
              if ( (v109 & 0x42) != 0 )
                v39 |= 0x42uLL;
            }
          }
          v40 = (v39 >> 60) & 2;
        }
        v41 = v40 == 0;
LABEL_35:
        if ( !v41 )
          goto LABEL_139;
        goto LABEL_36;
      }
      if ( v131 < 0xFFFFF6FB7DBED000uLL || v131 > 0xFFFFF6FB7DBEDFFFuLL )
        goto LABEL_32;
      PageTableLockBuffer = (_DWORD *)MiGetPageTableLockBuffer(v132, v131, &v135);
      if ( ((*PageTableLockBuffer >> v135) & 2) != 0 )
        goto LABEL_139;
    }
LABEL_36:
    if ( (v36[23] & 7) == 2 )
      v42 = &unk_140C6A180;
    else
      v42 = v36 + 24;
    if ( (*v42 & 0x40000000) != 0 )
      goto LABEL_139;
    if ( a3 < 2u )
      break;
LABEL_46:
    v49 = (_QWORD *)(v15 + 8);
    v15 = (unsigned __int64)v49;
    v140 = v49;
    if ( v25 > v136 || (_QWORD *)v25 != v49 )
      goto LABEL_78;
    if ( v126 )
    {
      v50 = *v49;
      if ( v15 >= 0xFFFFF6FB7DBED000uLL
        && v15 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0x600000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v50 & 1) != 0
        && ((v50 & 0x20) == 0 || (v50 & 0x42) == 0) )
      {
        Flink = (unsigned __int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v110 = *(_QWORD *)(Flink + 8 * ((v15 >> 3) & 0x1FF));
          if ( (v110 & 0x20) != 0 )
            v50 |= 0x20uLL;
          if ( (v110 & 0x42) != 0 )
            v50 |= 0x42uLL;
        }
      }
      v129 = v50;
    }
    v25 += 8LL;
    a1 = (__int64)((v15 << 25) - v138) >> 16;
    v18 = 0;
  }
  v43 = KeGetCurrentPrcb();
  Flink = 0LL;
  v44 = 0LL;
  DpcRequestSummary = v43->DpcRequestSummary;
  DpcWatchdogCount = v43->DpcWatchdogCount;
  DpcTimeCount = v43->DpcTimeCount;
  if ( (DpcRequestSummary & 1) != 0 )
  {
    Flink = 1LL;
    if ( DpcTimeCount <= 7 )
      goto LABEL_45;
    if ( v43->QuantumEnd )
    {
      v82 = 1;
      goto LABEL_136;
    }
  }
  else if ( v43->NestingLevel )
  {
    v44 = 1LL;
    if ( DpcWatchdogCount <= 7 )
      goto LABEL_46;
    if ( v43->QuantumEnd )
    {
      v82 = 7;
      goto LABEL_136;
    }
  }
  else
  {
    if ( (DpcRequestSummary & 0x1E) != 0 )
    {
      v82 = 2;
      goto LABEL_136;
    }
    if ( v43->QuantumEnd )
    {
      v82 = 3;
      goto LABEL_136;
    }
    NextThread = v43->NextThread;
    if ( NextThread && NextThread != v43->CurrentThread )
    {
      v82 = 4;
      goto LABEL_136;
    }
LABEL_45:
    if ( DpcWatchdogCount <= 7 )
      goto LABEL_46;
    if ( !(_DWORD)Flink )
    {
LABEL_174:
      _disable();
      v43->DpcWatchdogCount = 0;
      v43->DpcTimeCount = 0;
      v44 = (__int64)KeGetCurrentPrcb();
      v89 = *(signed __int32 **)(v44 + 35000);
      if ( v89 )
      {
        _m_prefetchw(v89);
        v90 = *v89;
        do
        {
          v91 = v90;
          v90 = _InterlockedCompareExchange(v89, v90 & 0xFFDFFFFF, v90);
        }
        while ( v91 != v90 );
        if ( (v90 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(v44);
      }
      _enable();
      v82 = 0;
      goto LABEL_136;
    }
  }
  if ( (DpcRequestSummary & 0x1E) != 0 )
  {
    v82 = 5;
  }
  else
  {
    if ( v43->CurrentThread == v43->IdleThread )
      goto LABEL_174;
    v82 = 6;
  }
LABEL_136:
  if ( (DWORD1(PerfGlobalGroupMask) & 0x4000000) != 0 )
    EtwTraceShouldYieldProcessor(v82, DpcWatchdogCount, DpcTimeCount, v44);
  if ( !v82 )
    goto LABEL_46;
LABEL_139:
  v25 = v15 + 8;
LABEL_78:
  if ( v131 )
    MiUnlockPageTableInternal(v132, v131);
  result = v34;
  v66 = v142;
  *v141 = (__int64)((v25 << 25) - v138) >> 16;
  *v139 = v30;
  *v66 = v123;
  *v143 = v120;
  return result;
}
