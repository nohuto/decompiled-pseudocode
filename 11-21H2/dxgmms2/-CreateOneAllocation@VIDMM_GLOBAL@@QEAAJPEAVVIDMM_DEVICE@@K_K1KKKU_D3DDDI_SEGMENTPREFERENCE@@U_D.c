/*
 * XREFs of ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@U_DXGK_ALLOCATIONINFOFLAGS2@@PEAVDXGADAPTERALLOCATION@@PEAX6KE6EPEAPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C008F230
 * Callers:
 *     ?CreateAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_SEGMENTBANKPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@U_DXGK_ALLOCATIONINFOFLAGS2@@KPEAVDXGADAPTERALLOCATION@@PEAXPEAPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAPEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x1C008DB44 (-CreateAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXG.c)
 *     ?AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z @ 0x1C009DD78 (-AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z.c)
 *     ?CreateVidMmObjects@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@II@Z @ 0x1C00A1478 (-CreateVidMmObjects@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@II@Z.c)
 *     ?CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@@PEAVDXGCONTEXT@@PEAX_KKKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_SEGMENTBANKPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAPEAU_VIDMM_CONTEXT_ALLOC@@@Z @ 0x1C00A5624 (-CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001904 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C00029AC (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?VidMmiReferencePartition@@YAXPEAUVIDMM_PARTITION@@@Z @ 0x1C0002A14 (-VidMmiReferencePartition@@YAXPEAUVIDMM_PARTITION@@@Z.c)
 *     ?Feature_Wddm30CpuVisible__private_IsEnabledPreCheck@@YAHXZ @ 0x1C0002A20 (-Feature_Wddm30CpuVisible__private_IsEnabledPreCheck@@YAHXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0002DE0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0002E04 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?SysMmAllocateLogicalMemory@@YAJPEAUSYSMM_ADAPTER@@_KPEBXPEAPEAX@Z @ 0x1C0014A2C (-SysMmAllocateLogicalMemory@@YAJPEAUSYSMM_ADAPTER@@_KPEBXPEAPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtpht_EtwWriteTransfer @ 0x1C001D19C (McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtpht_EtwWriteTransfer.c)
 *     ??_G_VIDMM_GLOBAL_ALLOC@@QEAAPEAXI@Z @ 0x1C002D7E0 (--_G_VIDMM_GLOBAL_ALLOC@@QEAAPEAXI@Z.c)
 *     ?AllocateCrossAdapterDataDpc@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C002D86C (-AllocateCrossAdapterDataDpc@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAU_VIDMM_GLOBAL.c)
 *     ?FreeCrossAdapterDataDpc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C002DC30 (-FreeCrossAdapterDataDpc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAU_VIDMM_GLOBAL_ALL.c)
 *     ?ReleaseReference@VIDMM_FLIP_QUEUE_REFERENCES@@QEAAXI@Z @ 0x1C002DFA8 (-ReleaseReference@VIDMM_FLIP_QUEUE_REFERENCES@@QEAAXI@Z.c)
 *     ?UncommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C007C408 (-UncommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?AdapterId@VIDMM_GLOBAL@@QEAAKXZ @ 0x1C0085A38 (-AdapterId@VIDMM_GLOBAL@@QEAAKXZ.c)
 *     ?CheckForCpuVisibleMemorySegment@VIDMM_GLOBAL@@IEAAEKK@Z @ 0x1C0086760 (-CheckForCpuVisibleMemorySegment@VIDMM_GLOBAL@@IEAAEKK@Z.c)
 *     ?VerifySupportedSegmentSetAndAdjustFlags@VIDMM_GLOBAL@@IEAAEKKPEAU_DXGK_ALLOCATIONINFOFLAGS_WDDM2_0@@_K1_NPEAU_VIDMM_VERIFY_SUPPORTED_SEGMENT@@@Z @ 0x1C008E370 (-VerifySupportedSegmentSetAndAdjustFlags@VIDMM_GLOBAL@@IEAAEKKPEAU_DXGK_ALLOCATIONINFOFLAGS_WDDM.c)
 *     ?CommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C008E60C (-CommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?VerifyBudgetGroups@VIDMM_GLOBAL@@IEAAEKKPEAVVIDMM_SEGMENT@@PEAU_VIDMM_VERIFY_BUDGET_GROUPS@@@Z @ 0x1C008EA7C (-VerifyBudgetGroups@VIDMM_GLOBAL@@IEAAEKKPEAVVIDMM_SEGMENT@@PEAU_VIDMM_VERIFY_BUDGET_GROUPS@@@Z.c)
 *     VidSchDestroySyncObject @ 0x1C0099880 (VidSchDestroySyncObject.c)
 *     VidSchCreateSyncObject @ 0x1C0099A90 (VidSchCreateSyncObject.c)
 *     GetBucketIdForAllocationSizePow2 @ 0x1C00A53DC (GetBucketIdForAllocationSizePow2.c)
 *     ?VerifySegmentSet@VIDMM_GLOBAL@@QEAAEKKKPEAK@Z @ 0x1C00A9AD4 (-VerifySegmentSet@VIDMM_GLOBAL@@QEAAEKKKPEAK@Z.c)
 *     ?AllocatePhysical@VIDMM_GLOBAL@@CAPEAX_KKPEAPEAX@Z @ 0x1C00D510C (-AllocatePhysical@VIDMM_GLOBAL@@CAPEAX_KKPEAPEAX@Z.c)
 *     ?DestroyCrossAdapterAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_CROSSADAPTER_ALLOC@@@Z @ 0x1C00D6148 (-DestroyCrossAdapterAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_CROSSADAPTER_ALLOC@@@Z.c)
 *     ?FreePhysical@VIDMM_GLOBAL@@CAXPEAX@Z @ 0x1C00D73CC (-FreePhysical@VIDMM_GLOBAL@@CAXPEAX@Z.c)
 *     ?VerifySegmentSetAtLeastOneInMask@VIDMM_GLOBAL@@QEAAEKKKPEAK@Z @ 0x1C00DBCDC (-VerifySegmentSetAtLeastOneInMask@VIDMM_GLOBAL@@QEAAEKKKPEAK@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::CreateOneAllocation(
        VIDMM_GLOBAL *a1,
        __int64 a2,
        unsigned int a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8,
        unsigned int a9,
        struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0::$5068715F5D8591D41DA1228877FDA04B::$63766B29C143116E9EC685C38896947D a10,
        char a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        int a15,
        unsigned __int8 a16,
        __int64 a17,
        unsigned __int8 a18,
        struct _VIDMM_CROSSADAPTER_ALLOC **a19,
        __int64 *a20)
{
  char v20; // r14
  unsigned int v22; // ebx
  VIDMM_GLOBAL *v25; // r15
  struct DXGPROCESS *Current; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  _QWORD *v36; // rax
  unsigned int v37; // r13d
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // r9
  _QWORD *v41; // rax
  __int64 v42; // rcx
  __int64 CurrentProcess; // rax
  int v45; // edi
  __int64 v46; // rcx
  __int64 v47; // rcx
  unsigned int i; // r8d
  int v49; // eax
  unsigned __int8 v50; // cl
  int v51; // eax
  unsigned int v52; // ebx
  int v53; // edx
  __int64 v54; // rcx
  __int64 v55; // rcx
  __int64 v56; // rcx
  __int64 v57; // rcx
  __int64 Value; // rbx
  __int64 v59; // rcx
  __int64 v60; // rcx
  int v61; // edi
  unsigned __int64 v62; // rax
  unsigned int v63; // r8d
  int v64; // r11d
  __int64 v65; // rdx
  __int64 v66; // r12
  unsigned int v67; // r9d
  unsigned int v68; // r10d
  int v69; // edx
  unsigned int v70; // edx
  UINT v71; // r12d
  __int64 v72; // rcx
  __int64 v73; // rcx
  __int64 v74; // rcx
  __int64 v75; // rcx
  UINT v76; // r9d
  __int64 v77; // rdx
  int v78; // r10d
  unsigned int v79; // r11d
  unsigned int v80; // r9d
  int v81; // edx
  __int64 v82; // rcx
  __int64 v83; // rcx
  unsigned int v84; // eax
  __int64 v85; // rcx
  __int64 v86; // rcx
  __int64 v87; // rcx
  __int64 v88; // rcx
  __int64 v89; // rcx
  __int64 v90; // rcx
  unsigned int v91; // ecx
  __int64 v92; // rcx
  unsigned int v93; // edx
  __int64 v94; // rcx
  int v95; // r9d
  __int64 v96; // rcx
  int v97; // r9d
  int v98; // eax
  unsigned int v99; // r12d
  int v100; // eax
  int v101; // edx
  __int64 v102; // rcx
  __int64 v103; // rcx
  __int64 v104; // rcx
  __int64 v105; // rcx
  __int64 v106; // rcx
  __int64 v107; // rcx
  __int64 v108; // rcx
  __int64 v109; // rcx
  __int64 v110; // rcx
  unsigned int v111; // edx
  __int64 v112; // rax
  __int64 v113; // r12
  _QWORD *v114; // rax
  __int64 v115; // rcx
  __int64 v116; // rax
  __int64 v117; // rax
  __int64 v118; // rcx
  __int64 v119; // r9
  int SyncObject; // r15d
  signed int v121; // ecx
  unsigned int v122; // edx
  unsigned __int64 v123; // r9
  __int64 v124; // r8
  __int64 v125; // rax
  bool v126; // zf
  __int64 v127; // rcx
  __int64 v128; // rax
  volatile signed __int32 *v129; // rcx
  int v130; // edx
  __int64 v131; // r10
  int v132; // eax
  struct _VIDMM_CROSSADAPTER_ALLOC *v133; // rax
  struct VIDMM_PARTITION *v134; // rax
  __int64 v135; // rax
  __int64 v136; // rdx
  __int64 v137; // rax
  unsigned __int64 v138; // r15
  __int64 v139; // rcx
  unsigned __int64 v140; // rcx
  __int64 v141; // r9
  int v142; // eax
  int v143; // r8d
  _DWORD *v144; // rax
  int v145; // ecx
  unsigned int v146; // ecx
  unsigned int v147; // r15d
  int v148; // eax
  unsigned int v149; // r15d
  __int64 v150; // rcx
  int v151; // eax
  __int64 v152; // rax
  __int64 v153; // rax
  __int64 v154; // rax
  VIDMM_GLOBAL *v155; // r11
  bool v156; // r8
  __int64 v157; // rcx
  unsigned int v158; // edx
  _DWORD *v159; // r10
  unsigned int v160; // edx
  unsigned __int64 v161; // rcx
  int v162; // eax
  int v164; // edx
  VIDMM_GLOBAL *v165; // rdi
  struct VIDMM_SEGMENT *v166; // r9
  unsigned int v167; // ecx
  unsigned __int8 v168; // r8
  unsigned int v169; // edx
  int v170; // ecx
  int v171; // eax
  unsigned __int64 v172; // rbx
  int v173; // ecx
  struct _VIDMM_CROSSADAPTER_ALLOC *v174; // rcx
  _QWORD *v175; // r15
  void *Physical; // rax
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  __int64 v178; // rcx
  unsigned int v179; // eax
  struct VIDMM_PARTITION *v180; // rcx
  __int64 BucketIdForAllocationSizePow2; // rdx
  int v182; // ecx
  int v183; // eax
  __int64 v184; // rcx
  __int64 v185; // r15
  __int16 v186; // r13
  unsigned int *v187; // rbx
  __int64 v188; // r8
  unsigned int v189; // r9d
  unsigned int v190; // r10d
  unsigned int v191; // r11d
  unsigned int v192; // eax
  unsigned int v193; // ebx
  unsigned __int64 v194; // r8
  __int64 v195; // r9
  unsigned __int64 v196; // r8
  __int64 v197; // rcx
  __int64 v198; // r8
  __int64 j; // rbx
  __int64 v200; // rax
  KSPIN_LOCK *v201; // rdx
  int v202; // ecx
  __int64 v203; // rdx
  struct _VIDMM_POOL_BLOCK *v204; // rcx
  __int64 v205; // rcx
  int v206; // [rsp+48h] [rbp-138h]
  int v207; // [rsp+60h] [rbp-120h]
  unsigned __int8 v208; // [rsp+100h] [rbp-80h]
  unsigned __int8 v209; // [rsp+101h] [rbp-7Fh]
  char v210; // [rsp+102h] [rbp-7Eh]
  _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0 v211; // [rsp+104h] [rbp-7Ch] BYREF
  unsigned int v212[2]; // [rsp+108h] [rbp-78h]
  unsigned int v213; // [rsp+110h] [rbp-70h]
  int v214; // [rsp+114h] [rbp-6Ch]
  unsigned __int64 v215; // [rsp+118h] [rbp-68h]
  int v216; // [rsp+120h] [rbp-60h] BYREF
  unsigned int v217; // [rsp+124h] [rbp-5Ch]
  unsigned __int64 v218; // [rsp+128h] [rbp-58h]
  struct _VIDMM_CROSSADAPTER_ALLOC *CurrentProcessId; // [rsp+130h] [rbp-50h]
  unsigned __int64 v220; // [rsp+138h] [rbp-48h]
  unsigned int v221; // [rsp+140h] [rbp-40h] BYREF
  int v222; // [rsp+144h] [rbp-3Ch] BYREF
  struct VIDMM_PARTITION *v223; // [rsp+148h] [rbp-38h]
  __int64 v224; // [rsp+150h] [rbp-30h]
  int v225[2]; // [rsp+160h] [rbp-20h] BYREF
  __int64 v226; // [rsp+168h] [rbp-18h]
  __int128 v227; // [rsp+170h] [rbp-10h]
  __int128 v228; // [rsp+180h] [rbp+0h]
  __int128 v229; // [rsp+190h] [rbp+10h]
  __int128 v230; // [rsp+1A0h] [rbp+20h]
  VIDMM_GLOBAL *v231; // [rsp+200h] [rbp+80h]
  unsigned __int8 v233; // [rsp+210h] [rbp+90h]
  unsigned int v234; // [rsp+210h] [rbp+90h]
  UINT v236; // [rsp+248h] [rbp+C8h]
  unsigned __int8 v237; // [rsp+248h] [rbp+C8h]
  char v238; // [rsp+248h] [rbp+C8h]
  int v239; // [rsp+250h] [rbp+D0h]

  v231 = a1;
  v20 = (char)a10;
  v22 = (unsigned int)a10;
  v211.0 = a10;
  v25 = a1;
  Current = DXGPROCESS::GetCurrent();
  v215 = (unsigned __int64)Current;
  if ( Current
    && (v28 = *((unsigned int *)Current + 106),
        v27 = *((_DWORD *)Current + 106) >> 8,
        (*((_DWORD *)Current + 106) & 0x100) != 0) )
  {
    v28 = (unsigned int)v28 >> 10;
    v210 = 1;
    if ( (v28 & 1) == 0 && !a17 && (*(_BYTE *)&a10 & 1) != 0 )
    {
      v22 = *(_DWORD *)&a10 & 0xFFFF7FFF;
      v211.0 = (struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0::$5068715F5D8591D41DA1228877FDA04B::$63766B29C143116E9EC685C38896947D)(*(_DWORD *)&a10 & 0xFFFF7FFF);
    }
  }
  else
  {
    v210 = 0;
  }
  v223 = *(struct VIDMM_PARTITION **)(*(_QWORD *)(a2 + 8) + 288LL);
  v31 = 0LL;
  if ( *((_DWORD *)v25 + 1754) != 1 )
    v31 = a3;
  *(_QWORD *)v212 = v31;
  v224 = *((_QWORD *)v25 + 5028) + 1584 * v31;
  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v28, v27, v29, v30) + 24) = a2;
    v36 = (_QWORD *)WdLogNewEntry5_WdTrace(v33, v32, v34, v35);
    v37 = a7;
    v36[4] = a6;
    v36[7] = a8;
    v36[3] = a4;
    v36[5] = 0LL;
    v36[6] = a7;
    v41 = (_QWORD *)WdLogNewEntry5_WdTrace(a8, v38, v39, v40);
    v41[4] = v22;
    v28 = a12;
    v41[5] = a12;
    v41[3] = a9;
  }
  else
  {
    v37 = a7;
  }
  *a20 = 0LL;
  if ( *((_DWORD *)v25 + 8) < 0x5023u && (v22 & 0x40000) != 0 )
  {
    WdLogSingleEntry1(1LL, 2672LL);
    DxgkLogInternalTriageEvent(v42, 0x40000LL);
    return 3221225485LL;
  }
  if ( (v22 & 0x20000) != 0 )
  {
    if ( (v22 & 2) != 0
      || (v22 & 4) != 0 && (v28 = *(unsigned int *)(*((_QWORD *)v25 + 3) + 436LL), (v28 & 8) == 0)
      || (v22 & 0x100000) != 0
      || (v22 & 0x80000) != 0
      || (v22 & 8) != 0
      || (v22 & 0x10) != 0
      || (v22 & 0x20) != 0 )
    {
      WdLogSingleEntry1(1LL, 2691LL);
      DxgkLogInternalTriageEvent(v47, 0x40000LL);
      return 3221225485LL;
    }
    v22 &= 0xFFFBFFFE;
    v211.0 = (struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0::$5068715F5D8591D41DA1228877FDA04B::$63766B29C143116E9EC685C38896947D)v22;
  }
  if ( (v22 & 1) == 0 || (LOBYTE(v214) = 1, (v22 & 0x40000) != 0) )
    LOBYTE(v214) = 0;
  if ( *((_BYTE *)v25 + 40176)
    || (CurrentProcess = PsGetCurrentProcess(v28, 0x20000LL, v29, v30), !PsGetProcessWow64Process(CurrentProcess)) )
  {
    if ( (v22 & 0x20000000) == 0
      && (v22 & 0x40000000) == 0
      && (v22 & 0x80000000) == 0
      && (v22 & 0x10000000) == 0
      && (v22 & 8) == 0
      && (v22 & 0x400000) == 0
      && (v22 & 0x20000) == 0
      && !a17 )
    {
      v22 &= ~0x40000u;
      LOBYTE(v214) = 1;
      v211.0 = (struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0::$5068715F5D8591D41DA1228877FDA04B::$63766B29C143116E9EC685C38896947D)v22;
    }
  }
  v45 = (v22 >> 13) & 1;
  if ( v45 && (*((_BYTE *)v25 + 40937) & 0x20) == 0 )
  {
    WdLogSingleEntry1(1LL, 2746LL);
    DxgkLogInternalTriageEvent(v46, 0x40000LL);
    return 3221225485LL;
  }
  for ( i = 0; i < 0x1E; i += 6 )
  {
    v49 = (a9 >> i) & 0x1F;
    if ( v49 )
    {
      v50 = v49 - 1;
      v51 = ~v37;
      if ( _bittest(&v51, v50) )
      {
        WdLogSingleEntry1(1LL, 2756LL);
        DxgkLogInternalTriageEvent(v54, 0x40000LL);
        return 3221225485LL;
      }
    }
  }
  if ( !dword_1C006E520 || (v22 & 1) != 0 )
  {
    v52 = v212[0];
  }
  else
  {
    v52 = v212[0];
    if ( (a9 & 0x1F) != 0 )
    {
      v53 = 1 << ((a9 & 0x1F) - 1);
      a7 = v53;
      goto LABEL_58;
    }
    v221 = 0;
    if ( !VIDMM_GLOBAL::VerifySegmentSetAtLeastOneInMask(v25, v212[0], a7, 0x1001u, &v221) )
    {
      v53 = v221;
      a7 = v221;
      goto LABEL_58;
    }
  }
  v53 = a7;
LABEL_58:
  if ( !a4 )
  {
    WdLogSingleEntry1(1LL, 2796LL);
    DxgkLogInternalTriageEvent(v55, 0x40000LL);
    return 3221225485LL;
  }
  if ( v45 && *(int *)(*(_QWORD *)(*((_QWORD *)v25 + 2) + 16LL) + 2692LL) < 2900 )
  {
    WdLogSingleEntry1(1LL, 2806LL);
    DxgkLogInternalTriageEvent(v56, 0x40000LL);
    return 3221225485LL;
  }
  v222 = 0;
  v216 = 0;
  if ( !VIDMM_GLOBAL::VerifySupportedSegmentSetAndAdjustFlags(
          v25,
          v52,
          v53,
          &v211,
          a4,
          a5,
          a17 != 0,
          (struct _VIDMM_VERIFY_SUPPORTED_SEGMENT *)&v216) )
  {
    WdLogSingleEntry1(1LL, 2818LL);
    DxgkLogInternalTriageEvent(v57, 0x40000LL);
    return 3221225485LL;
  }
  Value = v211.Value;
  if ( (v211.Value & 0x40000) != 0 )
  {
    if ( (*(_BYTE *)&v211.0 & 1) == 0 )
    {
      WdLogSingleEntry1(1LL, 2833LL);
      DxgkLogInternalTriageEvent(v59, 0x40000LL);
      return 3221225485LL;
    }
    if ( (*(_BYTE *)&v211.0 & 2) != 0 || (*(_BYTE *)&v211.0 & 0x20) != 0 || (*(_BYTE *)&v211.0 & 0x10) != 0 )
    {
      WdLogSingleEntry1(1LL, 2845LL);
      DxgkLogInternalTriageEvent(v60, 0x40000LL);
      return 3221225485LL;
    }
  }
  v61 = v216;
  v62 = 0LL;
  v63 = a8;
  if ( (v216 & 4) != 0 )
    v62 = a5;
  v220 = v62;
  if ( !a8 )
    goto LABEL_86;
  v64 = 0;
  v65 = *((_QWORD *)v25 + 5028);
  v66 = v65 + 1584LL * v212[0];
  v67 = *(_DWORD *)(v66 + 20);
  v68 = v67;
  if ( (~*(_DWORD *)(v65 + 16) & a8) != 0 )
    goto LABEL_90;
  v69 = 1;
  do
  {
    if ( (v63 & 1) != 0 && (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v25 + 464) + 8LL * v68) + 80LL) & 1) == 0 )
      v64 |= v69;
    v69 = __ROL4__(v69, 1);
    ++v68;
    v63 >>= 1;
  }
  while ( v63 );
  if ( v64 )
  {
LABEL_90:
    WdLogSingleEntry1(1LL, 2877LL);
    DxgkLogInternalTriageEvent(v74, 0x40000LL);
    return 3221225485LL;
  }
  v63 = a8;
  v70 = a8;
  if ( (~*(_DWORD *)(v66 + 16) & a8) != 0 )
  {
LABEL_86:
    v71 = (v211.Value >> 1) & 1;
    if ( v71 )
    {
      if ( (*(_BYTE *)&v211.0 & 1) == 0 )
      {
        WdLogSingleEntry1(1LL, 2910LL);
        DxgkLogInternalTriageEvent(v72, 0x40000LL);
        return 3221225485LL;
      }
      if ( (v211.Value & 0x20000000) != 0 || (v211.Value & 0x80000000) != 0 || (v211.Value & 0x40000000) != 0 )
      {
        WdLogSingleEntry1(1LL, 2923LL);
        DxgkLogInternalTriageEvent(v75, 0x40000LL);
        return 3221225485LL;
      }
    }
    v76 = (v211.Value >> 2) & 1;
    v236 = v76;
    if ( v76 && (v211.Value & 0x800000) == 0 )
    {
      if ( *((_BYTE *)v25 + 7089) )
      {
        v77 = *((_QWORD *)v25 + 5028);
        v78 = 0;
        v79 = v212[0];
        v80 = *(_DWORD *)(1584LL * v212[0] + v77 + 20);
        if ( (~*(_DWORD *)(v77 + 16) & a8) != 0 )
          goto LABEL_106;
        if ( a8 )
        {
          v81 = 1;
          do
          {
            if ( (v63 & 1) != 0 && (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v25 + 464) + 8LL * v80) + 80LL) & 0x10) == 0 )
              v78 |= v81;
            v81 = __ROL4__(v81, 1);
            ++v80;
            v63 >>= 1;
          }
          while ( v63 );
          if ( v78 )
          {
LABEL_106:
            WdLogSingleEntry1(1LL, 2956LL);
            DxgkLogInternalTriageEvent(v82, 0x40000LL);
            return 3221225485LL;
          }
        }
        v76 = v236;
LABEL_113:
        v84 = ((unsigned int)Value >> 29) & 1;
        if ( v84 && (v71 || (Value & 8) != 0 || (Value & 0x20) != 0 || (Value & 0x40000000) != 0) )
        {
          WdLogSingleEntry1(1LL, 2983LL);
          DxgkLogInternalTriageEvent(v85, 0x40000LL);
          return 3221225485LL;
        }
        v239 = a11 & 1;
        if ( v239 && ((v61 & 1) == 0 || !v84) )
        {
          WdLogSingleEntry1(1LL, 2992LL);
          DxgkLogInternalTriageEvent(v86, 0x40000LL);
          return 3221225485LL;
        }
        if ( (Value & 0x100000) != 0 && (!v84 || !a19 || (v61 & 1) == 0) )
        {
          WdLogSingleEntry1(1LL, 3004LL);
          DxgkLogInternalTriageEvent(v87, 0x40000LL);
          return 3221225485LL;
        }
        if ( a17 && (v71 || (Value & 0x100) != 0 || (Value & 0x200) != 0 || (Value & 0x40000000) != 0) )
        {
          WdLogSingleEntry1(1LL, 3024LL);
          DxgkLogInternalTriageEvent(v88, 0x40000LL);
          return 3221225485LL;
        }
        if ( (((unsigned int)Value >> 26) & 1) != 0 )
        {
          if ( (Value & 8) == 0 )
          {
            WdLogSingleEntry1(1LL, 3040LL);
            DxgkLogInternalTriageEvent(v89, 0x40000LL);
            return 3221225485LL;
          }
        }
        else if ( (Value & 8) == 0 )
        {
LABEL_148:
          v91 = ((unsigned int)Value >> 4) & 1;
          if ( v91 && (v71 || (Value & 0x20) != 0 || (int)Value < 0 || (Value & 0x40000000) != 0) )
          {
            WdLogSingleEntry1(1LL, 3095LL);
            DxgkLogInternalTriageEvent(v92, 0x40000LL);
            return 3221225485LL;
          }
          v93 = ((unsigned int)Value >> 5) & 1;
          if ( v93 && (v71 || v84 || v91 || (int)Value < 0 || (Value & 0x40000000) != 0) )
          {
            WdLogSingleEntry1(1LL, 3119LL);
            DxgkLogInternalTriageEvent(v94, 0x40000LL);
            return 3221225485LL;
          }
          if ( (int)Value >= 0 )
          {
            if ( (Value & 0x40000000) != 0 )
            {
              if ( v71
                || v76 && (v97 = *(_DWORD *)(*((_QWORD *)v25 + 3) + 436LL), (v97 & 0x10) == 0) && (v97 & 8) == 0
                || v91
                || v93 )
              {
                WdLogSingleEntry1(1LL, 3167LL);
                DxgkLogInternalTriageEvent(v103, 0x40000LL);
                return 3221225485LL;
              }
              if ( (*(_DWORD *)(*((_QWORD *)v25 + 3) + 2156LL) & 0x200) == 0 )
                Value = (unsigned int)Value | 1;
              v98 = (unsigned __int8)v214;
              if ( (Value & 1) != 0 )
                v98 = 1;
              LODWORD(Value) = Value | 0x20000000;
              v211.0 = (struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0::$5068715F5D8591D41DA1228877FDA04B::$63766B29C143116E9EC685C38896947D)Value;
              v214 = v98;
            }
          }
          else if ( v71
                 || v76 && (v95 = *(_DWORD *)(*((_QWORD *)v25 + 3) + 436LL), (v95 & 0x10) == 0) && (v95 & 8) == 0
                 || v91
                 || v93
                 || (Value & 0x40000000) != 0 )
          {
            WdLogSingleEntry1(1LL, 3143LL);
            DxgkLogInternalTriageEvent(v96, 0x40000LL);
            return 3221225485LL;
          }
          v99 = ((unsigned int)Value >> 28) & 1;
          if ( v99 )
          {
            v100 = Value & 0xEFFF7FBF;
            v101 = *(_DWORD *)(*((_QWORD *)v25 + 3) + 436LL);
            if ( (v101 & 8) != 0 || (v101 & 0x10) != 0 )
              v100 = Value & 0xEFFF7FBB;
            if ( v100 )
            {
              WdLogSingleEntry1(1LL, 3209LL);
              DxgkLogInternalTriageEvent(v102, 0x40000LL);
              return 3221225485LL;
            }
            if ( !VIDMM_GLOBAL::VerifySegmentSet(v25, v79, a8, 1u, 0LL) )
            {
              WdLogSingleEntry1(1LL, 3219LL);
              DxgkLogInternalTriageEvent(v104, 0x40000LL);
              return 3221225485LL;
            }
          }
          if ( (Value & 0x400000) != 0 )
          {
            if ( (Value & 0x20000000) == 0 )
            {
              WdLogSingleEntry1(1LL, 3235LL);
              DxgkLogInternalTriageEvent(v105, 0x40000LL);
              return 3221225485LL;
            }
            if ( !a13 )
            {
              WdLogSingleEntry1(1LL, 3245LL);
              DxgkLogInternalTriageEvent(v106, 0x40000LL);
              return 3221225485LL;
            }
          }
          if ( (Value & 0x4000) != 0 )
          {
            if ( (Value & 1) == 0 )
            {
              WdLogSingleEntry1(1LL, 3257LL);
              DxgkLogInternalTriageEvent(v107, 0x40000LL);
              return 3221225485LL;
            }
            if ( (Value & 2) != 0
              || (Value & 8) != 0
              || (Value & 0x10) != 0
              || (Value & 0x20) != 0
              || (Value & 0x40) != 0
              || (Value & 0x100) != 0
              || (Value & 0x200) != 0
              || (Value & 0x40000) != 0 )
            {
              goto LABEL_235;
            }
          }
          if ( a19 )
            CurrentProcessId = *a19;
          else
            CurrentProcessId = 0LL;
          if ( (Value & 0x1000) != 0 && (Value & 0x100000) == 0 )
          {
            WdLogSingleEntry1(1LL, 3284LL);
            DxgkLogInternalTriageEvent(v108, 0x40000LL);
            return 3221225485LL;
          }
          if ( (VIDMM_GLOBAL::_Config & 2) != 0
            && DXGPROCESS::GetCurrent()
            && (*((_DWORD *)DXGPROCESS::GetCurrent() + 106) & 4) != 0
            && !v99
            && (Value & 0x40000000) == 0 )
          {
            LODWORD(Value) = Value | 0x8000000;
            v211.0 = (struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0::$5068715F5D8591D41DA1228877FDA04B::$63766B29C143116E9EC685C38896947D)Value;
          }
          LOBYTE(v99) = 0;
          v233 = 0;
          v208 = 0;
          v209 = 0;
          v237 = 0;
          v217 = v99;
          if ( v210 && !a17 )
          {
            v208 = 1;
            if ( (Value & 0x10) != 0 )
            {
              v209 = 1;
            }
            else if ( (Value & 1) != 0 )
            {
              if ( (Value & 0x8000) != 0 && (*(_DWORD *)(v215 + 424) & 0x400) == 0 )
              {
                WdLogSingleEntry1(1LL, 3327LL);
                DxgkLogInternalTriageEvent(v109, 0x40000LL);
                return 3221225485LL;
              }
              v99 = *(_DWORD *)(v215 + 424) >> 10;
              LOBYTE(v99) = (*(_DWORD *)(v215 + 424) & 0x400) != 0;
              v217 = v99;
              v237 = v99 ^ 1;
              v233 = v99 ^ 1;
              if ( (Value & 0x20000000) != 0 )
              {
                v233 = 1;
                v237 = v99 ^ 1;
                v217 = v99;
              }
            }
          }
          Feature_Wddm30CpuVisible__private_IsEnabledPreCheck();
          if ( *((_DWORD *)v25 + 8) >= 0xF002u
            && (Value & 1) != 0
            && (v61 & 2) == 0
            && !a18
            && (Value & 0x40000000) == 0 )
          {
LABEL_235:
            WdLogSingleEntry1(1LL, Value);
            DxgkLogInternalTriageEvent(v110, 0x40000LL);
            return 3221225485LL;
          }
          if ( v208 )
          {
            v111 = 1630562646;
            if ( v209 | (unsigned __int8)(v237 | v99) )
            {
              v112 = operator new(576LL, 0x61306956u, 256LL);
              v113 = v112;
              if ( v112 )
              {
                *(_DWORD *)(v112 + 332) = 13;
                *(_QWORD *)(v112 + 304) = 0LL;
                *(_QWORD *)(v112 + 312) = 0LL;
                *(_QWORD *)(v112 + 320) = 0LL;
                *(_DWORD *)(v112 + 328) = 0;
                *(_QWORD *)(v112 + 368) = 0LL;
                *(_QWORD *)(v112 + 496) = 0LL;
                *(_DWORD *)(v112 + 336) = 64;
                v114 = (_QWORD *)(v112 + 168);
                goto LABEL_244;
              }
              goto LABEL_396;
            }
            v115 = 544LL;
          }
          else
          {
            v111 = 825256278;
            v115 = 536LL;
          }
          v116 = operator new(v115, v111, 256LL);
          v113 = v116;
          if ( v116 )
          {
            *(_QWORD *)(v116 + 304) = 0LL;
            *(_QWORD *)(v116 + 312) = 0LL;
            *(_QWORD *)(v116 + 320) = 0LL;
            *(_DWORD *)(v116 + 328) = 0;
            *(_QWORD *)(v116 + 368) = 0LL;
            *(_QWORD *)(v116 + 496) = 0LL;
            v114 = (_QWORD *)(v116 + 168);
            *(_DWORD *)(v113 + 336) = 64;
            *(_DWORD *)(v113 + 332) = 13;
LABEL_244:
            *v114 = v114;
            v114[1] = v114;
            *(_DWORD *)(v113 + 68) ^= (LOBYTE(v212[0]) ^ (unsigned __int8)*(_DWORD *)(v113 + 68)) & 0x3F;
            v117 = operator new(48LL, 0x32346956u, 64LL);
            *(_QWORD *)(v113 + 528) = v117;
            if ( !v117 )
            {
              _InterlockedIncrement(&dword_1C006E840);
              WdLogSingleEntry1(6LL, 3420LL);
LABEL_246:
              DxgkLogInternalTriageEvent(v118, 262145LL);
              SyncObject = -1073741801;
              goto LABEL_375;
            }
            if ( *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v25 + 2) + 632LL) + 57LL) )
            {
              if ( (Value & 0x40000000) != 0 || (int)Value < 0 )
              {
                *(_QWORD *)(*(_QWORD *)(v113 + 528) + 24LL) = operator new(168LL, 0x33306956u, 64LL);
                if ( *(_QWORD *)(*(_QWORD *)(v113 + 528) + 24LL) )
                {
                  v121 = 0;
                  v122 = 1000 * (v212[0] + 1);
                  v123 = 16LL;
                  v213 = 0;
                  v215 = 16LL;
                  LODWORD(v218) = v122;
                  while ( 1 )
                  {
                    v124 = (unsigned int)v121;
                    v225[1] = 128;
                    v125 = *(_QWORD *)(v113 + 528);
                    v227 = 0LL;
                    v126 = v121 == 1;
                    v226 = v121 * v122 + 100LL;
                    v127 = *(_QWORD *)(v125 + 24);
                    v228 = 0LL;
                    v229 = 0LL;
                    v230 = 0LL;
                    *(_QWORD *)(v123 + v127) = v226;
                    v128 = *(_QWORD *)(v113 + 528);
                    v225[0] = 5;
                    SyncObject = VidSchCreateSyncObject(
                                   *(_QWORD *)(*((_QWORD *)v25 + 2) + 632LL),
                                   0,
                                   (int)v225,
                                   (unsigned int)!v126 + 7,
                                   0LL,
                                   0LL,
                                   (PVOID)(*(_QWORD *)(v128 + 24) + 8 * v124),
                                   0LL);
                    if ( SyncObject < 0 )
                      goto LABEL_375;
                    v121 = v213 + 1;
                    v25 = v231;
                    v123 = v215 + 8;
                    v122 = v218;
                    v213 = v121;
                    v215 += 8LL;
                    if ( v121 >= 2 )
                      goto LABEL_261;
                  }
                }
                _InterlockedIncrement(&dword_1C006E72C);
                WdLogSingleEntry1(6LL, 3436LL);
                goto LABEL_246;
              }
            }
            else
            {
              *(_QWORD *)(*(_QWORD *)(v113 + 528) + 16LL) = operator new[](12LL, 0x33306956u, 64LL);
              v129 = *(volatile signed __int32 **)(*(_QWORD *)(v113 + 528) + 16LL);
              if ( !v129 )
              {
                _InterlockedIncrement(&dword_1C006E72C);
                WdLogSingleEntry1(6LL, 3488LL);
                goto LABEL_246;
              }
              _InterlockedIncrement(v129);
              LODWORD(Value) = v211;
              v61 = v216;
              v130 = 0;
              if ( (v211.Value & 0x100000) == 0 )
                v130 = -1;
              *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v113 + 528) + 16LL) + 4LL) = v130;
            }
LABEL_261:
            v131 = a12;
            if ( a12 )
            {
              v132 = *(_DWORD *)(a12 + 4);
              if ( (v132 & 0x8000) != 0 )
              {
                *(_DWORD *)(v113 + 68) |= 0x800u;
                v132 = *(_DWORD *)(a12 + 4);
              }
              if ( (v132 & 0x10000) != 0 )
              {
                *(_DWORD *)(v113 + 72) |= 0x400u;
                *(_DWORD *)(v113 + 68) |= 0x800000u;
                v132 = *(_DWORD *)(a12 + 4);
              }
              if ( (v132 & 0x8000000) != 0 )
                *(_DWORD *)(v113 + 68) |= 0x1000u;
            }
            v133 = CurrentProcessId;
            *(_QWORD *)(v113 + 512) = CurrentProcessId;
            if ( v133 )
            {
              _InterlockedIncrement((volatile signed __int32 *)v133);
              SyncObject = VIDMM_GLOBAL::AllocateCrossAdapterDataDpc(v25, v133, (struct _VIDMM_GLOBAL_ALLOC *)v113);
              if ( SyncObject < 0 )
                goto LABEL_375;
              LODWORD(Value) = v211;
              v61 = v216;
              v131 = a12;
            }
            v134 = v223;
            *(_QWORD *)v113 = a4;
            v126 = (*((_DWORD *)v134 + 18) & 1) == 0;
            v135 = 0xFFFFLL;
            if ( v126 )
              v135 = 4095LL;
            v136 = (unsigned int)v135;
            v137 = ~v135;
            v138 = v137 & (v136 + a4);
            v215 = v138;
            if ( a4 <= v138 )
            {
              v140 = v137 & (v136 + v220);
              v218 = v140;
              if ( v220 <= v140 )
              {
                if ( v138 <= 0xFFFF0000 || (*(_DWORD *)(v113 + 72) & 0x400) != 0 )
                {
                  v141 = ~(_DWORD)v136 & ((unsigned int)v136 + a6);
                  v213 = v141;
                  if ( a6 <= (unsigned int)v141 )
                  {
                    if ( v138 + v141 < v138 || v140 + v141 < v140 )
                    {
                      WdLogSingleEntry4(1LL, v138, v140, v138, (unsigned int)v141);
                      DxgkLogInternalTriageEvent(v213, 0x40000LL);
                      SyncObject = -1073741811;
                    }
                    else
                    {
                      if ( (Value & 0x10000000) != 0 )
                      {
                        LODWORD(Value) = Value | 8;
                        v211.0 = (struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0::$5068715F5D8591D41DA1228877FDA04B::$63766B29C143116E9EC685C38896947D)Value;
                      }
                      LODWORD(v218) = ((unsigned int)Value >> 12) & 1;
                      v142 = *(_DWORD *)(v113 + 72);
                      if ( (_DWORD)v218 )
                      {
                        v142 |= 0x100000u;
                        *(_DWORD *)(v113 + 72) = v142;
                      }
                      *(_QWORD *)(v113 + 376) = a13;
                      if ( (Value & 0x20000000) == 0 || (Value & 0x10) != 0 || (v142 & 0x100000) != 0 )
                        v143 = 0;
                      else
                        v143 = 0x40000;
                      *(_QWORD *)(v113 + 24) = v140;
                      *(_QWORD *)(v113 + 16) = v138;
                      *(_DWORD *)(v113 + 72) = v143 | v142 & 0xFFFBFFFF;
                      v144 = *(_DWORD **)(v113 + 528);
                      *(_QWORD *)(v113 + 8) = v138;
                      *(_DWORD *)(v113 + 32) = v141;
                      *(_DWORD *)(v113 + 144) = 0;
                      *v144 = Value;
                      v145 = *(_DWORD *)(v113 + 68) ^ (*(_DWORD *)(v113 + 68) ^ (v61 << 7)) & 0x80;
                      *(_DWORD *)(v113 + 56) = a8;
                      *(_DWORD *)(v113 + 60) = a7;
                      *(_DWORD *)(v113 + 64) = a9;
                      LODWORD(v144) = *(_DWORD *)(v113 + 72) & 0xFFFFFF7F;
                      v220 = ((unsigned __int8)v145 ^ (unsigned __int8)(32 * v61)) & 0x40 ^ (unsigned int)v145;
                      *(_DWORD *)(v113 + 68) = v220;
                      v146 = (unsigned int)v144 | ((unsigned __int8)v214 << 7);
                      *(_DWORD *)(v113 + 112) = 0;
                      *(_DWORD *)(v113 + 288) = 0;
                      *(_QWORD *)(v113 + 40) = v131;
                      v147 = v146 & 0xFFBE0FFF | (v233 << 16) & 0xFFBF0FFF | (v208 << 12) & 0xFFBF1FFF | (v209 << 15) & 0xFFBFFFFF | (v237 << 13) & 0xFFBFBFFF | ((unsigned __int8)v217 << 14) & 0xFFBFFFFF | (v239 << 22);
                      *(_DWORD *)(v113 + 72) = v147;
                      if ( !v131 || (v148 = 0x800000, (*(_DWORD *)(v131 + 4) & 0x10000000) == 0) )
                        v148 = 0;
                      v149 = v148 | v147 & 0xFF7FFFFF;
                      *(_DWORD *)(v113 + 72) = v149;
                      if ( v208 )
                      {
                        v150 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 32LL);
                        v151 = *(_DWORD *)(v150 + 424);
                        if ( (v151 & 0x100) != 0 )
                        {
                          v152 = *(_QWORD *)(v150 + 608);
                        }
                        else
                        {
                          v126 = (v151 & 0x80u) == 0;
                          v152 = 0LL;
                          if ( !v126 )
                            v152 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 32LL);
                        }
                        v153 = *(_QWORD *)(v152 + 64);
                        if ( v153 )
                          v154 = *(_QWORD *)(v153 + 8);
                        else
                          v154 = 0LL;
                        *(_QWORD *)(v113 + 536) = v154;
                      }
                      v155 = v231;
                      v156 = 0;
                      if ( (Value & 1) != 0 )
                        v156 = (*(_DWORD *)(*((_QWORD *)v231 + 3) + 436LL) & 8) != 0
                            || VIDMM_GLOBAL::CheckForCpuVisibleMemorySegment(v231, v212[0], a7)
                            || (v149 & 0x100000) != 0;
                      v157 = 1584 * (v220 & 0x3F);
                      v158 = v149 & 0xFFF7FFFF | (v156 << 19);
                      *(_DWORD *)(v113 + 72) = v158;
                      v159 = *(_DWORD **)(v157 + *((_QWORD *)v155 + 5028) + 440);
                      if ( (*((_DWORD *)v223 + 18) & 1) != 0 )
                      {
                        v160 = v158 | 0x100;
                      }
                      else
                      {
                        if ( dword_1C006E524
                          && (**(_DWORD **)(*((_QWORD *)v155 + 3) + 2696LL) & 0x4000) == 0
                          && (v61 & 2) != 0
                          && v159
                          && ((*v159 & 0x200) != 0 || dword_1C006E524 == 2)
                          && ((v161 = *(_QWORD *)(v113 + 8), !(_WORD)v161) || v161 > (unsigned int)dword_1C006E528)
                          && !v156 )
                        {
                          v162 = 256;
                        }
                        else
                        {
                          v162 = 0;
                        }
                        v160 = v162 | v149 & 0xFFF7FEFF | (v156 << 19);
                      }
                      *(_DWORD *)(v113 + 72) = v160;
                      if ( a12 )
                        a14 = *(_QWORD *)(a12 + 16);
                      *(_QWORD *)(*(_QWORD *)(v113 + 528) + 40LL) = a14;
                      SyncObject = VIDMM_GLOBAL::CommitGlobalBackingStore(v155, (struct _VIDMM_GLOBAL_ALLOC *)v113);
                      if ( SyncObject >= 0 )
                      {
                        if ( (Value & 0x4000) != 0 )
                          *(_DWORD *)(v113 + 72) |= 0x20u;
                        if ( (*(_BYTE *)(v224 + 436) & 3) != 0 )
                        {
                          v164 = 1 << (*(_WORD *)(v224 + 28) - *(_BYTE *)(v224 + 20));
                          *(_DWORD *)(v113 + 56) |= v164;
                          if ( (v61 & 2) != 0 && (Value & 0x8000) == 0 )
                            *(_DWORD *)(v113 + 60) |= v164;
                        }
                        v165 = v231;
                        *(_QWORD *)(v113 + 104) = a17;
                        v166 = 0LL;
                        v167 = *(_DWORD *)(v113 + 68) & 0xEFFFFFFF | (a17 != 0 ? 0x10000000 : 0);
                        *(_DWORD *)(v113 + 68) = v167 ^ (v167 ^ (a16 << 29)) & 0x20000000;
                        *(_DWORD *)(v113 + 392) = a15;
                        *(_QWORD *)(v113 + 280) = v113 + 272;
                        *(_QWORD *)(v113 + 272) = v113 + 272;
                        *(_QWORD *)(v113 + 488) = -1LL;
                        v168 = (*(_DWORD *)(v113 + 68) & 0x80) != 0;
                        if ( a9 )
                        {
                          if ( (a9 & 0x1F) != 0 )
                          {
                            v166 = *(struct VIDMM_SEGMENT **)(*((_QWORD *)v231 + 464)
                                                            + 8LL
                                                            * ((a9 & 0x1F)
                                                             + *(_DWORD *)(1584LL * v212[0]
                                                                         + *((_QWORD *)v231 + 5028)
                                                                         + 20)
                                                             - 1));
                            v168 = *((_BYTE *)v166 + 80);
                          }
                          else if ( ((a9 >> 6) & 0x1F) != 0 )
                          {
                            v166 = *(struct VIDMM_SEGMENT **)(*((_QWORD *)v231 + 464)
                                                            + 8LL
                                                            * (((a9 >> 6) & 0x1F)
                                                             + *(_DWORD *)(1584LL * v212[0]
                                                                         + *((_QWORD *)v231 + 5028)
                                                                         + 20)
                                                             - 1));
                          }
                        }
                        v169 = v212[0];
                        *(_DWORD *)(v113 + 68) ^= ((unsigned __int16)*(_DWORD *)(v113 + 68) ^ (unsigned __int16)(v168 << 10)) & 0x400;
                        if ( !VIDMM_GLOBAL::VerifyBudgetGroups(
                                v231,
                                v169,
                                a7,
                                v166,
                                (struct _VIDMM_VERIFY_BUDGET_GROUPS *)&v222) )
                          return 3221225485LL;
                        v170 = *(_DWORD *)(v113 + 68) ^ (*(_DWORD *)(v113 + 68) ^ (v222 << 13)) & 0x1E0000;
                        v171 = v170 ^ (v170 ^ (v222 << 13)) & 0x1E000;
                        *(_DWORD *)(v113 + 68) = v171;
                        if ( (Value & 0x10) != 0 || (Value & 0x20) != 0 )
                          *(_BYTE *)(v113 + 82) = 1;
                        v172 = v215;
                        v173 = v171 ^ ((unsigned __int16)v171 ^ (unsigned __int16)(a18 << 8)) & 0x100;
                        v126 = (_DWORD)v218 == 0;
                        *(_DWORD *)(v113 + 68) = v173;
                        if ( !v126 )
                        {
                          v174 = CurrentProcessId;
                          v175 = (_QWORD *)((char *)CurrentProcessId + 48);
                          if ( !*((_QWORD *)CurrentProcessId + 6) )
                          {
                            Physical = VIDMM_GLOBAL::AllocatePhysical(v172, v213, (void **)CurrentProcessId + 6);
                            v174 = CurrentProcessId;
                            *((_QWORD *)CurrentProcessId + 7) = Physical;
                            if ( !*v175 )
                            {
                              SyncObject = -1073741801;
                              goto LABEL_376;
                            }
                          }
                          PhysicalAddress = MmGetPhysicalAddress(*((PVOID *)v174 + 7));
                          *((PHYSICAL_ADDRESS *)CurrentProcessId + 8) = PhysicalAddress;
                          v173 = *(_DWORD *)(v113 + 68);
                        }
                        if ( (v173 & 0x40) == 0
                          || (SyncObject = SysMmAllocateLogicalMemory(
                                             *(struct SYSMM_ADAPTER **)(*((_QWORD *)v231 + 3) + 224LL),
                                             v172,
                                             (const void *)v113,
                                             (void **)(v113 + 520)),
                              SyncObject >= 0) )
                        {
                          v179 = VIDMM_GLOBAL::AdapterId(v231);
                          v180 = v223;
                          *(_QWORD *)(v113 + 504) = *((_QWORD *)v223 + 5) + 376LL * v179;
                          VidMmiReferencePartition(v180);
                          BucketIdForAllocationSizePow2 = **(unsigned int **)(v113 + 528);
                          if ( (BucketIdForAllocationSizePow2 & 0x2003A) != 0
                            || (v182 = *(_DWORD *)(v113 + 72), (v182 & 0x2000) != 0)
                            || (*(_DWORD *)(v113 + 68) & 0x100) != 0
                            || (v182 & 0x400) != 0
                            || (BucketIdForAllocationSizePow2 & 0x40000000) != 0 )
                          {
                            v182 = *(_DWORD *)(v113 + 72);
                            v183 = 0;
                          }
                          else
                          {
                            v183 = 0x20000;
                          }
                          v184 = v183 | v182 & 0xFFFDFFFF;
                          v126 = bTracingEnabled == 0;
                          *(_DWORD *)(v113 + 72) = v184;
                          if ( !v126 )
                          {
                            v185 = *(_QWORD *)(v113 + 40);
                            v186 = *(_WORD *)(v113 + 68) & 0x3F;
                            v224 = *(_QWORD *)(v113 + 376);
                            v187 = v185 ? *(unsigned int **)(v185 + 24) : 0LL;
                            v220 = *((_QWORD *)v231 + 3);
                            v223 = *(struct VIDMM_PARTITION **)(a2 + 24);
                            CurrentProcessId = (struct _VIDMM_CROSSADAPTER_ALLOC *)PsGetCurrentProcessId();
                            LOBYTE(v231) = 0;
                            v184 = 0LL;
                            LOBYTE(v234) = 0;
                            BucketIdForAllocationSizePow2 = 0LL;
                            v238 = 0;
                            v188 = 0LL;
                            LOBYTE(v189) = 0;
                            LOBYTE(v190) = 0;
                            LOBYTE(v191) = 0;
                            if ( v187 )
                            {
                              v184 = *v187;
                              BucketIdForAllocationSizePow2 = v187[1];
                              v188 = v187[2];
                              v189 = v187[3];
                              v190 = v187[4];
                              v191 = v187[5];
                              LODWORD(v231) = v187[6];
                              v234 = v187[7];
                              v192 = v187[8];
                              v193 = v187[9];
                              v238 = v192;
                            }
                            else
                            {
                              LOBYTE(v193) = 0;
                            }
                            if ( (byte_1C006E941 & 8) != 0 )
                              McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtpht_EtwWriteTransfer(
                                v184,
                                (__int64)&EventCreateAdapterAllocation,
                                v188,
                                (__int64)CurrentProcessId,
                                (char)v223,
                                v220,
                                v20,
                                v215,
                                v213,
                                v206,
                                a7,
                                a9,
                                v207,
                                a8,
                                a15,
                                v113,
                                v185,
                                0,
                                v184,
                                BucketIdForAllocationSizePow2,
                                v188,
                                v189,
                                v190,
                                v191,
                                (char)v231,
                                v234,
                                v238,
                                v193,
                                0,
                                v224,
                                v186,
                                a18);
                          }
                          v194 = v215;
                          ++*((_DWORD *)v165 + 1912);
                          *((_QWORD *)v165 + 957) += v194;
                          *((_QWORD *)v165 + 5024) += v194;
                          v195 = *(_QWORD *)(a2 + 16);
                          if ( v195 )
                          {
                            BucketIdForAllocationSizePow2 = (unsigned int)GetBucketIdForAllocationSizePow2(
                                                                            v194,
                                                                            BucketIdForAllocationSizePow2,
                                                                            v194);
                            v194 = _InterlockedExchangeAdd64(
                                     (volatile signed __int64 *)(v195 + 8 * BucketIdForAllocationSizePow2 + 528),
                                     v196);
                            _InterlockedIncrement((volatile signed __int32 *)(v195
                                                                            + 4 * BucketIdForAllocationSizePow2
                                                                            + 704));
                            *(_BYTE *)(v195 + 792) = 1;
                          }
                          if ( g_IsInternalReleaseOrDbg )
                            *(_QWORD *)(WdLogNewEntry5_WdTrace(v184, BucketIdForAllocationSizePow2, v194, v195) + 24) = v113;
                          *a20 = v113;
                          return 0LL;
                        }
                        WdLogSingleEntry1(1LL, v113);
                        DxgkLogInternalTriageEvent(v178, 0x40000LL);
LABEL_376:
                        if ( (*(_DWORD *)(v113 + 76) & 0x20) != 0 )
                          VIDMM_GLOBAL::UncommitGlobalBackingStore(v165, (struct _VIDMM_GLOBAL_ALLOC *)v113, 1LL, v119);
                        v197 = *(_QWORD *)(v113 + 528);
                        if ( v197 )
                        {
                          if ( *(_QWORD *)(v197 + 24) )
                          {
                            v198 = *(_QWORD *)(v113 + 528);
                            for ( j = 0LL; j < 16; j += 8LL )
                            {
                              v200 = *(_QWORD *)(v197 + 24);
                              if ( *(_QWORD *)(j + v200) )
                              {
                                VidSchDestroySyncObject(*(PVOID *)(j + v200));
                                v197 = *(_QWORD *)(v113 + 528);
                                v198 = v197;
                              }
                            }
                            operator delete(*(void **)(v198 + 24));
                            v197 = *(_QWORD *)(v113 + 528);
                          }
                          if ( *(_QWORD *)(v197 + 16) )
                          {
                            VIDMM_FLIP_QUEUE_REFERENCES::ReleaseReference(*(int **)(v197 + 16));
                            v197 = *(_QWORD *)(v113 + 528);
                          }
                          operator delete((void *)v197);
                        }
                        v201 = *(KSPIN_LOCK **)(v113 + 512);
                        if ( v201 )
                        {
                          VIDMM_GLOBAL::FreeCrossAdapterDataDpc(
                            (VIDMM_GLOBAL *)v197,
                            v201,
                            (struct _VIDMM_GLOBAL_ALLOC *)v113);
                          v202 = _InterlockedDecrement(*(volatile signed __int32 **)(v113 + 512));
                          if ( !v202 )
                          {
                            v203 = *(_QWORD *)(v113 + 512);
                            v204 = *(struct _VIDMM_POOL_BLOCK **)(v203 + 48);
                            if ( v204 )
                            {
                              VIDMM_GLOBAL::FreePhysical(v204);
                              v203 = *(_QWORD *)(v113 + 512);
                            }
                            VIDMM_GLOBAL::DestroyCrossAdapterAllocation(v204, (struct _VIDMM_CROSSADAPTER_ALLOC *)v203);
                            *a19 = 0LL;
                            _VIDMM_GLOBAL_ALLOC::`scalar deleting destructor'((_VIDMM_GLOBAL_ALLOC *)v113);
                            return (unsigned int)SyncObject;
                          }
                          if ( v202 < 0 )
                            WdLogSingleEntry5(0LL, 270LL, 66LL, *(_QWORD *)(v113 + 512), **(int **)(v113 + 512), 0LL);
                        }
                        _VIDMM_GLOBAL_ALLOC::`scalar deleting destructor'((_VIDMM_GLOBAL_ALLOC *)v113);
                        return (unsigned int)SyncObject;
                      }
                    }
LABEL_375:
                    v165 = v231;
                    goto LABEL_376;
                  }
                  WdLogSingleEntry1(1LL, a6);
                }
                else
                {
                  WdLogSingleEntry1(1LL, 3584LL);
                }
              }
              else
              {
                WdLogSingleEntry1(1LL, v220);
              }
            }
            else
            {
              WdLogSingleEntry1(1LL, a4);
            }
            DxgkLogInternalTriageEvent(v139, 0x40000LL);
            SyncObject = -1073741811;
            goto LABEL_375;
          }
LABEL_396:
          _InterlockedIncrement(&dword_1C006E734);
          WdLogSingleEntry1(6LL, 3406LL);
          DxgkLogInternalTriageEvent(v205, 262145LL);
          return 3221225495LL;
        }
        if ( (Value & 1) != 0 && (((unsigned int)Value >> 26) & 1) == 0 && !a17
          || v71
          || v84
          || (Value & 0x10) != 0
          || (Value & 0x20) != 0
          || (int)Value < 0
          || (Value & 0x40000000) != 0 )
        {
          WdLogSingleEntry1(1LL, 3073LL);
          DxgkLogInternalTriageEvent(v90, 0x40000LL);
          return 3221225485LL;
        }
        goto LABEL_148;
      }
      if ( (*(_DWORD *)(*((_QWORD *)v25 + 3) + 436LL) & 8) == 0 )
      {
        if ( !VIDMM_GLOBAL::VerifySegmentSet(v25, v212[0], v63, 1u, 0LL) )
        {
          WdLogSingleEntry1(1LL, 2963LL);
          DxgkLogInternalTriageEvent(v83, 0x40000LL);
          return 3221225485LL;
        }
        v76 = v236;
      }
    }
    v79 = v212[0];
    goto LABEL_113;
  }
  while ( (v70 & 1) == 0 || (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v25 + 464) + 8LL * v67) + 80LL) & 0x20) == 0 )
  {
    ++v67;
    v70 >>= 1;
    if ( !v70 )
      goto LABEL_86;
  }
  WdLogSingleEntry1(1LL, 2892LL);
  DxgkLogInternalTriageEvent(v73, 0x40000LL);
  return 3221225485LL;
}
