/*
 * XREFs of MiPfPutPagesInTransition @ 0x1402DE040
 * Callers:
 *     MmPrefetchPagesEx @ 0x14073EBE8 (MmPrefetchPagesEx.c)
 *     MmPrefetchForCacheManager @ 0x14073F12C (MmPrefetchForCacheManager.c)
 *     MiPrefetchControlArea @ 0x1407DCE8C (MiPrefetchControlArea.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x140207740 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiReleasePrefetchGapPages @ 0x14020DC38 (MiReleasePrefetchGapPages.c)
 *     MiGetPageForHeader @ 0x14021A4F4 (MiGetPageForHeader.c)
 *     MiPfnZeroingNeeded @ 0x14021AF14 (MiPfnZeroingNeeded.c)
 *     MiGetSlabPage @ 0x14023BD50 (MiGetSlabPage.c)
 *     KeYieldProcessorEx @ 0x140242E20 (KeYieldProcessorEx.c)
 *     MiGetPage @ 0x14026D240 (MiGetPage.c)
 *     PsGetIoPriorityThread @ 0x1402A8A90 (PsGetIoPriorityThread.c)
 *     MiFreeInPageSupportBlock @ 0x1402BD2CC (MiFreeInPageSupportBlock.c)
 *     MiUnlockProtoPoolPage @ 0x1402DAEF0 (MiUnlockProtoPoolPage.c)
 *     MiReturnCommit @ 0x1402DC250 (MiReturnCommit.c)
 *     MiInvalidPteConforms @ 0x1402DC440 (MiInvalidPteConforms.c)
 *     MiLockProtoPoolPageForce @ 0x1402DDFD4 (MiLockProtoPoolPageForce.c)
 *     MiUseSlabAllocator @ 0x1402DEAC0 (MiUseSlabAllocator.c)
 *     MiInitializeReadInProgressPfn @ 0x1402DEB40 (MiInitializeReadInProgressPfn.c)
 *     MiGetInPageSupportBlock @ 0x1402E12E4 (MiGetInPageSupportBlock.c)
 *     MiInitializePageColorBase @ 0x1402E1690 (MiInitializePageColorBase.c)
 *     MiUpdatePfnPriority @ 0x1402E23B0 (MiUpdatePfnPriority.c)
 *     MiSetInPagePriority @ 0x1402E35D8 (MiSetInPagePriority.c)
 *     MiObtainProtoReference @ 0x1402EF318 (MiObtainProtoReference.c)
 *     MiAddLockedPageCharge @ 0x1402EF368 (MiAddLockedPageCharge.c)
 *     MiGetPagingFileOffset @ 0x1402F2864 (MiGetPagingFileOffset.c)
 *     MiZeroPhysicalPage @ 0x14033905C (MiZeroPhysicalPage.c)
 *     MiReduceMdl @ 0x14033E2A4 (MiReduceMdl.c)
 *     MiPrefetchPagesViable @ 0x14033E3E4 (MiPrefetchPagesViable.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x14033E8C4 (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiReturnFaultCharges @ 0x14035F870 (MiReturnFaultCharges.c)
 *     memmove @ 0x140435100 (memmove.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14046ADD8 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14060B12C (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiRefillPurgedExtents @ 0x14063F1E4 (MiRefillPurgedExtents.c)
 *     MiLockSpecialPurposeMemoryCachedPage @ 0x1406608C8 (MiLockSpecialPurposeMemoryCachedPage.c)
 *     MiFreeReadListPages @ 0x140721450 (MiFreeReadListPages.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiPfPutPagesInTransition(__int64 a1, int a2, int a3, int a4)
{
  __int64 v4; // rbx
  unsigned int v5; // r10d
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // eax
  int v9; // eax
  __int64 v10; // r9
  BOOL v11; // r14d
  char v12; // r10
  _SLIST_ENTRY *v13; // r12
  unsigned int v14; // esi
  __int64 v15; // r11
  _SLIST_ENTRY *v16; // r13
  int v17; // edi
  _DWORD *SchedulerAssist; // r9
  _SLIST_ENTRY *Next; // rbx
  __int64 v20; // r10
  unsigned __int64 v21; // r15
  __int64 Flink; // rdx
  unsigned int v23; // ecx
  unsigned __int64 v24; // r8
  int v25; // r14d
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // r8
  ULONG_PTR v29; // r15
  __int64 v30; // rbx
  unsigned __int64 v31; // rax
  __int64 v32; // r14
  __int64 v33; // rbx
  __int64 v34; // r14
  int v35; // r12d
  ULONG_PTR v36; // r14
  unsigned __int8 v37; // al
  __int64 v38; // r13
  int v39; // eax
  _QWORD **v40; // r14
  _QWORD **v41; // r15
  _QWORD *v42; // r8
  ULONG_PTR v43; // r13
  __int64 v44; // rbx
  ULONG_PTR v45; // r12
  unsigned __int8 CurrentIrql; // r15
  __int64 v47; // rcx
  unsigned __int64 v48; // rbx
  __int64 v49; // r12
  _QWORD *v50; // r14
  _SLIST_ENTRY *v51; // r14
  __int64 v53; // rcx
  _DWORD *v54; // rdx
  __int64 v55; // r14
  unsigned __int64 v56; // rax
  int v57; // r9d
  _SLIST_ENTRY *v58; // rax
  _SLIST_ENTRY *v59; // rcx
  PSLIST_ENTRY *v60; // rdx
  __int64 v61; // r15
  unsigned __int64 PageForHeader; // rax
  _QWORD *v63; // r12
  __int64 v64; // r15
  char v65; // cl
  __int64 v66; // rax
  signed __int32 v67; // ecx
  unsigned int v68; // edx
  __int64 v69; // r9
  __int64 Page; // rax
  unsigned int v71; // r8d
  __int64 v72; // rdx
  struct _KPRCB *CurrentPrcb; // r10
  int v74; // eax
  bool v75; // zf
  __int64 v76; // r14
  __int64 v77; // rdx
  __int64 v78; // r8
  __int64 v79; // r9
  unsigned int PagingFileOffset; // eax
  __int64 v81; // r13
  int v82; // r15d
  __int64 v83; // r12
  __int64 *v84; // r8
  __int64 v85; // rax
  unsigned __int8 v86; // dl
  ULONG_PTR v87; // rax
  __int64 v88; // rax
  __int64 v89; // rdx
  __int64 v90; // r8
  int v91; // [rsp+30h] [rbp-D0h]
  __int64 v92; // [rsp+38h] [rbp-C8h]
  int v93; // [rsp+40h] [rbp-C0h]
  _SLIST_ENTRY *v94; // [rsp+48h] [rbp-B8h]
  __int64 v95; // [rsp+50h] [rbp-B0h]
  __int64 v96; // [rsp+58h] [rbp-A8h]
  unsigned int v97; // [rsp+60h] [rbp-A0h] BYREF
  int v98; // [rsp+64h] [rbp-9Ch]
  unsigned int v99; // [rsp+68h] [rbp-98h]
  unsigned __int64 v100; // [rsp+70h] [rbp-90h] BYREF
  ULONG_PTR v101; // [rsp+78h] [rbp-88h]
  int v102; // [rsp+80h] [rbp-80h]
  int v103; // [rsp+84h] [rbp-7Ch]
  int v104; // [rsp+88h] [rbp-78h] BYREF
  unsigned int v105; // [rsp+8Ch] [rbp-74h]
  BOOL v106; // [rsp+90h] [rbp-70h]
  _QWORD *v107; // [rsp+98h] [rbp-68h]
  unsigned __int64 v108; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v109; // [rsp+A8h] [rbp-58h]
  _SLIST_ENTRY *v110; // [rsp+B0h] [rbp-50h]
  void *Src; // [rsp+B8h] [rbp-48h]
  int v112; // [rsp+C0h] [rbp-40h] BYREF
  int v113; // [rsp+C4h] [rbp-3Ch]
  int v114; // [rsp+C8h] [rbp-38h] BYREF
  int v115; // [rsp+CCh] [rbp-34h] BYREF
  ULONG_PTR v116; // [rsp+D0h] [rbp-30h]
  ULONG_PTR v117; // [rsp+D8h] [rbp-28h]
  __int64 v118; // [rsp+E0h] [rbp-20h]
  __int128 v119; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v120; // [rsp+F8h] [rbp-8h] BYREF
  __int64 *v121; // [rsp+100h] [rbp+0h]
  unsigned __int64 v122; // [rsp+108h] [rbp+8h]
  PSLIST_ENTRY ListEntry; // [rsp+110h] [rbp+10h]
  void *retaddr; // [rsp+168h] [rbp+68h]
  int v127; // [rsp+180h] [rbp+80h] BYREF
  int v128; // [rsp+188h] [rbp+88h]

  v128 = a4;
  v127 = a3;
  v4 = a1;
  v5 = *(_DWORD *)(a1 + 80);
  v105 = *(_DWORD *)(a1 + 84);
  v6 = *(_QWORD *)(a1 + 8);
  v109 = 0LL;
  v119 = 0LL;
  v7 = *(_WORD *)(v6 + 60) & 0x3FF;
  v99 = v5;
  v92 = 0LL;
  v118 = 0LL;
  v96 = *(_QWORD *)(qword_140C674C8 + 8 * v7);
  v8 = *(_DWORD *)(v6 + 56) & 8;
  LOBYTE(v127) = 17;
  v113 = v8;
  v9 = *(_DWORD *)(v4 + 88) + 1;
  v97 = 0;
  v102 = v9;
  v95 = 0LL;
  v11 = (int)PsGetIoPriorityThread((__int64)KeGetCurrentThread()) < 2;
  v106 = v11;
  v13 = 0LL;
  v98 = v12 & 7 | 0x18;
  v14 = (*(_DWORD *)(*(_QWORD *)(v4 + 8) + 56LL) >> 20) & 0x7F;
  MiInitializePageColorBase(v10 + 1664, v14, &v119);
  v16 = *(_SLIST_ENTRY **)(v4 + 120);
  v121 = (__int64 *)(v4 + 120);
  v94 = v16;
  if ( v16 == (_SLIST_ENTRY *)(v4 + 120) )
    goto LABEL_69;
  v17 = v98;
  while ( 2 )
  {
    SchedulerAssist = (_DWORD *)0xFFFFF68000000000LL;
    ListEntry = v16;
    if ( v11 )
    {
      LODWORD(v16[12].Next) |= 0x80u;
    }
    else if ( (*(_DWORD *)(v4 + 104) & 1) != 0 )
    {
      LODWORD(v16[12].Next) |= 0x20u;
    }
    Next = v16[15].Next;
    v20 = 0LL;
    v21 = *((_QWORD *)&v16[12].Next + 1) + 8LL;
    v110 = Next;
    v122 = v21;
    v16[15].Next = (_SLIST_ENTRY *)((unsigned __int64)Next->Next & 0xFFFFFFFFFFFFFFFCuLL);
    v108 = (unsigned __int64)Next->Next & 0xFFFFFFFFFFFFFFFCuLL;
    Src = v16[16].Next;
    Flink = (__int64)Src + 48;
    v23 = 0;
    v24 = (((*((_DWORD *)Src + 8) + *((_DWORD *)Src + 11)) & 0xFFF)
         + (unsigned __int64)*((unsigned int *)Src + 10)
         + 4095) >> 12;
    if ( v24 )
    {
      do
      {
        ++v23;
        *(_QWORD *)Flink = qword_140C69808;
        Flink += 8LL;
      }
      while ( v23 < v24 );
    }
    v91 = 0;
    v25 = 0;
    v116 = 0LL;
    if ( !v13 )
    {
      v26 = MiGetInPageSupportBlock(0LL);
      v20 = 0LL;
      v95 = v26;
      if ( v26 )
      {
        v27 = v105;
        v28 = v99;
        *(_QWORD *)(v26 + 248) = 0LL;
        MiSetInPagePriority(v26, v27, v28);
      }
      v15 = v92;
      SchedulerAssist = (_DWORD *)0xFFFFF68000000000LL;
    }
    if ( (unsigned __int64)Next >= v21 )
      goto LABEL_62;
    while ( 2 )
    {
      v29 = (unsigned __int64)Next->Next & 0xFFFFFFFFFFFFFFFCuLL;
      v101 = v20;
      v117 = v29;
      if ( v15 )
      {
        Flink = ((v29 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        if ( v118 == Flink )
          goto LABEL_15;
        MiUnlockProtoPoolPage(v15, v127);
      }
      v118 = ((v29 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v92 = MiLockProtoPoolPageForce(v29, (unsigned __int8 *)&v127);
      v20 = 0LL;
      while ( 1 )
      {
        while ( 1 )
        {
LABEL_15:
          v30 = *(_QWORD *)v29;
          v31 = *(_QWORD *)v29;
          if ( (*(_QWORD *)v29 & 1) != 0 )
            goto LABEL_84;
          if ( (*(_QWORD *)v29 & 0xC00LL) != 0x800 )
          {
            v32 = v20;
            goto LABEL_18;
          }
          if ( MiInvalidPteConforms(*(_QWORD *)v29) )
          {
            v31 = v30;
            if ( qword_140C65C40 && (v30 & 0x10) == 0 )
              v31 = v30 & ~qword_140C65C40;
LABEL_84:
            v56 = (v31 >> 12) & 0xFFFFFFFFFFLL;
            if ( v56 <= qword_140C65CA0 )
            {
              Flink = 6 * v56;
              if ( _bittest64((const signed __int64 *)(48 * v56 - 0x21FFFFFFFFD8LL), 0x36u) )
                break;
            }
          }
        }
        v32 = 48 * v56 - 0x220000000000LL;
        v112 = v20;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v32 + 24), 0x3FuLL) )
        {
          do
          {
            do
              KeYieldProcessorEx(&v112);
            while ( *(__int64 *)(v32 + 24) < 0 );
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v32 + 24), 0x3FuLL) );
          v20 = 0LL;
        }
        if ( *(_QWORD *)v29 == v30 )
          break;
        _InterlockedAnd64((volatile signed __int64 *)(v32 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
      Flink = *(_QWORD *)(qword_140C674C8 + 8 * ((*(_QWORD *)(v32 + 40) >> 43) & 0x3FFLL));
      if ( (*(_DWORD *)(Flink + 4) & 0x80u) != 0 )
      {
        v32 = MiLockSpecialPurposeMemoryCachedPage(v32, 2LL, v24, SchedulerAssist);
        v20 = 0LL;
      }
LABEL_18:
      v33 = *(_QWORD *)v29;
      if ( v29 >= 0xFFFFF6FB7DBED000uLL
        && v29 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0x600000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v33 & 1) != 0
        && ((v33 & 0x20) == 0 || (v33 & 0x42) == 0) )
      {
        Flink = (__int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v66 = *(_QWORD *)(Flink + 8 * ((v29 >> 3) & 0x1FF));
          if ( (v66 & 0x20) != 0 )
            v33 |= 0x20uLL;
          if ( (v66 & 0x42) != 0 )
            v33 |= 0x42uLL;
        }
      }
      v120 = v33;
      if ( v32 )
      {
        MiUpdatePfnPriority(v32, v99, 0LL);
        _InterlockedAnd64((volatile signed __int64 *)(v32 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        goto LABEL_56;
      }
      if ( (v33 & 0x400) == 0 )
      {
        v35 = 2;
        v103 = 2;
        if ( !(unsigned int)IS_PTE_NOT_DEMAND_ZERO(v33) || !v95 )
          goto LABEL_56;
        v36 = v101;
LABEL_26:
        v38 = v20;
        if ( v116 )
        {
          if ( v113 )
          {
            v55 = ((__int64)(v29 - v116) >> 3) - 1;
            if ( (__int64)(v29 - v116) >> 3 != 1 )
            {
              if ( !(unsigned int)MiPrefetchPagesViable(v96, a2, v102, v55, v20) )
                goto LABEL_61;
              v61 = 0LL;
              while ( 1 )
              {
                PageForHeader = MiGetPageForHeader(v96, v14);
                v100 = PageForHeader;
                if ( PageForHeader == -1LL )
                  break;
                ++v61;
                *(_QWORD *)(48 * PageForHeader - 0x220000000000LL) = v38;
                v38 = 48 * PageForHeader - 0x220000000000LL;
                if ( v61 == v55 )
                  goto LABEL_112;
              }
              if ( v61 != v55 )
                goto LABEL_184;
LABEL_112:
              v20 = 0LL;
            }
            v36 = v101;
          }
        }
        else
        {
          v53 = (__int64)(v29 - v108) >> 3;
          if ( v53 )
          {
            v54 = Src;
            v108 = v29;
            *((_WORD *)Src + 4) += -8 * v53;
            v54[10] += -4096 * v53;
            v94[6].Next += 256 * v53;
            v94[15].Next = (_SLIST_ENTRY *)(v29 & 0xFFFFFFFFFFFFFFFCuLL);
          }
        }
        v93 = v20;
        if ( v35 == 1 && (v39 = MiUseSlabAllocator(v96, v36, v33, &v97), v20 = 0LL, v39) && v97 <= 3 )
        {
          v40 = (_QWORD **)(a1 + 8 * (v97 + 6LL));
          v41 = (_QWORD **)(a1 + 40);
        }
        else
        {
          v40 = (_QWORD **)(a1 + 40);
          v41 = (_QWORD **)(a1 + 40);
        }
        v42 = *v40;
        v107 = v42;
        if ( v42 )
        {
          *v40 = (_QWORD *)*v42;
          v100 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v42 + 0x44000000000LL) >> 4);
          goto LABEL_33;
        }
        if ( (unsigned int)MiPrefetchPagesViable(v96, a2, v102, 1, 1) )
        {
          v67 = _InterlockedExchangeAdd((volatile signed __int32 *)v119, 1u);
          v68 = DWORD2(v119) & v67 | HIDWORD(v119);
          if ( v40 == v41 )
          {
            v71 = 770;
            if ( ((__int64)v110->Next & 1) == 0 )
              v71 = 512;
            Page = MiGetPage(v96, v68, v71);
          }
          else
          {
            v69 = 10LL;
            if ( v14 )
              v69 = 8LL;
            Page = MiGetSlabPage(v96, v97, v68, v69, 0LL);
          }
          v100 = Page;
          if ( Page != -1 )
          {
            v42 = (_QWORD *)(48 * Page - 0x220000000000LL);
            v107 = v42;
            v20 = 0LL;
LABEL_33:
            if ( v38 )
            {
              v63 = (char *)Src + 8 * ((__int64)(v116 - v108) >> 3) + 56;
              do
              {
                v64 = *(_QWORD *)v38;
                v114 = v20;
                if ( _interlockedbittestandset64((volatile signed __int32 *)(v38 + 24), 0x3FuLL) )
                {
                  do
                  {
                    do
                      KeYieldProcessorEx(&v114);
                    while ( *(__int64 *)(v38 + 24) < 0 );
                  }
                  while ( _interlockedbittestandset64((volatile signed __int32 *)(v38 + 24), 0x3FuLL) );
                  v20 = 0LL;
                }
                v65 = *(_BYTE *)(v38 + 34);
                *(_QWORD *)(v38 + 8) = -3LL;
                *(_BYTE *)(v38 + 34) = v65 | 7;
                *(_BYTE *)(v38 + 34) = v65 | 0x27;
                *(_QWORD *)v38 = v20;
                _InterlockedAnd64((volatile signed __int64 *)(v38 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                *v63 = 0xAAAAAAAAAAAAAAABuLL * ((v38 + 0x220000000000LL) >> 4);
                v38 = v64;
                ++v63;
              }
              while ( v64 );
              v17 = v98;
              v35 = v103;
              v42 = v107;
            }
            v43 = v117;
            if ( v35 == 1 )
              v116 = v117;
            if ( ((__int64)v110->Next & 1) != 0 )
            {
              if ( MiPfnZeroingNeeded((__int64)v42) )
                v57 = 1;
              v93 = v57;
            }
            if ( v35 == 1 )
            {
              if ( !*((_QWORD *)&v94[15].Next + 1) )
                *((_QWORD *)&v94[15].Next + 1) = v42;
              ++v91;
              MiInitializeReadInProgressPfn(-1, (unsigned int)&v100, 1, v43, (__int64)v94, v17);
              v44 = *(_QWORD *)(a1 + 8);
              if ( (*(_DWORD *)(v44 + 56) & 0x20) != 0 || !*(_QWORD *)(v44 + 64) )
                v45 = 0LL;
              else
                v45 = v101;
              CurrentIrql = KeGetCurrentIrql();
              __writecr8(2uLL);
              if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
              {
                SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
                if ( CurrentIrql == 2 )
                  LODWORD(v72) = 4;
                else
                  v72 = (-1LL << (CurrentIrql + 1)) & 4;
                v24 = (unsigned int)v72 | SchedulerAssist[5];
                SchedulerAssist[5] = v24;
              }
              if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
              {
                ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v44 + 72, CurrentIrql);
              }
              else
              {
                v104 = 0;
                if ( _interlockedbittestandset((volatile signed __int32 *)(v44 + 72), 0x1Fu) )
                  v104 = ExpWaitForSpinLockExclusiveAndAcquire((int *)(v44 + 72), CurrentIrql);
                while ( 1 )
                {
                  v47 = *(unsigned int *)(v44 + 72);
                  if ( (*(_DWORD *)(v44 + 72) & 0xBFFFFFFF) == 0x80000000 )
                    break;
                  if ( (v47 & 0x40000000) == 0 )
                    _InterlockedOr((volatile signed __int32 *)(v44 + 72), 0x40000000u);
                  KeYieldProcessorEx(&v104);
                }
              }
              ++*(_QWORD *)(v44 + 32);
              if ( v45 )
                ++*(_DWORD *)(v45 + 104);
              if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
              {
                ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v44 + 72, retaddr);
                Flink = 0LL;
              }
              else
              {
                Flink = 0LL;
                *(_DWORD *)(v44 + 72) = 0;
              }
              if ( (_DWORD)KiIrqlFlags )
              {
                v47 = KeGetCurrentIrql();
                if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
                  && (unsigned __int8)v47 <= 0xFu
                  && CurrentIrql <= 0xFu
                  && (unsigned __int8)v47 >= 2u )
                {
                  CurrentPrcb = KeGetCurrentPrcb();
                  v47 = (unsigned int)CurrentIrql + 1;
                  SchedulerAssist = CurrentPrcb->SchedulerAssist;
                  v74 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
                  v75 = (v74 & SchedulerAssist[5]) == 0;
                  v24 = (unsigned int)v74 & SchedulerAssist[5];
                  SchedulerAssist[5] = v24;
                  if ( v75 )
                    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
                  Flink = 0LL;
                }
              }
              __writecr8(CurrentIrql);
              v48 = v100;
              v49 = v92;
              *((_QWORD *)Src + ((__int64)(v43 - v108) >> 3) + 6) = v100;
              v16 = v94;
              if ( !v94[10].Next )
              {
                v115 = 0;
                while ( _interlockedbittestandset64((volatile signed __int32 *)(v92 + 24), 0x3FuLL) )
                {
                  do
                    KeYieldProcessorEx(&v115);
                  while ( *(__int64 *)(v92 + 24) < 0 );
                }
                MiAddLockedPageCharge(v92, 1LL);
                _InterlockedAnd64((volatile signed __int64 *)(v92 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                v48 = v100;
                v94[10].Next = (_SLIST_ENTRY *)v92;
              }
              v50 = v107;
            }
            else
            {
              MiReturnCommit(v96, 1LL);
              MiInitializeReadInProgressPfn(-1, (unsigned int)&v100, 1, v43, v95, v17);
              v76 = (unsigned __int16)v33 >> 12;
              PagingFileOffset = MiGetPagingFileOffset(&v120, v77, v78, v79);
              v81 = PagingFileOffset;
              v82 = 0;
              LODWORD(v109) = PagingFileOffset;
              if ( (v33 & 4) != 0 )
                LOBYTE(v82) = (_DWORD)v76 == *(_DWORD *)(v96 + 1188);
              v75 = !v106;
              v83 = *(_QWORD *)(v96 + 8 * v76 + 17056);
              *(_QWORD *)(v95 + 256) = v95 + 272;
              if ( !v75 )
                *(_DWORD *)(v95 + 192) |= 0x80u;
              v48 = v100;
              *(_QWORD *)(v95 + 272) = 0LL;
              *(_DWORD *)(v95 + 280) = 56;
              *(_QWORD *)(v95 + 304) = 0LL;
              *(_QWORD *)(v95 + 312) = 4096LL;
              *(_WORD *)(v95 + 282) |= 0x4042u;
              *(_QWORD *)(v95 + 320) = v48;
              MiObtainProtoReference(v92, 0LL);
              v84 = v121;
              *(_QWORD *)(v95 + 160) = v92;
              v85 = *v84;
              if ( *(__int64 **)(*v84 + 8) != v84 )
                goto LABEL_185;
              *(_QWORD *)v95 = v85;
              *(_QWORD *)(v95 + 8) = v84;
              *(_QWORD *)(v85 + 8) = v95;
              *v84 = v95;
              v86 = v127;
              ++*(_DWORD *)(a1 + 108);
              MiUnlockProtoPoolPage(v92, v86);
              v92 = 0LL;
              *(_QWORD *)(v95 + 224) = 0LL;
              if ( v82 )
              {
                *(_DWORD *)(v95 + 192) |= 0x100u;
                *(_QWORD *)(v95 + 96) = v81 | (v76 << 60);
              }
              else
              {
                v109 = (unsigned __int64)(unsigned int)v109 << 12;
                *(_QWORD *)(v95 + 96) = v109;
              }
              v87 = v117;
              *(_DWORD *)(v95 + 192) |= 0x200000u;
              v50 = v107;
              *(_QWORD *)(v95 + 240) = v87;
              *(_QWORD *)(v95 + 248) = v50;
              *(_QWORD *)(v95 + 200) = v83;
              v88 = MiGetInPageSupportBlock(0LL);
              v95 = v88;
              if ( v88 )
              {
                v89 = v105;
                v90 = v99;
                *(_QWORD *)(v88 + 248) = 0LL;
                MiSetInPagePriority(v88, v89, v90);
              }
              v49 = 0LL;
              v16 = v94;
            }
            if ( v93 )
            {
              if ( v49 )
              {
                MiUnlockProtoPoolPage(v49, v127);
                v92 = 0LL;
              }
              MiZeroPhysicalPage(v47, v48, 0LL, *((unsigned __int8 *)v50 + 34) >> 6);
            }
            goto LABEL_56;
          }
          MiReturnFaultCharges(v96, 1LL, 1LL);
          if ( !v38 )
            goto LABEL_61;
        }
        else if ( !v38 )
        {
          goto LABEL_61;
        }
LABEL_184:
        MiReleasePrefetchGapPages((_QWORD *)v38);
        goto LABEL_61;
      }
      v34 = v33;
      if ( qword_140C65C40 && (v33 & 0x10) == 0 )
        v34 = v33 & ~qword_140C65C40;
      v35 = 1;
      v36 = v34 >> 16;
      v101 = v36;
      v103 = 1;
      v37 = *(_BYTE *)(*(_QWORD *)(a1 + 8) + 62LL);
      v24 = v37;
      LOBYTE(v24) = v37 & 0xC;
      if ( (v37 & 0xC) == 4 )
      {
        MiUnlockProtoPoolPage(v92, v127);
        v92 = 0LL;
        if ( (int)MiRefillPurgedExtents(v36) >= 0 )
          goto LABEL_56;
        v25 = v91;
      }
      else
      {
        if ( (v37 & 0xC) != 8 )
          goto LABEL_26;
LABEL_56:
        Next = (_SLIST_ENTRY *)(&v110->Next + 1);
        v110 = Next;
        if ( (unsigned __int64)Next < v122 )
        {
          v15 = v92;
          v20 = 0LL;
          SchedulerAssist = (_DWORD *)0xFFFFF68000000000LL;
          continue;
        }
LABEL_61:
        v25 = v91;
LABEL_62:
        if ( v92 )
        {
          MiUnlockProtoPoolPage(v92, v127);
          v92 = 0LL;
        }
        v16 = v94;
      }
      break;
    }
    if ( v25 )
    {
      v51 = (_SLIST_ENTRY *)Src;
      MiReduceMdl(Src, Flink, v24, SchedulerAssist);
      if ( v51 != &v16[17] && *((_DWORD *)&v51[2].Next + 2) <= 0x10000u )
      {
        memmove(&v16[17], v51, *((__int16 *)&v51->Next + 4));
        ExFreePoolWithTag(v51, 0);
        v16[16].Next = v16 + 17;
      }
      v16 = v16->Next;
      v4 = a1;
      v94 = v16;
      goto LABEL_68;
    }
    v58 = v16->Next;
    v59 = ListEntry;
    v16 = v58;
    v94 = v58;
    v60 = (PSLIST_ENTRY *)*((_QWORD *)&ListEntry->Next + 1);
    if ( *(&v58->Next + 1) != ListEntry || *v60 != ListEntry )
LABEL_185:
      __fastfail(3u);
    v4 = a1;
    *v60 = v58;
    *((_QWORD *)&v58->Next + 1) = v60;
    --*(_DWORD *)(a1 + 108);
    MiFreeInPageSupportBlock(v59);
LABEL_68:
    v13 = (_SLIST_ENTRY *)v95;
    if ( v16 != (_SLIST_ENTRY *)(v4 + 120) )
    {
      v15 = v92;
      v11 = v106;
      continue;
    }
    break;
  }
LABEL_69:
  MiFreeReadListPages(v4);
  if ( v13 )
    MiFreeInPageSupportBlock(v13);
  return 0LL;
}
