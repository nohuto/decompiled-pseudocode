/*
 * XREFs of ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@U_DXGK_ALLOCATIONINFOFLAGS2@@PEAVDXGADAPTERALLOCATION@@PEAX6KE6PEAVVIDMM_PAGE_TABLE_BASE@@PEAPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00A7EB0
 * Callers:
 *     ?CreateVidMmObjects@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@II@Z @ 0x1C009AFBC (-CreateVidMmObjects@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@II@Z.c)
 *     ?CreateAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_SEGMENTBANKPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@U_DXGK_ALLOCATIONINFOFLAGS2@@KPEAVDXGADAPTERALLOCATION@@PEAXPEAPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAPEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x1C00A6984 (-CreateAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXG.c)
 *     ?CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@@PEAVDXGCONTEXT@@PEAX_KKKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_SEGMENTBANKPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAPEAU_VIDMM_CONTEXT_ALLOC@@@Z @ 0x1C00B1DA4 (-CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@.c)
 *     ?AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z @ 0x1C00B3198 (-AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0005500 (--3@YAXPEAX@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0005F38 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0005F60 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0005FB8 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?SysMmAllocateLogicalMemory@@YAJPEAUSYSMM_ADAPTER@@_KPEBXPEAPEAX@Z @ 0x1C0005FF0 (-SysMmAllocateLogicalMemory@@YAJPEAUSYSMM_ADAPTER@@_KPEBXPEAPEAX@Z.c)
 *     ?VidMmiReferencePartition@@YAXPEAUVIDMM_PARTITION@@@Z @ 0x1C0006014 (-VidMmiReferencePartition@@YAXPEAUVIDMM_PARTITION@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C00199AC (DxgkLogInternalTriageEvent.c)
 *     Feature_Wddm30CpuVisible__private_ReportDeviceUsage @ 0x1C0019B58 (Feature_Wddm30CpuVisible__private_ReportDeviceUsage.c)
 *     ??_G_VIDMM_GLOBAL_ALLOC@@QEAAPEAXI@Z @ 0x1C002D810 (--_G_VIDMM_GLOBAL_ALLOC@@QEAAPEAXI@Z.c)
 *     ?AllocateCrossAdapterDataDpc@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C002D9B8 (-AllocateCrossAdapterDataDpc@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAU_VIDMM_GLOBAL.c)
 *     ?FreeCrossAdapterDataDpc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C002DDAC (-FreeCrossAdapterDataDpc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAU_VIDMM_GLOBAL_ALL.c)
 *     ?ReleaseReference@VIDMM_FLIP_QUEUE_REFERENCES@@QEAAXI@Z @ 0x1C002E118 (-ReleaseReference@VIDMM_FLIP_QUEUE_REFERENCES@@QEAAXI@Z.c)
 *     McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtpht_EtwWriteTransfer @ 0x1C002E5BC (McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtpht_EtwWriteTransfer.c)
 *     VidSchDestroySyncObject @ 0x1C008CB20 (VidSchDestroySyncObject.c)
 *     VidSchCreateSyncObject @ 0x1C008CCC0 (VidSchCreateSyncObject.c)
 *     ?UncommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C009CB7C (-UncommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?CommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00AAA50 (-CommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?VerifySupportedSegmentSetAndAdjustFlags@VIDMM_GLOBAL@@IEAAEKKPEAU_DXGK_ALLOCATIONINFOFLAGS_WDDM2_0@@_K1_NPEAU_VIDMM_VERIFY_SUPPORTED_SEGMENT@@@Z @ 0x1C00AAC60 (-VerifySupportedSegmentSetAndAdjustFlags@VIDMM_GLOBAL@@IEAAEKKPEAU_DXGK_ALLOCATIONINFOFLAGS_WDDM.c)
 *     ?VerifySegmentSet@VIDMM_GLOBAL@@QEAAEKKKPEAK@Z @ 0x1C00B39E8 (-VerifySegmentSet@VIDMM_GLOBAL@@QEAAEKKKPEAK@Z.c)
 *     ?AdapterId@VIDMM_GLOBAL@@QEAAKXZ @ 0x1C00B3C44 (-AdapterId@VIDMM_GLOBAL@@QEAAKXZ.c)
 *     ?VerifySegmentSetAny@VIDMM_GLOBAL@@IEAAEKKK@Z @ 0x1C00C3F86 (-VerifySegmentSetAny@VIDMM_GLOBAL@@IEAAEKKK@Z.c)
 *     ?AllocatePhysical@VIDMM_GLOBAL@@CAPEAX_KKPEAPEAX@Z @ 0x1C00E036C (-AllocatePhysical@VIDMM_GLOBAL@@CAPEAX_KKPEAPEAX@Z.c)
 *     ?DestroyCrossAdapterAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_CROSSADAPTER_ALLOC@@@Z @ 0x1C00E1700 (-DestroyCrossAdapterAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_CROSSADAPTER_ALLOC@@@Z.c)
 *     ?FreePhysical@VIDMM_GLOBAL@@CAXPEAX@Z @ 0x1C00E387C (-FreePhysical@VIDMM_GLOBAL@@CAXPEAX@Z.c)
 *     ?VerifySegmentSetAtLeastOneInMask@VIDMM_GLOBAL@@QEAAEKKKPEAK@Z @ 0x1C00E9BD0 (-VerifySegmentSetAtLeastOneInMask@VIDMM_GLOBAL@@QEAAEKKKPEAK@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VIDMM_GLOBAL::CreateOneAllocation(
        __int64 a1,
        _QWORD *a2,
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
        __int64 a18,
        struct _VIDMM_CROSSADAPTER_ALLOC **a19,
        _QWORD *a20)
{
  char v20; // r14
  unsigned int v22; // ebx
  struct DXGPROCESS *Current; // rax
  __int64 v26; // r9
  __int64 v27; // r8
  int v28; // edx
  unsigned int v29; // r15d
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rcx
  _QWORD *v33; // rax
  _QWORD *v34; // rax
  __int64 v35; // rcx
  __int64 CurrentProcess; // rax
  int v38; // edi
  __int64 v39; // rcx
  __int64 v40; // rcx
  unsigned int i; // r8d
  int v42; // eax
  unsigned __int8 v43; // cl
  int v44; // eax
  unsigned int v45; // ebx
  int v46; // edx
  __int64 v47; // rcx
  __int64 v48; // rcx
  __int64 v49; // rcx
  __int64 v50; // rcx
  __int64 Value; // rbx
  __int64 v52; // rcx
  __int64 v53; // rcx
  int v54; // edi
  __int64 *v55; // rax
  unsigned int v56; // r11d
  __int64 v57; // rcx
  __int64 v58; // rcx
  unsigned int v59; // edx
  __int64 v60; // rcx
  __int64 v61; // rcx
  unsigned int v62; // r10d
  __int64 v63; // rax
  unsigned int v64; // r8d
  int v65; // r10d
  unsigned int v66; // r9d
  int v67; // edx
  __int64 v68; // rcx
  __int64 v69; // rcx
  unsigned int v70; // eax
  __int64 v71; // rcx
  __int64 v72; // rcx
  struct _VIDMM_CROSSADAPTER_ALLOC **v73; // r11
  __int64 v74; // rcx
  __int64 v75; // rcx
  __int64 v76; // rcx
  __int64 v77; // rcx
  unsigned int v78; // ecx
  __int64 v79; // rcx
  unsigned int v80; // r8d
  __int64 v81; // rcx
  int v82; // r10d
  __int64 v83; // rcx
  int v84; // edx
  int v85; // eax
  int v86; // eax
  int v87; // edx
  __int64 v88; // rcx
  __int64 v89; // rcx
  __int64 v90; // rcx
  __int64 v91; // rcx
  __int64 v92; // rcx
  __int64 v93; // rcx
  __int64 v94; // rcx
  __int64 v95; // rcx
  int v96; // eax
  __int64 v97; // rcx
  __int64 v98; // rax
  char *v99; // rdx
  __int64 v100; // rax
  _QWORD *v101; // rax
  char *v102; // r12
  __int64 v103; // rcx
  __int64 v104; // rax
  _QWORD *v105; // rax
  unsigned int v106; // eax
  __int64 v107; // rax
  __int64 v108; // rcx
  int SyncObject; // r12d
  VIDMM_GLOBAL *v110; // r9
  __int64 v111; // rax
  void **v112; // r9
  unsigned __int64 v113; // r8
  unsigned int v114; // ecx
  signed int v115; // r10d
  _QWORD *v116; // rax
  __int64 v117; // rax
  void **v118; // r8
  volatile signed __int32 *v119; // rcx
  int v120; // edx
  int *v121; // rcx
  struct _VIDMM_CROSSADAPTER_ALLOC *v122; // rax
  struct VIDMM_PARTITION *v123; // rax
  __int64 v124; // rax
  __int64 v125; // r8
  __int64 v126; // rax
  unsigned __int64 v127; // rcx
  __int64 v128; // rcx
  __int64 *v129; // rdx
  unsigned int *v130; // r9
  __int64 v131; // r10
  unsigned int v132; // eax
  int v133; // r8d
  void **v134; // rax
  int v135; // r10d
  _DWORD *v136; // rax
  int *v137; // rdx
  int v138; // ecx
  int v139; // ecx
  __int64 *v140; // rcx
  unsigned int v141; // r10d
  int v142; // eax
  unsigned int v143; // r10d
  __int64 v144; // rcx
  int v145; // eax
  __int64 v146; // rax
  __int64 v147; // rax
  __int64 v148; // rax
  unsigned __int8 v149; // r11
  __int64 v150; // rax
  unsigned int v151; // edx
  unsigned int v152; // r9d
  int v153; // eax
  unsigned int v154; // edx
  __int64 v155; // rcx
  unsigned int v156; // edx
  int v157; // eax
  int v159; // edx
  char *v160; // rdi
  _DWORD *v161; // r10
  __int64 v162; // r12
  unsigned int v163; // ecx
  unsigned __int8 v164; // r8
  __int64 v165; // rcx
  int v166; // eax
  unsigned int v167; // r9d
  unsigned int v168; // edx
  unsigned int v169; // r10d
  unsigned int v170; // r8d
  unsigned __int8 v171; // r11
  unsigned __int8 v172; // dl
  int v173; // eax
  bool v174; // zf
  _QWORD *v175; // rax
  unsigned int v176; // r8d
  unsigned int v177; // edx
  int v178; // eax
  int v179; // r11d
  int v180; // r8d
  __int64 v181; // rcx
  unsigned int *v182; // rdx
  int v183; // eax
  __int64 v184; // r8
  bool v185; // cf
  unsigned __int64 v186; // rbx
  struct _VIDMM_CROSSADAPTER_ALLOC *v187; // rcx
  void *Physical; // rax
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  __int64 v190; // rcx
  unsigned int v191; // eax
  struct VIDMM_PARTITION *v192; // rcx
  int *v193; // r8
  int v194; // edx
  int v195; // ecx
  __int64 v196; // r13
  int *v197; // rbx
  _DWORD *CurrentProcessId; // rax
  int v199; // ecx
  int v200; // edx
  __int64 v201; // r8
  int v202; // r9d
  int v203; // r10d
  int v204; // r11d
  int v205; // eax
  int v206; // ebx
  unsigned __int64 v207; // rcx
  __int64 v208; // r8
  int v209; // edx
  void **v210; // rsi
  void **v211; // rcx
  __int64 j; // rbx
  char *v213; // rax
  __int64 v214; // rdx
  int *v215; // rcx
  KSPIN_LOCK *v216; // rdx
  int v217; // ecx
  struct _VIDMM_POOL_BLOCK *v218; // rcx
  int *v219; // r9
  __int64 v220; // rdx
  int v221; // [rsp+48h] [rbp-138h]
  int v222; // [rsp+60h] [rbp-120h]
  unsigned __int8 v223; // [rsp+100h] [rbp-80h]
  unsigned __int8 v224; // [rsp+101h] [rbp-7Fh]
  unsigned int v225; // [rsp+104h] [rbp-7Ch]
  char *P; // [rsp+108h] [rbp-78h]
  _BYTE *Pa; // [rsp+108h] [rbp-78h]
  char v228; // [rsp+110h] [rbp-70h]
  _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0 v229; // [rsp+114h] [rbp-6Ch] BYREF
  unsigned int v230[2]; // [rsp+118h] [rbp-68h]
  __int64 v231; // [rsp+120h] [rbp-60h]
  int v232; // [rsp+128h] [rbp-58h]
  unsigned int v233; // [rsp+12Ch] [rbp-54h]
  int v234; // [rsp+130h] [rbp-50h]
  int v235; // [rsp+134h] [rbp-4Ch] BYREF
  unsigned __int64 v236; // [rsp+138h] [rbp-48h]
  int *v237; // [rsp+140h] [rbp-40h]
  void **v238; // [rsp+148h] [rbp-38h]
  _DWORD *v239; // [rsp+150h] [rbp-30h]
  __int64 v240; // [rsp+158h] [rbp-28h]
  __int64 *v241; // [rsp+160h] [rbp-20h]
  unsigned int v242; // [rsp+168h] [rbp-18h] BYREF
  struct _VIDMM_CROSSADAPTER_ALLOC *v243; // [rsp+170h] [rbp-10h]
  _DWORD *v244; // [rsp+178h] [rbp-8h]
  __int64 *v245; // [rsp+180h] [rbp+0h]
  struct VIDMM_PARTITION *v246; // [rsp+188h] [rbp+8h]
  _QWORD *v247; // [rsp+190h] [rbp+10h]
  __int64 v248; // [rsp+198h] [rbp+18h]
  int v249[2]; // [rsp+1A0h] [rbp+20h] BYREF
  __int64 v250; // [rsp+1A8h] [rbp+28h]
  __int128 v251; // [rsp+1B0h] [rbp+30h]
  __int128 v252; // [rsp+1C0h] [rbp+40h]
  __int128 v253; // [rsp+1D0h] [rbp+50h]
  __int128 v254; // [rsp+1E0h] [rbp+60h]
  int v256; // [rsp+240h] [rbp+C0h]
  unsigned __int8 v258; // [rsp+250h] [rbp+D0h]
  int v259; // [rsp+250h] [rbp+D0h]
  char v260; // [rsp+250h] [rbp+D0h]
  unsigned int v262; // [rsp+288h] [rbp+108h]
  unsigned int v263; // [rsp+288h] [rbp+108h]
  unsigned __int8 v264; // [rsp+288h] [rbp+108h]
  int v265; // [rsp+288h] [rbp+108h]
  __int16 v266; // [rsp+288h] [rbp+108h]
  int v267; // [rsp+290h] [rbp+110h]
  int v268; // [rsp+2C8h] [rbp+148h]

  v20 = (char)a10;
  v22 = (unsigned int)a10;
  v229.0 = a10;
  Current = DXGPROCESS::GetCurrent();
  v27 = a17;
  v231 = (__int64)Current;
  if ( Current && (v28 = *((_DWORD *)Current + 106), (v28 & 0x100) != 0) )
  {
    v228 = 1;
    if ( (v28 & 0x400) == 0 && !a17 && (*(_BYTE *)&a10 & 1) != 0 )
    {
      v22 = *(_DWORD *)&a10 & 0xFFFF7FFF;
      v229.0 = (struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0::$5068715F5D8591D41DA1228877FDA04B::$63766B29C143116E9EC685C38896947D)(*(_DWORD *)&a10 & 0xFFFF7FFF);
    }
  }
  else
  {
    v228 = 0;
  }
  v29 = 0;
  v174 = *(_DWORD *)(a1 + 7016) == 1;
  v30 = *(_QWORD *)(a1 + 40224);
  v246 = *(struct VIDMM_PARTITION **)(a2[1] + 288LL);
  v31 = 0LL;
  if ( !v174 )
    v31 = a3;
  v225 = a7;
  v32 = 1616 * v31;
  *(_QWORD *)v230 = v31;
  v240 = 1616 * v31;
  v248 = 1616 * v31 + v30;
  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v32) + 24) = a2;
    v33 = (_QWORD *)WdLogNewEntry5_WdTrace(a2);
    v33[3] = a4;
    v33[4] = a6;
    v33[7] = a8;
    v33[5] = 0LL;
    v33[6] = a7;
    v34 = (_QWORD *)WdLogNewEntry5_WdTrace(a8);
    v32 = v22;
    v34[3] = a9;
    v34[4] = v22;
    v34[5] = a12;
  }
  *a20 = 0LL;
  if ( *(_DWORD *)(a1 + 32) < 0x5023u && (v22 & 0x40000) != 0 )
  {
    WdLogSingleEntry1(1LL, 2690LL);
    DxgkLogInternalTriageEvent(v35, 0x40000LL);
    return 3221225485LL;
  }
  if ( (v22 & 0x20000) != 0 )
  {
    if ( (v22 & 2) != 0
      || (v22 & 4) != 0 && (v32 = *(unsigned int *)(*(_QWORD *)(a1 + 24) + 436LL), (v32 & 8) == 0)
      || (v22 & 0x100000) != 0
      || (v22 & 0x80000) != 0
      || (v22 & 8) != 0
      || (v22 & 0x10) != 0
      || (v22 & 0x20) != 0 )
    {
      WdLogSingleEntry1(1LL, 2709LL);
      DxgkLogInternalTriageEvent(v40, 0x40000LL);
      return 3221225485LL;
    }
    v22 &= 0xFFFBFFFE;
    v229.0 = (struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0::$5068715F5D8591D41DA1228877FDA04B::$63766B29C143116E9EC685C38896947D)v22;
  }
  if ( (v22 & 1) == 0 || (LOBYTE(v234) = 1, (v22 & 0x40000) != 0) )
    LOBYTE(v234) = 0;
  if ( *(_BYTE *)(a1 + 40176)
    || (CurrentProcess = PsGetCurrentProcess(v32, 0x20000LL, v27, v26), !PsGetProcessWow64Process(CurrentProcess)) )
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
      LOBYTE(v234) = 1;
      v229.0 = (struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0::$5068715F5D8591D41DA1228877FDA04B::$63766B29C143116E9EC685C38896947D)v22;
    }
  }
  v38 = (v22 >> 13) & 1;
  if ( v38 && *(char *)(a1 + 40937) >= 0 )
  {
    WdLogSingleEntry1(1LL, 2764LL);
    DxgkLogInternalTriageEvent(v39, 0x40000LL);
    return 3221225485LL;
  }
  for ( i = 0; i < 0x1E; i += 6 )
  {
    v42 = (a9 >> i) & 0x1F;
    if ( v42 )
    {
      v43 = v42 - 1;
      v44 = ~a7;
      if ( _bittest(&v44, v43) )
      {
        WdLogSingleEntry1(1LL, 2774LL);
        DxgkLogInternalTriageEvent(v47, 0x40000LL);
        return 3221225485LL;
      }
    }
  }
  if ( dword_1C0076560 )
  {
    v174 = (v22 & 1) == 0;
    v45 = v230[0];
    if ( v174 )
    {
      if ( (a9 & 0x1F) != 0 )
      {
        v46 = 1 << ((a9 & 0x1F) - 1);
        v225 = v46;
        goto LABEL_56;
      }
      v242 = 0;
      if ( !VIDMM_GLOBAL::VerifySegmentSetAtLeastOneInMask((VIDMM_GLOBAL *)a1, v230[0], a7, 0x1001u, &v242) )
      {
        v46 = v242;
        v225 = v242;
        goto LABEL_56;
      }
    }
  }
  else
  {
    v45 = v230[0];
  }
  v46 = a7;
LABEL_56:
  if ( !a4 )
  {
    WdLogSingleEntry1(1LL, 2814LL);
    DxgkLogInternalTriageEvent(v48, 0x40000LL);
    return 3221225485LL;
  }
  if ( v38 && *(int *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL) + 2820LL) < 2900 )
  {
    WdLogSingleEntry1(1LL, 2824LL);
    DxgkLogInternalTriageEvent(v49, 0x40000LL);
    return 3221225485LL;
  }
  v235 = 0;
  if ( !VIDMM_GLOBAL::VerifySupportedSegmentSetAndAdjustFlags(
          (VIDMM_GLOBAL *)a1,
          v45,
          v46,
          &v229,
          a4,
          a5,
          a17 != 0,
          (struct _VIDMM_VERIFY_SUPPORTED_SEGMENT *)&v235) )
  {
    WdLogSingleEntry1(1LL, 2836LL);
    DxgkLogInternalTriageEvent(v50, 0x40000LL);
    return 3221225485LL;
  }
  Value = v229.Value;
  if ( (v229.Value & 0x40000) != 0 )
  {
    if ( (*(_BYTE *)&v229.0 & 1) == 0 )
    {
      WdLogSingleEntry1(1LL, 2851LL);
      DxgkLogInternalTriageEvent(v52, 0x40000LL);
      return 3221225485LL;
    }
    if ( (*(_BYTE *)&v229.0 & 2) != 0 || (*(_BYTE *)&v229.0 & 0x20) != 0 || (*(_BYTE *)&v229.0 & 0x10) != 0 )
    {
      WdLogSingleEntry1(1LL, 2863LL);
      DxgkLogInternalTriageEvent(v53, 0x40000LL);
      return 3221225485LL;
    }
  }
  v54 = v235;
  v55 = 0LL;
  v56 = a8;
  if ( (v235 & 4) != 0 )
    v55 = (__int64 *)a5;
  v241 = v55;
  if ( a8 )
  {
    if ( !VIDMM_GLOBAL::VerifySegmentSet((VIDMM_GLOBAL *)a1, v230[0], a8, 1u, 0LL) )
    {
      WdLogSingleEntry1(1LL, 2895LL);
      DxgkLogInternalTriageEvent(v57, 0x40000LL);
      return 3221225485LL;
    }
    if ( VIDMM_GLOBAL::VerifySegmentSetAny((VIDMM_GLOBAL *)a1, v230[0], a8, 0x20u) )
    {
      WdLogSingleEntry1(1LL, 2910LL);
      DxgkLogInternalTriageEvent(v58, 0x40000LL);
      return 3221225485LL;
    }
    v56 = a8;
  }
  v59 = ((unsigned int)Value >> 1) & 1;
  if ( v59 )
  {
    if ( (Value & 1) == 0 )
    {
      WdLogSingleEntry1(1LL, 2928LL);
      DxgkLogInternalTriageEvent(v60, 0x40000LL);
      return 3221225485LL;
    }
    if ( (Value & 0x20000000) != 0 || (int)Value < 0 || (Value & 0x40000000) != 0 )
    {
      WdLogSingleEntry1(1LL, 2941LL);
      DxgkLogInternalTriageEvent(v61, 0x40000LL);
      return 3221225485LL;
    }
  }
  v62 = ((unsigned int)Value >> 2) & 1;
  v262 = v62;
  if ( v62 && (Value & 0x800000) == 0 )
  {
    if ( *(_BYTE *)(a1 + 7089) )
    {
      v63 = *(_QWORD *)(a1 + 40224);
      v64 = v56;
      v65 = 0;
      v66 = *(_DWORD *)(v63 + v240 + 28);
      if ( (~*(_DWORD *)(v63 + 24) & v56) != 0 )
      {
LABEL_96:
        WdLogSingleEntry1(1LL, 2974LL);
        DxgkLogInternalTriageEvent(v68, 0x40000LL);
        return 3221225485LL;
      }
      if ( !v56 )
        goto LABEL_101;
      v67 = 1;
      do
      {
        if ( (v64 & 1) != 0 && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 3712) + 8LL * v66) + 80LL) & 0x10) == 0 )
          v65 |= v67;
        v67 = __ROL4__(v67, 1);
        ++v66;
        v64 >>= 1;
      }
      while ( v64 );
      if ( v65 )
        goto LABEL_96;
LABEL_100:
      v59 = ((unsigned int)Value >> 1) & 1;
LABEL_101:
      v62 = v262;
      goto LABEL_102;
    }
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 24) + 436LL) & 8) == 0 )
    {
      if ( !VIDMM_GLOBAL::VerifySegmentSet((VIDMM_GLOBAL *)a1, v230[0], v56, 1u, 0LL) )
      {
        WdLogSingleEntry1(1LL, 2981LL);
        DxgkLogInternalTriageEvent(v69, 0x40000LL);
        return 3221225485LL;
      }
      goto LABEL_100;
    }
  }
LABEL_102:
  v70 = ((unsigned int)Value >> 29) & 1;
  if ( v70 && (v59 || (Value & 8) != 0 || (Value & 0x20) != 0 || (Value & 0x40000000) != 0) )
  {
    WdLogSingleEntry1(1LL, 3001LL);
    DxgkLogInternalTriageEvent(v71, 0x40000LL);
    return 3221225485LL;
  }
  v267 = a11 & 1;
  if ( v267 && ((v54 & 1) == 0 || !v70) )
  {
    WdLogSingleEntry1(1LL, 3010LL);
    DxgkLogInternalTriageEvent(v72, 0x40000LL);
    return 3221225485LL;
  }
  v73 = a19;
  if ( (Value & 0x100000) != 0 && (!v70 || !a19 || (v54 & 1) == 0) )
  {
    WdLogSingleEntry1(1LL, 3022LL);
    DxgkLogInternalTriageEvent(v74, 0x40000LL);
    return 3221225485LL;
  }
  if ( a17 && (v59 || (Value & 0x100) != 0 || (Value & 0x200) != 0 || (Value & 0x40000000) != 0) )
  {
    WdLogSingleEntry1(1LL, 3042LL);
    DxgkLogInternalTriageEvent(v75, 0x40000LL);
    return 3221225485LL;
  }
  if ( (((unsigned int)Value >> 26) & 1) != 0 )
  {
    if ( (Value & 8) == 0 )
    {
      WdLogSingleEntry1(1LL, 3058LL);
      DxgkLogInternalTriageEvent(v76, 0x40000LL);
      return 3221225485LL;
    }
LABEL_127:
    if ( (Value & 1) != 0 && (((unsigned int)Value >> 26) & 1) == 0 && !a17
      || v59
      || v70
      || (Value & 0x10) != 0
      || (Value & 0x20) != 0
      || (int)Value < 0
      || (Value & 0x40000000) != 0 )
    {
      WdLogSingleEntry1(1LL, 3091LL);
      DxgkLogInternalTriageEvent(v77, 0x40000LL);
      return 3221225485LL;
    }
    goto LABEL_137;
  }
  if ( (Value & 8) != 0 )
    goto LABEL_127;
LABEL_137:
  v78 = ((unsigned int)Value >> 4) & 1;
  if ( v78 && (v59 || (Value & 0x20) != 0 || (int)Value < 0 || (Value & 0x40000000) != 0) )
  {
    WdLogSingleEntry1(1LL, 3113LL);
    DxgkLogInternalTriageEvent(v79, 0x40000LL);
    return 3221225485LL;
  }
  v80 = ((unsigned int)Value >> 5) & 1;
  if ( v80 && (v59 || v70 || v78 || (int)Value < 0 || (Value & 0x40000000) != 0) )
  {
    WdLogSingleEntry1(1LL, 3137LL);
    DxgkLogInternalTriageEvent(v81, 0x40000LL);
    return 3221225485LL;
  }
  if ( (int)Value >= 0 )
  {
    if ( (Value & 0x40000000) != 0 )
    {
      if ( v59
        || v62 && (v84 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 436LL), (v84 & 0x10) == 0) && (v84 & 8) == 0
        || v78
        || v80 )
      {
        WdLogSingleEntry1(1LL, 3185LL);
        DxgkLogInternalTriageEvent(v89, 0x40000LL);
        return 3221225485LL;
      }
      if ( (*(_DWORD *)(*(_QWORD *)(a1 + 24) + 2284LL) & 0x200) == 0 )
        Value = (unsigned int)Value | 1;
      v85 = (unsigned __int8)v234;
      if ( (Value & 1) != 0 )
        v85 = 1;
      LODWORD(Value) = Value | 0x20000000;
      v229.0 = (struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0::$5068715F5D8591D41DA1228877FDA04B::$63766B29C143116E9EC685C38896947D)Value;
      v234 = v85;
    }
  }
  else if ( v59
         || v62 && (v82 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 436LL), (v82 & 0x10) == 0) && (v82 & 8) == 0
         || v78
         || v80
         || (Value & 0x40000000) != 0 )
  {
    WdLogSingleEntry1(1LL, 3161LL);
    DxgkLogInternalTriageEvent(v83, 0x40000LL);
    return 3221225485LL;
  }
  v263 = ((unsigned int)Value >> 28) & 1;
  if ( v263 )
  {
    v86 = Value & 0xEFFF7FBF;
    v87 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 436LL);
    if ( (v87 & 8) != 0 || (v87 & 0x10) != 0 )
      v86 = Value & 0xEFFF7FBB;
    if ( v86 )
    {
      WdLogSingleEntry1(1LL, 3227LL);
      DxgkLogInternalTriageEvent(v88, 0x40000LL);
      return 3221225485LL;
    }
    if ( !VIDMM_GLOBAL::VerifySegmentSet((VIDMM_GLOBAL *)a1, v230[0], a8, 1u, 0LL) )
    {
      WdLogSingleEntry1(1LL, 3237LL);
      DxgkLogInternalTriageEvent(v90, 0x40000LL);
      return 3221225485LL;
    }
    v73 = a19;
  }
  if ( (Value & 0x400000) != 0 )
  {
    if ( (Value & 0x20000000) == 0 )
    {
      WdLogSingleEntry1(1LL, 3253LL);
      DxgkLogInternalTriageEvent(v91, 0x40000LL);
      return 3221225485LL;
    }
    if ( !a13 )
    {
      WdLogSingleEntry1(1LL, 3263LL);
      DxgkLogInternalTriageEvent(v92, 0x40000LL);
      return 3221225485LL;
    }
  }
  if ( (Value & 0x4000) != 0 )
  {
    if ( (Value & 1) == 0 )
    {
      WdLogSingleEntry1(1LL, 3275LL);
      DxgkLogInternalTriageEvent(v93, 0x40000LL);
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
      goto LABEL_225;
    }
  }
  if ( v73 )
    v243 = *v73;
  else
    v243 = 0LL;
  if ( (Value & 0x1000) != 0 && (Value & 0x100000) == 0 )
  {
    WdLogSingleEntry1(1LL, 3302LL);
    DxgkLogInternalTriageEvent(v94, 0x40000LL);
    return 3221225485LL;
  }
  if ( (VIDMM_GLOBAL::_Config & 2) != 0
    && DXGPROCESS::GetCurrent()
    && (*((_DWORD *)DXGPROCESS::GetCurrent() + 106) & 4) != 0
    && !v263
    && (Value & 0x40000000) == 0 )
  {
    LODWORD(Value) = Value | 0x8000000;
    v229.0 = (struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0::$5068715F5D8591D41DA1228877FDA04B::$63766B29C143116E9EC685C38896947D)Value;
  }
  v258 = 0;
  v223 = 0;
  v224 = 0;
  v264 = 0;
  LOBYTE(v232) = 0;
  if ( v228 && !a17 )
  {
    v223 = 1;
    if ( (Value & 0x10) != 0 )
    {
      v224 = 1;
    }
    else if ( (Value & 1) != 0 )
    {
      if ( (Value & 0x8000) != 0 && (*(_DWORD *)(v231 + 424) & 0x400) == 0 )
      {
        WdLogSingleEntry1(1LL, 3345LL);
        DxgkLogInternalTriageEvent(v95, 0x40000LL);
        return 3221225485LL;
      }
      v96 = *(_DWORD *)(v231 + 424) >> 10;
      LOBYTE(v96) = (*(_DWORD *)(v231 + 424) & 0x400) != 0;
      v232 = v96;
      v264 = v96 ^ 1;
      v258 = v96 ^ 1;
      if ( (Value & 0x20000000) != 0 )
      {
        v258 = 1;
        v264 = v96 ^ 1;
        v232 = v96;
      }
    }
  }
  Feature_Wddm30CpuVisible__private_ReportDeviceUsage();
  if ( *(_DWORD *)(a1 + 32) >= 0xF002u && (Value & 1) != 0 && (v54 & 2) == 0 && !a18 && (Value & 0x40000000) == 0 )
  {
LABEL_225:
    WdLogSingleEntry1(1LL, Value);
    DxgkLogInternalTriageEvent(v97, 0x40000LL);
    return 3221225485LL;
  }
  if ( !v223 )
  {
    v104 = operator new(544LL, 0x31306956u, 256LL);
    P = (char *)v104;
    v102 = (char *)v104;
    if ( !v104 )
      goto LABEL_234;
    *(_QWORD *)(v104 + 304) = 0LL;
    *(_QWORD *)(v104 + 312) = 0LL;
    *(_QWORD *)(v104 + 320) = 0LL;
    *(_DWORD *)(v104 + 328) = 0;
    *(_DWORD *)(v104 + 332) = 13;
    *(_DWORD *)(v104 + 336) = 66;
    *(_QWORD *)(v104 + 368) = 0LL;
    *(_QWORD *)(v104 + 376) = 0LL;
    *(_QWORD *)(v104 + 504) = 0LL;
    v105 = (_QWORD *)(v104 + 168);
    v231 = (__int64)v102;
    v105[1] = v105;
    *v105 = v105;
    goto LABEL_237;
  }
  if ( v224 | (unsigned __int8)(v264 | v232) )
  {
    v98 = operator new(592LL, 0x61306956u, 256LL);
    v231 = v98;
    v99 = (char *)v98;
    if ( v98 )
    {
      *(_QWORD *)(v98 + 304) = 0LL;
      *(_QWORD *)(v98 + 176) = v98 + 168;
      *(_QWORD *)(v98 + 168) = v98 + 168;
      *(_QWORD *)(v98 + 312) = 0LL;
      *(_QWORD *)(v98 + 320) = 0LL;
      *(_DWORD *)(v98 + 328) = 0;
      *(_DWORD *)(v98 + 332) = 13;
      *(_DWORD *)(v98 + 336) = 66;
      *(_QWORD *)(v98 + 368) = 0LL;
      *(_QWORD *)(v98 + 376) = 0LL;
      *(_QWORD *)(v98 + 504) = 0LL;
      goto LABEL_233;
    }
  }
  else
  {
    v100 = operator new(552LL, 0x61306956u, 256LL);
    v231 = v100;
    v99 = (char *)v100;
    if ( v100 )
    {
      *(_QWORD *)(v100 + 304) = 0LL;
      *(_QWORD *)(v100 + 312) = 0LL;
      *(_QWORD *)(v100 + 320) = 0LL;
      *(_DWORD *)(v100 + 328) = 0;
      *(_DWORD *)(v100 + 332) = 13;
      *(_DWORD *)(v100 + 336) = 66;
      *(_QWORD *)(v100 + 368) = 0LL;
      *(_QWORD *)(v100 + 376) = 0LL;
      *(_QWORD *)(v100 + 504) = 0LL;
      v101 = (_QWORD *)(v100 + 168);
      v101[1] = v101;
      *v101 = v101;
      goto LABEL_233;
    }
  }
  v99 = 0LL;
  v231 = 0LL;
LABEL_233:
  P = v99;
  v102 = v99;
  if ( !v99 )
  {
LABEL_234:
    _InterlockedIncrement(&dword_1C0076784);
    WdLogSingleEntry1(6LL, 3424LL);
    DxgkLogInternalTriageEvent(v103, 262145LL);
    return 3221225495LL;
  }
LABEL_237:
  v106 = (*((_DWORD *)v102 + 17) ^ v230[0]) & 0x3F;
  v237 = (int *)(v102 + 68);
  *((_DWORD *)v102 + 17) ^= v106;
  v107 = operator new(48LL, 0x32346956u, 64LL);
  v238 = (void **)(v102 + 536);
  *((_QWORD *)v102 + 67) = v107;
  if ( !v107 )
  {
    _InterlockedIncrement(&dword_1C0076890);
    WdLogSingleEntry1(6LL, 3438LL);
LABEL_239:
    DxgkLogInternalTriageEvent(v108, 262145LL);
    SyncObject = -1073741801;
LABEL_413:
    v160 = P;
LABEL_414:
    if ( (*((_DWORD *)v160 + 19) & 0x20) != 0 )
      VIDMM_GLOBAL::UncommitGlobalBackingStore((VIDMM_GLOBAL *)a1, (struct _VIDMM_GLOBAL_ALLOC *)v160, 1);
    v210 = v238;
    v211 = (void **)*v238;
    if ( *v238 )
    {
      if ( v211[3] )
      {
        for ( j = 0LL; j < 16; j += 8LL )
        {
          v213 = (char *)v211[3];
          v214 = *(_QWORD *)&v213[j];
          if ( v214 )
          {
            VidSchDestroySyncObject(*(_VIDSCH_SYNC_OBJECT **)&v213[j], v214);
            v211 = (void **)*v210;
          }
        }
        operator delete(v211[3]);
      }
      v215 = (int *)*((_QWORD *)*v210 + 2);
      if ( v215 )
        VIDMM_FLIP_QUEUE_REFERENCES::ReleaseReference(v215);
      operator delete(*v210);
    }
    v216 = (KSPIN_LOCK *)*((_QWORD *)v160 + 65);
    if ( v216 )
    {
      VIDMM_GLOBAL::FreeCrossAdapterDataDpc((VIDMM_GLOBAL *)v211, v216, (struct _VIDMM_GLOBAL_ALLOC *)v160);
      v217 = _InterlockedDecrement(*((volatile signed __int32 **)v160 + 65));
      if ( !v217 )
      {
        v218 = *(struct _VIDMM_POOL_BLOCK **)(*((_QWORD *)v160 + 65) + 48LL);
        if ( v218 )
          VIDMM_GLOBAL::FreePhysical(v218);
        VIDMM_GLOBAL::DestroyCrossAdapterAllocation(v218, *((struct _VIDMM_CROSSADAPTER_ALLOC **)v160 + 65));
        *a19 = 0LL;
        _VIDMM_GLOBAL_ALLOC::`scalar deleting destructor'((_VIDMM_GLOBAL_ALLOC *)v160);
        return (unsigned int)SyncObject;
      }
      if ( v217 < 0 )
      {
        v219 = (int *)*((_QWORD *)v160 + 65);
        v220 = *v219;
        g_DxgMmsBugcheckExportIndex = 1;
        WdLogSingleEntry5(0LL, 270LL, 66LL, v219, v220, 0LL);
      }
    }
    _VIDMM_GLOBAL_ALLOC::`scalar deleting destructor'((_VIDMM_GLOBAL_ALLOC *)v160);
    return (unsigned int)SyncObject;
  }
  v110 = (VIDMM_GLOBAL *)a1;
  if ( !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 744LL) + 57LL) || (Value & 0x80000) != 0 )
  {
    v117 = operator new[](12LL, 0x33306956u, 64LL);
    v118 = v238;
    *((_QWORD *)*v238 + 2) = v117;
    v119 = (volatile signed __int32 *)*((_QWORD *)*v118 + 2);
    if ( !v119 )
    {
      _InterlockedIncrement(&dword_1C007677C);
      WdLogSingleEntry1(6LL, 3506LL);
      goto LABEL_239;
    }
    _InterlockedIncrement(v119);
    LODWORD(Value) = v229;
    v54 = v235;
    v120 = 0;
    if ( (v229.Value & 0x100000) == 0 )
      v120 = -1;
    *(_DWORD *)(*((_QWORD *)*v118 + 2) + 4LL) = v120;
LABEL_255:
    v110 = (VIDMM_GLOBAL *)a1;
  }
  else if ( (Value & 0x40000000) != 0 || (int)Value < 0 )
  {
    v111 = operator new(168LL, 0x33306956u, 64LL);
    v112 = v238;
    *((_QWORD *)*v238 + 3) = v111;
    if ( *((_QWORD *)*v112 + 3) )
    {
      v113 = 16LL;
      v233 = 0;
      v114 = 1000 * (v230[0] + 1);
      v115 = 0;
      v236 = 16LL;
      v230[0] = v114;
      while ( 1 )
      {
        v251 = 0LL;
        v252 = 0LL;
        v253 = 0LL;
        v249[1] = 128;
        v116 = *v112;
        v250 = v115 * v114 + 100LL;
        v254 = 0LL;
        v249[0] = 5;
        *(_QWORD *)(v113 + v116[3]) = v250;
        SyncObject = VidSchCreateSyncObject(
                       *(_QWORD *)(*(_QWORD *)(a1 + 16) + 744LL),
                       0LL,
                       v249,
                       (unsigned int)(v115 != 1) + 7,
                       0LL,
                       0LL,
                       (__int64 *)(*((_QWORD *)*v112 + 3) + 8LL * v115),
                       0LL);
        if ( SyncObject < 0 )
          goto LABEL_413;
        v115 = v233 + 1;
        v114 = v230[0];
        v113 = v236 + 8;
        v112 = v238;
        v233 = v115;
        v236 += 8LL;
        if ( v115 >= 2 )
        {
          v102 = P;
          goto LABEL_255;
        }
      }
    }
    _InterlockedIncrement(&dword_1C007677C);
    WdLogSingleEntry1(6LL, 3454LL);
    goto LABEL_239;
  }
  if ( a12 )
  {
    v121 = v237;
    if ( (*(_DWORD *)(a12 + 4) & 0x8000) != 0 )
      *v237 |= 0x800u;
    if ( (*(_DWORD *)(a12 + 4) & 0x10000) != 0 )
    {
      *((_DWORD *)v102 + 18) |= 0x400u;
      *v121 |= 0x800000u;
    }
    if ( (*(_DWORD *)(a12 + 4) & 0x8000000) != 0 )
      *v121 |= 0x1000u;
  }
  v122 = v243;
  *((_QWORD *)v102 + 65) = v243;
  if ( v122 )
  {
    _InterlockedIncrement((volatile signed __int32 *)v122);
    SyncObject = VIDMM_GLOBAL::AllocateCrossAdapterDataDpc(v110, v122, (struct _VIDMM_GLOBAL_ALLOC *)v102);
    if ( SyncObject < 0 )
      goto LABEL_413;
    LODWORD(Value) = v229;
    v54 = v235;
    v102 = P;
  }
  v123 = v246;
  *(_QWORD *)v102 = a4;
  v174 = (*((_DWORD *)v123 + 18) & 1) == 0;
  v124 = 0xFFFFLL;
  if ( v174 )
    v124 = 4095LL;
  v125 = (unsigned int)v124;
  v126 = ~v124;
  v127 = v126 & (v125 + a4);
  v236 = v127;
  if ( a4 > v127 )
  {
    WdLogSingleEntry1(1LL, a4);
    v128 = a4;
LABEL_412:
    DxgkLogInternalTriageEvent(v128, 0x40000LL);
    SyncObject = -1073741811;
    goto LABEL_413;
  }
  v129 = (__int64 *)(v126 & ((unsigned __int64)v241 + v125));
  v245 = v129;
  if ( v241 > v129 )
  {
    WdLogSingleEntry1(1LL, v241);
    goto LABEL_412;
  }
  if ( v127 <= 0xFFFF0000 )
  {
    v130 = (unsigned int *)(v231 + 72);
    *(_QWORD *)v230 = v231 + 72;
  }
  else
  {
    v174 = (*((_DWORD *)v102 + 18) & 0x400) == 0;
    v130 = (unsigned int *)(v102 + 72);
    *(_QWORD *)v230 = v102 + 72;
    if ( v174 )
    {
      WdLogSingleEntry1(1LL, 3602LL);
      goto LABEL_412;
    }
  }
  v131 = ~(_DWORD)v125 & ((unsigned int)v125 + a6);
  v233 = v131;
  if ( a6 > (unsigned int)v131 )
  {
    WdLogSingleEntry1(1LL, a6);
    goto LABEL_412;
  }
  if ( v127 + v131 < v127 || (__int64 *)((char *)v129 + v131) < v129 )
  {
    WdLogSingleEntry4(1LL, v127, v129, v127, (unsigned int)v131);
    v128 = (__int64)v245;
    goto LABEL_412;
  }
  if ( (Value & 0x10000000) != 0 )
  {
    LODWORD(Value) = Value | 8;
    v229.0 = (struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0::$5068715F5D8591D41DA1228877FDA04B::$63766B29C143116E9EC685C38896947D)Value;
  }
  v132 = *v130;
  if ( (Value & 0x1000) != 0 )
  {
    v132 |= 0x100000u;
    *v130 = v132;
  }
  v247 = v102 + 384;
  *((_QWORD *)v102 + 48) = a13;
  if ( (Value & 0x20000000) == 0 || (Value & 0x10) != 0 || (v133 = 0x40000, (v132 & 0x100000) != 0) )
    v133 = 0;
  *((_QWORD *)v102 + 1) = v127;
  *((_QWORD *)v102 + 2) = v127;
  *v130 = v133 | v132 & 0xFFFBFFFF;
  v231 = (__int64)(v102 + 8);
  v134 = v238;
  *((_DWORD *)v102 + 8) = v131;
  v135 = (unsigned __int8)v232;
  *((_QWORD *)v102 + 3) = v129;
  v136 = *v134;
  v137 = v237;
  *((_DWORD *)v102 + 36) = 0;
  *v136 = Value;
  *((_DWORD *)v102 + 15) = v225;
  *((_DWORD *)v102 + 14) = a8;
  v239 = v102 + 60;
  v138 = *v137 ^ (v54 << 7);
  v244 = v102 + 56;
  v139 = *v137 ^ v138 & 0x80;
  *((_QWORD *)v102 + 5) = a12;
  *((_DWORD *)v102 + 16) = a9;
  v140 = (__int64 *)(((unsigned __int8)v139 ^ (unsigned __int8)(32 * v54)) & 0x40 ^ (unsigned int)v139);
  *((_DWORD *)v102 + 28) = 0;
  *v137 = (int)v140;
  v245 = (__int64 *)(v102 + 40);
  LODWORD(v136) = *v130;
  v241 = v140;
  LODWORD(v140) = (unsigned int)v136 & 0xFFFFFF7F | ((unsigned __int8)v234 << 7);
  *((_DWORD *)v102 + 72) = 0;
  v141 = (v267 << 22) | (unsigned int)v140 & 0xFFBE0FFF | (v258 << 16) & 0xFFBFFFFF | (v223 << 12) & 0xFFBF1FFF | (v224 << 15) & 0xFFBFFFFF | (v264 << 13) & 0xFFBFBFFF | (v135 << 14) & 0xFFBFFFFF;
  *v130 = v141;
  if ( !a12 || (v142 = 0x800000, (*(_DWORD *)(a12 + 4) & 0x10000000) == 0) )
    v142 = 0;
  v143 = v142 | v141 & 0xFF7FFFFF;
  *v130 = v143;
  if ( v223 )
  {
    v144 = *(_QWORD *)(a2[1] + 32LL);
    v145 = *(_DWORD *)(v144 + 424);
    if ( (v145 & 0x100) != 0 )
    {
      v146 = *(_QWORD *)(v144 + 608);
    }
    else
    {
      v174 = (v145 & 0x80u) == 0;
      v146 = 0LL;
      if ( !v174 )
        v146 = *(_QWORD *)(a2[1] + 32LL);
    }
    v147 = *(_QWORD *)(v146 + 64);
    if ( v147 )
      v148 = *(_QWORD *)(v147 + 8);
    else
      v148 = 0LL;
    *((_QWORD *)v102 + 68) = v148;
  }
  v149 = 0;
  if ( (Value & 1) != 0 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 24) + 436LL) & 8) == 0 )
    {
      v150 = *(_QWORD *)(a1 + 40224);
      v151 = v225;
      v152 = *(_DWORD *)(v240 + v150 + 28);
      if ( (~*(_DWORD *)(v240 + v150 + 24) & v225) != 0 || !v225 )
        goto LABEL_310;
      while ( 1 )
      {
        if ( (v151 & 1) != 0 )
        {
          v153 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 3712) + 8LL * v152) + 80LL);
          if ( (v153 & 0x1001) == 0 && (v153 & 0x6004) != 0 )
            break;
        }
        ++v152;
        v151 >>= 1;
        if ( !v151 )
          goto LABEL_310;
      }
    }
    if ( !a18 )
    {
LABEL_312:
      v149 = 1;
      goto LABEL_313;
    }
LABEL_310:
    if ( (v143 & 0x100000) == 0 )
    {
      v149 = 0;
      goto LABEL_313;
    }
    goto LABEL_312;
  }
LABEL_313:
  v154 = v143 & 0xFFF7FFFF | (v149 << 19);
  **(_DWORD **)v230 = v154;
  v155 = *(_QWORD *)(a1 + 40224);
  v241 = *(__int64 **)(1616LL * ((unsigned __int8)v241 & 0x3F) + v155 + 448);
  if ( (*((_DWORD *)v246 + 18) & 1) != 0 )
  {
    v156 = v154 | 0x100;
  }
  else
  {
    if ( !dword_1C0076564 && (*(_BYTE *)(v155 + v240 + 16) & 1) == 0
      || (P = v102, (**(_DWORD **)(*(_QWORD *)(a1 + 24) + 2824LL) & 0x4000) != 0)
      || (P = v102, (v54 & 2) == 0)
      || (P = v102, !v241)
      || (P = v102, (*(_DWORD *)v241 & 0x200) == 0) && (P = v102, dword_1C0076564 != 2)
      || (unsigned __int16)*(_QWORD *)v231 && *(_QWORD *)v231 <= (unsigned __int64)(unsigned int)dword_1C0076568
      || (v157 = 256, v149) )
    {
      v157 = 0;
    }
    v156 = v157 | v143 & 0xFFF7FEFF | (v149 << 19);
  }
  **(_DWORD **)v230 = v156;
  if ( a12 )
    a14 = *(_QWORD *)(a12 + 16);
  *((_QWORD *)*v238 + 5) = a14;
  SyncObject = VIDMM_GLOBAL::CommitGlobalBackingStore((VIDMM_GLOBAL *)a1, (struct _VIDMM_GLOBAL_ALLOC *)v102);
  if ( SyncObject < 0 )
    goto LABEL_413;
  if ( (Value & 0x4000) != 0 )
    **(_DWORD **)v230 |= 0x20u;
  if ( (*(_BYTE *)(v248 + 444) & 0xA) != 0 )
  {
    v159 = 1 << (*(_WORD *)(v248 + 36) - *(_BYTE *)(v248 + 28));
    *v244 |= v159;
    if ( (v54 & 2) != 0 && (Value & 0x8000) == 0 )
      *v239 |= v159;
  }
  v160 = P;
  v161 = v237;
  v162 = a1;
  *((_QWORD *)P + 13) = a17;
  v244 = P + 104;
  Pa = 0LL;
  v163 = *v161 & 0xEFFFFFFF | (a17 != 0 ? 0x10000000 : 0);
  *v161 = v163 ^ (v163 ^ (a16 << 29)) & 0x20000000;
  *((_DWORD *)v160 + 100) = a15;
  *((_QWORD *)v160 + 35) = v160 + 272;
  *((_QWORD *)v160 + 34) = v160 + 272;
  *((_QWORD *)v160 + 62) = -1LL;
  v164 = (*v161 & 0x80) != 0;
  if ( a9 )
  {
    if ( (a9 & 0x1F) != 0 )
    {
      Pa = *(_BYTE **)(*(_QWORD *)(a1 + 3712)
                     + 8LL * ((a9 & 0x1F) + *(_DWORD *)(*(_QWORD *)(a1 + 40224) + v240 + 28) - 1));
      v164 = Pa[80];
    }
    else if ( ((a9 >> 6) & 0x1F) != 0 )
    {
      Pa = *(_BYTE **)(*(_QWORD *)(a1 + 3712)
                     + 8LL * (((a9 >> 6) & 0x1F) + *(_DWORD *)(*(_QWORD *)(a1 + 40224) + v240 + 28) - 1));
    }
  }
  v165 = v240;
  v166 = *v161 ^ ((unsigned __int16)*v161 ^ (unsigned __int16)(v164 << 10)) & 0x400;
  v167 = v225;
  *v161 = v166;
  v168 = v225;
  v259 = v166;
  v239 = *(_DWORD **)(a1 + 40224);
  v169 = *(_DWORD *)((char *)v239 + v165 + 28);
  v170 = v169;
  if ( (~*(_DWORD *)((char *)v239 + v165 + 24) & v225) != 0 )
  {
    v171 = 0;
    v231 = a1 + 3712;
LABEL_344:
    v172 = 0;
    goto LABEL_345;
  }
  if ( v225 )
  {
    do
    {
      if ( (v168 & 1) != 0 && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 3712) + 8LL * v170) + 80LL) & 0x80000) != 0 )
      {
        v175 = (_QWORD *)(a1 + 3712);
        v171 = 1;
        v167 = v225;
        v176 = *(_DWORD *)((char *)v239 + v165 + 28);
        v231 = a1 + 3712;
        v177 = v225;
        goto LABEL_353;
      }
      ++v170;
      v168 >>= 1;
    }
    while ( v168 );
  }
  v175 = (_QWORD *)(a1 + 3712);
  v171 = 0;
  v167 = v225;
  v176 = *(_DWORD *)((char *)v239 + v165 + 28);
  v231 = a1 + 3712;
  v177 = v225;
  if ( !v225 )
    goto LABEL_344;
LABEL_353:
  while ( (v177 & 1) == 0 || (*(_DWORD *)(*(_QWORD *)(*v175 + 8LL * v176) + 80LL) & 0x100000) == 0 )
  {
    ++v176;
    v177 >>= 1;
    if ( !v177 )
      goto LABEL_344;
    v175 = (_QWORD *)v231;
  }
  v172 = 1;
LABEL_345:
  if ( !Pa )
  {
    if ( !v171 )
    {
      v174 = v172 == 0;
      goto LABEL_362;
    }
LABEL_360:
    v178 = 2 * v172;
    v265 = 0;
    goto LABEL_364;
  }
  v173 = *((_DWORD *)Pa + 20);
  if ( (v173 & 0x80000) != 0 )
    goto LABEL_360;
  v174 = (v173 & 0x100000) == 0;
LABEL_362:
  if ( v174 )
  {
    v265 = 2;
    v178 = 3;
    goto LABEL_375;
  }
  v178 = v171 + 1;
  v265 = 1;
LABEL_364:
  if ( v178 != 3 )
  {
    v179 = 0;
    if ( (~v239[6] & v225) != 0 )
      goto LABEL_373;
    if ( v225 )
    {
      v180 = 1;
      do
      {
        if ( (v167 & 1) != 0 && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v231 + 8LL * v169) + 80LL) & 0x180000) == 0 )
          v179 |= v180;
        v180 = __ROL4__(v180, 1);
        ++v169;
        v167 >>= 1;
      }
      while ( v167 );
      v162 = a1;
      if ( v179 )
      {
LABEL_373:
        WdLogSingleEntry1(1LL, 12927LL);
        DxgkLogInternalTriageEvent(v181, 0x40000LL);
        return 3221225485LL;
      }
    }
  }
LABEL_375:
  v182 = (unsigned int *)v237;
  v183 = v259 ^ (v259 ^ ((v265 | (16 * v178)) << 13)) & 0x1E0000 ^ (v259 ^ (v259 ^ ((v265 | (16 * v178)) << 13)) & 0x1E0000 ^ ((v265 | (16 * v178)) << 13)) & 0x1E000;
  *v237 = v183;
  if ( (Value & 0x10) != 0 || (Value & 0x20) != 0 )
    v160[82] = 1;
  v184 = a18;
  v232 = a18 != 0;
  *v182 = (v232 << 8) | v183 & 0xFFFFFEFF;
  v185 = (Value & 0x1000) != 0;
  v186 = v236;
  *(_QWORD *)v244 = a18;
  if ( v185 )
  {
    v187 = v243;
    v239 = (_DWORD *)((char *)v243 + 48);
    if ( !*((_QWORD *)v243 + 6) )
    {
      Physical = VIDMM_GLOBAL::AllocatePhysical(v186, v233, (void **)v243 + 6);
      v187 = v243;
      *((_QWORD *)v243 + 7) = Physical;
      if ( !*(_QWORD *)v239 )
      {
        SyncObject = -1073741801;
        goto LABEL_414;
      }
    }
    PhysicalAddress = MmGetPhysicalAddress(*((PVOID *)v187 + 7));
    v184 = a18;
    *((PHYSICAL_ADDRESS *)v243 + 8) = PhysicalAddress;
  }
  if ( !v184 )
  {
    SyncObject = SysMmAllocateLogicalMemory(
                   *(struct SYSMM_ADAPTER **)(*(_QWORD *)(v162 + 24) + 224LL),
                   v186,
                   v160,
                   (void **)v160 + 66);
    if ( SyncObject < 0 )
    {
      WdLogSingleEntry1(1LL, v160);
      DxgkLogInternalTriageEvent(v190, 0x40000LL);
      goto LABEL_414;
    }
    v162 = a1;
  }
  v191 = VIDMM_GLOBAL::AdapterId((VIDMM_GLOBAL *)v162);
  v192 = v246;
  *((_QWORD *)v160 + 64) = *((_QWORD *)v246 + 5) + 384LL * v191;
  VidMmiReferencePartition(v192);
  v193 = v237;
  v194 = *(_DWORD *)*v238;
  if ( (v194 & 0x2003A) != 0
    || (**(_DWORD **)v230 & 0x2000) != 0
    || (*v237 & 0x100) != 0
    || (**(_DWORD **)v230 & 0x400) != 0
    || (v195 = 0x20000, (v194 & 0x40000000) != 0) )
  {
    v195 = 0;
  }
  v174 = bTracingEnabled == 0;
  **(_DWORD **)v230 = v195 | **(_DWORD **)v230 & 0xFFFDFFFF;
  if ( !v174 )
  {
    v266 = *(_WORD *)v193 & 0x3F;
    v196 = *v245;
    v247 = (_QWORD *)*v247;
    v197 = v196 ? *(int **)(v196 + 24) : 0LL;
    v245 = *(__int64 **)(v162 + 24);
    v239 = (_DWORD *)a2[3];
    CurrentProcessId = PsGetCurrentProcessId();
    LOBYTE(v268) = 0;
    LOBYTE(v199) = 0;
    v244 = CurrentProcessId;
    LOBYTE(v200) = 0;
    LOBYTE(v256) = 0;
    v201 = 0LL;
    v260 = 0;
    LOBYTE(v202) = 0;
    LOBYTE(v203) = 0;
    LOBYTE(v204) = 0;
    if ( v197 )
    {
      v199 = *v197;
      v200 = v197[1];
      v201 = (unsigned int)v197[2];
      v202 = v197[3];
      v203 = v197[4];
      v204 = v197[5];
      v268 = v197[6];
      v256 = v197[7];
      v205 = v197[8];
      v206 = v197[9];
      v260 = v205;
    }
    else
    {
      LOBYTE(v206) = 0;
    }
    if ( (byte_1C0076981 & 8) != 0 )
      McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtpht_EtwWriteTransfer(
        v225,
        &EventCreateAdapterAllocation,
        v201,
        (__int64)v244,
        (char)v239,
        (char)v245,
        v20,
        v236,
        v233,
        v221,
        v225,
        a9,
        v222,
        a8,
        a15,
        (char)v160,
        v196,
        0,
        v199,
        v200,
        v201,
        v202,
        v203,
        v204,
        v268,
        v256,
        v260,
        v206,
        0,
        (char)v247,
        v266,
        v232);
  }
  v207 = v236;
  ++*(_DWORD *)(v162 + 7648);
  *(_QWORD *)(v162 + 7656) += v207;
  *(_QWORD *)(v162 + 40192) += v207;
  v208 = a2[2];
  if ( v208 )
  {
    if ( v207 <= 0x100000000LL )
    {
      v174 = !_BitScanReverse((unsigned int *)&v209, v207 >> 12);
      if ( !v174 )
        v29 = v209 + 1;
    }
    else
    {
      v29 = 21;
    }
    v207 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v208 + 8LL * v29 + 528), v207);
    _InterlockedIncrement((volatile signed __int32 *)(v208 + 4LL * v29 + 704));
    *(_BYTE *)(v208 + 792) = 1;
  }
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v207) + 24) = v160;
  *a20 = v160;
  return 0LL;
}
