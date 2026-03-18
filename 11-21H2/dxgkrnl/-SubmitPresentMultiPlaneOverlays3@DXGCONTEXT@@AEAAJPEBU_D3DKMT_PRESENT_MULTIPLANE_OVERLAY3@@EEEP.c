/*
 * XREFs of ?SubmitPresentMultiPlaneOverlays3@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@EEEPEBVDXGALLOCATIONREFERENCE@@PEAEPEAU_DXGKARG_PRESENT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAPEAV1@@Z @ 0x1C01739B0
 * Callers:
 *     ?PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C0196940 (-PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEV.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C0002C48 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0009A8C (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C000A924 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C000B800 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C000B8C0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C000BB00 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F574 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1CAutoRefCountedBuffer@@QEAA@XZ @ 0x1C001A5F4 (--1CAutoRefCountedBuffer@@QEAA@XZ.c)
 *     ??$?0$00X@?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@QEAA@XZ @ 0x1C001FBC0 (--$-0$00X@-$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U-$default_delete@UWmiMonitorDescriptor.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1C0027574 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?ReadPresentPrivateDriverData@@YAJPEAVDXGADAPTER@@PEBU_D3DKMT_MULTIPLANE_OVERLAY3@@PEAPEAVCRefCountedBuffer@@@Z @ 0x1C0174848 (-ReadPresentPrivateDriverData@@YAJPEAVDXGADAPTER@@PEBU_D3DKMT_MULTIPLANE_OVERLAY3@@PEAPEAVCRefCo.c)
 *     ?ConvertThunkOverlayToPackedAttributes3@DXGCONTEXT@@AEAAXPEAU_VIDSCH_LAYER_ATTRIBUTE@@AEBU_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@@Z @ 0x1C0174888 (-ConvertThunkOverlayToPackedAttributes3@DXGCONTEXT@@AEAAXPEAU_VIDSCH_LAYER_ATTRIBUTE@@AEBU_D3DKM.c)
 *     ?AcquireMultiPlaneOverlay3FlipFences@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@IPEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGSYNCOBJECTLOCK@@PEAVDXGSYNCOBJECTMUTEX@@3@Z @ 0x1C01749CC (-AcquireMultiPlaneOverlay3FlipFences@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@I.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C017D000 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@XZ @ 0x1C018B028 (-DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@XZ.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_DXGK_PRESENTALLOCATIONINFO@@$03@@QEAAPEAU_DXGK_PRESENTALLOCATIONINFO@@I@Z @ 0x1C01ED55C (-AllocateElements@-$PagedPoolZeroedArray@U_DXGK_PRESENTALLOCATIONINFO@@$03@@QEAAPEAU_DXGK_PRESEN.c)
 *     ?SynchronizeImplicitQueueWithRenderQueues@DXGCONTEXT@@QEAAJPEAPEAV1@K_NPEAUVIDSCH_SUBMIT_DATA_BASE@@1@Z @ 0x1C0224DC6 (-SynchronizeImplicitQueueWithRenderQueues@DXGCONTEXT@@QEAAJPEAPEAV1@K_NPEAUVIDSCH_SUBMIT_DATA_BA.c)
 *     ??1?$PagedPoolArray@VDXGSYNCOBJECTMUTEX@@$03@@QEAA@XZ @ 0x1C0318884 (--1-$PagedPoolArray@VDXGSYNCOBJECTMUTEX@@$03@@QEAA@XZ.c)
 */

__int64 __fastcall DXGCONTEXT::SubmitPresentMultiPlaneOverlays3(
        DXGCONTEXT *this,
        struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 *a2,
        unsigned __int8 a3,
        unsigned __int8 a4,
        unsigned __int8 a5,
        const struct DXGALLOCATIONREFERENCE *a6,
        unsigned __int8 *a7,
        struct _DXGKARG_PRESENT *a8,
        struct VIDSCH_SUBMIT_DATA_BASE *a9,
        struct DXGCONTEXT **a10)
{
  struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 *v10; // r15
  unsigned __int8 v11; // r14
  int v13; // r13d
  struct DXGCONTEXT **v14; // r9
  int v15; // ebx
  __int64 v16; // rcx
  __int64 ContextCount; // r11
  __int64 v18; // rdx
  unsigned int v19; // ecx
  int v20; // r8d
  bool v21; // cc
  D3DKMT_MULTIPLANE_OVERLAY3 **ppPresentPlanes; // r14
  int v23; // ecx
  __int64 PresentPlaneCount; // r15
  UINT v25; // edi
  __int64 v26; // r9
  D3DKMT_MULTIPLANE_OVERLAY3 **v27; // r8
  __int64 DirtyRectCount; // rdx
  int v29; // ebx
  UINT *v30; // rax
  UINT *v31; // rsi
  UINT *v32; // rbx
  D3DKMT_MULTIPLANE_OVERLAY3 *v33; // rcx
  const D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *pPlaneAttributes; // rdi
  int v35; // ecx
  _QWORD *v36; // rbx
  unsigned int v37; // eax
  __int64 v38; // rdi
  __int64 v39; // rsi
  bool v40; // zf
  struct _DXGKARG_PRESENT *v41; // rsi
  unsigned __int8 v42; // dl
  DXGCONTEXT *v43; // r13
  unsigned int v44; // ebx
  __int64 v45; // rax
  unsigned int v46; // edx
  unsigned int *v47; // r11
  __int64 v48; // r8
  D3DKMT_MULTIPLANE_OVERLAY3 *v49; // rdx
  __int64 LayerIndex; // rcx
  unsigned int v51; // edx
  int v52; // eax
  unsigned int v53; // r9d
  __int64 v54; // rax
  unsigned int v55; // r9d
  __int64 v56; // r13
  unsigned __int64 v57; // rsi
  D3DKMT_MULTIPLANE_OVERLAY3 *v58; // r10
  __int64 v59; // r8
  int v60; // ebx
  unsigned int v61; // edx
  unsigned int v62; // r14d
  unsigned int v63; // r14d
  struct DXGADAPTER *v64; // rcx
  int v65; // r8d
  const struct _D3DKMT_MULTIPLANE_OVERLAY3 *v66; // r10
  _DWORD *v67; // r11
  char *v68; // r15
  int v69; // eax
  __int64 v70; // r14
  struct CRefCountedBuffer *v71; // rcx
  unsigned int v72; // esi
  __int64 v73; // r9
  __int64 v74; // r11
  char *v75; // rbx
  __int64 v76; // rax
  char *v77; // rdx
  __int64 v78; // r8
  char *v79; // r9
  __int64 v80; // r13
  int v81; // eax
  __int64 v82; // r9
  __int64 v83; // r11
  int v84; // r8d
  char *v85; // r10
  __int64 *v86; // rdx
  __int64 v87; // r13
  unsigned __int64 v88; // rcx
  __int64 v89; // r8
  int v90; // ecx
  char *v91; // r9
  __int64 v92; // rax
  const struct _D3DKMT_MULTIPLANE_OVERLAY3 *v93; // rdx
  struct _VIDSCH_LAYER_ATTRIBUTE *v94; // rbx
  const struct _D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *v95; // r8
  unsigned __int64 v96; // rcx
  __int64 v97; // rcx
  __int64 v98; // r8
  DXGK_ALLOCATIONLIST *v99; // rbx
  __int64 v100; // rax
  __int64 v101; // rsi
  __int64 v102; // rdx
  __int64 v103; // rcx
  __int64 v104; // r8
  __int64 v105; // r9
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v108; // rbx
  __int64 v109; // r15
  __int64 v110; // r14
  int v111; // r13d
  __int64 v112; // rcx
  __int64 v113; // r8
  struct DXGTHREAD *v114; // rbx
  __int64 v115; // r15
  __int64 v116; // rdx
  __int64 v117; // rcx
  _QWORD *v118; // rax
  struct _DXGKARG_PRESENT *v119; // rdx
  const struct DXGALLOCATIONREFERENCE *v120; // rcx
  unsigned int v121; // ebx
  __int64 v122; // rcx
  __int64 v123; // r8
  struct DXGGLOBAL *Global; // rax
  __int64 v125; // r9
  struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 *v126; // r13
  unsigned __int64 v127; // rsi
  __int64 v128; // rcx
  __int64 v129; // rdx
  struct DXGSYNCOBJECTMUTEX *v130; // rax
  unsigned int v131; // eax
  struct DXGSYNCOBJECTMUTEX *v132; // r15
  __int64 v133; // rcx
  __int64 v134; // r8
  struct DXGSYNCOBJECTMUTEX *v135; // rax
  struct DXGSYNCOBJECTMUTEX *v136; // rax
  const struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 *v137; // rdx
  DXGCONTEXT *v138; // r13
  struct DXGCONTEXT **v139; // r15
  struct DXGCONTEXT *v140; // r10
  __int64 v141; // rdx
  int v142; // eax
  struct DXGSYNCOBJECTMUTEX *v143; // r10
  unsigned int v144; // eax
  unsigned int i; // ebx
  DXGAUTOMUTEX *v146; // rcx
  struct DXGSYNCOBJECTMUTEX *v147; // r10
  unsigned int v148; // eax
  unsigned int j; // ebx
  DXGAUTOMUTEX *v150; // rcx
  struct _SLIST_ENTRY **v151; // rbx
  struct _SLIST_ENTRY *v152; // rdi
  int v154; // r9d
  __int64 v155; // rbx
  struct DXGCONTEXT **v156; // r9
  int v157; // r10d
  int v158; // esi
  struct _DXGKARG_PRESENT *v159; // rdx
  char *v160; // rdx
  unsigned int v161; // eax
  unsigned int v162; // esi
  int v163; // ecx
  __int64 v164; // rdx
  unsigned __int64 v165; // rcx
  char *v166; // rdx
  __int64 v167; // rsi
  D3DKMT_MULTIPLANE_OVERLAY3 *v168; // rbx
  UINT v169; // ecx
  __int64 v170; // rax
  __int64 v171; // r13
  unsigned int v172; // r14d
  char *v173; // rsi
  __int64 v174; // rdx
  __int64 v175; // rax
  int v176; // ecx
  char *v177; // rax
  char *v178; // rax
  int v179; // ecx
  __int64 v180; // rax
  __int16 v181; // dx
  char *v182; // r8
  __int64 v183; // r9
  __int64 v184; // r8
  struct DXGTHREAD *Current; // rax
  KIRQL v186; // al
  __int64 v187; // rax
  bool v188; // cf
  unsigned __int64 v189; // rax
  __int64 v190; // rax
  struct DXGSYNCOBJECTMUTEX *v191; // rbx
  __int64 v192; // rax
  unsigned __int64 v193; // rax
  __int64 v194; // rax
  struct DXGSYNCOBJECTMUTEX *v195; // rbx
  char *v196; // rbx
  char *v197; // rbx
  __int64 v198; // r8
  struct _SLIST_ENTRY *Next; // rbx
  unsigned __int8 v201; // [rsp+50h] [rbp-B0h]
  KIRQL CurrentIrql; // [rsp+51h] [rbp-AFh]
  int v203; // [rsp+54h] [rbp-ACh]
  int v204; // [rsp+54h] [rbp-ACh]
  unsigned int v206; // [rsp+60h] [rbp-A0h]
  unsigned int v207; // [rsp+64h] [rbp-9Ch]
  unsigned int v208; // [rsp+68h] [rbp-98h]
  int v209; // [rsp+6Ch] [rbp-94h]
  int v210; // [rsp+6Ch] [rbp-94h]
  int v211; // [rsp+70h] [rbp-90h] BYREF
  const struct _D3DKMT_MULTIPLANE_OVERLAY3 *v212; // [rsp+78h] [rbp-88h]
  unsigned int v213; // [rsp+80h] [rbp-80h]
  struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 *v214; // [rsp+88h] [rbp-78h]
  struct DXGCONTEXT **v215; // [rsp+90h] [rbp-70h]
  const struct DXGALLOCATIONREFERENCE *v216; // [rsp+98h] [rbp-68h]
  struct _DXGKARG_PRESENT *v217; // [rsp+A0h] [rbp-60h]
  unsigned int v218; // [rsp+A8h] [rbp-58h]
  char *v219; // [rsp+B0h] [rbp-50h]
  __int64 v220; // [rsp+B8h] [rbp-48h]
  char *v221; // [rsp+C0h] [rbp-40h]
  __int64 v222; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v223; // [rsp+D0h] [rbp-30h]
  PVOID v224; // [rsp+D8h] [rbp-28h]
  struct DXGGLOBAL *v225; // [rsp+E0h] [rbp-20h] BYREF
  char v226; // [rsp+E8h] [rbp-18h]
  struct DXGTHREAD *DxgThread; // [rsp+F0h] [rbp-10h] BYREF
  struct CRefCountedBuffer *v228; // [rsp+F8h] [rbp-8h] BYREF
  int v229; // [rsp+100h] [rbp+0h] BYREF
  __int64 v230; // [rsp+108h] [rbp+8h]
  char v231; // [rsp+110h] [rbp+10h]
  _QWORD v232[12]; // [rsp+120h] [rbp+20h] BYREF
  struct DXGSYNCOBJECTMUTEX *v233; // [rsp+180h] [rbp+80h] BYREF
  _BYTE v234[64]; // [rsp+188h] [rbp+88h] BYREF
  unsigned int v235; // [rsp+1C8h] [rbp+C8h]
  struct DXGSYNCOBJECTMUTEX *v236; // [rsp+1D0h] [rbp+D0h] BYREF
  _BYTE v237[64]; // [rsp+1D8h] [rbp+D8h] BYREF
  unsigned int v238; // [rsp+218h] [rbp+118h]
  PVOID P; // [rsp+220h] [rbp+120h] BYREF
  _BYTE v240[128]; // [rsp+228h] [rbp+128h] BYREF
  int v241; // [rsp+2A8h] [rbp+1A8h]
  char v242[8]; // [rsp+2B0h] [rbp+1B0h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+2B8h] [rbp+1B8h] BYREF
  _DWORD v244[2]; // [rsp+2F0h] [rbp+1F0h] BYREF
  __int64 v245; // [rsp+2F8h] [rbp+1F8h]
  _BYTE v246[8]; // [rsp+300h] [rbp+200h]
  _QWORD v247[37]; // [rsp+308h] [rbp+208h]
  _QWORD v248[10]; // [rsp+430h] [rbp+330h] BYREF
  __int64 v249; // [rsp+480h] [rbp+380h] BYREF

  v10 = a2;
  v11 = a5;
  v217 = a8;
  v13 = a4;
  v14 = a10;
  v15 = a3;
  v216 = a6;
  v214 = a2;
  v215 = a10;
  if ( !a3 && !(_BYTE)v13 && !a5 )
  {
    WdLogSingleEntry1(1LL, 1647LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"cEnablingLayers || cUpdatingLayers || cDisablingLayers",
      1647LL,
      0LL,
      0LL,
      0LL,
      0LL);
    v14 = v215;
  }
  if ( (unsigned int)a5 + v15 + v13 > v10->PresentPlaneCount )
  {
    WdLogSingleEntry1(1LL, 1650LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"(static_cast<UINT>(cEnablingLayers)+ static_cast<UINT>(cUpdatingLayers)+ static_cast<UINT>(cDisablingLaye"
                "rs)) <= pArgs->PresentPlaneCount",
      1650LL,
      0LL,
      0LL,
      0LL,
      0LL);
    v14 = v215;
  }
  v16 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v16 + 184) )
  {
    if ( !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v16 + 168)) )
    {
      WdLogSingleEntry1(1LL, 1651LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"GetRenderCore()->IsCoreResourceSharedOwner()",
        1651LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v14 = v215;
  }
  ContextCount = v10->ContextCount;
  v206 = ContextCount;
  if ( (unsigned int)ContextCount > 0x40 )
  {
    LODWORD(v70) = -1073741811;
    v155 = v10->ContextCount;
    WdLogSingleEntry4(2LL, this, ContextCount, 64LL, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"0x%I64x trying to broadcast to %I64d when limit is %I64d, returning 0x%I64x",
      (__int64)this,
      v155,
      64LL,
      -1073741811LL,
      0LL);
    return (unsigned int)v70;
  }
  v18 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL);
  v19 = 1;
  v213 = *(_DWORD *)(v18 + 2632);
  v20 = *((_DWORD *)*v14 + 99);
  v203 = v20;
  if ( (unsigned int)ContextCount > 1 )
  {
    v156 = v14 + 1;
    do
    {
      v157 = *((_DWORD *)*v156 + 99);
      if ( (v157 & v20) != 0 )
      {
        LODWORD(v70) = -1073741811;
        WdLogSingleEntry2(2LL, this, -1073741811LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"0x%I64x failed, can't broadcast flip to multiple context on the same physical adapter returning 0x%I64x",
          (__int64)this,
          -1073741811LL,
          0LL,
          0LL,
          0LL);
        return (unsigned int)v70;
      }
      v20 |= v157;
      ++v19;
      ++v156;
      v203 = v20;
    }
    while ( v19 < (unsigned int)ContextCount );
  }
  v21 = *(_DWORD *)(v18 + 2692) < 2500;
  v224 = 0LL;
  if ( v21 )
    goto LABEL_30;
  ppPresentPlanes = v10->ppPresentPlanes;
  v23 = 0;
  PresentPlaneCount = v10->PresentPlaneCount;
  v25 = 0;
  v224 = 0LL;
  LODWORD(v26) = 0;
  if ( !(_DWORD)PresentPlaneCount )
    goto LABEL_29;
  v27 = ppPresentPlanes;
  do
  {
    DirtyRectCount = (*v27)->pPlaneAttributes->DirtyRectCount;
    if ( (unsigned int)DirtyRectCount > 0xFFF )
    {
      WdLogSingleEntry1(3LL, DirtyRectCount);
      v158 = -1073741811;
      goto LABEL_205;
    }
    if ( ((*v27)->InputFlags.Value & 1) != 0 && (_DWORD)DirtyRectCount )
    {
      v23 += DirtyRectCount;
      ++v25;
    }
    v26 = (unsigned int)(v26 + 1);
    ++v27;
  }
  while ( (unsigned int)v26 < (unsigned int)PresentPlaneCount );
  if ( !v23 || !v25 )
    goto LABEL_28;
  v29 = 16 * (v25 + v23) + 8;
  v30 = (UINT *)operator new[](16 * (v25 + v23) + 24, 0x4B677844u, 64LL, v26);
  v224 = v30;
  if ( !v30 )
  {
    WdLogSingleEntry1(6LL, 1460LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to allocate memory for present dirty rects data",
      1460LL,
      0LL,
      0LL,
      0LL,
      0LL);
    v158 = -1073741801;
LABEL_205:
    WdLogSingleEntry1(2LL, v158);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to read dirty rects data. Returning 0x%I64x",
      v158,
      0LL,
      0LL,
      0LL,
      0LL);
    return (unsigned int)v158;
  }
  v30[2] = v29;
  *(_QWORD *)v30 = 0LL;
  v31 = v30 + 6;
  v30[3] = 1;
  v32 = &v30[4 * v25 + 6];
  v30[4] = v25;
  do
  {
    v33 = *ppPresentPlanes;
    if ( ((*ppPresentPlanes)->InputFlags.Value & 1) != 0 )
    {
      pPlaneAttributes = v33->pPlaneAttributes;
      if ( pPlaneAttributes->DirtyRectCount )
      {
        *v31 = v33->LayerIndex;
        *((_QWORD *)v31 + 1) = v32;
        v31[1] = pPlaneAttributes->DirtyRectCount;
        memmove(v32, pPlaneAttributes->pDirtyRects, 16LL * pPlaneAttributes->DirtyRectCount);
        v32 += 4 * pPlaneAttributes->DirtyRectCount;
        v31 += 4;
      }
    }
    ++ppPresentPlanes;
    --PresentPlaneCount;
  }
  while ( PresentPlaneCount );
  LODWORD(ContextCount) = v206;
LABEL_28:
  v20 = v203;
LABEL_29:
  v11 = a5;
  v10 = v214;
LABEL_30:
  if ( (unsigned int)ContextCount > 1 )
    v35 = 3072;
  else
    v35 = 2048;
  v36 = v248;
  v37 = *(_DWORD *)a9 & 0xFFFFFBFF;
  *((_DWORD *)a9 + 35) = ContextCount;
  *((_DWORD *)a9 + 34) = v20;
  v38 = 10LL;
  *(_DWORD *)a9 = v35 | v37;
  v39 = 10LL;
  do
  {
    wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>(v36++);
    --v39;
  }
  while ( v39 );
  v40 = *((_DWORD *)a9 + 30) == 5;
  *((_QWORD *)a9 + 4) = v224;
  if ( !v40 )
  {
    WdLogSingleEntry1(1LL, 1727LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"FlipOnVSyncSwFlipQueue == pVidSchSubmitData->FlipMode",
      1727LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v41 = v217;
  if ( v217->pDmaBuffer )
  {
    WdLogSingleEntry1(1LL, 1732LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pPresentDdiArg->pDmaBuffer == NULL",
      1732LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v42 = v13 + a3;
  v43 = this;
  v201 = v42;
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 2738LL) )
  {
    v42 += v11;
    v201 = v42;
  }
  if ( v42 > 0xAu )
  {
    WdLogSingleEntry1(1LL, 1750LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"cLayersInSchedulerArray <= DXGK_MAX_MPO_PLANES_PER_SOURCE",
      1750LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v44 = 0;
  v207 = 0;
  if ( *((_BYTE *)a9 + 356) )
    v45 = 600LL;
  else
    v45 = 496LL;
  v46 = v10->PresentPlaneCount;
  v47 = (unsigned int *)((char *)a9 + v45);
  v48 = 0LL;
  v219 = (char *)a9 + v45;
  if ( v46 )
  {
    while ( 2 )
    {
      v49 = v10->ppPresentPlanes[v48];
      LayerIndex = v49->LayerIndex;
      if ( (v49->InputFlags.Value & 1) != 0 )
      {
        v51 = *v47;
        v52 = ((unsigned __int16)v51 ^ (unsigned __int16)(v51 | (1 << LayerIndex))) & 0x3FF;
        goto LABEL_47;
      }
      if ( a7[LayerIndex] )
      {
        v51 = *v47;
        v52 = (v51 ^ (v51 | (1024 << LayerIndex))) & 0xFFC00;
LABEL_47:
        *v47 = v51 ^ v52;
      }
      v46 = v10->PresentPlaneCount;
      v48 = (unsigned int)(v48 + 1);
      if ( (unsigned int)v48 >= v46 )
        break;
      continue;
    }
  }
  v53 = *v47;
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 2738LL) )
    v53 = *v47 | (v53 >> 10);
  v54 = 0LL;
  v55 = v53 & 0x3FF;
  v218 = v55;
  v209 = 0;
  if ( v46 )
  {
    while ( 2 )
    {
      v56 = v54;
      v57 = 32LL * v44;
      v58 = v10->ppPresentPlanes[v54];
      v212 = v58;
      v59 = v58->LayerIndex;
      v244[v57 / 4] = v59;
      v204 = v59;
      v244[v57 / 4 + 1] = v58->InputFlags.Value & 1;
      if ( (v58->InputFlags.Value & 1) == 0 && !a7[v59] )
        goto LABEL_95;
      v60 = 1 << v59;
      if ( ((1 << v59) & v55) != 0 )
      {
        v61 = (v55 & (v60 - 1) & 0x55555555) + (((v55 & (v60 - 1)) >> 1) & 0x55555555);
        v62 = (((v61 & 0x33333333) + ((v61 >> 2) & 0x33333333)) & 0xF0F0F0F)
            + ((((v61 & 0x33333333) + ((v61 >> 2) & 0x33333333)) >> 4) & 0xF0F0F0F);
        v63 = (v62 & 0xFF00FF) + (v62 >> 8);
      }
      else
      {
        v63 = -1;
      }
      v208 = v63;
      if ( v63 >= v201 )
      {
        WdLogSingleEntry1(1LL, 1825LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"FlipToIndex < cLayersInSchedulerArray",
          1825LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( v63 >= 0xA )
      {
        WdLogSingleEntry1(1LL, 1832LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"FlipToIndex < DXGK_MAX_MPO_PLANES_PER_SOURCE",
          1832LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
      {
        v228 = 0LL;
        v68 = (char *)a9 + v63 * ((8 * *((_DWORD *)a9 + 152) + 231) & 0xFFFFFFF8) + 600;
        v69 = ReadPresentPrivateDriverData(v64, v66, &v228);
        v70 = v69;
        if ( v69 < 0 )
        {
          WdLogSingleEntry1(2LL, v69);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Failed to read private driver data. Returning 0x%I64x",
            v70,
            0LL,
            0LL,
            0LL,
            0LL);
          goto LABEL_226;
        }
        v71 = v228;
        v66 = v212;
        if ( v228 )
        {
          v248[v56] = v228;
          if ( !v66->LayerIndex )
          {
            v159 = v217;
            v217->PrivateDriverDataSize = v66->DriverPrivateDataSize;
            v159->pPrivateDriverData = (char *)v71 + 16;
          }
          *((_QWORD *)v68 + 25) = v71;
        }
        v65 = v204;
        v67 = v219;
        v63 = v208;
        v10 = v214;
      }
      if ( (v66->InputFlags.Value & 1) != 0 )
      {
        v72 = 0;
        if ( v206 )
        {
          v73 = (__int64)v215;
          v220 = (__int64)v215;
          while ( 1 )
          {
            v74 = *((_QWORD *)v216 + v65 + v213 * v72);
            v223 = v74;
            if ( !v74 )
            {
              WdLogSingleEntry1(1LL, 1886LL);
              DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pDxgAlloc", 1886LL, 0LL, 0LL, 0LL, 0LL);
              v74 = v223;
              v73 = v220;
            }
            v40 = *((_BYTE *)a9 + 356) == 0;
            v75 = (char *)a9 + 600;
            v76 = *(_QWORD *)(v74 + 48);
            v221 = (char *)a9 + 600;
            if ( v40 )
              v77 = (char *)a9 + 80 * v63 + 512;
            else
              v77 = &v75[64 * (unsigned __int64)(v63 + v72 * *((_DWORD *)a9 + 151))
                       + 24
                       + *((_DWORD *)a9 + 151) * ((8 * *((_DWORD *)a9 + 152) + 231) & 0xFFFFFFF8)];
            *(_QWORD *)v77 = *(_QWORD *)(v76 + 16);
            v78 = *((_QWORD *)this + 2);
            if ( !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v78 + 16) + 16LL) + 2746LL) )
            {
              if ( *((_BYTE *)a9 + 356) )
                v160 = &v75[64 * (unsigned __int64)(v63 + v72 * *((_DWORD *)a9 + 151))
                          + 16
                          + *((_DWORD *)a9 + 151) * ((8 * *((_DWORD *)a9 + 152) + 231) & 0xFFFFFFF8)];
              else
                v160 = (char *)a9 + 80 * v63 + 568;
              *(_QWORD *)v160 = *(_QWORD *)(*(_QWORD *)v73 + 184LL);
              v78 = *((_QWORD *)this + 2);
            }
            if ( *((_BYTE *)a9 + 356) )
            {
              v79 = &v75[64 * (unsigned __int64)(v63 + v72 * *((_DWORD *)a9 + 151))
                       + 48
                       + *((_DWORD *)a9 + 151) * ((8 * *((_DWORD *)a9 + 152) + 231) & 0xFFFFFFF8)];
              v80 = 80LL * v63;
            }
            else
            {
              v80 = 80LL * v63;
              v79 = (char *)a9 + v80 + 504;
            }
            v81 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v78 + 16)
                                                                                            + 648LL)
                                                                                + 8LL)
                                                                    + 424LL))(
                    *(_QWORD *)(v78 + 760),
                    *(_QWORD *)(v74 + 24),
                    v79);
            v70 = v81;
            if ( v81 < 0 )
              break;
            v211 = 0;
            v222 = 0LL;
            if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
            {
              v84 = 0xFFFF;
              v222 = -1LL;
              v211 = 0xFFFF;
            }
            else
            {
              (*(void (__fastcall **)(_QWORD, _QWORD, int *, __int64 *, __int64))(*(_QWORD *)(*(_QWORD *)(v83 + 648)
                                                                                            + 8LL)
                                                                                + 224LL))(
                *(_QWORD *)(v83 + 656),
                *(_QWORD *)(*(_QWORD *)(v223 + 48) + 8LL),
                &v211,
                &v222,
                v82);
              v84 = v211;
              v82 = 0LL;
            }
            v85 = (char *)a9 + v80;
            v63 = v208;
            if ( *((_BYTE *)a9 + 356) )
              *(_WORD *)((char *)a9
                       + 64 * (unsigned __int64)(v208 + v72 * *((_DWORD *)a9 + 151))
                       + *((_DWORD *)a9 + 151) * ((8 * *((_DWORD *)a9 + 152) + 231) & 0xFFFFFFF8)
                       + 632) = v84;
            else
              *((_DWORD *)v85 + 139) ^= (*((_DWORD *)v85 + 139) ^ (v84 << 17)) & 0x3E0000;
            if ( *((_BYTE *)a9 + 356) )
              v86 = (__int64 *)&v75[64 * (unsigned __int64)(v208 + v72 * *((_DWORD *)a9 + 151))
                                  + 40
                                  + *((_DWORD *)a9 + 151) * ((8 * *((_DWORD *)a9 + 152) + 231) & 0xFFFFFFF8)];
            else
              v86 = (__int64 *)(v85 + 520);
            v87 = v223;
            *v86 = v222;
            v88 = *(_QWORD *)(v87 + 40);
            if ( v88 && (*(_DWORD *)(v88 + 4) & 8) != 0 )
              v89 = *(_QWORD *)(*(_QWORD *)(v88 + 56) + 184LL);
            else
              v89 = v82;
            if ( *((_BYTE *)a9 + 356) )
            {
              v90 = *((_DWORD *)a9 + 151);
              v91 = (char *)a9 + 600;
              v92 = v90 * ((8 * *((_DWORD *)a9 + 152) + 231) & 0xFFFFFFF8);
              v88 = (unsigned __int64)(v208 + v72 * v90) << 6;
              *(_QWORD *)&v75[v92 + 56 + v88] = v89;
            }
            else
            {
              v91 = v221;
              *((_QWORD *)a9 + 10 * v208 + 72) = v89;
            }
            if ( v72 )
            {
              v44 = v207;
            }
            else
            {
              v93 = v212;
              if ( *((_BYTE *)a9 + 356)
                && (v88 = v208 * ((8 * *((_DWORD *)a9 + 152) + 231) & 0xFFFFFFF8),
                    *(_DWORD *)((char *)a9 + v88 + 640) = v212->MaxImmediateFlipLine,
                    *((_BYTE *)a9 + 356)) )
              {
                v94 = (struct _VIDSCH_LAYER_ATTRIBUTE *)&v91[v208 * ((8 * *((_DWORD *)v91 + 2) + 231) & 0xFFFFFFF8)
                                                           + 160];
              }
              else
              {
                v94 = (struct _VIDSCH_LAYER_ATTRIBUTE *)(v85 + 528);
              }
              v95 = v93->pPlaneAttributes;
              if ( v95->SrcRect.right <= v95->SrcRect.left )
              {
                WdLogSingleEntry1(1LL, 1976LL);
                DxgkLogInternalTriageEvent(
                  0LL,
                  262146,
                  -1,
                  (__int64)L"pPlane->pPlaneAttributes->SrcRect.right > pPlane->pPlaneAttributes->SrcRect.left",
                  1976LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
                v95 = v212->pPlaneAttributes;
              }
              if ( v95->SrcRect.bottom <= v95->SrcRect.top )
              {
                WdLogSingleEntry1(1LL, 1977LL);
                DxgkLogInternalTriageEvent(
                  0LL,
                  262146,
                  -1,
                  (__int64)L"pPlane->pPlaneAttributes->SrcRect.bottom > pPlane->pPlaneAttributes->SrcRect.top",
                  1977LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
                v95 = v212->pPlaneAttributes;
              }
              DXGCONTEXT::ConvertThunkOverlayToPackedAttributes3((DXGCONTEXT *)v88, v94, v95);
              v96 = 32LL * v207;
              *(_QWORD *)&v246[v96 - 8] = *(_QWORD *)(v87 + 32);
              *(_DWORD *)&v246[v96] ^= ((unsigned __int8)v211 ^ (unsigned __int8)*(_DWORD *)&v246[v96]) & 0x1F;
              v44 = ++v207;
              v247[v96 / 8] = v222;
            }
            ++v72;
            v65 = v204;
            v73 = v220 + 8;
            v220 += 8LL;
            if ( v72 >= v206 )
              goto LABEL_95;
          }
          v167 = v223;
          v138 = this;
          WdLogSingleEntry3(2LL, this, v223, v81);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"0x%I64x failed to reference allocation for FlipToAllocation %I64x, returning 0x%I64x",
            (__int64)this,
            v167,
            v70,
            0LL,
            0LL);
          goto LABEL_227;
        }
        v44 = v207;
LABEL_95:
        v43 = this;
      }
      else
      {
        if ( (v60 & (*v67 >> 10) & 0x3FF) == 0 )
        {
          WdLogSingleEntry1(1LL, 2001LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"pFlipOverlayData->ToDisableLayers & (1 << LayerIndex)",
            2001LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        v43 = this;
        v44 = v207;
        if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 1848LL) + 216LL) + 64LL)
                                   + 40LL)
                       + 28LL) >= 0x4002u )
        {
          *(_DWORD *)&v246[v57] &= 0xFFFFFFE0;
          v44 = v207 + 1;
          *(_QWORD *)&v246[v57 - 8] = 0LL;
          ++v207;
          v247[v57 / 8] = 0LL;
        }
      }
      v54 = (unsigned int)(v209 + 1);
      v209 = v54;
      if ( (unsigned int)v54 >= v10->PresentPlaneCount )
      {
        v41 = v217;
        break;
      }
      v55 = v218;
      continue;
    }
  }
  P = 0LL;
  v241 = 0;
  memset(v232, 0, sizeof(v232));
  if ( v213 >= 2 )
  {
    LODWORD(v232[0]) = v10->VidPnSourceId;
    HIDWORD(v232[0]) = v44;
    v99 = (DXGK_ALLOCATIONLIST *)v232;
    v232[1] = v244;
    goto LABEL_100;
  }
  _mm_lfence();
  v168 = *v10->ppPresentPlanes;
  if ( (v168->InputFlags.Value & 1) == 0 )
  {
    WdLogSingleEntry1(1LL, 2031LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pPlane->InputFlags.Enabled", 2031LL, 0LL, 0LL, 0LL, 0LL);
  }
  v41->Flags.Value &= ~0x1000u;
  v169 = v168->pPlaneAttributes->DirtyRectCount;
  v41->SubRectCnt = v169;
  if ( v169 )
    v41->pDstSubRects = v168->pPlaneAttributes->pDirtyRects;
  if ( v206 <= 1 )
  {
    if ( *((_BYTE *)v43 + 438) )
    {
      v183 = *((unsigned int *)v43 + 100);
      v184 = *((unsigned __int8 *)v43 + 439);
      v232[4] = v245;
      v232[5] = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v43 + 2) + 16LL) + 648LL)
                                                                                        + 8LL)
                                                                            + 256LL))(
                  *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v43 + 2) + 16LL) + 656LL),
                  *(_QWORD *)(*(_QWORD *)v216 + 24LL),
                  v184,
                  v183);
      v99 = (DXGK_ALLOCATIONLIST *)v232;
      v232[6] = v247[0];
      LOWORD(v232[7]) = v246[0] & 0x1F;
    }
    else
    {
      v99 = (DXGK_ALLOCATIONLIST *)v232;
      v232[3] = v245;
      v232[1] = 0LL;
      v232[2] = 0LL;
      v97 = 2 * (v246[0] & 0x1Fu);
      memset(&v232[6], 0, 24);
      v232[5] = v247[0];
      v232[4] = v97;
    }
LABEL_100:
    v41->pAllocationList = v99;
    v100 = *((_QWORD *)v43 + 2);
    v216 = 0LL;
    v101 = *(_QWORD *)(v100 + 16);
    if ( !*(_BYTE *)(*(_QWORD *)(v101 + 16) + 2746LL) )
      v216 = (const struct DXGALLOCATIONREFERENCE *)*((_QWORD *)v43 + 23);
    v229 = -1;
    v230 = 0LL;
    if ( (qword_1C012F870 & 2) != 0 )
    {
      v231 = 1;
      v229 = 5031;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v97, &EventProfilerEnter, v98, 5031);
    }
    else
    {
      v231 = 0;
    }
    DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v229, 5031);
    CurrentProcess = PsGetCurrentProcess(v103, v102, v104, v105);
    ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
    v108 = ProcessDxgProcess;
    if ( (!ProcessDxgProcess || (*(_DWORD *)(ProcessDxgProcess + 424) & 0x80) != 0)
      && (Current = DXGTHREAD::GetCurrent()) != 0LL
      && (v109 = *((_QWORD *)Current + 3)) != 0
      || (v109 = v108) != 0 )
    {
      v110 = v109 + 152;
      if ( v109 != -152 && *(struct _KTHREAD **)(v109 + 160) == KeGetCurrentThread() )
      {
        WdLogSingleEntry1(1LL, 1425LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"bAllowAcquireRecursive || pPushLock == NULL || !m_pPushLock->IsExclusiveOwner()",
          1425LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      v111 = 0;
      if ( v109 )
      {
        KeEnterCriticalRegion();
        if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v109 + 152, 0LL) )
        {
          if ( bTracingEnabled )
          {
            v154 = *(_DWORD *)(v109 + 176);
            if ( v154 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
              McTemplateK0q_EtwWriteTransfer(v112, (const EVENT_DESCRIPTOR *)"g", v113, v154);
          }
          ExAcquirePushLockExclusiveEx(v109 + 152, 0LL);
        }
        v111 = 2;
        *(_QWORD *)(v109 + 160) = KeGetCurrentThread();
      }
    }
    else
    {
      v110 = 0LL;
      v111 = 0;
    }
    DXGADAPTER::AcquireDdiSync(*(_QWORD *)(v101 + 16), 1);
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v101 + 16) + 4484LL));
    v114 = 0LL;
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql < 2u
      && (DxgThread = 0LL, (int)PsTlsGetValue(g_DxgkThreadTlsId, &DxgThread) >= 0)
      && ((v114 = DxgThread) != 0LL || (DxgThread = DxgkThreadObjectCreateDxgThread(), (v114 = DxgThread) != 0LL)) )
    {
      v210 = *((_DWORD *)v114 + 12);
    }
    else
    {
      v210 = 0;
    }
    DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
      (DXGVALIDATIONPROCESSATTACH *)v242,
      *(struct DXGADAPTER **)(v101 + 16));
    v115 = (*(int (__fastcall **)(const struct DXGALLOCATIONREFERENCE *, struct _DXGKARG_PRESENT *))(*(_QWORD *)(v101 + 16) + 736LL))(
             v216,
             v217);
    if ( v242[0] )
      KeUnstackDetachProcess(&ApcState);
    if ( CurrentIrql != KeGetCurrentIrql() )
    {
      v186 = KeGetCurrentIrql();
      WdLogSingleEntry5(0LL, 275LL, 16LL, v101, CurrentIrql, v186);
    }
    if ( v114 )
    {
      v117 = *((int *)v114 + 12);
      if ( (_DWORD)v117 != v210 )
        WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v114 + 12), v210, 0LL);
    }
    _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v101 + 16) + 4484LL));
    v118 = (_QWORD *)WdLogNewEntry5_WdTrace(v117, v116);
    v119 = v217;
    v120 = v216;
    v118[3] = v115;
    v118[4] = v120;
    v118[5] = v119->SubRectCnt;
    v118[6] = v119->pDmaBuffer;
    v118[7] = v119->DmaSize;
    if ( !(_DWORD)v115 )
    {
LABEL_125:
      DXGADAPTER::ReleaseDdiSync(*(DXGADAPTER **)(v101 + 16));
      v121 = 0;
      if ( v111 == 2 )
      {
        *(_QWORD *)(v110 + 8) = 0LL;
        ExReleasePushLockExclusiveEx(v110, 0LL);
        KeLeaveCriticalRegion();
      }
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v229);
      if ( v231 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v122, &EventProfilerExit, v123, v229);
      LODWORD(v70) = v115;
      if ( (int)v115 < 0 )
      {
        v138 = this;
LABEL_167:
        if ( P != v240 && P )
          ExFreePoolWithTag(P, 0);
        if ( (int)v70 < 0 )
          goto LABEL_227;
        goto LABEL_171;
      }
      Global = DXGGLOBAL_GetGlobal();
      v225 = Global;
      v226 = 0;
      if ( !Global )
      {
        WdLogSingleEntry1(1LL, 2725LL);
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pGlobal != NULL", 2725LL, 0LL, 0LL, 0LL, 0LL);
        Global = v225;
      }
      if ( ExIsResourceAcquiredSharedLite(*((PERESOURCE *)Global + 79)) )
      {
        WdLogSingleEntry1(1LL, 2730LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"!m_pGlobal->IsSyncObjectLockSharedOwner() || bAllowRecursive",
          2730LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      v126 = v214;
      v236 = 0LL;
      v238 = 0;
      v233 = 0LL;
      v127 = v214->PresentPlaneCount;
      v235 = 0;
      if ( (unsigned int)v127 > 4 )
      {
        if ( 0xFFFFFFFFFFFFFFFFuLL / v127 < 0x10 )
        {
          v132 = 0LL;
          goto LABEL_289;
        }
        v187 = 16 * v127;
        if ( !is_mul_ok(v127, 0x10uLL) )
          v187 = -1LL;
        v188 = __CFADD__(v187, 8LL);
        v189 = v187 + 8;
        if ( v188 )
          v189 = -1LL;
        v190 = operator new[](v189, 0x4B677844u, 256LL, v125);
        if ( v190 )
        {
          v191 = (struct DXGSYNCOBJECTMUTEX *)(v190 + 8);
          *(_QWORD *)v190 = v127;
          `vector constructor iterator'(
            (char *)(v190 + 8),
            16LL,
            v127,
            (void (__fastcall *)(char *))DXGSYNCOBJECTMUTEX::DXGSYNCOBJECTMUTEX);
          v236 = v191;
          v121 = 0;
        }
      }
      else
      {
        v236 = (struct DXGSYNCOBJECTMUTEX *)v237;
        if ( (_DWORD)v127 )
        {
          v128 = 0LL;
          v129 = (unsigned int)v127;
          do
          {
            v130 = v236;
            v128 += 16LL;
            *(_QWORD *)((char *)v236 + v128 - 16) = 0LL;
            *((_BYTE *)v130 + v128 - 8) = 0;
            --v129;
          }
          while ( v129 );
        }
      }
      v131 = v126->PresentPlaneCount;
      v238 = v127;
      v132 = v236;
      LODWORD(v127) = v131;
      if ( v131 <= 4 )
      {
        v233 = (struct DXGSYNCOBJECTMUTEX *)v234;
        if ( v131 )
        {
          v133 = 0LL;
          v134 = v131;
          do
          {
            v135 = v233;
            v133 += 16LL;
            *(_QWORD *)((char *)v233 + v133 - 16) = 0LL;
            *((_BYTE *)v135 + v133 - 8) = 0;
            --v134;
          }
          while ( v134 );
        }
        goto LABEL_141;
      }
LABEL_289:
      if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v127 < 0x10 )
      {
        v121 = 0;
        v136 = 0LL;
LABEL_142:
        if ( !v132 || !v136 )
        {
          WdLogSingleEntry1(2LL, -1073741801LL);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Failed to allocate FlipToSyncObjectMutexArray or FlipAwaySyncObjectMutexArray: Status = 0x%I64x",
            -1073741801LL,
            0LL,
            0LL,
            0LL,
            0LL);
          PagedPoolArray<DXGSYNCOBJECTMUTEX,4>::~PagedPoolArray<DXGSYNCOBJECTMUTEX,4>(&v233);
          PagedPoolArray<DXGSYNCOBJECTMUTEX,4>::~PagedPoolArray<DXGSYNCOBJECTMUTEX,4>(&v236);
          if ( v226 )
            DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v225);
          if ( P != v240 && P )
            ExFreePoolWithTag(P, 0);
          goto LABEL_171;
        }
        v137 = v126;
        v138 = this;
        LODWORD(v70) = DXGCONTEXT::AcquireMultiPlaneOverlay3FlipFences(
                         this,
                         v137,
                         v218,
                         a9,
                         (struct DXGSYNCOBJECTLOCK *)&v225,
                         v132,
                         v136);
        if ( (int)v70 < 0 )
        {
          PagedPoolArray<DXGSYNCOBJECTMUTEX,4>::~PagedPoolArray<DXGSYNCOBJECTMUTEX,4>(&v233);
          PagedPoolArray<DXGSYNCOBJECTMUTEX,4>::~PagedPoolArray<DXGSYNCOBJECTMUTEX,4>(&v236);
          if ( v226 )
            DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v225);
          if ( P != v240 && P )
            ExFreePoolWithTag(P, 0);
          goto LABEL_228;
        }
        if ( v206 )
        {
          v139 = v215;
          do
          {
            v140 = *v139;
            if ( *((struct _KTHREAD **)*v139 + 57) != KeGetCurrentThread() )
            {
              WdLogSingleEntry1(1LL, 2188LL);
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                -1,
                (__int64)L"pBroadcastContext[i]->GetContextLock()->IsExclusiveOwner()",
                2188LL,
                0LL,
                0LL,
                0LL,
                0LL);
              v140 = *v139;
            }
            if ( (*((_DWORD *)this + 101) & 0x10) != 0 )
            {
              DXGCONTEXT::SynchronizeImplicitQueueWithRenderQueues(v140, 0LL, 0, 0, a9, 0);
              v140 = *v139;
            }
            v141 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v140 + 2) + 16LL) + 624LL) + 8LL);
            if ( (*((_DWORD *)v140 + 101) & 0x10) != 0 )
              v142 = (*(__int64 (__fastcall **)(_QWORD, struct VIDSCH_SUBMIT_DATA_BASE *))(v141 + 432))(
                       *((_QWORD *)v140 + 36),
                       a9);
            else
              v142 = (*(__int64 (__fastcall **)(_QWORD, struct VIDSCH_SUBMIT_DATA_BASE *))(v141 + 424))(
                       *((_QWORD *)v140 + 32),
                       a9);
            LODWORD(v70) = v142;
            if ( v142 < 0 )
              break;
            *(_DWORD *)a9 &= ~0x800u;
            ++v121;
            ++v139;
          }
          while ( v121 < v206 );
        }
        v143 = v233;
        if ( v233 == (struct DXGSYNCOBJECTMUTEX *)v234 )
        {
          v144 = v235;
          for ( i = 0; i < v144; ++i )
          {
            v146 = (struct DXGSYNCOBJECTMUTEX *)((char *)v143 + 16 * i);
            if ( *((_BYTE *)v146 + 8) )
            {
              DXGAUTOMUTEX::Release(v146);
              v144 = v235;
              v143 = v233;
            }
          }
        }
        else if ( v233 )
        {
          v196 = (char *)v233 - 8;
          `vector destructor iterator'(
            (char *)v233,
            16LL,
            *((_QWORD *)v233 - 1),
            (void (__fastcall *)(char *))DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX);
          operator delete[](v196);
        }
        v147 = v236;
        if ( v236 == (struct DXGSYNCOBJECTMUTEX *)v237 )
        {
          v148 = v238;
          for ( j = 0; j < v148; ++j )
          {
            v150 = (struct DXGSYNCOBJECTMUTEX *)((char *)v147 + 16 * j);
            if ( *((_BYTE *)v150 + 8) )
            {
              DXGAUTOMUTEX::Release(v150);
              v148 = v238;
              v147 = v236;
            }
          }
        }
        else if ( v236 )
        {
          v197 = (char *)v236 - 8;
          `vector destructor iterator'(
            (char *)v236,
            16LL,
            *((_QWORD *)v236 - 1),
            (void (__fastcall *)(char *))DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX);
          operator delete[](v197);
        }
        if ( v226 )
          DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v225);
        goto LABEL_167;
      }
      v192 = 16LL * (unsigned int)v127;
      if ( !is_mul_ok((unsigned int)v127, 0x10uLL) )
        v192 = -1LL;
      v188 = __CFADD__(v192, 8LL);
      v193 = v192 + 8;
      if ( v188 )
        v193 = -1LL;
      v194 = operator new[](v193, 0x4B677844u, 256LL, v125);
      if ( v194 )
      {
        *(_QWORD *)v194 = (unsigned int)v127;
        v195 = (struct DXGSYNCOBJECTMUTEX *)(v194 + 8);
        `vector constructor iterator'(
          (char *)(v194 + 8),
          16LL,
          (unsigned int)v127,
          (void (__fastcall *)(char *))DXGSYNCOBJECTMUTEX::DXGSYNCOBJECTMUTEX);
        v233 = v195;
      }
      v121 = 0;
LABEL_141:
      v136 = v233;
      v235 = v127;
      goto LABEL_142;
    }
    if ( (int)v115 > -1073741670 )
    {
      if ( (_DWORD)v115 == -1071775743 || (_DWORD)v115 == -1071775736 || (_DWORD)v115 == -1071775232 )
        goto LABEL_125;
    }
    else if ( (_DWORD)v115 == -1073741670
           || (_DWORD)v115 == -1073741816
           || (_DWORD)v115 == -1073741801
           || (_DWORD)v115 == -1073741795
           || (_DWORD)v115 == -1073741674 )
    {
      goto LABEL_125;
    }
    WdLogSingleEntry1(2LL, v115);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Driver returned an invalid NTSTATUS code: 0x%I64x",
      v115,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_125;
  }
  v170 = PagedPoolZeroedArray<_DXGK_PRESENTALLOCATIONINFO,4>::AllocateElements(&P);
  v99 = (DXGK_ALLOCATIONLIST *)v170;
  if ( v170 )
  {
    v98 = (__int64)v215;
    v171 = v170 + 16;
    v172 = 0;
    v221 = (char *)v215;
    v173 = (char *)a9 + 600;
    while ( 1 )
    {
      v174 = *((_QWORD *)v216 + v213 * v172);
      v175 = *(_QWORD *)v98;
      v220 = v174;
      if ( ((*(_DWORD *)(v174 + 72) >> 12) & 0x3F) != *(_DWORD *)(v175 + 400) )
        break;
      *(_QWORD *)(v171 - 16) = *(_QWORD *)(v174 + 32);
      *(_QWORD *)(v171 - 8) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 648LL) + 8LL)
                                                                                        + 256LL))(
                                *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 656LL),
                                *(_QWORD *)(v174 + 24),
                                *((unsigned __int8 *)this + 439),
                                *(unsigned int *)(*(_QWORD *)v98 + 400LL));
      if ( *((_BYTE *)a9 + 356) )
      {
        v176 = *((_DWORD *)a9 + 151);
        v173 = (char *)a9 + 600;
        v177 = (char *)a9 + v176 * ((8 * *((_DWORD *)a9 + 152) + 231) & 0xFFFFFFF8) + 640;
        v97 = (unsigned __int64)(v172 * v176) << 6;
        v178 = &v177[v97];
      }
      else
      {
        v178 = (char *)a9 + 520;
      }
      *(_QWORD *)v171 = *(_QWORD *)v178;
      if ( *((_BYTE *)a9 + 356) )
      {
        v179 = *((_DWORD *)v173 + 1);
        v180 = v179 * ((8 * *((_DWORD *)v173 + 2) + 231) & 0xFFFFFFF8);
        v97 = (unsigned __int64)(v172 * v179) << 6;
        v181 = *(_WORD *)&v173[v180 + 32 + v97];
      }
      else
      {
        v173 = (char *)a9 + 600;
        v181 = (*((_DWORD *)a9 + 139) >> 17) & 0x1F;
      }
      v182 = v221;
      ++v172;
      *(_WORD *)(v171 + 8) = v181;
      v98 = (__int64)(v182 + 8);
      v171 += 32LL;
      v221 = (char *)v98;
      if ( v172 >= v206 )
      {
        v41 = v217;
        v43 = this;
        v217->NumSrcAllocations = v206;
        goto LABEL_100;
      }
    }
    WdLogSingleEntry1(2LL, v174);
    v121 = 0;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Physical adapter index for context and allocation must be the same. DXGALLOCATION 0x%I64x",
      v220,
      0LL,
      0LL,
      0LL,
      0LL);
    LODWORD(v70) = -1073741811;
    if ( P != v240 && P )
      ExFreePoolWithTag(P, 0);
    v138 = this;
  }
  else
  {
    LODWORD(v70) = -1073741801;
    if ( P != v240 && P )
      ExFreePoolWithTag(P, 0);
LABEL_226:
    v138 = this;
LABEL_227:
    v121 = 0;
  }
LABEL_228:
  if ( v201 )
  {
    v161 = v206;
    do
    {
      v162 = 0;
      if ( v161 )
      {
        do
        {
          if ( *((_BYTE *)a9 + 356) )
          {
            v163 = *((_DWORD *)a9 + 151);
            v164 = v163 * ((8 * *((_DWORD *)a9 + 152) + 231) & 0xFFFFFFF8) + 648LL;
            v165 = (unsigned __int64)(v121 + v162 * v163) << 6;
            v166 = (char *)a9 + v164;
          }
          else
          {
            v166 = (char *)a9 + 504;
            v165 = 80LL * v121;
          }
          v198 = *(_QWORD *)&v166[v165];
          if ( v198 )
            (*(void (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v138 + 2) + 16LL)
                                                                                            + 648LL)
                                                                                + 8LL)
                                                                    + 440LL))(
              *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v138 + 2) + 16LL) + 656LL),
              *((unsigned int *)a9 + 34),
              v198,
              0LL);
          v161 = v206;
          ++v162;
        }
        while ( v162 < v206 );
      }
      ++v121;
    }
    while ( v121 < v201 );
  }
  WdLogSingleEntry2(2LL, v138, (int)v70);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"0x%I64x failed to submit present for multi plane overlay, returning 0x%I64x",
    (__int64)v138,
    (int)v70,
    0LL,
    0LL,
    0LL);
LABEL_171:
  v151 = (struct _SLIST_ENTRY **)&v249;
  do
  {
    CAutoRefCountedBuffer::~CAutoRefCountedBuffer(--v151);
    --v38;
  }
  while ( v38 );
  v152 = (struct _SLIST_ENTRY *)v224;
  if ( v224 && _InterlockedExchangeAdd((volatile signed __int32 *)v224 + 3, 0xFFFFFFFF) == 1 )
  {
    Next = v152->Next;
    if ( v152->Next )
    {
      ++*((_DWORD *)&Next[1].Next + 3);
      if ( ExQueryDepthSList((PSLIST_HEADER)Next) < LOWORD(Next[1].Next) )
      {
        ExpInterlockedPushEntrySList((PSLIST_HEADER)Next, v152);
      }
      else
      {
        ++LODWORD(Next[2].Next);
        (*((void (__fastcall **)(struct _SLIST_ENTRY *, struct _SLIST_ENTRY *))&Next[3].Next + 1))(v152, Next);
      }
    }
    else
    {
      ExFreePoolWithTag(v152, 0);
    }
  }
  return (unsigned int)v70;
}
