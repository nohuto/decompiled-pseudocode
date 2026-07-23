/*
 * XREFs of MiResolvePageFileFault @ 0x14066BA0C
 * Callers:
 *     MiDispatchFault @ 0x140238000 (MiDispatchFault.c)
 *     MiResolveProtoPteFault @ 0x140268160 (MiResolveProtoPteFault.c)
 *     MiIssueFlowThroughFault @ 0x1402EF180 (MiIssueFlowThroughFault.c)
 * Callees:
 *     MI_PROTO_FORMAT_COMBINED @ 0x14020AE38 (MI_PROTO_FORMAT_COMBINED.c)
 *     MiIsStoreProcess @ 0x140216D94 (MiIsStoreProcess.c)
 *     MiLocateAddress @ 0x140217240 (MiLocateAddress.c)
 *     MiGetSlabPage @ 0x14023BE40 (MiGetSlabPage.c)
 *     MiGetAvailablePagesBelowPriority @ 0x14025BD60 (MiGetAvailablePagesBelowPriority.c)
 *     MiComputeFaultNode @ 0x14025D820 (MiComputeFaultNode.c)
 *     MiGetPageChain @ 0x14026C990 (MiGetPageChain.c)
 *     MiSearchNumaNodeTable @ 0x14026ED60 (MiSearchNumaNodeTable.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetProtoPteAddress @ 0x140273120 (MiGetProtoPteAddress.c)
 *     MiObtainFaultCharges @ 0x140274E40 (MiObtainFaultCharges.c)
 *     MiGetSystemRegionType @ 0x140284B00 (MiGetSystemRegionType.c)
 *     MiUpdatePageFileHighInPte @ 0x1402858CC (MiUpdatePageFileHighInPte.c)
 *     MiUnlockVadTree @ 0x140287B08 (MiUnlockVadTree.c)
 *     MiLockVadTree @ 0x14028AB50 (MiLockVadTree.c)
 *     PsGetIoPriorityThread @ 0x1402A8E40 (PsGetIoPriorityThread.c)
 *     MiFreeInPageSupportBlock @ 0x1402BD58C (MiFreeInPageSupportBlock.c)
 *     MiUnlockProtoPoolPage @ 0x1402DB180 (MiUnlockProtoPoolPage.c)
 *     MiInitializeReadInProgressPfn @ 0x1402DEDD0 (MiInitializeReadInProgressPfn.c)
 *     MiSetPfnBlink @ 0x1402DF340 (MiSetPfnBlink.c)
 *     MiAllocateInPageSupport @ 0x1402E0F74 (MiAllocateInPageSupport.c)
 *     MiProtectionToCacheAttribute @ 0x1402E17F0 (MiProtectionToCacheAttribute.c)
 *     MiInitializePageColorBase @ 0x1402E1920 (MiInitializePageColorBase.c)
 *     MiSharedVaToPartition @ 0x1402E2A18 (MiSharedVaToPartition.c)
 *     MiSufficientAvailablePages @ 0x1402E383C (MiSufficientAvailablePages.c)
 *     MiReleaseFreshPage @ 0x1402E81B0 (MiReleaseFreshPage.c)
 *     MiComputeFaultCluster @ 0x1402EE8B8 (MiComputeFaultCluster.c)
 *     MiAdvanceFaultList @ 0x1402EEA84 (MiAdvanceFaultList.c)
 *     MiObtainProtoReference @ 0x1402EF5A8 (MiObtainProtoReference.c)
 *     MiGetPagingFileOffset @ 0x1402F2AF4 (MiGetPagingFileOffset.c)
 *     MiReduceMdl @ 0x14033E734 (MiReduceMdl.c)
 *     MiReturnFaultCharges @ 0x140360060 (MiReturnFaultCharges.c)
 *     MiLockSetPfnPriority @ 0x14036503C (MiLockSetPfnPriority.c)
 *     MiSetInPagePrefetchPriority @ 0x140367EC4 (MiSetInPagePrefetchPriority.c)
 *     MiFlowThroughInsertNode @ 0x140369D78 (MiFlowThroughInsertNode.c)
 *     MiFreePageChain @ 0x14046D052 (MiFreePageChain.c)
 *     MiKernelStackVaToStackNode @ 0x14062D78C (MiKernelStackVaToStackNode.c)
 *     MiReadFromMemoryPagefile @ 0x140660E98 (MiReadFromMemoryPagefile.c)
 */

__int64 MiResolvePageFileFault(unsigned __int64 *a1, unsigned __int64 a2, ...)
{
  unsigned __int64 v3; // r15
  unsigned int v4; // r14d
  unsigned __int64 v5; // rdi
  __int64 v7; // r13
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rbx
  __int64 v11; // rcx
  unsigned __int16 *v12; // rax
  unsigned __int16 *v13; // rcx
  char v14; // r12
  unsigned __int64 v15; // r15
  __int64 v16; // r12
  int v17; // eax
  int SystemRegionType; // ecx
  __int64 v19; // rax
  _QWORD *v20; // r12
  unsigned __int16 *v21; // rcx
  unsigned __int64 v22; // r15
  _QWORD *v23; // rax
  int v24; // r8d
  bool v25; // zf
  unsigned int v26; // edi
  __int64 Process; // r13
  __int64 v28; // rax
  __int64 v29; // rdx
  int v30; // eax
  __int64 **v31; // r9
  int v32; // r15d
  unsigned __int64 v33; // r11
  unsigned __int64 v34; // r8
  __int64 v35; // rax
  __int64 **v36; // r13
  char v37; // dl
  int v38; // eax
  int v39; // ecx
  int v40; // r14d
  __int64 v41; // rax
  __int64 v42; // r8
  __int64 v43; // r13
  unsigned int v44; // ebx
  unsigned int v45; // edi
  unsigned __int64 v46; // r8
  unsigned int v47; // r12d
  __int64 **v48; // rcx
  __int64 v49; // rdx
  __int64 v50; // rax
  unsigned int v51; // ecx
  __int64 v52; // rbx
  unsigned int PagingFileOffset; // eax
  unsigned int v54; // r12d
  __int64 v55; // rdi
  __int64 updated; // rbx
  unsigned __int64 v57; // rsi
  __int64 v58; // r13
  __int64 v59; // rax
  unsigned __int64 v60; // r12
  unsigned int v61; // ecx
  unsigned __int64 v62; // rbx
  unsigned int v63; // eax
  unsigned int v64; // ecx
  __int64 v65; // rsi
  unsigned int v66; // ebx
  __int64 v67; // rax
  unsigned __int64 v68; // rdx
  __int64 v69; // rax
  __int64 v70; // r9
  int v71; // r10d
  unsigned __int64 v72; // rdx
  __int64 v73; // r11
  unsigned __int64 v74; // rsi
  unsigned __int64 v75; // rdi
  unsigned __int64 v76; // rax
  unsigned __int64 v77; // rdx
  __int64 v78; // rdi
  unsigned __int64 v79; // rdx
  __int64 v80; // rdx
  unsigned int v81; // r9d
  unsigned int v82; // r11d
  volatile signed __int32 *v83; // rdi
  unsigned __int64 AvailablePagesBelowPriority; // rsi
  unsigned int v85; // r11d
  __int64 v86; // rcx
  __int64 PageChain; // r12
  unsigned int v88; // ecx
  __int64 v89; // rdi
  __int64 v90; // rax
  __int64 v91; // r9
  unsigned __int64 v92; // rsi
  unsigned __int64 *v93; // r12
  _QWORD *v94; // rbx
  signed __int32 v95; // eax
  __int64 SlabPage; // rax
  __int64 v97; // rsi
  unsigned int v98; // eax
  unsigned __int64 v99; // rdi
  unsigned __int64 v100; // rdx
  unsigned __int64 v101; // r8
  unsigned __int64 v102; // rdx
  __int64 v103; // rdx
  unsigned int v104; // edx
  __int64 v105; // rsi
  _QWORD *v106; // r15
  unsigned int v107; // edi
  unsigned __int64 v108; // r10
  unsigned __int64 v109; // rax
  __int64 v110; // r11
  unsigned __int64 v111; // rdx
  __int64 v112; // rcx
  unsigned __int64 v113; // rax
  unsigned __int64 v114; // rcx
  _QWORD *v115; // rbx
  unsigned int v116; // esi
  unsigned __int64 v117; // rax
  int v118; // edx
  __int64 v119; // rdi
  unsigned __int64 v120; // rdx
  __int64 v121; // rax
  unsigned __int64 v122; // rdi
  __int64 v123; // r15
  char v124; // bl
  __int64 v125; // r9
  __int64 v126; // r8
  int v127; // esi
  __int64 v128; // rax
  unsigned __int64 v129; // rbx
  __int64 v130; // r8
  __int64 v131; // r9
  _QWORD *v132; // rbx
  __int64 v133; // rax
  _QWORD *v134; // rsi
  int v135; // edx
  unsigned int v136; // eax
  __int64 v137; // rbx
  __int64 v138; // r8
  int v139; // ecx
  unsigned __int8 v140; // [rsp+48h] [rbp-C0h]
  char v141; // [rsp+48h] [rbp-C0h]
  char v142; // [rsp+48h] [rbp-C0h]
  unsigned int v143; // [rsp+4Ch] [rbp-BCh] BYREF
  unsigned int v144; // [rsp+50h] [rbp-B8h]
  unsigned int v145; // [rsp+54h] [rbp-B4h]
  __int64 v146; // [rsp+58h] [rbp-B0h]
  unsigned __int64 v147; // [rsp+60h] [rbp-A8h]
  __int64 v148; // [rsp+68h] [rbp-A0h]
  unsigned __int16 *v149; // [rsp+70h] [rbp-98h]
  unsigned __int64 v150; // [rsp+78h] [rbp-90h]
  _QWORD *v151; // [rsp+80h] [rbp-88h]
  __int64 **Address; // [rsp+88h] [rbp-80h] BYREF
  unsigned __int64 v153; // [rsp+90h] [rbp-78h] BYREF
  __int64 v154; // [rsp+98h] [rbp-70h]
  unsigned __int64 v155; // [rsp+A0h] [rbp-68h]
  int v156; // [rsp+A8h] [rbp-60h]
  int v157; // [rsp+ACh] [rbp-5Ch]
  unsigned __int64 v158; // [rsp+B0h] [rbp-58h] BYREF
  unsigned __int64 v159; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v160; // [rsp+C0h] [rbp-48h]
  __int64 v161; // [rsp+C8h] [rbp-40h]
  __int64 v162; // [rsp+D0h] [rbp-38h]
  __int64 v163; // [rsp+D8h] [rbp-30h]
  __int64 v164; // [rsp+E0h] [rbp-28h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+E8h] [rbp-20h]
  __int128 v166; // [rsp+F0h] [rbp-18h] BYREF
  unsigned int v168; // [rsp+158h] [rbp+50h]
  __int64 v170; // [rsp+168h] [rbp+60h] BYREF
  va_list va; // [rsp+168h] [rbp+60h]
  __int64 *v172; // [rsp+170h] [rbp+68h]
  va_list va1; // [rsp+178h] [rbp+70h] BYREF

  va_start(va1, a2);
  va_start(va, a2);
  v170 = va_arg(va1, _QWORD);
  v172 = va_arg(va1, __int64 *);
  v150 = *a1;
  v164 = 0LL;
  v3 = a1[2];
  v4 = 0;
  v161 = a1[7];
  v163 = 0LL;
  v166 = 0LL;
  v5 = MI_READ_PTE_LOCK_FREE(a2);
  v159 = v5;
  CurrentThread = KeGetCurrentThread();
  if ( ((__int64)CurrentThread[1].Queue & 4) != 0 )
  {
    if ( v170 )
      MiUnlockProtoPoolPage(v170, 0x11u);
    return 3221225633LL;
  }
  v7 = v170;
  v8 = v159;
  v9 = v5 & 0x800;
  v154 = v9;
  if ( (v5 & 0x800) != 0 )
  {
    if ( qword_140C65B40 )
    {
      if ( (v5 & 0x10) != 0 )
        v5 &= ~0x10uLL;
      else
        v5 &= ~qword_140C65B40;
    }
    v4 = 16;
    v155 = 48 * ((v5 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
    v10 = *(_QWORD *)(v155 + 16);
    LOWORD(v5) = v10;
    v9 = v154;
    v11 = (*(_QWORD *)(v155 + 40) >> 43) & 0x3FFLL;
    v158 = v10;
  }
  else
  {
    v155 = 0LL;
    v10 = v159;
    v158 = v159;
    if ( v170 )
    {
      v12 = (unsigned __int16 *)MiSharedVaToPartition(v161, v150, a2);
      v9 = v154;
      v13 = v12;
      goto LABEL_15;
    }
    v11 = *(unsigned __int16 *)(v161 + 174);
  }
  v13 = *(unsigned __int16 **)(qword_140C673C8 + 8 * v11);
LABEL_15:
  v151 = 0LL;
  v14 = v3;
  v160 = 0LL;
  v15 = v3 & 0xFFFFFFFFFFFFFFFEuLL;
  v149 = v13;
  v145 = 2;
  v16 = v14 & 1;
  if ( v16 )
  {
    switch ( *(_BYTE *)v15 )
    {
      case 5:
        v17 = *(_DWORD *)(v15 + 56);
        if ( (v17 & 4) != 0
          && ((v17 & 0x10) != 0 || (v5 & 4) == 0 || (unsigned __int16)v5 >> 12 != *((_DWORD *)v13 + 297)) )
        {
          if ( v7 )
            MiUnlockProtoPoolPage(v7, 0x11u);
          return 3221225495LL;
        }
        v151 = 0LL;
        break;
      case 2:
        v151 = (_QWORD *)v15;
        break;
      case 1:
        v151 = (_QWORD *)v15;
        if ( v9 || !(unsigned int)MiGetPagingFileOffset((unsigned __int64)&v159) )
          return 0LL;
        v145 = 0;
        v4 |= 0x20u;
        v160 = *(_QWORD *)(v15 + 96);
        break;
    }
  }
  SystemRegionType = MiGetSystemRegionType(v150);
  if ( v16 && *(_BYTE *)v15 == 4 )
  {
    v19 = *(_QWORD *)(v15 + 48);
    v145 |= 8u;
    v20 = (_QWORD *)v15;
    LODWORD(v148) = 8;
    v151 = (_QWORD *)v15;
    v21 = *(unsigned __int16 **)(qword_140C673C8 + 8LL * *(unsigned __int16 *)(*(_QWORD *)(v19 + 544) + 1838LL));
    v149 = v21;
LABEL_41:
    v22 = v150;
    goto LABEL_42;
  }
  if ( ((v8 >> 5) & 0x1F) != 0x1F )
  {
    v20 = v151;
    v24 = 0;
    v25 = SystemRegionType == 12;
    v21 = v149;
    if ( v25 )
      v24 = 8;
    LODWORD(v148) = v24;
    goto LABEL_41;
  }
  v22 = v150;
  LODWORD(v148) = 8;
  v23 = MiKernelStackVaToStackNode(v150);
  if ( v23 )
    v21 = *(unsigned __int16 **)(qword_140C673C8 + 8LL * *((unsigned __int16 *)v23 + 20));
  else
    v21 = MiSystemPartition;
  v145 |= 8u;
  v20 = v151;
  v149 = v21;
LABEL_42:
  if ( v4 >= 0x20 && (v20[10] & 0x200) != 0 && (v8 & 4) != 0 && (unsigned __int16)v8 >> 12 == *((_DWORD *)v21 + 297) )
  {
    if ( v7 )
      MiUnlockProtoPoolPage(v7, 0x11u);
    return 0LL;
  }
  v26 = 16;
  v156 = 0;
  v144 = 1;
  Process = (__int64)CurrentThread->ApcState.Process;
  v147 = a2;
  LODWORD(v146) = 2;
  v143 = 16;
  if ( a2 >= 0xFFFFF68000000000uLL && a2 <= 0xFFFFF6FFFFFFFFFFuLL )
  {
    v140 = v156;
    goto LABEL_56;
  }
  v140 = 16;
  v28 = MI_READ_PTE_LOCK_FREE(((v22 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  if ( MI_PROTO_FORMAT_COMBINED(v28, v29) )
  {
    v140 = 48;
  }
  else if ( !*(_QWORD *)(Process + 1264) )
  {
    goto LABEL_56;
  }
  v26 = 1;
  v143 = 1;
LABEL_56:
  v162 = (v8 >> 5) & 0x1F;
  Address = (__int64 **)a1[11];
  v30 = MiComputeFaultNode((__int64)a1, 0LL, &Address);
  v31 = Address;
  v32 = v30;
  LODWORD(v153) = v30;
  if ( Address )
  {
    v36 = Address;
  }
  else
  {
    v33 = 0xFFFFF68000000000uLL;
    if ( a2 > 0xFFFFF6BFFFFFFF78uLL || a2 < 0xFFFFF68000000000uLL || !(unsigned int)MiIsStoreProcess(Process) )
    {
      v34 = v150;
      if ( (*(_BYTE *)(v161 + 184) & 7) != 0 )
        goto LABEL_66;
      if ( v150 >= 0xFFFF800000000000uLL )
        goto LABEL_66;
      v35 = *(_QWORD *)(Process + 1680);
      if ( !*(_QWORD *)(v35 + 408) && !*(_QWORD *)(v35 + 416) )
        goto LABEL_66;
    }
    MiLockVadTree(1);
    Address = MiLocateAddress(v150);
    v36 = Address;
    MiUnlockVadTree(1, 0x11u);
    if ( !v36 )
    {
      v34 = v150;
      v31 = 0LL;
      v33 = 0xFFFFF68000000000uLL;
LABEL_66:
      v37 = v140;
LABEL_67:
      v38 = v146;
      goto LABEL_68;
    }
  }
  v41 = *((unsigned int *)v36 + 13);
  LODWORD(v41) = v41 & 0x7FFFFFFF;
  v37 = v140;
  v31 = Address;
  v34 = v150;
  v33 = 0xFFFFF68000000000uLL;
  if ( (v41 | ((unsigned __int64)*((unsigned __int8 *)v36 + 34) << 31)) != 0x7FFFFFFFELL )
    goto LABEL_67;
  v37 = v140 | 0x80;
  v38 = 7;
  v140 |= 0x80u;
  LODWORD(v146) = 7;
LABEL_68:
  if ( v154 )
  {
    v143 = 1;
    LODWORD(v146) = v38 | 1;
    v26 = 1;
  }
  v39 = 0;
  if ( (v10 & 4) != 0 )
    LOBYTE(v39) = (unsigned __int16)v10 >> 12 == *((_DWORD *)v149 + 297);
  v40 = v39 | v4;
  if ( v26 != 1 )
  {
    if ( dword_140C69658 )
    {
      v143 = 1;
      --dword_140C69658;
      v26 = 1;
    }
    else if ( v20 )
    {
      if ( (v37 & 0x10) != 0 )
      {
        if ( !v31 )
        {
          MiLockVadTree(1);
          Address = MiLocateAddress(v150);
          MiUnlockVadTree(1, 0x11u);
          v31 = Address;
        }
        v42 = (__int64)v31;
      }
      else
      {
        v42 = 0LL;
      }
      v26 = MiComputeFaultCluster((__int64)v149, v20, v42, v40 & 1);
      v143 = v26;
    }
    else if ( v34 > 0x7FFFFFFEFFFFLL )
    {
      v143 = 1;
      v26 = 1;
      if ( (v37 & 0x10) == 0 && (v34 < v33 || v34 > 0xFFFFF6FFFFFFFFFFuLL) )
      {
        v26 = 16;
        v40 |= 4u;
        v143 = 16;
      }
    }
  }
  v157 = v40 & 1;
  if ( (v40 & 1) != 0 )
  {
    if ( v26 > *((_DWORD *)v149 + 299) )
      v26 = *((_DWORD *)v149 + 299);
    v143 = v26;
  }
  v160 = MiAllocateInPageSupport(a2, v145, &v143, (__int64 *)((unsigned __int64)va & -(__int64)(v170 != 0)));
  v43 = v160;
  if ( !v160 )
  {
    v44 = -1073741670;
LABEL_105:
    if ( v20 )
      *((_BYTE *)v20 + 1) = (v44 == -1073741670) + 1;
    return v44;
  }
  if ( MI_READ_PTE_LOCK_FREE(a2) != v8
    || v154
    && ((*(_BYTE *)(v155 + 34) & 0x28) == 0x28
     || (*(_BYTE *)(v155 + 34) & 0x20) == 0
     || v10 != *(_QWORD *)(v155 + 16)
     || (*(_DWORD *)(*(_QWORD *)v155 + 160LL) & 0x20) != 0) )
  {
    v44 = -1073740748;
    if ( v170 )
      MiUnlockProtoPoolPage(v170, 0x11u);
    MiFreeInPageSupportBlock((PSLIST_ENTRY)v43);
    goto LABEL_105;
  }
  if ( v20 && *(_BYTE *)v20 == 1 )
    MiSetInPagePrefetchPriority((__int64)v20, v43);
  v45 = v143;
  if ( v143 <= 1 || !(unsigned int)MiSufficientAvailablePages((__int64)v149, 0x140uLL) )
    goto LABEL_163;
  v46 = a2;
  v47 = 511 - (((unsigned int)a2 >> 3) & 0x1FF);
  v145 = ((unsigned int)a2 >> 3) & 0x1FF;
  if ( (v140 & 0x10) != 0 )
  {
    v48 = Address;
    if ( (Address
       || (MiLockVadTree(1), Address = MiLocateAddress(v150), MiUnlockVadTree(1, 0x11u), (v48 = Address) != 0LL))
      && ((_DWORD)v48[6] & 0x200000) == 0
      && (MiGetProtoPteAddress((__int64)v48, v150 >> 12, 4, &v164), v164)
      && (*(_BYTE *)(v164 + 34) & 2) == 0 )
    {
      v49 = *(_QWORD *)(v164 + 8);
      v46 = a2;
      v50 = (__int64)(a2 - v49) >> 3;
      v51 = ((__int64)(v49 + 8LL * *(unsigned int *)(v164 + 44) - a2) >> 3) - 1;
      if ( v51 >= v47 )
        v51 = 511 - (((unsigned int)a2 >> 3) & 0x1FF);
      v47 = v51;
      if ( (unsigned int)v50 >= v145 )
        LODWORD(v50) = v145;
      v145 = v50;
    }
    else
    {
      v46 = a2;
      v45 = 1;
      v143 = 1;
    }
  }
  if ( v151 || (v40 & 4) != 0 )
  {
    v145 = 0;
    if ( !v47 )
      v45 = 1;
    v143 = v45;
  }
  if ( v45 <= 1 )
  {
    v20 = v151;
LABEL_163:
    v72 = v144;
    v74 = v147;
    goto LABEL_164;
  }
  v158 = v8;
  v144 = v45 - 1;
  v143 = v45 - 1;
  v52 = v45 - 1;
  v155 = v46 + 8;
  if ( v47 <= v45 - 1 )
    v52 = v47;
  PagingFileOffset = MiGetPagingFileOffset((unsigned __int64)&v158);
  v54 = -3 - PagingFileOffset;
  v154 = PagingFileOffset;
  if ( (unsigned __int64)PagingFileOffset + v52 < 0xFFFFFFFE )
    v54 = v52;
  if ( v157 || v151 )
    v40 |= 8u;
  v55 = v8 & 0xFFFFFFFFFC00FF1DuLL;
  updated = v8 & 0xFFFFFFFFFC00FF1DuLL;
  if ( v54 )
  {
    v57 = v155;
    v58 = v154;
    do
    {
      updated = MiUpdatePageFileHighInPte(updated, ++v58);
      v59 = MI_READ_PTE_LOCK_FREE(v57);
      if ( (v59 & 0x3E0) != 0 && (v59 & 0xFFFFFFFFFC00FF1DuLL) == updated )
      {
        v147 = v57;
      }
      else if ( (v40 & 8) != 0 )
      {
        break;
      }
      v57 += 8LL;
      --v54;
    }
    while ( v54 );
    v8 = v159;
    v32 = v153;
    v43 = v160;
  }
  v60 = a2;
  v61 = v144 - ((__int64)(v147 - a2) >> 3);
  v147 = (__int64)(v147 - a2) >> 3;
  v158 = v8;
  if ( v145 <= v61 )
    v61 = v145;
  v62 = v61;
  v155 = a2;
  v63 = MiGetPagingFileOffset((unsigned __int64)&v158);
  v154 = v63;
  v64 = v63 - 1;
  if ( v62 <= (unsigned __int64)v63 - 1 )
    v64 = v62;
  if ( v64 )
  {
    v65 = v154;
    v66 = v64;
    do
    {
      --v65;
      v60 -= 8LL;
      v55 = MiUpdatePageFileHighInPte(v55, v65);
      v67 = MI_READ_PTE_LOCK_FREE(v60);
      if ( (v67 & 0x3E0) != 0 && (v67 & 0xFFFFFFFFFC00FF1DuLL) == v55 )
      {
        v155 = v60;
      }
      else if ( (v40 & 8) != 0 )
      {
        break;
      }
      --v66;
    }
    while ( v66 );
    v8 = v159;
    v43 = v160;
  }
  v68 = v8;
  if ( qword_140C65B40 && (v8 & 0x10) == 0 )
    v68 = v8 & ~qword_140C65B40;
  v69 = MiUpdatePageFileHighInPte(v8, HIDWORD(v68) - (unsigned int)((__int64)(a2 - v155) >> 3));
  v20 = v151;
  v72 = (unsigned int)(v71 + v147 + 1);
  v158 = v69;
  v144 = v71 + v147 + 1;
  v74 = v73 - 8 * v70;
  v10 = v69;
  v147 = v74;
LABEL_164:
  v75 = (unsigned int)v72;
  v76 = MiObtainFaultCharges(v149, v72, v146);
  v155 = v76;
  if ( v75 <= v76 )
  {
    v82 = v144;
  }
  else
  {
    v77 = v10;
    if ( qword_140C65B40 && (v10 & 0x10) == 0 )
      v77 = v10 & ~qword_140C65B40;
    v78 = v75 - v76;
    v79 = HIDWORD(v77);
    if ( v74 + 8 * v78 <= a2 )
    {
      v80 = v78 + v79;
      v147 = v74 + 8 * v78;
    }
    else
    {
      v147 = a2;
      v80 = ((__int64)(a2 - v74) >> 3) + v79;
    }
    v10 = MiUpdatePageFileHighInPte(v10, v80);
    v158 = v10;
    v82 = v81;
    v144 = v81;
  }
  if ( v20 && *(_BYTE *)v20 == 1 )
  {
    v83 = (volatile signed __int32 *)v149;
    AvailablePagesBelowPriority = MiGetAvailablePagesBelowPriority(v149, ((*((_DWORD *)v20 + 20) >> 3) & 7u) + 1);
    v153 = AvailablePagesBelowPriority;
    v154 = v85;
    if ( AvailablePagesBelowPriority > v85 )
    {
      AvailablePagesBelowPriority = v85;
      v153 = v85;
      v154 = v85;
    }
  }
  else
  {
    v83 = (volatile signed __int32 *)v149;
    AvailablePagesBelowPriority = v82;
    v153 = v82;
    v154 = v82;
  }
  if ( !AvailablePagesBelowPriority )
  {
    v97 = (__int64)v149;
LABEL_309:
    v93 = a1;
    goto LABEL_310;
  }
  if ( !v20
    || *(_BYTE *)v20 != 1
    || (v86 = v20[11]) == 0
    || (_DWORD)v148
    || v150 > 0x7FFFFFFEFFFFLL
    || v170
    || *(volatile signed __int32 **)(qword_140C673C8 + 8 * ((*(_QWORD *)(v86 + 40) >> 43) & 0x3FFLL)) != v83
    || *((_DWORD *)MiSearchNumaNodeTable(0xAAAAAAAAAAAAAAABuLL * ((v86 + 0x220000000000LL) >> 4)) + 2) != v32 - 1
    || (PageChain = v20[11],
        *(unsigned __int8 *)(PageChain + 34) >> 6 != (unsigned int)MiProtectionToCacheAttribute(v162)) )
  {
    if ( (v140 & 0x20) == 0 )
      goto LABEL_204;
    if ( v83 == *(volatile signed __int32 **)(qword_140C673C8 + 8LL * *(unsigned __int16 *)(v161 + 174))
      || v83 == (volatile signed __int32 *)MiSystemPartition )
    {
      MiInitializePageColorBase(v161, v32, (__int64)&v166);
      v95 = _InterlockedExchangeAdd((volatile signed __int32 *)v166, 1u);
      v93 = a1;
      v94 = a1 + 15;
      SlabPage = MiGetSlabPage(
                   (__int64)v83,
                   5u,
                   HIDWORD(v166) | (unsigned int)v95 & DWORD2(v166),
                   4LL,
                   (__int64 *)a1 + 15);
      if ( SlabPage != -1 )
      {
        PageChain = 48 * SlabPage - 0x220000000000LL;
        MiSetPfnBlink(PageChain, 0x3FFFFFFFFFLL, 0);
        v92 = v153;
        v10 = v158;
        goto LABEL_203;
      }
    }
    else
    {
      v93 = a1;
      v94 = a1 + 15;
    }
    if ( *v94 )
    {
      v93[16] = 1LL;
      v97 = (__int64)v149;
LABEL_310:
      if ( v170 )
        MiUnlockProtoPoolPage(v170, 0x11u);
      MiFreeInPageSupportBlock((PSLIST_ENTRY)v43);
      if ( v151 )
        *((_BYTE *)v151 + 1) = 2 - (v93[15] != 0);
      MiReturnFaultCharges(v97, v155, v146);
      return 3221225495LL;
    }
    _InterlockedAdd(v83 + 4229, 1u);
    v10 = v158;
    goto LABEL_204;
  }
  v88 = 0;
  v89 = PageChain;
  while ( 1 )
  {
    ++v88;
    v90 = *(_QWORD *)(v89 + 24) & 0xFFFFFFFFFFLL;
    v91 = v89;
    if ( v90 == 0x3FFFFFFFFFLL )
      break;
    v89 = 48 * v90 - 0x220000000000LL;
    if ( v88 >= AvailablePagesBelowPriority )
      goto LABEL_193;
  }
  v89 = 0LL;
LABEL_193:
  v92 = v88;
  v153 = v88;
  MiSetPfnBlink(v91, 0x3FFFFFFFFFLL, 0);
  v151[11] = v89;
LABEL_203:
  if ( !PageChain )
  {
LABEL_204:
    v98 = MiProtectionToCacheAttribute(v162);
    v99 = v147;
    v97 = (__int64)v149;
    PageChain = MiGetPageChain(
                  (__int64)v149,
                  v161,
                  (__int64)(v147 << 25) >> 16,
                  v32,
                  v98,
                  v148,
                  0xFFFFFFFFFFFFFFFFuLL,
                  &v153);
    if ( PageChain )
    {
      v92 = v153;
      goto LABEL_207;
    }
    goto LABEL_309;
  }
  v99 = v147;
LABEL_207:
  if ( v92 == v154 )
  {
    v104 = v144;
  }
  else
  {
    if ( v99 + 8 * v92 <= a2 )
    {
      v100 = v10;
      if ( qword_140C65B40 && (v10 & 0x10) == 0 )
        v100 = v10 & ~qword_140C65B40;
      v101 = v154 - v92;
      v102 = HIDWORD(v100);
      if ( v99 + 8 * (v154 - v92) > a2 )
      {
        v147 = a2;
        v103 = ((__int64)(a2 - v99) >> 3) + v102;
      }
      else
      {
        v103 = v101 + v102;
        v147 = v99 + 8 * v101;
      }
      v10 = MiUpdatePageFileHighInPte(v10, v103);
    }
    v104 = v92;
  }
  v105 = v43 + 272;
  v106 = (_QWORD *)(v43 + 320);
  v107 = 0;
  LODWORD(v153) = *(_DWORD *)(v43 + 192) >> 9;
  LODWORD(v148) = 0;
  v168 = 0;
  while ( 2 )
  {
    v108 = v147;
    while ( 1 )
    {
      v144 = v104;
      v109 = MI_READ_PTE_LOCK_FREE(v108);
      v110 = 1LL;
      if ( (v40 & 0x10) != 0
        || (v109 & 1) == 0
        && (v109 & 0x400) == 0
        && (v109 & 0x800) == 0
        && ((v111 = v109, !qword_140C65B40)
          ? (v112 = v10)
          : ((v109 & 0x10) != 0 ? (v111 = v109 & 0xFFFFFFFFFFFFFFEFuLL) : (v111 = v109 & ~qword_140C65B40),
             (v10 & 0x10) != 0 ? (v112 = v10) : (v112 = v10 & ~qword_140C65B40)),
            ((v111 ^ v112) & 0xFFFFFFFF00000000uLL) == 0
         && (v109 & 4) != 0
         && (v113 = v109 >> 12, (((unsigned __int8)v113 ^ (unsigned __int8)(v10 >> 12)) & 0xF) == 0)
         && ((v113 & 0xF) == *((_DWORD *)v149 + 297)) == (v40 & 1)) )
      {
        ++v168;
        v117 = v147;
        *v106 = 0xAAAAAAAAAAAAAAABuLL * ((PageChain + 0x220000000000LL) >> 4);
        if ( v117 == a2 )
          LOBYTE(v118) = v153;
        else
          v118 = *(_DWORD *)(v43 + 192) >> 12;
        MiLockSetPfnPriority(PageChain, v118 & 7);
        v119 = *(_QWORD *)(PageChain + 24) & 0xFFFFFFFFFFLL;
        MiSetPfnBlink(PageChain, 0LL, 0);
        if ( v119 == 0x3FFFFFFFFFLL )
          PageChain = 0LL;
        else
          PageChain = 48 * v119 - 0x220000000000LL;
        v107 = v148;
        v110 = 1LL;
        goto LABEL_253;
      }
      if ( (v40 & 8) != 0 )
        break;
      v40 |= 2u;
      *v106 = qword_140C69708;
LABEL_253:
      ++v106;
      if ( v151 )
        MiAdvanceFaultList(v151);
      v120 = v10;
      v147 += 8LL;
      if ( qword_140C65B40 && (v10 & 0x10) == 0 )
        v120 = v10 & ~qword_140C65B40;
      v121 = MiUpdatePageFileHighInPte(v10, v110 + HIDWORD(v120));
      v104 = v144;
      v107 += v110;
      LODWORD(v148) = v107;
      v10 = v121;
      if ( v107 >= v144 )
      {
        v114 = a2;
        goto LABEL_260;
      }
    }
    v108 = v147;
    v114 = a2;
    if ( v147 <= a2 )
    {
      v106 = (_QWORD *)(v43 + 320);
      v115 = (_QWORD *)(v43 + 320);
      if ( v107 )
      {
        v116 = v168;
        do
        {
          if ( *v115 != qword_140C69708 )
          {
            MiReleaseFreshPage(48LL * *v115 - 0x220000000000LL);
            --v116;
          }
          ++v115;
          --v107;
        }
        while ( v107 );
        v43 = v160;
        v114 = a2;
        v168 = v116;
        LODWORD(v148) = 0;
        v105 = v160 + 272;
      }
      v40 &= ~2u;
      v147 = v114;
      v10 = MI_READ_PTE_LOCK_FREE(v114);
      v104 = 1;
      continue;
    }
    break;
  }
  v104 = v107;
  v144 = v107;
LABEL_260:
  v122 = v108 - 8LL * v104;
  v123 = *(_QWORD *)(v43 + 8 * ((__int64)(v114 - v122) >> 3) + 320);
  v124 = v110 & (v140 >> 4);
  if ( v124 )
    v125 = 0LL;
  else
    v125 = (__int64)(v122 << 25) >> 16;
  *(_QWORD *)v105 = 0LL;
  v126 = v104 << 12;
  *(_DWORD *)(v105 + 40) = v126;
  *(_QWORD *)(v105 + 32) = v125 & 0xFFFFFFFFFFFFF000uLL;
  *(_DWORD *)(v105 + 44) = v125 & 0xFFF;
  *(_WORD *)(v105 + 10) = 66;
  *(_WORD *)(v105 + 8) = 8 * ((((unsigned __int64)(v125 & 0xFFF) + v126 + 4095) >> 12) + 6);
  if ( (v40 & 2) != 0 )
  {
    v128 = MiReduceMdl(v105);
    if ( v128 )
    {
      v122 += 8 * v128;
      if ( !v124 )
        *(_QWORD *)(v105 + 32) += v128 << 12;
    }
    v127 = *(_DWORD *)(v105 + 40) >> 12;
  }
  else
  {
    *(_WORD *)(v105 + 10) = 16450;
    v127 = v144;
  }
  v129 = MI_READ_PTE_LOCK_FREE(v122);
  v159 = v129;
  if ( v127 == 1 )
    v141 = v140 & 0xF8 | (*(_DWORD *)(v43 + 192) >> 9) & 7 | 8;
  else
    v141 = v140 & 0xDF;
  LOBYTE(v156) = v141;
  MiInitializeReadInProgressPfn(v150, (_QWORD *)(v43 + 320), v127, v122, v43, v141);
  if ( (v40 & 0x10) != 0 )
  {
    if ( qword_140C65B40 )
    {
      if ( (v129 & 0x10) != 0 )
        v129 &= ~0x10uLL;
      else
        v129 &= ~qword_140C65B40;
    }
    v132 = (_QWORD *)(48 * ((v129 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL);
    MiFlowThroughInsertNode(v43, v132);
    v129 = v132[2];
    v159 = v129;
  }
  v142 = v141 & 0x10;
  if ( v142 )
    MiObtainProtoReference(v170, 0LL, v130, v131);
  v133 = MI_READ_PTE_LOCK_FREE(a2);
  *(_QWORD *)(v43 + 232) = a2;
  v134 = v151;
  *(_QWORD *)(v43 + 168) = v133;
  if ( v134 )
  {
    if ( *(_BYTE *)v134 == 1 )
    {
      v135 = *(_DWORD *)(v43 + 192) | 8;
      *(_DWORD *)(v43 + 192) = v135;
      if ( (v134[10] & 0x2000) != 0 )
        *(_DWORD *)(v43 + 192) = v135 | 0x20;
    }
  }
  if ( (int)PsGetIoPriorityThread((__int64)CurrentThread) < 2 )
    *(_DWORD *)(v43 + 192) |= 0x80u;
  if ( Address && MiVadPageSizes[(*((_DWORD *)Address + 12) >> 19) & 3] == 16 )
    *(_DWORD *)(v43 + 192) |= 0x100000u;
  if ( v170 )
    MiUnlockProtoPoolPage(v170, 0x11u);
  MiFreePageChain(PageChain);
  if ( v168 != v155 )
    MiReturnFaultCharges((__int64)v149, v155 - v168, v146);
  *v172 = v43;
  v136 = MiGetPagingFileOffset((unsigned __int64)&v159);
  v137 = (unsigned __int16)v129 >> 12;
  LODWORD(v163) = v136;
  v138 = *(_QWORD *)&v149[4 * v137 + 8528];
  if ( v142 )
    *(_QWORD *)(v43 + 160) = v170;
  if ( (v40 & 1) != 0 )
  {
    *(_DWORD *)(v43 + 192) |= 0x100u;
    *(_QWORD *)(v43 + 96) = v136 | (unsigned __int64)(v137 << 60);
  }
  else
  {
    HIDWORD(v163) = 0;
    *(_QWORD *)(v43 + 96) = (unsigned __int64)(unsigned int)v163 << 12;
  }
  v139 = *(_DWORD *)(v43 + 192) | 0x200000;
  *(_QWORD *)(v43 + 200) = v138;
  *(_DWORD *)(v43 + 192) = v139;
  if ( *(_QWORD *)(v138 + 216)
    && (!v134 || *(_BYTE *)v134 != 1 || (v134[10] & 0x1000) == 0 || (dword_140D1D1D0 & 1) != 0) )
  {
    *(_DWORD *)(v43 + 192) = v139 | 0x400000;
  }
  *(_QWORD *)(v43 + 240) = v122;
  *(_QWORD *)(v43 + 248) = 48 * v123 - 0x220000000000LL;
  if ( _bittest16((const signed __int16 *)(v138 + 204), 0xBu) )
    MiReadFromMemoryPagefile(v138, v43);
  return 3221435187LL;
}
