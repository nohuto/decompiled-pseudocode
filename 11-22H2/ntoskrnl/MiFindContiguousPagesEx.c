/*
 * XREFs of MiFindContiguousPagesEx @ 0x1403BA9B8
 * Callers:
 *     MiWaitForInPageComplete @ 0x1402A1680 (MiWaitForInPageComplete.c)
 *     MiAllocateSkipPagesForMdl @ 0x1403AC640 (MiAllocateSkipPagesForMdl.c)
 *     MiAllocateMostlyContiguousPagesForMdl @ 0x1403ACF4C (MiAllocateMostlyContiguousPagesForMdl.c)
 *     MiAllocateContiguousMemory @ 0x1403B9674 (MiAllocateContiguousMemory.c)
 *     MiRebuildLargePage @ 0x14046E188 (MiRebuildLargePage.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x14062B620 (MmMarkPhysicalMemoryAsBad.c)
 *     MiIdealClusterPage @ 0x14066A500 (MiIdealClusterPage.c)
 *     MiAllocateDriverPage @ 0x1407063D4 (MiAllocateDriverPage.c)
 *     MmRemovePhysicalMemory @ 0x140A2D280 (MmRemovePhysicalMemory.c)
 *     MiCreatePagefileMemoryExtents @ 0x140A46F68 (MiCreatePagefileMemoryExtents.c)
 *     MiFindLargePageMemory @ 0x140A497D8 (MiFindLargePageMemory.c)
 *     MiMapSystemImageWithLargePage @ 0x140A49BD4 (MiMapSystemImageWithLargePage.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140211EFC (EtwTraceKernelEvent.c)
 *     MiIsPageOnBadList @ 0x1402186E0 (MiIsPageOnBadList.c)
 *     MiSearchNumaNodeTable @ 0x14026E9B0 (MiSearchNumaNodeTable.c)
 *     MiReturnCommit @ 0x1402DC250 (MiReturnCommit.c)
 *     MiInitializePageColorBase @ 0x1402E1690 (MiInitializePageColorBase.c)
 *     MiSetPfnOwnedAndActive @ 0x1402E2D3C (MiSetPfnOwnedAndActive.c)
 *     MiSufficientAvailablePages @ 0x1402E35AC (MiSufficientAvailablePages.c)
 *     MiAcquireNonPagedResources @ 0x1402E4314 (MiAcquireNonPagedResources.c)
 *     MiUpdateLargePageBitMap @ 0x1402E890C (MiUpdateLargePageBitMap.c)
 *     MiDeleteUltraThreadContext @ 0x1402E92A4 (MiDeleteUltraThreadContext.c)
 *     MiCreateUltraThreadContext @ 0x1402EC3F0 (MiCreateUltraThreadContext.c)
 *     MiLockPageInline @ 0x1402EF680 (MiLockPageInline.c)
 *     MiReferencePageRuns @ 0x1403570E0 (MiReferencePageRuns.c)
 *     MiDereferencePageRunsEx @ 0x1403575E4 (MiDereferencePageRunsEx.c)
 *     MiClaimPhysicalRun @ 0x1403BA11C (MiClaimPhysicalRun.c)
 *     MiCollapseRunTopDown @ 0x1403BAF70 (MiCollapseRunTopDown.c)
 *     MiPfnsWorthTrying @ 0x1403BB034 (MiPfnsWorthTrying.c)
 *     MiConvertContiguousPages @ 0x1403BD470 (MiConvertContiguousPages.c)
 *     MiFreeContiguousPages @ 0x1403C337C (MiFreeContiguousPages.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     memset @ 0x140435400 (memset.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     MiFindLargeNodePage @ 0x14061D6D8 (MiFindLargeNodePage.c)
 *     MiTrimNoStealPagesFromWorkingSets @ 0x1406354D0 (MiTrimNoStealPagesFromWorkingSets.c)
 *     MiEmptyKernelStackCache @ 0x140644800 (MiEmptyKernelStackCache.c)
 */

__int64 __fastcall MiFindContiguousPagesEx(
        __int64 a1,
        __int64 a2,
        ULONG_PTR a3,
        __int64 a4,
        int a5,
        unsigned __int64 a6,
        unsigned int a7,
        unsigned int a8,
        int a9,
        int a10,
        int a11,
        __int64 a12,
        _QWORD *a13)
{
  __int64 v14; // r15
  unsigned __int64 v15; // r14
  int v16; // r12d
  unsigned __int64 v18; // rsi
  unsigned __int8 CurrentIrql; // dl
  unsigned int v20; // r10d
  unsigned int v21; // edi
  _DWORD *v22; // r9
  __int64 v23; // rdx
  unsigned int *v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r13
  unsigned int v27; // ebx
  unsigned __int8 *v28; // r8
  unsigned __int8 *v29; // rcx
  __int64 v30; // r13
  __int64 v31; // rbx
  unsigned __int64 v32; // rdx
  unsigned __int64 v33; // r9
  __int64 v34; // r13
  __int64 v35; // r15
  char v36; // al
  int v37; // ecx
  unsigned __int64 v38; // rdx
  unsigned __int64 v39; // r8
  unsigned int v40; // esi
  char v41; // r13
  int v42; // r12d
  unsigned __int64 v43; // rdi
  BOOL v45; // r9d
  unsigned int v46; // ecx
  __int64 v47; // rax
  __int64 LargeNodePage; // rax
  unsigned __int64 v49; // rcx
  unsigned int v50; // ebx
  unsigned __int64 *v51; // rdx
  unsigned __int64 v52; // rax
  __int64 v53; // rax
  ULONG_PTR v54; // rcx
  _QWORD *v55; // rax
  __int64 v56; // rcx
  unsigned int v57; // ecx
  unsigned __int8 v58; // al
  __int64 v59; // rcx
  unsigned __int64 v60; // r13
  unsigned __int8 v61; // al
  struct _KPRCB *v62; // r10
  _DWORD *v63; // r9
  int v64; // eax
  bool v65; // zf
  unsigned __int8 v66; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v69; // eax
  BOOL v70; // eax
  unsigned int *v71; // r10
  __int64 v72; // rcx
  unsigned int v73; // eax
  struct _KPRCB *v74; // r8
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v76; // eax
  signed int v77; // [rsp+60h] [rbp-A0h]
  BOOL v78; // [rsp+64h] [rbp-9Ch]
  int v79; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v80; // [rsp+6Ch] [rbp-94h]
  int v81; // [rsp+70h] [rbp-90h]
  unsigned int v82; // [rsp+74h] [rbp-8Ch]
  __int64 v83; // [rsp+78h] [rbp-88h]
  unsigned int *v84; // [rsp+80h] [rbp-80h]
  unsigned __int8 *v85; // [rsp+88h] [rbp-78h]
  unsigned int v86; // [rsp+90h] [rbp-70h] BYREF
  int v87; // [rsp+94h] [rbp-6Ch]
  int v88; // [rsp+98h] [rbp-68h]
  int v89; // [rsp+9Ch] [rbp-64h]
  int v90; // [rsp+A0h] [rbp-60h]
  unsigned int *v91; // [rsp+A8h] [rbp-58h]
  ULONG_PTR BugCheckParameter2; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v93; // [rsp+B8h] [rbp-48h]
  unsigned __int8 *v94; // [rsp+C0h] [rbp-40h]
  __int64 v95; // [rsp+C8h] [rbp-38h]
  __int64 v96; // [rsp+D0h] [rbp-30h]
  unsigned int *v97; // [rsp+D8h] [rbp-28h]
  __int64 i; // [rsp+E0h] [rbp-20h]
  _QWORD *v99; // [rsp+E8h] [rbp-18h]
  _QWORD v100[8]; // [rsp+F0h] [rbp-10h] BYREF
  unsigned __int64 v101; // [rsp+130h] [rbp+30h]
  __int64 v102; // [rsp+138h] [rbp+38h]
  __int128 v103; // [rsp+140h] [rbp+40h] BYREF
  _QWORD v104[2]; // [rsp+150h] [rbp+50h] BYREF
  _QWORD v105[2]; // [rsp+160h] [rbp+60h] BYREF
  _BYTE v106[128]; // [rsp+170h] [rbp+70h] BYREF

  v14 = a1;
  v15 = a6;
  v16 = a10;
  v82 = a7;
  v77 = a8;
  v89 = a11;
  BugCheckParameter2 = a3;
  v83 = a1;
  v99 = a13;
  v96 = a12;
  v103 = 0LL;
  memset(v106, 0, sizeof(v106));
  v18 = 0LL;
  v79 = 0;
  memset(v100, 0, sizeof(v100));
  if ( (MiZeroCont & 1) != 0 )
    memset(&MiCont, 0, 0x2E0uLL);
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > 2u )
    return 3221225659LL;
  v20 = a8;
  if ( a8 < (unsigned __int16)KeNumberNodes
    && !*(_QWORD *)(25408LL * a8 + *(_QWORD *)(v14 + 16) + 22832)
    && (_DWORD)InitializationPhase )
  {
    return 3221225495LL;
  }
  if ( CurrentIrql == 2 || (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
    v16 = a10 | 8;
  if ( (v16 & 0x20000000) == 0 )
  {
    if ( (int)MiAcquireNonPagedResources(v14, a6, 0LL, 2u) < 0 )
      return 3221225626LL;
    v20 = a8;
  }
  if ( a12 )
    v87 = a6 + (*(_DWORD *)(a12 + 40) >> 12);
  else
    v87 = 0;
  if ( (v16 & 0x40) != 0 )
  {
    if ( a2 == 0x100000 )
      v16 |= 0x8000u;
    v45 = !_bittest64(&KeFeatureBits, 0x25u);
    v86 = v45;
    v46 = v45;
    v47 = v45;
    do
    {
      if ( a6 == MiLargePageSizes[v47] )
        break;
      v47 = ++v46;
      v45 = v46;
      v86 = v46;
    }
    while ( v46 < 3 );
    LargeNodePage = MiFindLargeNodePage(v14, v20, (unsigned int)&v86, v45, v16, v89, v82);
    if ( LargeNodePage )
    {
      v49 = 0xAAAAAAAAAAAAAAABuLL * ((LargeNodePage + 0x220000000000LL) >> 4);
      if ( v49 + a6 - 1 <= BugCheckParameter2 )
      {
        *v99 = v49;
        if ( a12 )
        {
          v51 = (unsigned __int64 *)(a12 + 8 * (((unsigned __int64)*(unsigned int *)(a12 + 40) >> 12) + 6));
          if ( a6 )
          {
            do
            {
              v52 = v49 + v18++;
              *v51++ = v52;
            }
            while ( v18 < a6 );
          }
          *(_DWORD *)(a12 + 40) += (_DWORD)a6 << 12;
        }
        return 0LL;
      }
      MiFreeContiguousPages(v49, a6);
    }
    v50 = -1073741801;
    goto LABEL_147;
  }
  if ( (*(_DWORD *)(v14 + 4) & 0x10) == 0 && !(unsigned int)MiSufficientAvailablePages(v14, a6 + 160)
    || (MiInitializePageColorBase(
          (__int64)&KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[26],
          0,
          (__int64)&v103),
        !(unsigned int)MiCreateUltraThreadContext((__int64)v106, (__int64)&v103, 8, 0)) )
  {
    v50 = -1073741670;
    goto LABEL_147;
  }
  v78 = 0;
  if ( (v16 & 0xB800008) == 0x8000000 )
    v78 = InitializationPhase != 0;
  if ( a8 >= (unsigned __int16)KeNumberNodes )
    v77 = a8 | 0x80000000;
  v84 = (unsigned int *)MiReferencePageRuns(v14, 1u);
  v21 = -1;
  v97 = 0LL;
  v22 = v84;
  v95 = 0LL;
  v23 = *v84 + 1LL;
  v100[2] = a2;
  v24 = &v84[4 * v23];
  v100[6] = 0LL;
  v91 = v24;
  v25 = 0LL;
  v100[5] = a6;
  if ( ((a4 - 1) & a4) == 0 )
    v25 = a4;
  v81 = 0;
  v26 = *(_QWORD *)(v14 + 16);
  v100[4] = v25;
  v90 = v16 & 0x2000;
  LOBYTE(v100[7]) = v90 != 0;
  v80 = 0;
  for ( i = v26; ; v26 = i )
  {
    v27 = MmNumberOfChannels;
    v28 = 0LL;
    v85 = 0LL;
    if ( (unsigned int)MmNumberOfChannels > 1 )
    {
      v53 = (unsigned int)v77;
      if ( v77 < 0 )
      {
        if ( v21 == -1 )
        {
          v54 = *(_QWORD *)(v14 + 17032);
          if ( BugCheckParameter2 <= v54 )
            v54 = BugCheckParameter2;
          v55 = MiSearchNumaNodeTable(v54);
          v28 = 0LL;
          v22 = v84;
          v21 = *((_DWORD *)v55 + 2);
          v95 = qword_140C65B98 + 4LL * v21 * (unsigned __int16)KeNumberNodes;
          v24 = v91;
          v97 = (unsigned int *)(v95 + 4LL * (unsigned __int16)KeNumberNodes);
        }
        v53 = v21;
      }
      v56 = v26 + 25408 * v53;
      if ( (*(_DWORD *)(v56 + 23000) & 1) != 0 )
      {
        v28 = (unsigned __int8 *)(v56 + 23037);
        v85 = (unsigned __int8 *)(v56 + 23037);
        if ( a9 >= 0 )
        {
          v57 = 0;
          do
          {
            if ( *v28 == a9 )
              break;
            ++v28;
            ++v57;
          }
          while ( v57 < v27 );
          v85 = v28;
          v27 = 1;
        }
      }
    }
    v29 = &v28[v27];
    v94 = v29;
    do
    {
      LODWORD(v30) = *v22;
      v100[3] = BugCheckParameter2;
      if ( (_DWORD)v30 )
      {
        while ( 1 )
        {
          v30 = (unsigned int)(v30 - 1);
          v88 = v30;
          v31 = v24[2 * v30];
          v32 = v24[2 * v30 + 1];
          v100[0] = *(_QWORD *)&v22[4 * (unsigned int)v30 + 4];
          v100[1] = *(_QWORD *)&v22[4 * (unsigned int)v30 + 6] + v100[0];
          if ( v100[2] >= v100[1] )
            break;
          if ( (v77 < 0 || (_DWORD)v31 == v77) && (!v28 || (_DWORD)v32 == *v28) )
          {
            while ( 1 )
            {
              if ( !(unsigned int)MiCollapseRunTopDown(v100, v32)
                || !*(_QWORD *)(*(_QWORD *)(v14 + 16) + 25408 * v31 + 22832) && (_DWORD)InitializationPhase )
              {
                v22 = v84;
                LODWORD(v30) = v88;
                v28 = v85;
                break;
              }
              v33 = v100[5];
              v93 = v100[5];
              if ( LOBYTE(v100[7]) )
              {
                if ( v100[5] > v100[1] - v100[0] )
                  v33 = v100[1] - v100[0];
                v93 = v33;
              }
              v34 = v100[1] - v33;
              v102 = v100[1] - v33;
              v35 = 48 * (v100[1] - v33) - 0x220000000000LL;
              if ( LOBYTE(v100[7]) )
              {
                v36 = 0;
                v79 = 0;
              }
              else
              {
                v32 = MiPfnsWorthTrying(v83, 48 * (int)v34, v100[5], v16, (__int64)&v79);
                if ( v32 )
                  goto LABEL_36;
                v36 = v79;
              }
              if ( (v36 & 1) != 0 )
              {
                ++dword_140C13834;
                MiEmptyKernelStackCache(v83, 0LL);
              }
              v32 = MiClaimPhysicalRun(v83, v34, v93, v100[3], (__int64)v106, v16, -1, v96, v82, 0LL, &v79);
              v101 = v32;
              if ( v96 )
              {
                v37 = *(_DWORD *)(v96 + 40) >> 12;
                if ( v37 == v87 )
                  goto LABEL_58;
                v100[5] = (unsigned int)(v87 - v37);
              }
              else if ( !v32 )
              {
LABEL_58:
                MiDereferencePageRunsEx((__int64)v84, 1);
                MiDeleteUltraThreadContext((__int64)v106);
                if ( v90 )
                {
                  v40 = v82;
                }
                else
                {
                  v38 = (v34 + 511) & 0xFFFFFFFFFFFFFE00uLL;
                  v39 = (a6 + v34) & 0xFFFFFFFFFFFFFE00uLL;
                  if ( v38 < v39 && (v16 >= 0 || (v16 & 0x1000) == 0) )
                    MiUpdateLargePageBitMap(v83, v38, v39 - v38, 1, 1);
                  v40 = v82;
                  MiConvertContiguousPages(48 * v34 - 0x220000000000LL, a6, v82);
                }
                if ( (v16 & 0x40000000) == 0 )
                {
                  v41 = v89;
                  v42 = -(v16 & 0x100000);
                  v43 = v35 + 48 * a6;
                  do
                  {
                    MiSetPfnOwnedAndActive(v35, v41, -8LL, v40, (v42 != 0) + 1);
                    v35 += 48LL;
                  }
                  while ( v35 != v43 );
                  v34 = v102;
                }
                *v99 = v34;
                return 0LL;
              }
              if ( *(_QWORD *)(qword_140C674C8 + 8 * ((*(_QWORD *)(v35 + 40) >> 43) & 0x3FFLL)) == v83 )
              {
                if ( MiIsPageOnBadList(48 * v34 - 0x220000000000LL) )
                {
                  v58 = MiLockPageInline(48 * v34 - 0x220000000000LL);
                  v59 = 48 * v34 - 0x220000000000LL;
                  v60 = v58;
                  if ( MiIsPageOnBadList(v59) )
                  {
                    if ( (v16 & 0x10000000) != 0 )
                    {
                      _InterlockedAnd64((volatile signed __int64 *)(v35 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                      if ( (_DWORD)KiIrqlFlags )
                      {
                        v66 = KeGetCurrentIrql();
                        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
                          && v66 <= 0xFu
                          && (unsigned __int8)v60 <= 0xFu
                          && v66 >= 2u )
                        {
                          CurrentPrcb = KeGetCurrentPrcb();
                          SchedulerAssist = CurrentPrcb->SchedulerAssist;
                          v69 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v60 + 1));
                          v65 = (v69 & SchedulerAssist[5]) == 0;
                          SchedulerAssist[5] &= v69;
                          if ( v65 )
                            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
                        }
                      }
                      __writecr8(v60);
                      v14 = v83;
                      v70 = 0;
                      v28 = v85;
                      v78 = 0;
                      goto LABEL_128;
                    }
                  }
                  else
                  {
                    v81 = 1;
                  }
                  _InterlockedAnd64((volatile signed __int64 *)(v35 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                  if ( (_DWORD)KiIrqlFlags )
                  {
                    v61 = KeGetCurrentIrql();
                    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
                      && v61 <= 0xFu
                      && (unsigned __int8)v60 <= 0xFu
                      && v61 >= 2u )
                    {
                      v62 = KeGetCurrentPrcb();
                      v63 = v62->SchedulerAssist;
                      v64 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v60 + 1));
                      v65 = (v64 & v63[5]) == 0;
                      v63[5] &= v64;
                      if ( v65 )
                        KiRemoveSystemWorkPriorityKick(v62);
                    }
                  }
                  __writecr8(v60);
                  v32 = v101;
                }
                else
                {
                  v81 = 1;
                }
              }
LABEL_36:
              if ( (v79 & 2) != 0 )
                v80 |= 1u;
              if ( v32 >= v100[1] - v100[0] || !LOBYTE(v100[7]) && v100[1] - v100[0] - v32 < v93 )
                v100[3] = v100[1] - v32 - 1;
              v14 = v83;
              v100[1] -= v32;
            }
          }
          if ( !(_DWORD)v30 )
            break;
          v24 = v91;
        }
        v70 = v78;
LABEL_128:
        v29 = v94;
      }
      else
      {
        v70 = v78;
      }
      if ( !v28 )
        goto LABEL_135;
      v22 = v84;
      ++v28;
      v24 = v91;
      v85 = v28;
    }
    while ( v28 < v29 );
    if ( v21 != -1 )
    {
      v71 = (unsigned int *)(v95 + 4);
      v95 = (__int64)v71;
      if ( v71 != v97 )
      {
        v21 = *v71;
        continue;
      }
    }
LABEL_135:
    if ( !v70 || !v81 )
      break;
    if ( (DWORD1(PerfGlobalGroupMask) & 0x100000) != 0 )
    {
      v104[1] = 16LL;
      v72 = *(_QWORD *)&KeGetCurrentThread()[1].CurrentRunTime;
      v105[1] = a6 << 12;
      v105[0] = v72;
      v104[0] = v105;
      EtwTraceKernelEvent((int)v104, 1, 0x20100000u, 625, 4200962);
    }
    v73 = v80;
    ++dword_140C13918;
    if ( (v16 & 0x4000000) == 0 )
      v73 = v80 & 0xFFFFFFFE;
    if ( !(unsigned int)MiTrimNoStealPagesFromWorkingSets(v14, v73 | 2) )
      break;
    v22 = v84;
    v21 = -1;
    v24 = v91;
    v78 = 0;
    v81 = 0;
    v80 = 0;
  }
  v50 = -1073741801;
  MiDereferencePageRunsEx((__int64)v84, 1);
LABEL_147:
  MiDeleteUltraThreadContext((__int64)v106);
  if ( (v16 & 0x20000000) == 0 )
  {
    MiReturnCommit(v14, a6);
    if ( (_UNKNOWN *)v14 == &MiSystemPartition )
    {
      v74 = KeGetCurrentPrcb();
      CachedResidentAvailable = (int)v74->CachedResidentAvailable;
      if ( (_DWORD)CachedResidentAvailable != -1 )
      {
        if ( a6 + CachedResidentAvailable <= 0x100 && a6 < 0x80000 )
        {
          do
          {
            v76 = _InterlockedCompareExchange(
                    (volatile signed __int32 *)&v74->CachedResidentAvailable,
                    a6 + CachedResidentAvailable,
                    CachedResidentAvailable);
            v65 = (_DWORD)CachedResidentAvailable == v76;
            LODWORD(CachedResidentAvailable) = v76;
            if ( v65 )
              return v50;
          }
          while ( v76 != -1 && a6 + v76 <= 0x100 );
        }
        if ( (int)CachedResidentAvailable > 192
          && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                  (volatile signed __int32 *)&v74->CachedResidentAvailable,
                                                  192,
                                                  CachedResidentAvailable) )
        {
          v15 = (int)CachedResidentAvailable - 192 + a6;
        }
      }
    }
    if ( v15 )
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v14 + 17280), v15);
  }
  return v50;
}
