/*
 * XREFs of MmUnmapViewInSystemCache @ 0x1402D9FB0
 * Callers:
 *     CcUnmapVacb @ 0x140721E80 (CcUnmapVacb.c)
 * Callees:
 *     MiInitializeTbFlushStamps @ 0x140212A28 (MiInitializeTbFlushStamps.c)
 *     MiGetWsleContents @ 0x140216FD0 (MiGetWsleContents.c)
 *     MiRebuildPageTableLeafAges @ 0x1402188C0 (MiRebuildPageTableLeafAges.c)
 *     MiLockPageTableInternal @ 0x1402376E0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x14023C4E0 (MiUnlockWorkingSetShared.c)
 *     KeYieldProcessorEx @ 0x140242E20 (KeYieldProcessorEx.c)
 *     MiGetSystemCacheReverseMap @ 0x1402622F0 (MiGetSystemCacheReverseMap.c)
 *     MiDecrementShareCount @ 0x140280690 (MiDecrementShareCount.c)
 *     MiCaptureDirtyBitToPfn @ 0x140282FE0 (MiCaptureDirtyBitToPfn.c)
 *     MiLockWorkingSetShared @ 0x140283B70 (MiLockWorkingSetShared.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14028A810 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiSectionControlArea @ 0x14029F760 (MiSectionControlArea.c)
 *     MiRemoveViewsFromSection @ 0x14029F7C8 (MiRemoveViewsFromSection.c)
 *     MiCheckControlArea @ 0x14029FAA0 (MiCheckControlArea.c)
 *     MiReleaseSystemCacheView @ 0x1402A0020 (MiReleaseSystemCacheView.c)
 *     MiManageSubsectionView @ 0x1402A03E0 (MiManageSubsectionView.c)
 *     MiUnlockWsle @ 0x1402A25E0 (MiUnlockWsle.c)
 *     MiRemoveWsleList @ 0x1402A7CB0 (MiRemoveWsleList.c)
 *     MiCanBatchHardFaultPages @ 0x1402CDC60 (MiCanBatchHardFaultPages.c)
 *     MiPfnReferenceCountIsZero @ 0x1402D8FE0 (MiPfnReferenceCountIsZero.c)
 *     MiEnqueuePageList @ 0x1402DAA10 (MiEnqueuePageList.c)
 *     MiInsertPagesInList @ 0x1402DD520 (MiInsertPagesInList.c)
 *     MiGetContainingPageTable @ 0x1402E1270 (MiGetContainingPageTable.c)
 *     MI_WSLE_LOG_ACCESS @ 0x1402E39BC (MI_WSLE_LOG_ACCESS.c)
 *     MI_INTERLOCKED_EXCHANGE_PTE @ 0x1402E5D40 (MI_INTERLOCKED_EXCHANGE_PTE.c)
 *     MiReleaseWriteInProgressCharges @ 0x1402F48D8 (MiReleaseWriteInProgressCharges.c)
 *     MiUnlockPageTableInternal @ 0x1403193E0 (MiUnlockPageTableInternal.c)
 *     MiHardFaultPageRelease @ 0x140334C08 (MiHardFaultPageRelease.c)
 *     MiCompressTbFlushList @ 0x14033E1D8 (MiCompressTbFlushList.c)
 *     qsort @ 0x1403D9DD0 (qsort.c)
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 *     memset @ 0x140435400 (memset.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x14066B424 (MiReturnCrossPartitionSectionCharges.c)
 */

_QWORD *__fastcall MmUnmapViewInSystemCache(ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter4, char a3)
{
  ULONG_PTR v6; // r14
  __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 v9; // r8
  ULONG_PTR SystemCacheReverseMap; // r10
  unsigned __int64 v11; // rdx
  int v12; // eax
  _QWORD *v13; // rax
  __int64 v14; // r9
  unsigned int *MmInternal; // rbx
  __int64 v16; // rdx
  _BYTE *v17; // rcx
  ULONG_PTR v18; // r13
  size_t v19; // r8
  __int64 v20; // rbx
  unsigned __int64 v21; // r15
  __int64 v22; // r12
  __int64 v23; // rdi
  unsigned __int64 v24; // rsi
  char v25; // cl
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  unsigned __int64 v29; // rax
  int v30; // ecx
  unsigned int v31; // ecx
  unsigned __int64 v32; // rax
  __int64 v33; // rcx
  int v34; // edi
  __int64 v35; // rdx
  __int64 v36; // rbx
  __int64 v37; // rax
  _QWORD *v38; // rsi
  unsigned __int64 v39; // rdx
  __int64 v40; // r13
  int v41; // r12d
  __int64 v42; // rbx
  unsigned __int64 v43; // rax
  unsigned __int8 v44; // di
  _QWORD *v45; // rdx
  ULONG_PTR v46; // rsi
  unsigned __int8 v47; // cl
  __int64 v48; // rbx
  unsigned __int8 v49; // r13
  volatile LONG *v50; // rcx
  __int64 v51; // rbx
  unsigned __int64 v52; // rdi
  __int64 v53; // rax
  unsigned __int64 v54; // rcx
  __int64 v55; // rcx
  _QWORD *result; // rax
  __int64 v57; // rsi
  unsigned __int64 v58; // r8
  unsigned __int64 v59; // rax
  char WsleContents; // di
  unsigned __int64 v61; // rdx
  unsigned int v62; // eax
  bool v63; // zf
  _BYTE *v64; // rax
  ULONG_PTR v65; // r14
  __int64 v66; // rsi
  __int64 v67; // rcx
  char v68; // al
  __int64 v69; // rdx
  unsigned __int64 v70; // rax
  int CanBatchHardFaultPages; // ecx
  char v72; // al
  _DWORD *v73; // r8
  __int64 v74; // rbx
  _DWORD *v75; // r8
  __int64 v76; // rbx
  unsigned __int64 v77; // rax
  unsigned __int64 v78; // r10
  __int64 v79; // rax
  __int64 v80; // r9
  unsigned __int64 v81; // rcx
  struct _LIST_ENTRY *Flink; // rcx
  __int64 v83; // rcx
  __int64 v84; // rcx
  char v85; // al
  char v86; // al
  char v87; // al
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r11
  _DWORD *SchedulerAssist; // r10
  int v91; // eax
  unsigned __int8 v92; // [rsp+30h] [rbp-D0h]
  int v93; // [rsp+34h] [rbp-CCh]
  int v94; // [rsp+38h] [rbp-C8h] BYREF
  int v95; // [rsp+3Ch] [rbp-C4h] BYREF
  __int64 v96; // [rsp+40h] [rbp-C0h]
  int v97; // [rsp+48h] [rbp-B8h]
  int v98; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v99; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v100; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v101; // [rsp+68h] [rbp-98h]
  _QWORD *v102; // [rsp+70h] [rbp-90h] BYREF
  _BYTE *v103; // [rsp+78h] [rbp-88h]
  ULONG_PTR v104; // [rsp+80h] [rbp-80h]
  ULONG_PTR BugCheckParameter2; // [rsp+88h] [rbp-78h]
  unsigned __int64 v106; // [rsp+90h] [rbp-70h]
  ULONG_PTR v107; // [rsp+98h] [rbp-68h]
  ULONG_PTR v108; // [rsp+A0h] [rbp-60h]
  __int64 v109; // [rsp+A8h] [rbp-58h]
  __int64 v110; // [rsp+B0h] [rbp-50h]
  _QWORD *v111; // [rsp+B8h] [rbp-48h]
  _QWORD v112[14]; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v113; // [rsp+130h] [rbp+30h]
  __int128 v114; // [rsp+140h] [rbp+40h]
  unsigned __int64 v115; // [rsp+150h] [rbp+50h]
  __int64 v119; // [rsp+1C8h] [rbp+C8h] BYREF

  memset(v112, 0, 0x68uLL);
  LOBYTE(v119) = 0;
  v94 = a3 & 1;
  v6 = ((BugCheckParameter3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v111 = (_QWORD *)v6;
  v107 = v6 + 512;
  v109 = 48 * MiGetContainingPageTable(v6) - 0x220000000000LL;
  v101 = MiSectionControlArea(BugCheckParameter4);
  v7 = *(_WORD *)(v101 + 60) & 0x3FF;
  v99 = *(_QWORD *)(v101 + 64) & 0xFFFFFFFFFFFFFFF0uLL;
  v110 = *(_QWORD *)(qword_140C674C8 + 8 * v7);
  v93 = 0;
  v97 = 0;
  v8 = v110 + 17344;
  v100 = 0LL;
  v96 = v110 + 17344;
  SystemCacheReverseMap = MiGetSystemCacheReverseMap(BugCheckParameter3);
  v104 = SystemCacheReverseMap;
  v11 = *(_QWORD *)(SystemCacheReverseMap + 24);
  v12 = 4;
  if ( (v11 & 1) == 0 )
    v12 = 2;
  v95 = v12;
  v13 = (_QWORD *)(v11 & 0xFFFFFFFFFFFFFFFEuLL);
  if ( (v11 & 1) == 0 )
    v13 = (_QWORD *)v11;
  v108 = (ULONG_PTR)v13;
  if ( *v13 != v9 )
    KeBugCheckEx(0x1Au, 0x782uLL, SystemCacheReverseMap, BugCheckParameter3, BugCheckParameter4);
  v106 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v92 = MiLockWorkingSetShared(v8);
  MiLockPageTableInternal(v8, v106, 0, v14);
  MmInternal = (unsigned int *)KeGetCurrentPrcb()->MmInternal;
  v16 = *(_QWORD *)MmInternal;
  *(_DWORD *)(v16 + 8) = MmInternal[6];
  *(_DWORD *)(v16 + 12) = 0;
  *(_DWORD *)v16 = 0;
  *(_WORD *)(v16 + 4) = 0;
  *(_QWORD *)(v16 + 16) = 0LL;
  *(_QWORD *)(v16 + 24) = 0LL;
  v17 = (_BYTE *)*((_QWORD *)MmInternal + 2);
  v18 = *((_QWORD *)MmInternal + 1);
  v19 = 8LL * MmInternal[6];
  BugCheckParameter2 = v18;
  v103 = v17;
  memset(v17, 0, v19);
  v20 = *(_QWORD *)MmInternal;
  v21 = BugCheckParameter3;
  v22 = 0LL;
  *(_BYTE *)(v20 + 4) |= 4u;
  while ( 1 )
  {
    v23 = 1LL;
    v24 = v21;
    if ( *(_DWORD *)v20 != 1 )
    {
      v25 = *(_BYTE *)(v20 + 4);
      if ( (v25 & 8) == 0 && v21 >= 0xFFFFF68000000000uLL && v21 <= 0xFFFFF6FFFFFFFFFFuLL )
        *(_BYTE *)(v20 + 4) = v25 | 8;
    }
    LODWORD(v26) = *(_DWORD *)(v20 + 12);
    if ( (_DWORD)v26 && (*(_BYTE *)(v20 + 4) & 4) == 0 )
    {
      v27 = (unsigned int)(v26 - 1);
      v77 = *(_QWORD *)(v20 + 8 * v27 + 24);
      if ( (v77 & 0xC00) == 0 )
      {
        v78 = *(_QWORD *)(v20 + 8 * v27 + 24) & 0x3FFLL;
        if ( (v77 & 0xFFFFFFFFFFFFF000uLL) + ((v78 + 1) << 12) == v21 && v78 + 1 >= v78 && v78 + 1 <= 0x3FF )
        {
          ++*(_QWORD *)(v20 + 16);
          *(_QWORD *)(v20 + 8 * v27 + 24) = ((unsigned __int16)v77 ^ (unsigned __int16)(v77 + 1)) & 0x3FF ^ v77;
          goto LABEL_19;
        }
      }
    }
    else
    {
      v27 = (unsigned int)(v26 - 1);
      if ( !(_DWORD)v26 )
        goto LABEL_14;
    }
    if ( (*(_BYTE *)(v20 + 4) & 4) == 0 )
    {
      v79 = *(_QWORD *)(v20 + 8 * v27 + 24);
      v80 = v20 + 8 * v27;
      if ( (v79 & 0xC00) == 0 && (v79 & 0xFFFFFFFFFFFFF000uLL) == v21 + 4096 )
      {
        v81 = v79 & 0x3FF;
        if ( v81 + 1 >= v81 && v81 + 1 <= 0x3FF )
        {
          ++*(_QWORD *)(v20 + 16);
          *(_QWORD *)(v80 + 24) = ((unsigned __int16)(v79 - 4096) ^ (unsigned __int16)(v79 - 4096 + 1)) & 0x3FF ^ (unsigned __int64)(v79 - 4096);
          goto LABEL_19;
        }
      }
    }
LABEL_14:
    if ( (unsigned int)v26 >= *(_DWORD *)(v20 + 8) )
    {
      *(_BYTE *)(v20 + 5) = 1;
    }
    else
    {
      while ( 1 )
      {
        v28 = (unsigned __int64)(v23 - 1) > 0x3FF ? 1024LL : v23;
        v29 = v24 & 0xFFFFFFFFFFFFF000uLL | ((_WORD)v28 - 1) & 0x3FF;
        v23 -= v28;
        v24 += v28 << 12;
        *(_QWORD *)(v20 + 8LL * (unsigned int)v26 + 24) = v29;
        v30 = *(_DWORD *)(v20 + 12);
        *(_QWORD *)(v20 + 16) += v28;
        v31 = v30 + 1;
        LODWORD(v26) = v31;
        *(_DWORD *)(v20 + 12) = v31;
        if ( v31 == *(_DWORD *)(v20 + 8) && (*(_BYTE *)(v20 + 4) & 4) == 0 )
        {
          qsort((void *)(v20 + 24), v31, 8uLL, MiTbFlushSort);
          MiCompressTbFlushList(v20);
          v26 = *(unsigned int *)(v20 + 12);
          if ( (_DWORD)v26 == *(_DWORD *)(v20 + 8) )
            break;
        }
        if ( !v23 )
          goto LABEL_19;
      }
      if ( v23 )
      {
        *(_BYTE *)(v20 + 5) = 1;
        *(_QWORD *)(v20 + 16) = v26;
      }
    }
LABEL_19:
    v32 = *(_QWORD *)v6;
    v102 = (_QWORD *)v32;
    *(_QWORD *)(v18 + 8 * v22) = v32;
    if ( (v32 & 1) != 0 )
    {
      v57 = 48 * ((v32 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
      if ( dword_140C680E8 )
        MI_WSLE_LOG_ACCESS(v96, v6);
      if ( v94 )
      {
        if ( (*(_QWORD *)(v57 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1 )
        {
          v72 = *(_BYTE *)(v57 + 35);
          if ( (v72 & 8) != 0 || (v72 & 7u) > 2 && (v72 & 7u) <= 5 )
          {
            v98 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v57 + 24), 0x3FuLL) )
            {
              do
                KeYieldProcessorEx(&v98);
              while ( *(__int64 *)(v57 + 24) < 0 );
            }
            *(_BYTE *)(v57 + 35) = *(_BYTE *)(v57 + 35) & 0xF8 | 2;
            _InterlockedAnd64((volatile signed __int64 *)(v57 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          }
        }
      }
      v58 = ((v21 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v59 = *(_QWORD *)v58;
      if ( v58 >= 0xFFFFF6FB7DBED000uLL
        && v58 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0x600000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v59 & 1) != 0
        && ((v59 & 0x20) == 0 || (v59 & 0x42) == 0) )
      {
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v83 = *((_QWORD *)&Flink->Flink + ((v58 >> 3) & 0x1FF));
          if ( (v83 & 0x20) != 0 )
            v59 |= 0x20uLL;
          if ( (v83 & 0x42) != 0 )
            v59 |= 0x42uLL;
        }
      }
      WsleContents = HIBYTE(v59) & 0xF | (16 * ((v59 >> 60) & 7));
      if ( (HIBYTE(v59) & 0xF) == 8 )
      {
        MiUnlockWsle(v96, v21, v57);
        WsleContents = MiGetWsleContents(v84, v21);
      }
      v61 = *(_QWORD *)v6;
      v62 = ((unsigned int)MiFlags >> 26) & 3;
      if ( v62 <= 1 )
      {
        if ( !v62 )
          goto LABEL_60;
        if ( v6 >= 0xFFFFF6FB40000000uLL && v6 <= 0xFFFFF6FB7FFFFFFFuLL && (v61 & 0x80u) == 0LL )
          LOBYTE(v61) = 32;
      }
      else if ( (MiFlags & 0x2000000) != 0 )
      {
        _mm_lfence();
      }
      if ( (v61 & 0x20) == 0 )
      {
        MI_INTERLOCKED_EXCHANGE_PTE(v6, ZeroPte);
        goto LABEL_61;
      }
LABEL_60:
      *(_QWORD *)v6 = ZeroPte;
LABEL_61:
      v63 = v99 == 0;
      v64 = v103;
      v103[8 * v22] = WsleContents;
      v64[8 * v22 + 1] = 1;
      if ( !v63 )
        v100 = *(_QWORD *)(v57 + 8) | 0x8000000000000000uLL;
      v34 = v93 + 1;
      v97 = v93 + 1;
      goto LABEL_27;
    }
    if ( (v32 & 0x400) == 0 )
      break;
    if ( v99 )
    {
      v33 = v32;
      if ( qword_140C65C40 && (v32 & 0x10) == 0 )
        v33 = ~qword_140C65C40 & v32;
      v100 = v33 >> 16;
    }
    *(_QWORD *)v6 = ZeroPte;
    v34 = v93 + 1;
LABEL_27:
    ++v22;
    v93 = v34;
    v6 += 8LL;
    v21 += 4096LL;
    if ( v6 >= v107 )
      goto LABEL_28;
  }
  v34 = v93;
LABEL_28:
  if ( v97 )
  {
    v35 = v20;
    v36 = v96;
    v37 = MiRemoveWsleList(v96, v35, v103, v97);
    if ( v37 )
      MiRebuildPageTableLeafAges(0LL, v37 << 25 >> 16 << 25 >> 16);
  }
  else
  {
    v36 = v96;
  }
  v38 = (_QWORD *)v104;
  v39 = v106;
  v113 = 0LL;
  v115 = *(_QWORD *)(v104 + 32) & 0x3FFFFFFFFFFFFFFFLL | 0x8000000000000000uLL;
  v114 = 0LL;
  *(_QWORD *)(v104 + 32) = v115;
  MiUnlockPageTableInternal(v36, v39);
  MiUnlockWorkingSetShared(v36, 2u);
  LODWORD(v112[1]) = 0;
  v112[2] = 0x3FFFFFFFFFLL;
  v40 = 0LL;
  v112[3] = 0x3FFFFFFFFFLL;
  v41 = 0;
  LODWORD(v112[12]) = 0;
  v42 = 0LL;
  v112[11] = 0LL;
  if ( v34 > 0 )
  {
    while ( 2 )
    {
      v43 = *(_QWORD *)(BugCheckParameter2 + 8 * v42);
      if ( (v43 & 1) == 0 )
        goto LABEL_33;
      v65 = (v43 >> 12) & 0xFFFFFFFFFFLL;
      LOBYTE(v119) = (v43 & 0x42) != 0;
      v66 = 48 * v65 - 0x220000000000LL;
      if ( v41 == 3 )
      {
        CanBatchHardFaultPages = 1;
        goto LABEL_79;
      }
      if ( v112[0] )
      {
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v66 + 24), 0x3FuLL) )
        {
          MiInsertPagesInList(v112, 0LL);
          if ( !v112[0] )
            goto LABEL_91;
        }
      }
      else
      {
LABEL_91:
        v94 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v66 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v94);
          while ( *(__int64 *)(v66 + 24) < 0 );
        }
      }
      switch ( v41 )
      {
        case 0:
          if ( (_BYTE)v119 )
            MiCaptureDirtyBitToPfn(48 * v65 - 0x220000000000LL);
          if ( _bittest64((const signed __int64 *)(v66 + 40), 0x35u) )
          {
            v87 = *(_BYTE *)(v66 + 34);
            if ( (v87 & 0x10) != 0 )
            {
              if ( byte_140C65BE8 )
                *(_BYTE *)(v66 + 34) = v87 & 0xEF;
            }
          }
          v67 = *(_QWORD *)(v66 + 24);
          if ( (v67 & 0x4000000000000000LL) == 0 )
          {
            v68 = *(_BYTE *)(v66 + 35);
            if ( (v68 & 0x40) == 0 && (v68 & 0x10) == 0 )
            {
              if ( (v67 & 0x3FFFFFFFFFFFFFFFLL) == 1 && *(_WORD *)(v66 + 32) == 1 )
              {
                *(_WORD *)(v66 + 32) = 0;
                *(_QWORD *)(v66 + 24) = v67 ^ (v67 ^ ((v67 & 0x3FFFFFFFFFFFFFFFLL) - 1)) & 0x3FFFFFFFFFFFFFFFLL;
                v69 = *(_QWORD *)(v66 + 16);
                v70 = v69 & 0xFFFFFFFFFFFFF7FFuLL;
                if ( (v69 & 0x400) == 0 )
                  v70 = v69 & 0xFFFFFFFFFFFFFFF7uLL;
                CanBatchHardFaultPages = 1;
                *(_QWORD *)(v66 + 16) = v70;
              }
              else
              {
                CanBatchHardFaultPages = 2;
              }
LABEL_79:
              if ( !v112[0] )
              {
                if ( (*(_BYTE *)(v66 + 34) & 0x10) != 0 )
                  LODWORD(v112[1]) = 3;
                else
                  LODWORD(v112[1]) = 2;
              }
              if ( CanBatchHardFaultPages == 1 )
              {
                MiEnqueuePageList(v112, v65);
LABEL_82:
                v41 = v112[12];
                ++v40;
LABEL_33:
                if ( ++v42 >= v34 )
                {
                  v38 = (_QWORD *)v104;
                  goto LABEL_35;
                }
                continue;
              }
              MiInsertPagesInList(v112, 1LL);
              if ( v41 )
              {
                if ( v41 == 2 )
                {
                  MiHardFaultPageRelease(&v119, 48 * v65 - 0x220000000000LL);
                }
                else
                {
                  MiReleaseWriteInProgressCharges(
                    *(_QWORD *)(qword_140C674C8 + 8 * ((*(_QWORD *)(v66 + 40) >> 43) & 0x3FFLL)),
                    1LL,
                    1LL);
                  MiPfnReferenceCountIsZero(48 * v65 - 0x220000000000LL, v65);
                }
              }
              else
              {
                MiDecrementShareCount(48 * v65 - 0x220000000000LL);
              }
LABEL_177:
              _InterlockedAnd64((volatile signed __int64 *)(v66 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              goto LABEL_82;
            }
          }
LABEL_173:
          CanBatchHardFaultPages = 2;
          goto LABEL_79;
        case 2:
          CanBatchHardFaultPages = MiCanBatchHardFaultPages(&v119, 48 * v65 - 0x220000000000LL);
          if ( CanBatchHardFaultPages )
            goto LABEL_79;
          break;
        case 1:
          MiReleaseWriteInProgressCharges(
            *(_QWORD *)(qword_140C674C8 + 8 * ((*(_QWORD *)(v66 + 40) >> 43) & 0x3FFLL)),
            1LL,
            1LL);
          break;
        default:
          v85 = *(_BYTE *)(v66 + 34) & 0xF7;
          v63 = (v119 & 0x42) == 0;
          *(_BYTE *)(v66 + 34) = v85;
          if ( !v63 )
            *(_BYTE *)(v66 + 34) = v85 | 0x10;
          v63 = (*(_WORD *)(v66 + 32))-- == 1;
          if ( v63 )
          {
            if ( (*(_QWORD *)(v66 + 24) & 0x4000000000000000LL) == 0 )
            {
              v86 = *(_BYTE *)(v66 + 35);
              if ( (v86 & 0x40) == 0 && (v86 & 0x10) == 0 )
              {
                CanBatchHardFaultPages = 1;
                goto LABEL_79;
              }
            }
            goto LABEL_173;
          }
          break;
      }
      goto LABEL_177;
    }
  }
LABEL_35:
  MiInsertPagesInList(v112, 0LL);
  if ( (_DWORD)KiIrqlFlags
    && (CurrentIrql = KeGetCurrentIrql(), ((unsigned __int8)KiIrqlFlags & 1) != 0)
    && CurrentIrql <= 0xFu )
  {
    v44 = v92;
    if ( v92 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v91 = ~(unsigned __int16)(-1LL << (v92 + 1));
      v63 = (v91 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v91;
      if ( v63 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  else
  {
    v44 = v92;
  }
  __writecr8(v44);
  v45 = v38;
  v46 = v108;
  MiManageSubsectionView((__int64 *)v108, v45, v95);
  v47 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( v40 )
  {
    if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && v47 <= 0xFu )
    {
      v73 = KeGetCurrentPrcb()->SchedulerAssist;
      if ( v47 == 2 )
        LODWORD(v74) = 4;
      else
        v74 = (-1LL << (v47 + 1)) & 4;
      v73[5] |= v74;
    }
    v48 = v109;
    v95 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v48 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v95);
      while ( *(__int64 *)(v48 + 24) < 0 );
    }
    *(_QWORD *)(v48 + 24) ^= (*(_QWORD *)(v48 + 24) ^ (*(_QWORD *)(v48 + 24) - v40)) & 0x3FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v48 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v49 = v92;
  }
  else
  {
    v49 = v47;
    if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && v47 <= 0xFu )
    {
      v75 = KeGetCurrentPrcb()->SchedulerAssist;
      if ( v47 == 2 )
        LODWORD(v76) = 4;
      else
        v76 = (-1LL << (v47 + 1)) & 4;
      v75[5] |= v76;
    }
  }
  v50 = (volatile LONG *)(v101 + 72);
  if ( v99 )
  {
    v51 = 0LL;
    ExAcquireSpinLockExclusiveAtDpcLevel(v50);
    if ( v46 )
    {
      v52 = v100;
      while ( 1 )
      {
        v53 = MiRemoveViewsFromSection(v46, *(unsigned int *)(v46 + 44), 4);
        v54 = *(_QWORD *)(v46 + 8);
        v51 += v53;
        if ( v52 >= v54 && v52 < v54 + 8LL * *(unsigned int *)(v46 + 44) )
          break;
        v46 = *(_QWORD *)(v46 + 16);
        if ( !v46 )
          KeBugCheckEx(0x1Au, 0x783uLL, BugCheckParameter2, BugCheckParameter3, BugCheckParameter4);
      }
    }
  }
  else
  {
    ExAcquireSpinLockExclusiveAtDpcLevel(v50);
    v51 = 0LL;
  }
  v55 = v101;
  --*(_QWORD *)(v101 + 40);
  --*(_DWORD *)(v55 + 88);
  MiCheckControlArea(v55, v49);
  if ( v51 )
    MiReturnCrossPartitionSectionCharges(v110, 1LL, v51);
  if ( (a3 & 2) == 0 )
    return MiReleaseSystemCacheView(0LL, BugCheckParameter3);
  v102 = 0LL;
  MiInitializeTbFlushStamps((__int64 *)&v102);
  result = v102;
  *v111 = v102;
  return result;
}
