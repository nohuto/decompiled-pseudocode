/*
 * XREFs of MiPfPutPagesInTransition @ 0x1402715A0
 * Callers:
 *     MiPrefetchControlArea @ 0x1406B85C8 (MiPrefetchControlArea.c)
 *     MmPrefetchForCacheManager @ 0x1406FA590 (MmPrefetchForCacheManager.c)
 *     MmPrefetchPagesEx @ 0x1406FA730 (MmPrefetchPagesEx.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x140220C30 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiIsPteInStore @ 0x140232E74 (MiIsPteInStore.c)
 *     MiZeroPhysicalPage @ 0x1402359C4 (MiZeroPhysicalPage.c)
 *     MiReturnFaultCharges @ 0x14024AA58 (MiReturnFaultCharges.c)
 *     MiPfnZeroingNeeded @ 0x140268A70 (MiPfnZeroingNeeded.c)
 *     MiInitializeReadInProgressPfn @ 0x1402724C0 (MiInitializeReadInProgressPfn.c)
 *     MiInvalidPteConforms @ 0x140273A80 (MiInvalidPteConforms.c)
 *     MiLockProtoPoolPageForce @ 0x140273AAC (MiLockProtoPoolPageForce.c)
 *     MiUpdatePfnPriority @ 0x14027428C (MiUpdatePfnPriority.c)
 *     MiReduceMdl @ 0x14027436C (MiReduceMdl.c)
 *     MiObtainProtoReference @ 0x14027449C (MiObtainProtoReference.c)
 *     MiFreeInPageSupportBlock @ 0x14027456C (MiFreeInPageSupportBlock.c)
 *     MiSetInPagePriority @ 0x14027466C (MiSetInPagePriority.c)
 *     MiReturnCommit @ 0x14028CE10 (MiReturnCommit.c)
 *     MiGetPageForHeader @ 0x1402E57FC (MiGetPageForHeader.c)
 *     MiGetPagingFileOffset @ 0x1402E76C0 (MiGetPagingFileOffset.c)
 *     MiGetSlabAllocatorTypeByProtection @ 0x1402EB3F8 (MiGetSlabAllocatorTypeByProtection.c)
 *     MiGetSlabPage @ 0x1402EB440 (MiGetSlabPage.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     MiGetPage @ 0x1403250B0 (MiGetPage.c)
 *     MiUnlockProtoPoolPage @ 0x140334790 (MiUnlockProtoPoolPage.c)
 *     MiInitializePageColorBase @ 0x140339C20 (MiInitializePageColorBase.c)
 *     MiGetInPageSupportBlock @ 0x14033C424 (MiGetInPageSupportBlock.c)
 *     PsGetIoPriorityThread @ 0x14033D760 (PsGetIoPriorityThread.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x14033FD38 (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiReleasePrefetchGapPages @ 0x140386FBC (MiReleasePrefetchGapPages.c)
 *     MiPrefetchPagesViable @ 0x140387140 (MiPrefetchPagesViable.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140461A66 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     MiLockSpecialPurposeMemoryCachedPage @ 0x14059A31C (MiLockSpecialPurposeMemoryCachedPage.c)
 *     MiRefillPurgedExtents @ 0x1405A0A20 (MiRefillPurgedExtents.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14063D8B0 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiFreeReadListPages @ 0x1406FAD90 (MiFreeReadListPages.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiPfPutPagesInTransition(__int64 a1, int a2)
{
  __int64 v2; // rbx
  unsigned int v3; // r10d
  __int64 v4; // r13
  __int64 v5; // rdx
  unsigned int v6; // edi
  __int64 v7; // rcx
  char v8; // r10
  __int64 v9; // r8
  unsigned int v10; // edi
  struct _SLIST_ENTRY *v11; // r14
  int v12; // r11d
  struct _SLIST_ENTRY *v13; // r12
  int v14; // esi
  _DWORD *SchedulerAssist; // r9
  _SLIST_ENTRY *Next; // rbx
  __int64 v17; // r11
  __int64 Flink; // rdx
  unsigned int v19; // ecx
  unsigned __int64 v20; // r8
  int v21; // r15d
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r14
  ULONG_PTR v25; // r15
  unsigned __int64 v26; // rbx
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rax
  __int64 v29; // r14
  unsigned __int64 v30; // rbx
  __int64 v31; // rax
  __int64 v32; // r12
  int v33; // r13d
  ULONG_PTR v34; // r12
  __int64 v35; // r14
  __int64 v36; // rcx
  _DWORD *v37; // rdx
  __int64 v38; // r15
  __int64 v39; // r12
  __int64 PageForHeader; // rax
  int v41; // r12d
  __int64 v42; // rcx
  int v43; // r10d
  int v44; // r8d
  unsigned int SlabAllocatorTypeByProtection; // eax
  int v46; // eax
  __int64 v47; // rax
  _QWORD *v48; // r15
  _QWORD *v49; // rdx
  signed __int32 v50; // ecx
  __int64 v51; // rdx
  int v52; // r9d
  __int64 Page; // rax
  __int64 v54; // r8
  _QWORD *v55; // r13
  __int64 v56; // r12
  char v57; // cl
  ULONG_PTR v58; // rax
  ULONG_PTR v59; // r14
  __int64 v60; // r9
  __int64 v61; // r15
  ULONG_PTR v62; // r13
  unsigned __int8 CurrentIrql; // r12
  struct _KPRCB *CurrentPrcb; // r14
  _DWORD *v65; // rcx
  int v66; // eax
  _DWORD *v67; // rcx
  int v68; // eax
  int i; // ecx
  struct _KPRCB *v70; // rcx
  int v71; // eax
  unsigned __int8 v72; // al
  struct _KPRCB *v73; // r10
  int v74; // eax
  bool v75; // zf
  ULONG_PTR v76; // r12
  __int64 v77; // rbx
  unsigned int PagingFileOffset; // eax
  __int64 v79; // r15
  int IsPteInStore; // r14d
  __int64 v81; // rbx
  bool v82; // cc
  __int64 v83; // r13
  __int64 *v84; // rdx
  __int64 v85; // rax
  int v86; // eax
  int v87; // eax
  __int64 v88; // rax
  __int64 v89; // rdx
  struct _SLIST_ENTRY *v90; // rcx
  struct _SLIST_ENTRY *v91; // rax
  PSLIST_ENTRY *v92; // rdx
  struct _SLIST_ENTRY *v93; // r14
  __int64 v95; // [rsp+30h] [rbp-D0h]
  int v96; // [rsp+38h] [rbp-C8h]
  unsigned int v97; // [rsp+3Ch] [rbp-C4h]
  __int64 v98; // [rsp+40h] [rbp-C0h]
  struct _SLIST_ENTRY *v99; // [rsp+48h] [rbp-B8h]
  __int64 v100; // [rsp+50h] [rbp-B0h]
  int v101; // [rsp+58h] [rbp-A8h]
  unsigned int v102; // [rsp+5Ch] [rbp-A4h]
  int v103; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v104; // [rsp+68h] [rbp-98h] BYREF
  _QWORD *v105; // [rsp+70h] [rbp-90h]
  int v106; // [rsp+78h] [rbp-88h]
  int v107; // [rsp+7Ch] [rbp-84h]
  int v108; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v109; // [rsp+84h] [rbp-7Ch]
  int IoPriorityThread; // [rsp+88h] [rbp-78h]
  ULONG_PTR v111; // [rsp+90h] [rbp-70h]
  unsigned __int64 v112; // [rsp+98h] [rbp-68h]
  unsigned __int64 v113; // [rsp+A0h] [rbp-60h]
  ULONG_PTR v114; // [rsp+A8h] [rbp-58h]
  _SLIST_ENTRY *v115; // [rsp+B0h] [rbp-50h]
  void *Src; // [rsp+B8h] [rbp-48h]
  int v117; // [rsp+C0h] [rbp-40h] BYREF
  int v118; // [rsp+C4h] [rbp-3Ch]
  int v119; // [rsp+C8h] [rbp-38h] BYREF
  ULONG_PTR v120; // [rsp+D0h] [rbp-30h]
  __int64 v121; // [rsp+D8h] [rbp-28h]
  unsigned __int64 v122; // [rsp+E0h] [rbp-20h]
  __int128 v123; // [rsp+E8h] [rbp-18h] BYREF
  unsigned __int64 v124; // [rsp+F8h] [rbp-8h] BYREF
  __int64 *v125; // [rsp+100h] [rbp+0h]
  PSLIST_ENTRY ListEntry; // [rsp+108h] [rbp+8h]
  void *retaddr; // [rsp+158h] [rbp+58h]

  v2 = a1;
  v3 = *(_DWORD *)(a1 + 80);
  v109 = *(_DWORD *)(a1 + 84);
  v4 = 0LL;
  v5 = *(_QWORD *)(a1 + 8);
  v113 = 0LL;
  v123 = 0LL;
  v6 = *(_DWORD *)(v5 + 56);
  v7 = *(_WORD *)(v5 + 60) & 0x3FF;
  v102 = v3;
  v95 = 0LL;
  v121 = 0LL;
  v98 = *(_QWORD *)(qword_140C51F48 + 8 * v7);
  v118 = v6 & 8;
  v97 = 0;
  v106 = *(_DWORD *)(v2 + 88) + 1;
  IoPriorityThread = PsGetIoPriorityThread(KeGetCurrentThread());
  v100 = 0LL;
  v101 = v8 & 7 | 0x18;
  v10 = (v6 >> 20) & 0x7F;
  v11 = 0LL;
  MiInitializePageColorBase(v9 + 1664, v10, &v123);
  v13 = *(struct _SLIST_ENTRY **)(v2 + 120);
  v125 = (__int64 *)(v2 + 120);
  v99 = v13;
  if ( v13 != (struct _SLIST_ENTRY *)(v2 + 120) )
  {
    v14 = v101;
    while ( 1 )
    {
      SchedulerAssist = (_DWORD *)0xFFFFF68000000000LL;
      ListEntry = v13;
      if ( v12 >= 2 )
      {
        if ( (*(_DWORD *)(v2 + 104) & 1) != 0 )
          LODWORD(v13[12].Next) |= 0x20u;
      }
      else
      {
        LODWORD(v13[12].Next) |= 0x80u;
      }
      Next = v13[15].Next;
      v17 = 0LL;
      v115 = Next;
      v13[15].Next = (_SLIST_ENTRY *)((unsigned __int64)Next->Next & 0xFFFFFFFFFFFFFFFCuLL);
      v112 = (unsigned __int64)Next->Next & 0xFFFFFFFFFFFFFFFCuLL;
      v122 = *((_QWORD *)&v13[12].Next + 1) + 8LL;
      Src = v13[16].Next;
      Flink = (__int64)Src + 48;
      v19 = 0;
      v20 = (((*((_DWORD *)Src + 8) + *((_DWORD *)Src + 11)) & 0xFFF)
           + (unsigned __int64)*((unsigned int *)Src + 10)
           + 4095) >> 12;
      if ( v20 )
      {
        do
        {
          ++v19;
          *(_QWORD *)Flink = qword_140C53288;
          Flink += 8LL;
        }
        while ( v19 < v20 );
      }
      v96 = 0;
      v21 = 0;
      v111 = 0LL;
      if ( !v11 )
      {
        v22 = MiGetInPageSupportBlock(0LL);
        v17 = 0LL;
        v100 = v22;
        if ( v22 )
        {
          v23 = v109;
          *(_QWORD *)(v22 + 248) = 0LL;
          MiSetInPagePriority(v22, v23, v102);
        }
        SchedulerAssist = (_DWORD *)0xFFFFF68000000000LL;
      }
      v24 = v95;
      if ( (unsigned __int64)Next >= v122 )
        goto LABEL_190;
      while ( 2 )
      {
        v25 = (unsigned __int64)Next->Next & 0xFFFFFFFFFFFFFFFCuLL;
        v120 = v17;
        v114 = v25;
        if ( v24 )
        {
          Flink = ((v25 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          if ( v4 == Flink )
            goto LABEL_18;
          MiUnlockProtoPoolPage(v24, 17LL);
        }
        v121 = ((v25 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v95 = MiLockProtoPoolPageForce(v25);
        v17 = 0LL;
        while ( 1 )
        {
          while ( 1 )
          {
LABEL_18:
            v26 = *(_QWORD *)v25;
            if ( (*(_QWORD *)v25 & 1) != 0 )
            {
              v27 = *(_QWORD *)v25;
              goto LABEL_26;
            }
            if ( (v26 & 0x400) != 0 || (v26 & 0x800) == 0 )
            {
              v29 = v17;
              goto LABEL_38;
            }
            if ( (unsigned int)MiInvalidPteConforms(*(_QWORD *)v25, Flink, v20, SchedulerAssist) )
            {
              v27 = v26;
              if ( qword_140C50780 && (v26 & 0x10) == 0 )
                v27 = v26 & ~qword_140C50780;
LABEL_26:
              v28 = (v27 >> 12) & 0xFFFFFFFFFFLL;
              if ( v28 <= qword_140C50840 )
              {
                Flink = 6 * v28;
                if ( _bittest64((const signed __int64 *)(48 * v28 - 0x21FFFFFFFFD8LL), 0x36u) )
                  break;
              }
            }
          }
          v29 = 48 * v28 - 0x220000000000LL;
          v117 = v17;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v29 + 24), 0x3FuLL) )
          {
            do
            {
              do
                KeYieldProcessorEx(&v117);
              while ( *(__int64 *)(v29 + 24) < 0 );
            }
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v29 + 24), 0x3FuLL) );
            v17 = 0LL;
          }
          if ( *(_QWORD *)v25 == v26 )
            break;
          _InterlockedAnd64((volatile signed __int64 *)(v29 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
        if ( (*(_DWORD *)(*(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(v29 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x100) != 0 )
          v29 = MiLockSpecialPurposeMemoryCachedPage(v29, 2LL);
        v17 = 0LL;
LABEL_38:
        v30 = *(_QWORD *)v25;
        if ( v25 >= 0xFFFFF6FB7DBED000uLL
          && v25 <= 0xFFFFF6FB7DBED7F8uLL
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v30 & 1) != 0
          && ((v30 & 0x20) == 0 || (v30 & 0x42) == 0) )
        {
          Flink = (__int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( Flink )
          {
            v31 = *(_QWORD *)(Flink + 8 * ((v25 >> 3) & 0x1FF));
            if ( (v31 & 0x20) != 0 )
              v30 |= 0x20uLL;
            if ( (v31 & 0x42) != 0 )
              v30 |= 0x42uLL;
          }
        }
        v124 = v30;
        if ( v29 )
        {
          MiUpdatePfnPriority(v29, v102, 0LL);
          _InterlockedAnd64((volatile signed __int64 *)(v29 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          goto LABEL_52;
        }
        if ( (v30 & 0x400) == 0 )
        {
          v33 = 2;
          v107 = 2;
          if ( (unsigned int)IS_PTE_NOT_DEMAND_ZERO(v30) && v100 )
          {
LABEL_66:
            v35 = v17;
            if ( v111 )
            {
              if ( !v118 )
                goto LABEL_78;
              v38 = ((__int64)(v25 - v111) >> 3) - 1;
              if ( !v38 )
                goto LABEL_78;
              if ( (unsigned int)MiPrefetchPagesViable(v98, a2, v106, v38, v17) )
              {
                v39 = 0LL;
                while ( 1 )
                {
                  PageForHeader = MiGetPageForHeader(v98, v10);
                  v104 = PageForHeader;
                  if ( PageForHeader == -1 )
                    break;
                  ++v39;
                  *(_QWORD *)(48 * PageForHeader - 0x220000000000LL) = v35;
                  v35 = 48 * PageForHeader - 0x220000000000LL;
                  if ( v39 == v38 )
                    goto LABEL_77;
                }
                if ( v39 == v38 )
                {
LABEL_77:
                  v17 = 0LL;
                  goto LABEL_78;
                }
                goto LABEL_187;
              }
            }
            else
            {
              v36 = (__int64)(v25 - v112) >> 3;
              if ( v36 )
              {
                v37 = Src;
                v112 = v25;
                *((_WORD *)Src + 4) += -8 * v36;
                v37[10] += -4096 * v36;
                v13[6].Next += 256 * v36;
                v13[15].Next = (_SLIST_ENTRY *)(v25 & 0xFFFFFFFFFFFFFFFCuLL);
              }
LABEL_78:
              v103 = v17;
              v41 = v17;
              if ( v33 != 1
                || (v42 = *(_QWORD *)v120, (*(_DWORD *)(*(_QWORD *)v120 + 56LL) & 0x20) == 0)
                || (*(_BYTE *)(v42 + 62) & 0xC) == 4 )
              {
                v43 = v98;
                goto LABEL_97;
              }
              v43 = v98;
              if ( (v30 & 0x400) == 0 )
                goto LABEL_97;
              v44 = *(_DWORD *)(v98 + 4);
              if ( (*(_DWORD *)(v42 + 92) & 0xC0000) != 0 )
              {
                if ( (v44 & 8) != 0
                  && ((*(_BYTE *)(v120 + 34) & 2) == 0 || ((*(unsigned __int16 *)(v120 + 32) >> 1) & 5) != 4) )
                {
                  SlabAllocatorTypeByProtection = MiGetSlabAllocatorTypeByProtection(
                                                    v42,
                                                    (*(unsigned __int16 *)(v120 + 32) >> 1) & 0x1F,
                                                    1LL);
                  goto LABEL_94;
                }
                goto LABEL_97;
              }
              if ( (v44 & 0x10) == 0 )
                goto LABEL_97;
              v46 = (*(unsigned __int16 *)(v120 + 32) >> 1) & 5;
              if ( v46 == 4 )
              {
                SlabAllocatorTypeByProtection = 6;
              }
              else if ( v46 == 5 )
              {
                SlabAllocatorTypeByProtection = 6;
              }
              else
              {
                SlabAllocatorTypeByProtection = 5;
                if ( ((*(unsigned __int16 *)(v120 + 32) >> 1) & 2) != 0 )
                  SlabAllocatorTypeByProtection = 4;
              }
LABEL_94:
              v97 = SlabAllocatorTypeByProtection;
              if ( SlabAllocatorTypeByProtection <= 3 )
                v47 = 8LL * SlabAllocatorTypeByProtection + 48;
              else
LABEL_97:
                v47 = 40LL;
              v48 = (_QWORD *)(v47 + a1);
              v49 = *(_QWORD **)(v47 + a1);
              v105 = v49;
              if ( v49 )
              {
                *v48 = *v49;
                v104 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v49 + 0x44000000000LL) >> 4);
                goto LABEL_110;
              }
              if ( (unsigned int)MiPrefetchPagesViable(v43, a2, v106, 1, 1) )
              {
                v50 = _InterlockedExchangeAdd((volatile signed __int32 *)v123, 1u);
                v51 = DWORD2(v123) & (unsigned int)v50 | HIDWORD(v123);
                if ( v48 == (_QWORD *)(a1 + 40) )
                {
                  v54 = 770LL;
                  if ( ((__int64)v115->Next & 1) == 0 )
                    v54 = 512LL;
                  Page = MiGetPage(v98, v51, v54);
                }
                else
                {
                  v52 = 2;
                  if ( v10 )
                    v52 = 0;
                  Page = MiGetSlabPage(v98, v97, v51, v52, 0LL, 0);
                }
                v104 = Page;
                if ( Page != -1 )
                {
                  v105 = (_QWORD *)(48 * Page - 0x220000000000LL);
                  v17 = 0LL;
LABEL_110:
                  if ( v35 )
                  {
                    v55 = (char *)Src + 8 * ((__int64)(v111 - v112) >> 3) + 56;
                    do
                    {
                      v56 = *(_QWORD *)v35;
                      v119 = v17;
                      if ( _interlockedbittestandset64((volatile signed __int32 *)(v35 + 24), 0x3FuLL) )
                      {
                        do
                        {
                          do
                            KeYieldProcessorEx(&v119);
                          while ( *(__int64 *)(v35 + 24) < 0 );
                        }
                        while ( _interlockedbittestandset64((volatile signed __int32 *)(v35 + 24), 0x3FuLL) );
                        v17 = 0LL;
                      }
                      v57 = *(_BYTE *)(v35 + 34);
                      *(_QWORD *)(v35 + 8) = -3LL;
                      *(_QWORD *)v35 = v17;
                      *(_BYTE *)(v35 + 34) = v57 | 7;
                      *(_BYTE *)(v35 + 34) = v57 | 0x27;
                      _InterlockedAnd64((volatile signed __int64 *)(v35 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                      *v55 = 0xAAAAAAAAAAAAAAABuLL * ((v35 + 0x220000000000LL) >> 4);
                      v35 = v56;
                      ++v55;
                    }
                    while ( v56 );
                    v14 = v101;
                    v33 = v107;
                    v41 = v103;
                  }
                  v58 = v111;
                  v59 = v114;
                  v60 = (__int64)v105;
                  if ( v33 == 1 )
                    v58 = v114;
                  v111 = v58;
                  if ( ((__int64)v115->Next & 1) != 0 )
                  {
                    if ( MiPfnZeroingNeeded((__int64)v105, 1) )
                      v41 = 1;
                    v103 = v41;
                  }
                  if ( v33 == 1 )
                  {
                    if ( !*((_QWORD *)&v99[15].Next + 1) )
                      *((_QWORD *)&v99[15].Next + 1) = v60;
                    ++v96;
                    MiInitializeReadInProgressPfn(-1, (unsigned int)&v104, 1, v59, (__int64)v99, v14);
                    v61 = *(_QWORD *)(a1 + 8);
                    if ( (*(_DWORD *)(v61 + 56) & 0x20) != 0 || !*(_QWORD *)(v61 + 64) )
                      v62 = 0LL;
                    else
                      v62 = v120;
                    CurrentIrql = KeGetCurrentIrql();
                    __writecr8(2uLL);
                    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
                    {
                      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
                      v20 = (-1 << (CurrentIrql + 1)) & 4u | SchedulerAssist[5];
                      SchedulerAssist[5] = v20;
                    }
                    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
                    {
                      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v61 + 72, CurrentIrql);
                    }
                    else
                    {
                      CurrentPrcb = KeGetCurrentPrcb();
                      v108 = 0;
                      v65 = CurrentPrcb->SchedulerAssist;
                      if ( v65 )
                      {
                        if ( CurrentPrcb->NestingLevel <= 1u )
                        {
                          v66 = v65[6];
                          v65[6] = v66 + 1;
                          if ( v66 == -1 )
                            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
                        }
                      }
                      if ( _interlockedbittestandset((volatile signed __int32 *)(v61 + 72), 0x1Fu) )
                      {
                        v67 = CurrentPrcb->SchedulerAssist;
                        if ( v67 )
                        {
                          if ( CurrentPrcb->NestingLevel <= 1u )
                          {
                            v68 = v67[6] - 1;
                            v67[6] = v68;
                            if ( !v68 )
                              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
                          }
                        }
                        v108 = ExpWaitForSpinLockExclusiveAndAcquire((int *)(v61 + 72), CurrentIrql);
                      }
                      for ( i = *(_DWORD *)(v61 + 72); (i & 0xBFFFFFFF) != 0x80000000; i = *(_DWORD *)(v61 + 72) )
                      {
                        if ( (i & 0x40000000) == 0 )
                          _InterlockedOr((volatile signed __int32 *)(v61 + 72), 0x40000000u);
                        KeYieldProcessorEx(&v108);
                      }
                      v59 = v114;
                    }
                    ++*(_QWORD *)(v61 + 32);
                    if ( v62 )
                      ++*(_DWORD *)(v62 + 104);
                    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
                      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v61 + 72, retaddr);
                    else
                      *(_DWORD *)(v61 + 72) = 0;
                    v70 = KeGetCurrentPrcb();
                    Flink = (__int64)v70->SchedulerAssist;
                    if ( Flink )
                    {
                      if ( v70->NestingLevel <= 1u )
                      {
                        v71 = *(_DWORD *)(Flink + 24) - 1;
                        *(_DWORD *)(Flink + 24) = v71;
                        if ( !v71 )
                          KiRemoveSystemWorkPriorityKick(v70);
                      }
                    }
                    if ( KiIrqlFlags )
                    {
                      if ( (KiIrqlFlags & 1) != 0 )
                      {
                        v72 = KeGetCurrentIrql();
                        if ( v72 <= 0xFu && CurrentIrql <= 0xFu && v72 >= 2u )
                        {
                          v73 = KeGetCurrentPrcb();
                          Flink = -1LL << (CurrentIrql + 1);
                          SchedulerAssist = v73->SchedulerAssist;
                          v74 = ~(unsigned __int16)Flink;
                          v75 = (v74 & SchedulerAssist[5]) == 0;
                          v20 = (unsigned int)v74 & SchedulerAssist[5];
                          SchedulerAssist[5] = v20;
                          if ( v75 )
                            KiRemoveSystemWorkPriorityKick(v73);
                        }
                      }
                    }
                    __writecr8(CurrentIrql);
                    v76 = v104;
                    *((_QWORD *)Src + ((__int64)(v59 - v112) >> 3) + 6) = v104;
                    v24 = v95;
                    if ( !v99[10].Next )
                    {
                      MiObtainProtoReference(v95, 0LL);
                      v99[10].Next = (_SLIST_ENTRY *)v95;
                    }
                    v77 = (__int64)v105;
                  }
                  else
                  {
                    MiReturnCommit(v98, 1LL);
                    MiInitializeReadInProgressPfn(-1, (unsigned int)&v104, 1, v59, v100, v14);
                    PagingFileOffset = MiGetPagingFileOffset(&v124);
                    v79 = PagingFileOffset;
                    LODWORD(v113) = PagingFileOffset;
                    IsPteInStore = MiIsPteInStore(v98, v30);
                    v81 = (unsigned __int16)v30 >> 12;
                    v82 = IoPriorityThread < 2;
                    v83 = *(_QWORD *)(v98 + 8 * v81 + 16736);
                    *(_QWORD *)(v100 + 256) = v100 + 272;
                    if ( v82 )
                      *(_DWORD *)(v100 + 192) |= 0x80u;
                    v76 = v104;
                    *(_DWORD *)(v100 + 280) = 56;
                    *(_QWORD *)(v100 + 272) = 0LL;
                    *(_QWORD *)(v100 + 304) = 0LL;
                    *(_QWORD *)(v100 + 312) = 4096LL;
                    *(_WORD *)(v100 + 282) |= 0x4042u;
                    *(_QWORD *)(v100 + 320) = v76;
                    MiObtainProtoReference(v95, 0LL);
                    v84 = v125;
                    *(_QWORD *)(v100 + 160) = v95;
                    v85 = *v84;
                    if ( *(__int64 **)(*v84 + 8) != v84 )
                      goto LABEL_203;
                    *(_QWORD *)v100 = v85;
                    *(_QWORD *)(v100 + 8) = v84;
                    *(_QWORD *)(v85 + 8) = v100;
                    *v84 = v100;
                    ++*(_DWORD *)(a1 + 108);
                    MiUnlockProtoPoolPage(v95, 17LL);
                    v95 = 0LL;
                    *(_QWORD *)(v100 + 224) = 0LL;
                    if ( IsPteInStore )
                    {
                      v87 = *(_DWORD *)(v100 + 192);
                      *(_QWORD *)(v100 + 96) = v79 | (v81 << 60);
                      v86 = v87 | 0x100;
                    }
                    else
                    {
                      v113 = (unsigned __int64)(unsigned int)v113 << 12;
                      *(_QWORD *)(v100 + 96) = v113;
                      v86 = *(_DWORD *)(v100 + 192);
                    }
                    v77 = (__int64)v105;
                    *(_DWORD *)(v100 + 192) = v86 | 0x200000;
                    *(_QWORD *)(v100 + 240) = v114;
                    *(_QWORD *)(v100 + 200) = v83;
                    *(_QWORD *)(v100 + 248) = v77;
                    v88 = MiGetInPageSupportBlock(0LL);
                    v100 = v88;
                    if ( v88 )
                    {
                      v89 = v109;
                      *(_QWORD *)(v88 + 248) = 0LL;
                      MiSetInPagePriority(v88, v89, v102);
                    }
                    v24 = 0LL;
                  }
                  if ( v103 )
                  {
                    if ( v24 )
                    {
                      MiUnlockProtoPoolPage(v24, 17LL);
                      v24 = 0LL;
                      v95 = 0LL;
                    }
                    MiZeroPhysicalPage(v76, 1, *(unsigned __int8 *)(v77 + 34) >> 6);
                    v13 = v99;
                  }
                  else
                  {
LABEL_61:
                    v13 = v99;
                  }
LABEL_53:
                  Next = (_SLIST_ENTRY *)(&v115->Next + 1);
                  v115 = Next;
                  if ( (unsigned __int64)Next < v122 )
                  {
                    v4 = v121;
                    v17 = 0LL;
                    SchedulerAssist = (_DWORD *)0xFFFFF68000000000LL;
                    continue;
                  }
LABEL_189:
                  v21 = v96;
LABEL_190:
                  if ( v24 )
                  {
                    MiUnlockProtoPoolPage(v24, 17LL);
                    v95 = 0LL;
                  }
                  goto LABEL_193;
                }
                MiReturnFaultCharges(v98, 1uLL, 1);
              }
              if ( v35 )
LABEL_187:
                MiReleasePrefetchGapPages(v35);
            }
            v24 = v95;
            goto LABEL_189;
          }
LABEL_52:
          v24 = v95;
          goto LABEL_53;
        }
        break;
      }
      v32 = v30;
      if ( qword_140C50780 && (v30 & 0x10) == 0 )
        v32 = v30 & ~qword_140C50780;
      v33 = 1;
      v34 = v32 >> 16;
      v120 = v34;
      v107 = 1;
      v20 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 8) + 62LL);
      if ( (v20 & 0xC) != 4 )
      {
        v13 = v99;
        LOBYTE(v20) = v20 & 0xC;
        if ( (_BYTE)v20 != 8 )
          goto LABEL_66;
        goto LABEL_52;
      }
      MiUnlockProtoPoolPage(v95, 17LL);
      v95 = 0LL;
      v24 = 0LL;
      if ( (int)MiRefillPurgedExtents(v34) >= 0 )
        goto LABEL_61;
      v21 = v96;
LABEL_193:
      if ( !v21 )
      {
        v90 = ListEntry;
        v91 = v99->Next;
        v92 = (PSLIST_ENTRY *)*((_QWORD *)&ListEntry->Next + 1);
        v13 = v91;
        v99 = v99->Next;
        if ( *(&v91->Next + 1) == ListEntry && *v92 == ListEntry )
        {
          v2 = a1;
          *v92 = v91;
          *((_QWORD *)&v91->Next + 1) = v92;
          --*(_DWORD *)(a1 + 108);
          MiFreeInPageSupportBlock(v90);
          goto LABEL_201;
        }
LABEL_203:
        __fastfail(3u);
      }
      v93 = (struct _SLIST_ENTRY *)Src;
      MiReduceMdl(Src, Flink, v20, SchedulerAssist);
      if ( v93 != &v99[17] && *((_DWORD *)&v93[2].Next + 2) <= 0x10000u )
      {
        memmove(&v99[17], v93, *((__int16 *)&v93->Next + 4));
        ExFreePoolWithTag(v93, 0);
        v99[16].Next = v99 + 17;
      }
      v13 = v99->Next;
      v2 = a1;
      v99 = v99->Next;
LABEL_201:
      v11 = (struct _SLIST_ENTRY *)v100;
      if ( v13 == (struct _SLIST_ENTRY *)(v2 + 120) )
        break;
      v4 = v121;
      v12 = IoPriorityThread;
    }
  }
  MiFreeReadListPages(v2);
  if ( v11 )
    MiFreeInPageSupportBlock(v11);
  return 0LL;
}
