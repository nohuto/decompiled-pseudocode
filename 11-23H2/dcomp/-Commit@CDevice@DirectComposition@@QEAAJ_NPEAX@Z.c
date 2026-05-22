/*
 * XREFs of ?Commit@CDevice@DirectComposition@@QEAAJ_NPEAX@Z @ 0x180025130
 * Callers:
 *     ?Commit@CDevice@DirectComposition@@UEAAJXZ @ 0x180023FC0 (-Commit@CDevice@DirectComposition@@UEAAJXZ.c)
 *     ?SynchronizedCommit@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAX@Z @ 0x180024D40 (-SynchronizedCommit@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAX@Z.c)
 *     ?Commit@Api@InteropCompositor@Composition@UI@Windows@@UEAAJXZ @ 0x180024F90 (-Commit@Api@InteropCompositor@Composition@UI@Windows@@UEAAJXZ.c)
 *     ?InternalCommit_Callback@CompositorCommon@Composition@UI@Windows@@QEAAJPEAX@Z @ 0x1800803B4 (-InternalCommit_Callback@CompositorCommon@Composition@UI@Windows@@QEAAJPEAX@Z.c)
 *     ?InternalCommit@CDevice@DirectComposition@@UEAAJPEAX@Z @ 0x1800F2290 (-InternalCommit@CDevice@DirectComposition@@UEAAJPEAX@Z.c)
 *     ?SynchronizedCommit@CDevice@DirectComposition@@UEAAJPEAX@Z @ 0x1800F6920 (-SynchronizedCommit@CDevice@DirectComposition@@UEAAJPEAX@Z.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RecordUtilizationInfo@CSurfaceManager@DirectComposition@@QEAAXXZ @ 0x1800194B8 (-RecordUtilizationInfo@CSurfaceManager@DirectComposition@@QEAAXXZ.c)
 *     ?OfferPendingSurfaces@CDevice@DirectComposition@@AEAAJXZ @ 0x1800194F8 (-OfferPendingSurfaces@CDevice@DirectComposition@@AEAAJXZ.c)
 *     ?HideSurfacesPendingOffer@CDevice@DirectComposition@@AEAAJXZ @ 0x1800195A0 (-HideSurfacesPendingOffer@CDevice@DirectComposition@@AEAAJXZ.c)
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ?DiscardLargeSurface@CSurfaceManager@DirectComposition@@AEAAXPEAVCAtlasSurface@2@@Z @ 0x18001E48C (-DiscardLargeSurface@CSurfaceManager@DirectComposition@@AEAAXPEAVCAtlasSurface@2@@Z.c)
 *     ?IsAvailable@CAtlasSurfacePool@DirectComposition@@QEBA_NXZ @ 0x18001FE50 (-IsAvailable@CAtlasSurfacePool@DirectComposition@@QEBA_NXZ.c)
 *     ?CollectScratchSurfaces@CScratchSurfaceManager@DirectComposition@@QEAAX_N@Z @ 0x180021458 (-CollectScratchSurfaces@CScratchSurfaceManager@DirectComposition@@QEAAX_N@Z.c)
 *     ?RecordUtilizationInfo@CAtlasSurfacePool@DirectComposition@@QEAAXXZ @ 0x180021900 (-RecordUtilizationInfo@CAtlasSurfacePool@DirectComposition@@QEAAXXZ.c)
 *     ?D2DEndDraw@CAtlasSurfacePool@DirectComposition@@AEAAXXZ @ 0x180021E78 (-D2DEndDraw@CAtlasSurfacePool@DirectComposition@@AEAAXXZ.c)
 *     ?ExecuteGutterExtensions@CAtlasSurfacePool@DirectComposition@@QEAAJXZ @ 0x180022D9C (-ExecuteGutterExtensions@CAtlasSurfacePool@DirectComposition@@QEAAJXZ.c)
 *     ?CollectDeadSurfaces@CDynamicPoolSet@DirectComposition@@QEAAXXZ @ 0x180024398 (-CollectDeadSurfaces@CDynamicPoolSet@DirectComposition@@QEAAXXZ.c)
 *     ?HRESULTFromNTSTATUS@CDevice@DirectComposition@@SAJJ@Z @ 0x1800244CC (-HRESULTFromNTSTATUS@CDevice@DirectComposition@@SAJJ@Z.c)
 *     ?CapMaximumAllocations@CSurfaceManager@DirectComposition@@QEAAX_N@Z @ 0x180026B30 (-CapMaximumAllocations@CSurfaceManager@DirectComposition@@QEAAX_N@Z.c)
 *     ?CommitToKernel@CDevice@DirectComposition@@AEAAJ_NPEAX@Z @ 0x180027090 (-CommitToKernel@CDevice@DirectComposition@@AEAAJ_NPEAX@Z.c)
 *     ??1?$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ @ 0x1800273D0 (--1-$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ.c)
 *     ?CollectDead@CAtlasNode@DirectComposition@@QEAAXXZ @ 0x180027480 (-CollectDead@CAtlasNode@DirectComposition@@QEAAXXZ.c)
 *     ?ExtendEdgesForInvalidGutters@CBitmapInfoBack@DirectComposition@@QEAAJXZ @ 0x180027B98 (-ExtendEdgesForInvalidGutters@CBitmapInfoBack@DirectComposition@@QEAAJXZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ @ 0x18002AEB8 (-InternalRelease@-$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ.c)
 *     ?UnuseSurface@CBitmapInfoFront@DirectComposition@@AEAAXPEAVCAtlasSurface@2@AEBUtagRECT@@@Z @ 0x18002E744 (-UnuseSurface@CBitmapInfoFront@DirectComposition@@AEAAXPEAVCAtlasSurface@2@AEBUtagRECT@@@Z.c)
 *     ?OptimizeVirtualSurface@CVirtualSurfaceOptimizer@DirectComposition@@AEAAJPEAVCVirtualSurface@2@_NPEA_N@Z @ 0x180036D24 (-OptimizeVirtualSurface@CVirtualSurfaceOptimizer@DirectComposition@@AEAAJPEAVCVirtualSurface@2@_.c)
 *     ?RemoveDynamicPool@CDynamicPoolSet@DirectComposition@@AEAAXPEAVCDynamicPool@2@@Z @ 0x1800396D8 (-RemoveDynamicPool@CDynamicPoolSet@DirectComposition@@AEAAXPEAVCDynamicPool@2@@Z.c)
 *     ?Remove@?$CLinkTargetedDoubleLinkedList@VCVirtualSurface@DirectComposition@@$0FI@$0FI@@@QEAAXPEAVCVirtualSurface@DirectComposition@@@Z @ 0x18003C1C4 (-Remove@-$CLinkTargetedDoubleLinkedList@VCVirtualSurface@DirectComposition@@$0FI@$0FI@@@QEAAXPEA.c)
 *     ??$ReleaseInterface@VCAnimationProxy@DirectComposition@@@@YAXAEAPEAVCAnimationProxy@DirectComposition@@@Z @ 0x180063DF0 (--$ReleaseInterface@VCAnimationProxy@DirectComposition@@@@YAXAEAPEAVCAnimationProxy@DirectCompos.c)
 *     ?AddMultipleAndSet@?$DynArray@UDCOMPOSITION_TOKEN_SURFACE_UPDATE_INFO@@$0A@@@QEAAJPEFBUDCOMPOSITION_TOKEN_SURFACE_UPDATE_INFO@@I@Z @ 0x1800730A8 (-AddMultipleAndSet@-$DynArray@UDCOMPOSITION_TOKEN_SURFACE_UPDATE_INFO@@$0A@@@QEAAJPEFBUDCOMPOSIT.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007E478 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?AddMultipleAndSet@?$DynArray@PEAUIUnknown@@$0A@@@QEAAJPEFBQEAUIUnknown@@I@Z @ 0x18008084C (-AddMultipleAndSet@-$DynArray@PEAUIUnknown@@$0A@@@QEAAJPEFBQEAUIUnknown@@I@Z.c)
 *     ?IsAvailable@CCompositorSynchronizedObject@DirectComposition@@QEAA_NXZ @ 0x180085CEC (-IsAvailable@CCompositorSynchronizedObject@DirectComposition@@QEAA_NXZ.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     ?PostCommit@CDeviceTextureManager@DirectComposition@@QEAAJXZ @ 0x180098CD4 (-PostCommit@CDeviceTextureManager@DirectComposition@@QEAAJXZ.c)
 *     ?Present@CDeviceTextureManager@DirectComposition@@QEAAJXZ @ 0x180098D6C (-Present@CDeviceTextureManager@DirectComposition@@QEAAJXZ.c)
 *     ??9?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUID3D11Device5@@PEAVCDeviceTextureManager@DirectComposition@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEBA_NU_Default_sentinel@1@@Z @ 0x18009A69C (--9-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEAUID3D11Device5.c)
 *     ??E?$_Tree_unchecked_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUID3D11Device5@@PEAVCDeviceTextureManager@DirectComposition@@@std@@@std@@@std@@@std@@QEAAAEAV01@XZ @ 0x18009A6B0 (--E-$_Tree_unchecked_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEAUID3D11Device5@@PEAV.c)
 *     ?CheckClientDrawNotInProgress@CDevice@DirectComposition@@QEBAJXZ @ 0x18009ACB8 (-CheckClientDrawNotInProgress@CDevice@DirectComposition@@QEBAJXZ.c)
 *     ?First@?$CLinkTargetedDoubleLinkedList@VCSurfaceFactory@DirectComposition@@$0BCA@$0BCA@@@QEBAPEAVCSurfaceFactory@DirectComposition@@XZ @ 0x18009AD9C (-First@-$CLinkTargetedDoubleLinkedList@VCSurfaceFactory@DirectComposition@@$0BCA@$0BCA@@@QEBAPEA.c)
 *     ?GetNext@?$CLinkTargetedDoubleLinkedList@VCSurfaceFactory@DirectComposition@@$0BCA@$0BCA@@@QEBAPEAVCSurfaceFactory@DirectComposition@@PEAV23@@Z @ 0x18009B538 (-GetNext@-$CLinkTargetedDoubleLinkedList@VCSurfaceFactory@DirectComposition@@$0BCA@$0BCA@@@QEBAP.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_CompositionTextures@@@details@wil@@QEAA_NXZ @ 0x18009B8C4 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_CompositionTextures@@@details@wil.c)
 *     ??0MultithreadDeviceLock@DirectComposition@@QEAA@PEBVCDxDevice@1@@Z @ 0x18009B9B4 (--0MultithreadDeviceLock@DirectComposition@@QEAA@PEBVCDxDevice@1@@Z.c)
 *     ?Leave@MultithreadDeviceLock@DirectComposition@@SAXPEBVCDxDevice@2@@Z @ 0x18009BE08 (-Leave@MultithreadDeviceLock@DirectComposition@@SAXPEBVCDxDevice@2@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x1800E5E3C (McGenEventWrite_EventWriteTransfer.c)
 *     ?HasAged@CAtlasSurfacePool@DirectComposition@@QEBA_NK@Z @ 0x1800E92C8 (-HasAged@CAtlasSurfacePool@DirectComposition@@QEBA_NK@Z.c)
 *     McTemplateU0x_EventWriteTransfer @ 0x1800E9380 (McTemplateU0x_EventWriteTransfer.c)
 *     McTemplateU0qqx_EventWriteTransfer @ 0x1800EA8AC (McTemplateU0qqx_EventWriteTransfer.c)
 *     ?ShouldBlockForExcessivePending@CDevice@DirectComposition@@AEAA_NXZ @ 0x1800F66EC (-ShouldBlockForExcessivePending@CDevice@DirectComposition@@AEAA_NXZ.c)
 *     McTemplateU0xqqq_EventWriteTransfer @ 0x1800F73A4 (McTemplateU0xqqq_EventWriteTransfer.c)
 *     ?TrimPools@CDynamicPoolSet@DirectComposition@@QEAAXXZ @ 0x1800F7D60 (-TrimPools@CDynamicPoolSet@DirectComposition@@QEAAXXZ.c)
 *     ?Rebuild@CRebuildableObject@DirectComposition@@QEAAJXZ @ 0x1800FAC54 (-Rebuild@CRebuildableObject@DirectComposition@@QEAAJXZ.c)
 *     ??$ReleaseInterface@VCScratchSurface@DirectComposition@@@@YAXAEAPEAVCScratchSurface@DirectComposition@@@Z @ 0x1800FAD0C (--$ReleaseInterface@VCScratchSurface@DirectComposition@@@@YAXAEAPEAVCScratchSurface@DirectCompos.c)
 *     ?TrimLargeSurfaces@CSurfaceManager@DirectComposition@@IEAAXXZ @ 0x1800FBD28 (-TrimLargeSurfaces@CSurfaceManager@DirectComposition@@IEAAXXZ.c)
 *     ?LogTelemetryLocked@CTelemetryHelper@@AEAAXXZ @ 0x1800FCD20 (-LogTelemetryLocked@CTelemetryHelper@@AEAAXXZ.c)
 *     ?OnDeviceCommit@CYCbCrBitmapInfo@DirectComposition@@QEAAXPEAV?$DynArrayIANoCtor@PEAUIUnknown@@$0BA@$0A@@@PEAV?$DynArrayIANoCtor@UDCOMPOSITION_TOKEN_SURFACE_UPDATE_INFO@@$0BA@$0A@@@@Z @ 0x1800FF2B8 (-OnDeviceCommit@CYCbCrBitmapInfo@DirectComposition@@QEAAXPEAV-$DynArrayIANoCtor@PEAUIUnknown@@$0.c)
 *     ??1?$ComPtr@UID3D11PartnerDevice@@@WRL@Microsoft@@QEAA@XZ @ 0x180100494 (--1-$ComPtr@UID3D11PartnerDevice@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?IsKernelDebuggerPresent@@YAHXZ @ 0x18010084C (-IsKernelDebuggerPresent@@YAHXZ.c)
 */

__int64 __fastcall DirectComposition::CDevice::Commit(DirectComposition::CDevice *this, bool a2, void *a3)
{
  char *v3; // rsi
  _QWORD *v4; // rdi
  DirectComposition::CDevice *v5; // r15
  __int64 v6; // rcx
  __int64 v7; // rdx
  int v8; // r14d
  CHAR v9; // bl
  char v10; // al
  __int64 v11; // r8
  DirectComposition::CRebuildableObject *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rbx
  DirectComposition::CVirtualSurfaceOptimizer *v15; // r15
  ULONGLONG TickCount64; // rax
  _QWORD *v17; // rcx
  char *v18; // rbx
  _QWORD *v19; // rax
  __int64 v20; // rax
  char v21; // al
  struct _RTL_CRITICAL_SECTION *v22; // r14
  DirectComposition::CDevice *v23; // r12
  unsigned int v24; // ebx
  char *v25; // rax
  struct _RTL_CRITICAL_SECTION *v26; // rdx
  __int64 v27; // rcx
  int m; // r15d
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  _QWORD *v32; // r13
  __int64 v33; // rdi
  __int64 v34; // rax
  __int64 v35; // rbx
  __int64 v36; // rcx
  __int64 v37; // r14
  int v38; // eax
  __int64 v39; // rax
  struct DirectComposition::CAtlasSurface *v40; // rdx
  __int64 v41; // rcx
  int v42; // eax
  __int64 j; // rbx
  void (__fastcall ***v44)(_QWORD, char *, _QWORD); // rcx
  __int64 v45; // rbx
  int v46; // eax
  volatile signed __int32 *v47; // rdi
  int v48; // eax
  int v49; // ebx
  BOOL v50; // eax
  CHAR v51; // cl
  HANDLE CurrentProcess; // rax
  HANDLE CurrentThread; // rax
  __int64 v54; // rdx
  unsigned int v55; // ecx
  __int64 v56; // rbx
  int v57; // r13d
  int v58; // r12d
  int v59; // edi
  int v60; // r14d
  int v61; // eax
  __int64 v62; // rax
  __int64 k; // rbx
  __int64 v64; // rax
  DirectComposition::CAtlasSurfacePool *v65; // rcx
  __int64 v66; // rax
  unsigned int v67; // edi
  __int64 v68; // rcx
  unsigned int v69; // r14d
  void *v70; // r12
  __int64 *v71; // rbx
  int v72; // eax
  __int64 (__fastcall ***v73)(_QWORD, GUID *, __int64 *); // rcx
  int v74; // eax
  int v75; // eax
  __int64 v76; // rcx
  int v77; // eax
  bool v78; // sf
  _BYTE *v79; // rbx
  int v80; // eax
  __int64 v81; // rax
  __int64 v82; // rbx
  bool v83; // bl
  void *v84; // rdi
  __int64 v85; // rcx
  int v86; // eax
  __int64 v87; // r12
  int v88; // r14d
  __int64 v89; // rbx
  DirectComposition::CDynamicPoolSet **v90; // rbx
  DirectComposition::CDynamicPoolSet *v91; // rcx
  __int64 v92; // r8
  __int64 v93; // r9
  DWORD TickCount; // r15d
  int v95; // edi
  __int64 v96; // rsi
  __int64 v97; // r9
  __int64 v98; // rcx
  unsigned int v99; // edx
  unsigned int v100; // eax
  __int64 v101; // r8
  DirectComposition::CSurfaceManager *v102; // r13
  _QWORD *v103; // rax
  _QWORD *v104; // rbx
  _QWORD *v105; // rax
  __int64 v106; // rdi
  __int64 v107; // rax
  __int64 v108; // rdi
  __int64 v109; // rbx
  DirectComposition::CAtlasSurfacePool *v110; // rcx
  __int64 v111; // rax
  __int64 v112; // rdi
  __int64 v113; // rax
  __int64 v114; // rdi
  __int64 v115; // rbx
  DirectComposition::CAtlasNode *v116; // rcx
  __int64 v117; // rax
  DirectComposition::CDynamicPoolSet *v118; // r15
  _QWORD *v119; // rax
  struct DirectComposition::CDynamicPool *v120; // rbx
  _QWORD *v121; // rax
  struct DirectComposition::CDynamicPool *v122; // rdi
  __int64 v123; // rax
  bool v124; // zf
  DWORD v125; // eax
  DirectComposition::CAtlasSurfacePool *v126; // rcx
  _QWORD *v127; // rax
  _QWORD *v128; // rbx
  _QWORD *v129; // rax
  _QWORD *v130; // rcx
  DWORD v131; // eax
  _QWORD *v132; // rcx
  DWORD v133; // edi
  _QWORD *v134; // rbx
  _QWORD *v135; // rax
  DirectComposition::CAtlasSurfacePool *v136; // rcx
  struct DirectComposition::CAtlasSurface *v137; // rdx
  __int64 v138; // rcx
  unsigned int v139; // eax
  unsigned int v140; // eax
  __int64 v141; // rcx
  __int64 v142; // rbx
  DirectComposition::CSurfaceManager *v143; // rcx
  __int64 v144; // r8
  __int64 v145; // r9
  __int64 v146; // rcx
  unsigned __int64 v147; // rdx
  unsigned int v148; // eax
  __int64 v149; // rcx
  ULONGLONG v150; // r12
  DirectComposition::CDevice *v151; // rbx
  __int64 v152; // rcx
  _QWORD *v153; // rax
  __int64 v154; // r8
  _QWORD *v155; // rdx
  _QWORD *v156; // rax
  _QWORD *v157; // rbx
  _QWORD *v158; // rcx
  _QWORD *v159; // rax
  __int64 v160; // r8
  _QWORD *v161; // rax
  _QWORD *v162; // rbx
  _QWORD *v163; // rcx
  _QWORD *v164; // rax
  __int64 v165; // r8
  DirectComposition::CDevice *v166; // r13
  char *v167; // rdi
  __int64 v168; // rax
  __int64 v169; // rcx
  _QWORD *v170; // rax
  __int64 v171; // rdx
  _QWORD *v172; // rcx
  __int64 v173; // r15
  __int64 v174; // rcx
  __int64 *v175; // rsi
  __int64 *v176; // rbx
  __int64 v177; // rcx
  __int64 **v178; // rax
  __int64 v179; // rdi
  int v180; // eax
  int v181; // eax
  __int64 **v182; // rax
  unsigned int v183; // eax
  __int64 v184; // rcx
  unsigned int v185; // eax
  __int64 v186; // rcx
  __int64 v187; // rdx
  __int64 v188; // r8
  DirectComposition::CDevice *v189; // rdx
  int v190; // eax
  unsigned int v191; // ebx
  void *v193; // r14
  ULONGLONG *v194; // rbx
  ULONGLONG v195; // rsi
  int v196; // [rsp+60h] [rbp-318h]
  unsigned int v197; // [rsp+60h] [rbp-318h]
  bool v198[4]; // [rsp+64h] [rbp-314h] BYREF
  CHAR Response[4]; // [rsp+68h] [rbp-310h] BYREF
  bool v200; // [rsp+6Ch] [rbp-30Ch]
  DirectComposition::CDevice *v201; // [rsp+70h] [rbp-308h] BYREF
  __int64 v202; // [rsp+78h] [rbp-300h] BYREF
  ULONGLONG v203; // [rsp+80h] [rbp-2F8h]
  __int64 v204; // [rsp+88h] [rbp-2F0h] BYREF
  HANDLE hObject; // [rsp+90h] [rbp-2E8h] BYREF
  __int64 Next; // [rsp+98h] [rbp-2E0h]
  void *v207; // [rsp+A0h] [rbp-2D8h]
  _QWORD *v208; // [rsp+A8h] [rbp-2D0h] BYREF
  __int64 v209; // [rsp+B0h] [rbp-2C8h] BYREF
  struct DirectComposition::CDxDevice *v210; // [rsp+B8h] [rbp-2C0h] BYREF
  char *v211; // [rsp+C0h] [rbp-2B8h]
  struct tagRECT v212; // [rsp+C8h] [rbp-2B0h] BYREF
  __int64 v213; // [rsp+D8h] [rbp-2A0h] BYREF
  int v214; // [rsp+E0h] [rbp-298h]
  int v215; // [rsp+E4h] [rbp-294h]
  int v216; // [rsp+E8h] [rbp-290h]
  int v217; // [rsp+ECh] [rbp-28Ch]
  void *v218; // [rsp+F0h] [rbp-288h] BYREF
  _BYTE *v219; // [rsp+F8h] [rbp-280h]
  int v220; // [rsp+100h] [rbp-278h]
  __int64 v221; // [rsp+104h] [rbp-274h]
  _BYTE v222[128]; // [rsp+110h] [rbp-268h] BYREF
  void *lpMem; // [rsp+190h] [rbp-1E8h] BYREF
  _BYTE *v224; // [rsp+198h] [rbp-1E0h]
  int v225; // [rsp+1A0h] [rbp-1D8h]
  __int64 i; // [rsp+1A4h] [rbp-1D4h]
  _BYTE v227[384]; // [rsp+1B0h] [rbp-1C8h] BYREF
  int v228[4]; // [rsp+330h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+378h] [rbp+0h]

  v4 = (_QWORD *)((char *)this + 96);
  v201 = this;
  v5 = this;
  v207 = a3;
  v6 = *((_QWORD *)this + 12);
  v200 = a2;
  v208 = v4;
  if ( v6 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6) )
      *((_BYTE *)v4 + 52) = 1;
    ++*((_DWORD *)v4 + 12);
  }
  else
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v4 + 1));
  }
  if ( !*((_DWORD *)v5 + 92) && *((_DWORD *)v5 + 107) )
  {
    v8 = -2003302399;
    v196 = -2003302399;
    goto LABEL_9;
  }
  v196 = DirectComposition::CDevice::CheckClientDrawNotInProgress(v5);
  v8 = v196;
  if ( v196 < 0 )
    goto LABEL_157;
  if ( *((_DWORD *)v5 + 93) )
  {
    v196 = DirectComposition::CDevice::HideSurfacesPendingOffer(v5, v7, v11);
    v8 = v196;
    if ( v196 < 0 )
      goto LABEL_157;
  }
  v8 = 0;
  do
  {
    v12 = (DirectComposition::CRebuildableObject *)*((_QWORD *)v5 + 60);
    if ( !v12 )
      break;
    v8 = DirectComposition::CRebuildableObject::Rebuild(v12);
    v13 = *((_QWORD *)v5 + 60);
    v14 = *(_QWORD *)(v13 + 8);
    if ( v8 >= 0 )
      *(_QWORD *)(v13 + 8) = 0LL;
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)v5 + 60) + 16LL))(*((_QWORD *)v5 + 60)) && v8 < 0 )
      break;
    *((_QWORD *)v5 + 60) = v14;
  }
  while ( v8 >= 0 );
  v196 = v8;
  if ( v8 < 0 )
    goto LABEL_157;
  v8 = 0;
  v15 = (DirectComposition::CVirtualSurfaceOptimizer *)*((_QWORD *)v5 + 58);
  v196 = 0;
  if ( !DirectComposition::g_VSAllowOptimizer )
    goto LABEL_44;
  TickCount64 = GetTickCount64();
  v17 = (_QWORD *)*((_QWORD *)v15 + 2);
  v203 = TickCount64;
  v7 = TickCount64;
  v18 = (char *)(v17 - 11);
  if ( v17 == (_QWORD *)((char *)v15 + 16) )
    v18 = 0LL;
  while ( v18 )
  {
    v19 = (_QWORD *)*((_QWORD *)v18 + 11);
    v124 = v19 == (_QWORD *)((char *)v15 + 16);
    v3 = (char *)(v19 - 11);
    v20 = *((_QWORD *)v18 + 13);
    if ( v124 )
      v3 = 0LL;
    if ( *(_DWORD *)(v20 + 344) || *(_BYTE *)(v20 + 353) )
      goto LABEL_42;
    v21 = v18[132];
    v198[0] = 0;
    if ( (v21 & 1) != 0 )
    {
      v18[132] = v21 & 0xFE;
      v8 = DirectComposition::CVirtualSurfaceOptimizer::OptimizeVirtualSurface(
             v15,
             (struct DirectComposition::CVirtualSurface *)v18,
             0,
             v198);
      if ( v198[0] )
LABEL_40:
        CLinkTargetedDoubleLinkedList<DirectComposition::CVirtualSurface,88,88>::Remove((char *)v15 + 8, v18);
      v7 = v203;
      goto LABEL_42;
    }
    if ( (unsigned __int64)(v7 - *((_QWORD *)v18 + 28)) >= 0x3E8 )
    {
      v8 = DirectComposition::CVirtualSurfaceOptimizer::OptimizeVirtualSurface(
             v15,
             (struct DirectComposition::CVirtualSurface *)v18,
             1,
             v198);
      goto LABEL_40;
    }
LABEL_42:
    v18 = v3;
    if ( v8 < 0 )
      break;
  }
  ++*(_DWORD *)v15;
  v196 = v8;
LABEL_44:
  if ( v8 < 0 )
  {
    v5 = v201;
  }
  else
  {
    if ( *v4 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*v4 + 8LL))(*v4) )
        *((_BYTE *)v4 + 52) = 1;
      ++*((_DWORD *)v4 + 12);
      v3 = (char *)(v4 + 6);
      v22 = (struct _RTL_CRITICAL_SECTION *)(v4 + 1);
    }
    else
    {
      v22 = (struct _RTL_CRITICAL_SECTION *)(v4 + 1);
      EnterCriticalSection((LPCRITICAL_SECTION)(v4 + 1));
      v3 = (char *)(v4 + 6);
    }
    v23 = v201;
    v24 = 0;
    v25 = v3;
    v26 = v22;
    if ( *((_DWORD *)v201 + 114) )
    {
      do
        ReleaseInterface<DirectComposition::CAnimationProxy>(*(_QWORD *)(*((_QWORD *)v23 + 54) + 8LL * v24++) + 16LL);
      while ( v24 < *((_DWORD *)v23 + 114) );
      v25 = (char *)(v4 + 6);
      v26 = (struct _RTL_CRITICAL_SECTION *)(v4 + 1);
    }
    if ( *v4 )
    {
      (*(void (__fastcall **)(_QWORD, struct _RTL_CRITICAL_SECTION *))(*(_QWORD *)*v4 + 24LL))(*v4, v26);
      v25 = v3;
      v26 = v22;
    }
    v27 = *v4;
    if ( *v4 )
    {
      v124 = (*(_DWORD *)v25)-- == 1;
      if ( v124 && *((_BYTE *)v4 + 52) )
      {
        *((_BYTE *)v4 + 52) = 0;
        (*(void (__fastcall **)(__int64, struct _RTL_CRITICAL_SECTION *))(*(_QWORD *)v27 + 16LL))(v27, v26);
      }
    }
    else
    {
      LeaveCriticalSection(v26);
    }
    *((_QWORD *)v23 + 81) = 0LL;
    m = 0;
    v211 = (char *)v23 + 608;
    v32 = (_QWORD *)CLinkTargetedDoubleLinkedList<DirectComposition::CSurfaceFactory,288,288>::First((char *)v23 + 608);
    Next = (__int64)v32;
    do
    {
      if ( !v32 )
        break;
      v3 = (char *)v32[40];
      v218 = v222;
      v219 = v222;
      lpMem = v227;
      v224 = v227;
      m = 0;
      v220 = 16;
      v221 = 16LL;
      v225 = 16;
      for ( i = 16LL; v3; v32[40] = v3 )
      {
        if ( (Microsoft_Windows_DirectCompositionEnableBits & 4) != 0 )
          McTemplateU0qqx_EventWriteTransfer(
            *(_QWORD *)(*((_QWORD *)v3 + 3) + 24LL),
            (unsigned int)&DCOMPEVENT_UPDATE_TOKEN_Start,
            *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v3 + 3) + 24LL) + 160LL),
            42,
            (char)v3);
        v33 = *((_QWORD *)v3 + 15);
        m = 0;
        if ( v33 )
        {
          v34 = *(_QWORD *)(v33 + 16);
          v35 = *(_QWORD *)(v34 + 64);
          v36 = *(_QWORD *)(v35 + 56);
          if ( v36 )
          {
            if ( *(int *)(v35 + 176) <= 0 )
            {
              if ( (*(_BYTE *)(v35 + 172) & 0x10) != 0 )
                DirectComposition::CAtlasSurfacePool::D2DEndDraw(*(DirectComposition::CAtlasSurfacePool **)(v34 + 64));
            }
            else
            {
              *(_DWORD *)(v35 + 180) += 2;
              v37 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v35 + 144) + 128LL) + 24LL);
              v38 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v36 + 336LL))(v36, 0LL, 0LL);
              if ( *(int *)(v37 + 632) >= 0 && v38 < 0 )
                *(_DWORD *)(v37 + 632) = v38;
              *(_BYTE *)(v35 + 172) |= 0x20u;
            }
          }
          *(_DWORD *)(v33 + 164) = 0;
          v39 = *((_QWORD *)v3 + 15);
          v40 = (struct DirectComposition::CAtlasSurface *)*((_QWORD *)v3 + 2);
          if ( *(struct DirectComposition::CAtlasSurface **)(v39 + 16) != v40 )
          {
            v212 = *(struct tagRECT *)(v39 + 88);
            DirectComposition::CBitmapInfoFront::UnuseSurface((DirectComposition::CBitmapInfoFront *)v3, v40, &v212);
            CMILRefCountBaseT<IUnknown>::InternalRelease(*((_QWORD *)v3 + 2));
            v41 = *(_QWORD *)(*((_QWORD *)v3 + 15) + 16LL);
            *((_QWORD *)v3 + 2) = v41;
            CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v41 + 8));
            *(_QWORD *)(*((_QWORD *)v3 + 2) + 96LL) = v3;
            v42 = *((_DWORD *)v3 + 22) - 1;
            for ( j = v42; j >= 0; --j )
            {
              v44 = *(void (__fastcall ****)(_QWORD, char *, _QWORD))(*((_QWORD *)v3 + 8) + 8 * j);
              (**v44)(v44, v3 + 56, 0LL);
            }
          }
          v45 = *((_QWORD *)v3 + 2);
          if ( *(_DWORD *)(v45 + 24) != 3 )
          {
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(v45 + 16) + 40LL))(v45 + 16, 3LL);
            *(_DWORD *)(v45 + 24) = 3;
          }
          v46 = DirectComposition::CBitmapInfoBack::ExtendEdgesForInvalidGutters(*((DirectComposition::CBitmapInfoBack **)v3
                                                                                 + 15));
          v47 = (volatile signed __int32 *)*((_QWORD *)v3 + 15);
          m = v46;
          if ( v47 )
          {
            if ( _InterlockedExchangeAdd(v47 + 2, 0xFFFFFFFF) == 1 )
            {
              if ( *((int *)v47 + 2) < 0 && (IsDebuggerPresent() || (unsigned int)IsKernelDebuggerPresent()) )
              {
                while ( 1 )
                {
                  v48 = IsKernelDebuggerPresent();
                  strcpy(Response, "?");
                  v49 = v48;
                  if ( !v48 )
                  {
                    v50 = IsDebuggerPresent();
                    v51 = Response[0];
                    if ( v50 )
                      v51 = 103;
                    Response[0] = v51;
                  }
                  DbgPrintEx(
                    0x65u,
                    0,
                    "\n*** Assertion failed: %ls%ls%ls\n***   %s%ls%sSource: `%ls:%ld`\n\n",
                    L"Tried to AddRef an object which has previously been freed (refcount went to 0).",
                    word_1801E5750,
                    word_1801E5750,
                    "Function: ",
                    L"CMILRefCountImpl::AddReference",
                    ", ",
                    L"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
                    23);
                  if ( v49 )
                  {
                    DbgPrompt("Break, Go (continue), terminate Process, or terminate Thread (bgpt)? ", Response, 2u);
                  }
                  else
                  {
                    DbgPrintEx(
                      0x65u,
                      0,
                      "(No kernel debugger is present.) Respond with:\n"
                      "  g                    -- Go (continue)\n"
                      "  eb 0x%p 'p';g  -- terminate Process\n"
                      "  eb 0x%p 't';g  -- terminate Thread\n"
                      " or regular debugging.\n",
                      Response,
                      Response);
                    __debugbreak();
                  }
                  switch ( Response[0] )
                  {
                    case 'B':
                    case 'b':
                      __debugbreak();
                      goto LABEL_97;
                    case 'G':
                    case 'g':
                      goto LABEL_97;
                    case 'I':
                    case 'i':
                      DbgPrintEx(0x65u, 0, "'i' is only supported with debug builds.\n");
                      continue;
                    case 'P':
                    case 'p':
                      CurrentProcess = GetCurrentProcess();
                      TerminateProcess(CurrentProcess, 0xC0000001);
                      goto LABEL_95;
                    case 'T':
                    case 't':
                      CurrentThread = GetCurrentThread();
                      TerminateThread(CurrentThread, 0xC0000001);
                      goto LABEL_95;
                    default:
LABEL_95:
                      DbgPrintEx(0x65u, 0, "Unrecognized response.\n");
                      break;
                  }
                }
              }
LABEL_97:
              _InterlockedIncrement(v47 + 2);
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v47 + 24LL))(v47);
              if ( _InterlockedExchangeAdd(v47 + 2, 0xFFFFFFFF) == 1 )
              {
                --*((_DWORD *)v47 + 2);
                (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v47 + 16LL))(v47, 1LL);
              }
            }
            *((_QWORD *)v3 + 15) = 0LL;
          }
        }
        if ( m >= 0 )
        {
          v54 = *((_QWORD *)v3 + 2);
          m = 0;
          v55 = *(_DWORD *)(v54 + 88);
          v56 = *(_QWORD *)(v54 + 64);
          v30 = *(unsigned int *)(v54 + 76);
          v57 = *(_DWORD *)(v54 + 72);
          v58 = v57 + *(_DWORD *)(v54 + 80) + ((v55 >> 1) & 1) + (v55 & 1);
          v197 = v30;
          v59 = v30 + *(_DWORD *)(v54 + 84) + ((v55 >> 2) & 1) + ((v55 >> 3) & 1);
          v29 = *(_QWORD *)(*(_QWORD *)(v56 + 144) + 128LL);
          v60 = *(_DWORD *)(*(_QWORD *)(v29 + 24) + 416LL);
          if ( v60 != *(_DWORD *)(v56 + 192) )
          {
            v61 = DynArray<IUnknown *,0>::AddMultipleAndSet(&v218, v56 + 16);
            v30 = v197;
            m = v61;
            if ( v61 >= 0 )
              *(_DWORD *)(v56 + 192) = v60;
          }
          if ( m >= 0 )
          {
            v213 = *(_QWORD *)(v56 + 24);
            v214 = v57;
            v215 = v30;
            v216 = v58;
            v217 = v59;
            m = DynArray<DCOMPOSITION_TOKEN_SURFACE_UPDATE_INFO,0>::AddMultipleAndSet(&lpMem, &v213);
          }
          v32 = (_QWORD *)Next;
        }
        v3[112] &= ~2u;
        if ( (Microsoft_Windows_DirectCompositionEnableBits & 4) != 0 )
          McGenEventWrite_EventWriteTransfer(v29, &DCOMPEVENT_UPDATE_TOKEN_Stop, v30, 1LL, v228);
        if ( m < 0 )
          break;
        v62 = v32[40];
        v3 = *(char **)(v62 + 104);
        *(_QWORD *)(v62 + 104) = 0LL;
      }
      for ( k = v32[41]; k; v32[41] = k )
      {
        DirectComposition::CYCbCrBitmapInfo::OnDeviceCommit(*(_QWORD *)(k + 48), &v218, &lpMem);
        DirectComposition::CYCbCrBitmapInfo::OnDeviceCommit(*(_QWORD *)(k + 56), &v218, &lpMem);
        *(_BYTE *)(k + 72) = 0;
        v64 = v32[41];
        k = *(_QWORD *)(v64 + 64);
        *(_QWORD *)(v64 + 64) = 0LL;
      }
      if ( m >= 0 )
      {
        v65 = (DirectComposition::CAtlasSurfacePool *)v32[42];
        for ( m = 0; v65; v32[42] = v65 )
        {
          m = DirectComposition::CAtlasSurfacePool::ExecuteGutterExtensions(v65);
          if ( m < 0 )
            break;
          v66 = v32[42];
          v65 = *(DirectComposition::CAtlasSurfacePool **)(v66 + 240);
          *(_QWORD *)(v66 + 240) = 0LL;
        }
        if ( m >= 0 )
        {
          v67 = HIDWORD(v221);
          if ( HIDWORD(v221) )
          {
            v68 = v32[3];
            v3 = (char *)lpMem;
            m = 0;
            v69 = HIDWORD(i);
            v70 = v218;
            v71 = (__int64 *)(v68 + 640);
            hObject = 0LL;
            if ( !*(_QWORD *)(v68 + 640) )
              m = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(v68 + 160) + 72LL))(
                    *(_QWORD *)(v68 + 160),
                    v71);
            v209 = *v71;
            if ( m >= 0 )
            {
              v72 = NtTokenManagerCreateCompositionTokenHandle(v3, v69, v67, &v209, &hObject);
              m = DirectComposition::CDevice::HRESULTFromNTSTATUS(v72);
              if ( m >= 0 )
              {
                v3 = (char *)hObject;
                DirectComposition::MultithreadDeviceLock::MultithreadDeviceLock(
                  (DirectComposition::MultithreadDeviceLock *)&v210,
                  (const struct DirectComposition::CDxDevice *)(v32 + 1));
                v73 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))v32[4];
                v204 = 0LL;
                v74 = (**v73)(v73, &GUID_26c5dc23_e49c_4b0a_8f79_e7b1ac804d32, &v204);
                m = v74;
                if ( v74 >= 0 )
                {
                  v75 = (*(__int64 (__fastcall **)(__int64, char *, void *, _QWORD))(*(_QWORD *)v204 + 104LL))(
                          v204,
                          v3,
                          v70,
                          v67);
                  m = v75;
                  if ( v75 >= 0 )
                  {
                    v76 = v204;
                    if ( v204 )
                    {
                      v204 = 0LL;
                      (*(void (__fastcall **)(__int64))(*(_QWORD *)v76 + 16LL))(v76);
                    }
                    m = 0;
                  }
                  else
                  {
                    wil::details::in1diag3::Return_Hr(
                      retaddr,
                      (void *)0x5A,
                      (int)"onecoreuap\\windows\\dwm\\dcomp\\dll\\kerneltokenfactory.cpp",
                      (const char *)(unsigned int)v75);
                    Microsoft::WRL::ComPtr<ID3D11PartnerDevice>::~ComPtr<ID3D11PartnerDevice>(&v204);
                  }
                }
                else
                {
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)0x56,
                    (int)"onecoreuap\\windows\\dwm\\dcomp\\dll\\kerneltokenfactory.cpp",
                    (const char *)(unsigned int)v74);
                  Microsoft::WRL::ComPtr<ID3D11PartnerDevice>::~ComPtr<ID3D11PartnerDevice>(&v204);
                }
                DirectComposition::MultithreadDeviceLock::Leave(v210);
                CloseHandle(hObject);
              }
            }
          }
        }
      }
      if ( lpMem != v224 )
      {
        operator delete(lpMem);
        lpMem = 0LL;
      }
      if ( v218 != v219 )
        operator delete(v218);
      Next = CLinkTargetedDoubleLinkedList<DirectComposition::CSurfaceFactory,288,288>::GetNext(v211, v32, v30, v31);
      v32 = (_QWORD *)Next;
    }
    while ( m >= 0 );
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_CompositionTextures>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_CompositionTextures>::GetImpl'::`2'::impl) )
    {
      if ( m >= 0 )
      {
        v202 = **((_QWORD **)v201 + 90);
        if ( (unsigned __int8)std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<ID3D11Device5 * const,DirectComposition::CDeviceTextureManager *>>>,std::_Iterator_base0>::operator!=(&v202) )
        {
          while ( 1 )
          {
            v77 = DirectComposition::CDeviceTextureManager::Present(*(DirectComposition::CDeviceTextureManager **)(v7 + 40));
            v196 = v77;
            v8 = v77;
            if ( v77 < 0 )
              break;
            std::_Tree_unchecked_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<ID3D11Device5 * const,DirectComposition::CDeviceTextureManager *>>>>::operator++(&v202);
            if ( !(unsigned __int8)std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<ID3D11Device5 * const,DirectComposition::CDeviceTextureManager *>>>,std::_Iterator_base0>::operator!=(&v202) )
              goto LABEL_143;
            v7 = v202;
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x6A1,
            (int)"onecoreuap\\windows\\dwm\\dcomp\\device.cpp",
            (const char *)(unsigned int)v77);
LABEL_9:
          v9 = 0;
LABEL_10:
          v5 = v201;
          goto LABEL_11;
        }
      }
    }
LABEL_143:
    v196 = m;
    v78 = m < 0;
    v8 = m;
    v5 = v201;
    if ( !v78 )
    {
      v8 = 0;
      do
      {
        v79 = (_BYTE *)*((_QWORD *)v5 + 59);
        if ( !v79 )
          break;
        v79[16] |= 2u;
        v80 = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)v79 + 8LL))(v79);
        v79[16] &= ~2u;
        v8 = v80;
        v81 = *((_QWORD *)v5 + 59);
        v82 = *(_QWORD *)(v81 + 8);
        if ( v8 >= 0 )
          *(_QWORD *)(v81 + 8) = 0LL;
        if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)v5 + 59) + 16LL))(*((_QWORD *)v5 + 59))
          && v8 < 0 )
        {
          break;
        }
        *((_QWORD *)v5 + 59) = v82;
      }
      while ( v8 >= 0 );
      v196 = v8;
      if ( v8 >= 0 )
      {
        v83 = v200;
        v84 = v207;
        do
        {
          v196 = DirectComposition::CDevice::CommitToKernel(v5, v83, v84);
          v8 = v196;
        }
        while ( v196 >= 0 && *((_DWORD *)v5 + 46) );
      }
    }
  }
LABEL_157:
  v9 = 0;
  if ( v8 < 0 )
    goto LABEL_10;
  v85 = *((_QWORD *)v5 + 20);
  LOBYTE(v3) = 0;
  LODWORD(v202) = 0;
  *(_DWORD *)Response = (_DWORD)v3;
  if ( (*(int (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v85 + 56LL))(v85, 2LL, &v202) >= 0 )
  {
    v86 = v202;
    LODWORD(v203) = *((_DWORD *)v5 + 106);
    *((_DWORD *)v5 + 105) = v202;
    *((_DWORD *)v5 + 106) = v86;
    v87 = CLinkTargetedDoubleLinkedList<DirectComposition::CSurfaceFactory,288,288>::First((char *)v5 + 608);
    if ( v87 )
    {
      v88 = v202;
      do
      {
        v89 = *(_QWORD *)(v87 + 304);
        if ( *(_BYTE *)(v87 + 355) )
        {
          DirectComposition::CScratchSurfaceManager::CollectScratchSurfaces(
            *(DirectComposition::CScratchSurfaceManager **)(v87 + 304),
            1);
          v90 = *(DirectComposition::CDynamicPoolSet ***)(v87 + 312);
          DirectComposition::CSurfaceManager::RecordUtilizationInfo((DirectComposition::CSurfaceManager *)v90);
          v91 = v90[2];
          if ( v91 )
          {
            DirectComposition::CDynamicPoolSet::CollectDeadSurfaces(v91);
            DirectComposition::CDynamicPoolSet::TrimPools(v90[2]);
          }
          DirectComposition::CSurfaceManager::TrimLargeSurfaces((DirectComposition::CSurfaceManager *)v90);
        }
        else
        {
          TickCount = GetTickCount();
          v95 = *(_DWORD *)(v89 + 48) - 1;
          if ( v95 >= 0 )
          {
            v96 = 8LL * v95;
            do
            {
              v97 = *(_QWORD *)(v89 + 24);
              v98 = *(_QWORD *)(v96 + v97);
              v202 = v98;
              if ( *(_BYTE *)(v98 + 48) && (int)(*(_DWORD *)(v98 + 44) - TickCount + 500) < 0 )
              {
                v99 = *(_DWORD *)(v89 + 48);
                if ( v95 < v99 )
                {
                  v100 = v95;
                  if ( v95 < v99 - 1 )
                  {
                    do
                    {
                      v101 = v100 + 1;
                      *(_QWORD *)(v97 + 8LL * v100++) = *(_QWORD *)(v97 + 8 * v101);
                      v99 = *(_DWORD *)(v89 + 48);
                    }
                    while ( (unsigned int)v101 < v99 - 1 );
                  }
                  *(_DWORD *)(v89 + 48) = v99 - 1;
                }
                else
                {
                  DoStackCaptureDirect(-2147024809, 0x19Cu);
                }
                ReleaseInterface<DirectComposition::CScratchSurface>(&v202);
              }
              v96 -= 8LL;
              --v95;
            }
            while ( v95 >= 0 );
          }
          v102 = *(DirectComposition::CSurfaceManager **)(v87 + 312);
          if ( (Microsoft_Windows_DirectCompositionEnableBits & 8) != 0 )
          {
            v103 = (_QWORD *)*((_QWORD *)v102 + 4);
            v104 = v103 - 4;
            if ( v103 == (_QWORD *)((char *)v102 + 32) )
              v104 = 0LL;
            while ( v104 )
            {
              DirectComposition::CAtlasSurfacePool::RecordUtilizationInfo((DirectComposition::CAtlasSurfacePool *)v104[8]);
              v105 = (_QWORD *)v104[4];
              v104 = v105 - 4;
              if ( v105 == (_QWORD *)((char *)v102 + 32) )
                v104 = 0LL;
            }
            v106 = *((_QWORD *)v102 + 2);
            if ( v106 )
            {
              v107 = *(_QWORD *)(v106 + 32);
              v108 = v106 + 32;
              v109 = v107 - 16;
              if ( v107 == v108 )
                v109 = 0LL;
              while ( v109 )
              {
                v110 = *(DirectComposition::CAtlasSurfacePool **)(v109 + 32);
                if ( v110 )
                  DirectComposition::CAtlasSurfacePool::RecordUtilizationInfo(v110);
                v111 = *(_QWORD *)(v109 + 16);
                v109 = v111 - 16;
                if ( v111 == v108 )
                  v109 = 0LL;
              }
            }
          }
          if ( v88 != (_DWORD)v203 )
          {
            v112 = *((_QWORD *)v102 + 2);
            if ( v112 )
            {
              v113 = *(_QWORD *)(v112 + 32);
              v114 = v112 + 32;
              v115 = v113 - 16;
              if ( v113 == v114 )
                v115 = 0LL;
              while ( v115 )
              {
                v116 = *(DirectComposition::CAtlasNode **)(v115 + 40);
                if ( v116 )
                  DirectComposition::CAtlasNode::CollectDead(v116);
                v117 = *(_QWORD *)(v115 + 16);
                v115 = v117 - 16;
                if ( v117 == v114 )
                  v115 = 0LL;
              }
              v118 = (DirectComposition::CDynamicPoolSet *)*((_QWORD *)v102 + 2);
              v119 = (_QWORD *)*((_QWORD *)v118 + 4);
              v120 = (struct DirectComposition::CDynamicPool *)(v119 - 2);
              if ( v119 == (_QWORD *)((char *)v118 + 32) )
                v120 = 0LL;
              if ( v120 )
              {
                do
                {
                  v121 = (_QWORD *)*((_QWORD *)v120 + 2);
                  v124 = v121 == (_QWORD *)((char *)v118 + 32);
                  v122 = (struct DirectComposition::CDynamicPool *)(v121 - 2);
                  v123 = *((_QWORD *)v120 + 4);
                  if ( v124 )
                    v122 = 0LL;
                  if ( (*(_BYTE *)(v123 + 172) & 1) != 0 )
                    v124 = *(_QWORD *)(v123 + 184) == 0LL;
                  else
                    v124 = *(_DWORD *)(v123 + 136) == 0;
                  if ( v124 )
                  {
                    v125 = GetTickCount();
                    v126 = (DirectComposition::CAtlasSurfacePool *)*((_QWORD *)v120 + 4);
                    if ( !*((_DWORD *)v126 + 34) && DirectComposition::CAtlasSurfacePool::HasAged(v126, v125) )
                      DirectComposition::CDynamicPoolSet::RemoveDynamicPool(v118, v120);
                  }
                  v120 = v122;
                }
                while ( v122 );
              }
            }
            if ( v88 != (_DWORD)v203 )
            {
              v127 = (_QWORD *)*((_QWORD *)v102 + 10);
              v128 = v127 - 6;
              if ( v127 == (_QWORD *)((char *)v102 + 80) )
                v128 = 0LL;
              if ( v128 )
              {
                do
                {
                  v129 = (_QWORD *)v128[6];
                  v130 = v128;
                  v128 = v129 - 6;
                  if ( v129 == (_QWORD *)((char *)v102 + 80) )
                    v128 = 0LL;
                }
                while ( DirectComposition::CCompositorSynchronizedObject::IsAvailable((DirectComposition::CCompositorSynchronizedObject *)(v130 + 2))
                     && v128 );
              }
            }
          }
          v131 = GetTickCount();
          v132 = (_QWORD *)*((_QWORD *)v102 + 7);
          v133 = v131;
          v134 = v132 - 6;
          if ( v132 == (_QWORD *)((char *)v102 + 56) )
            v134 = 0LL;
          while ( v134 )
          {
            v135 = (_QWORD *)v134[6];
            v136 = (DirectComposition::CAtlasSurfacePool *)v134[8];
            v134 = v135 - 6;
            if ( v135 == (_QWORD *)((char *)v102 + 56) )
              v134 = 0LL;
            if ( DirectComposition::CAtlasSurfacePool::IsAvailable(v136) )
              v139 = v133 - *(_DWORD *)(v138 + 168);
            else
              v139 = v133 - *(_DWORD *)(v138 + 164);
            if ( v139 > 0x1F4 && v137 )
              DirectComposition::CSurfaceManager::DiscardLargeSurface(v102, v137);
          }
          v5 = v201;
        }
        v87 = CLinkTargetedDoubleLinkedList<DirectComposition::CSurfaceFactory,288,288>::GetNext(
                (char *)v5 + 608,
                v87,
                v92,
                v93);
      }
      while ( v87 );
      v8 = v196;
      LODWORD(v3) = *(_DWORD *)Response;
    }
  }
  if ( (Microsoft_Windows_DirectCompositionEnableBits & 8) != 0 )
  {
    v140 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v5 + 20) + 8LL))(*((_QWORD *)v5 + 20));
    McTemplateU0x_EventWriteTransfer(v141, &DCOMPEVENT_CAP_MAXIMUM_Start, v140);
  }
  v142 = CLinkTargetedDoubleLinkedList<DirectComposition::CSurfaceFactory,288,288>::First((char *)v5 + 608);
  if ( v142 )
  {
    do
    {
      v143 = *(DirectComposition::CSurfaceManager **)(v142 + 312);
      *(_BYTE *)(v142 + 355) = 0;
      DirectComposition::CSurfaceManager::CapMaximumAllocations(v143, 1);
      v146 = *(_QWORD *)(v142 + 312);
      v147 = *(_QWORD *)(v146 + 216) + *(_QWORD *)(v146 + 256);
      if ( v147 >= (unsigned int)(8 * *(_DWORD *)(v146 + 124)) )
      {
        LODWORD(v3) = (unsigned __int8)v3;
        if ( v147 > (((*(_QWORD *)(v146 + 208) + *(_QWORD *)(v146 + 248)) >> 1) & 0x1FFFFFFFFFFFFFFuLL) )
          LODWORD(v3) = 1;
      }
      v142 = CLinkTargetedDoubleLinkedList<DirectComposition::CSurfaceFactory,288,288>::GetNext(
               (char *)v5 + 608,
               v142,
               v144,
               v145);
    }
    while ( v142 );
    *(_DWORD *)Response = (_DWORD)v3;
  }
  if ( (Microsoft_Windows_DirectCompositionEnableBits & 8) != 0 )
  {
    v148 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v5 + 20) + 8LL))(*((_QWORD *)v5 + 20));
    McTemplateU0x_EventWriteTransfer(v149, "-", v148);
  }
  v150 = GetTickCount64();
  v7 = *((_QWORD *)v5 + 63);
  if ( (DirectComposition::CDevice *)v7 != (DirectComposition::CDevice *)((char *)v5 + 504) )
  {
    do
    {
      v151 = *(DirectComposition::CDevice **)v7;
      v152 = v7 - 8;
      if ( !v7 )
        v152 = 0LL;
      if ( v150 - *(_QWORD *)(v152 + 48) < 0xFA0 )
        break;
      v153 = (_QWORD *)(v152 + 8);
      if ( !v152 )
        v153 = 0LL;
      v154 = *v153;
      v155 = (_QWORD *)v153[1];
      if ( *(_QWORD **)(*v153 + 8LL) != v153 || (_QWORD *)*v155 != v153 )
LABEL_311:
        __fastfail(3u);
      *v155 = v154;
      *(_QWORD *)(v154 + 8) = v155;
      if ( v152 )
        (**(void (__fastcall ***)(__int64, __int64))v152)(v152, 1LL);
      v7 = (__int64)v151;
    }
    while ( v151 != (DirectComposition::CDevice *)((char *)v5 + 504) );
  }
  v156 = (_QWORD *)*((_QWORD *)v5 + 67);
  if ( v156 != (_QWORD *)((char *)v5 + 536) )
  {
    do
    {
      v157 = (_QWORD *)*v156;
      v158 = v156 - 1;
      if ( !v156 )
        v158 = 0LL;
      if ( v150 - v158[6] < 0xFA0 )
        break;
      v159 = v158 + 1;
      if ( !v158 )
        v159 = 0LL;
      v160 = *v159;
      v7 = v159[1];
      if ( *(_QWORD **)(*v159 + 8LL) != v159 || *(_QWORD **)v7 != v159 )
        goto LABEL_311;
      *(_QWORD *)v7 = v160;
      *(_QWORD *)(v160 + 8) = v7;
      if ( v158 )
        (*(void (__fastcall **)(_QWORD *, __int64))*v158)(v158, 1LL);
      v156 = v157;
    }
    while ( v157 != (_QWORD *)((char *)v5 + 536) );
  }
  v161 = (_QWORD *)*((_QWORD *)v5 + 71);
  if ( v161 != (_QWORD *)((char *)v5 + 568) )
  {
    do
    {
      v162 = (_QWORD *)*v161;
      v163 = v161 - 1;
      if ( !v161 )
        v163 = 0LL;
      if ( v150 - v163[6] < 0xFA0 )
        break;
      v164 = v163 + 1;
      if ( !v163 )
        v164 = 0LL;
      v165 = *v164;
      v7 = v164[1];
      if ( *(_QWORD **)(*v164 + 8LL) != v164 || *(_QWORD **)v7 != v164 )
        goto LABEL_311;
      *(_QWORD *)v7 = v165;
      *(_QWORD *)(v165 + 8) = v7;
      if ( v163 )
        (*(void (__fastcall **)(_QWORD *, __int64))*v163)(v163, 1LL);
      v161 = v162;
    }
    while ( v162 != (_QWORD *)((char *)v5 + 568) );
  }
  v166 = (DirectComposition::CDevice *)*((_QWORD *)v5 + 61);
  if ( v166 != (DirectComposition::CDevice *)((char *)v5 + 488) )
  {
    do
    {
      v167 = (char *)v166 - 32;
      if ( !v166 )
        v167 = 0LL;
      v166 = (DirectComposition::CDevice *)*((_QWORD *)v167 + 4);
      if ( *((_DWORD *)v167 + 6) == 4
        && *(_DWORD *)((*(__int64 (__fastcall **)(char *, __int64))(*((_QWORD *)v167 + 2) + 48LL))(v167 + 16, v7) + 420) >= *((_DWORD *)v167 + 7) )
      {
        v168 = *((_QWORD *)v167 + 2);
        *((_DWORD *)v167 + 7) = 0;
        (*(void (__fastcall **)(char *, __int64))(v168 + 40))(v167 + 16, 1LL);
        *((_DWORD *)v167 + 6) = 1;
      }
      else if ( *((_DWORD *)v167 + 6) != 1 )
      {
        break;
      }
      v169 = *(_QWORD *)((*(__int64 (__fastcall **)(char *))(*((_QWORD *)v167 + 2) + 48LL))(v167 + 16) + 96);
      if ( v169 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v169 + 24LL))(v169);
      (*(void (__fastcall **)(char *, __int64))(*((_QWORD *)v167 + 2) + 40LL))(v167 + 16, 5LL);
      *((_DWORD *)v167 + 6) = 5;
      if ( *((_QWORD *)v167 + 4) )
      {
        v170 = 0LL;
        if ( v167 )
          v170 = v167 + 32;
        v171 = *v170;
        if ( *(_QWORD **)(*v170 + 8LL) != v170 )
          goto LABEL_311;
        v172 = (_QWORD *)v170[1];
        if ( (_QWORD *)*v172 != v170 )
          goto LABEL_311;
        *v172 = v171;
        *(_QWORD *)(v171 + 8) = v172;
      }
      v173 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)v167 + 2) + 48LL))(v167 + 16);
      v174 = *(_QWORD *)(v173 + 96);
      if ( v174 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v174 + 24LL))(v174);
      v175 = (__int64 *)*((_QWORD *)v167 + 6);
      (*(void (__fastcall **)(__int64 *, char *))(*v175 + 16))(v175, v167);
      if ( !v175[5] )
      {
        v176 = v175 + 1;
        v175[6] = v150;
        v177 = v175[1];
        if ( *(__int64 **)(v177 + 8) != v175 + 1 )
          goto LABEL_311;
        v178 = (__int64 **)v175[2];
        if ( *v178 != v176 )
          goto LABEL_311;
        *v178 = (__int64 *)v177;
        *(_QWORD *)(v177 + 8) = v178;
        v179 = 0LL;
        v180 = (*(__int64 (__fastcall **)(__int64 *))(*v175 + 8))(v175);
        if ( v180 )
        {
          v181 = v180 - 1;
          if ( v181 )
          {
            if ( v181 == 1 )
              v179 = v173 + 568;
          }
          else
          {
            v179 = v173 + 536;
          }
        }
        else
        {
          v179 = v173 + 504;
        }
        v182 = *(__int64 ***)(v179 + 8);
        if ( *v182 != (__int64 *)v179 )
          goto LABEL_311;
        *v176 = v179;
        v175[2] = (__int64)v182;
        *v182 = v176;
        *(_QWORD *)(v179 + 8) = v176;
      }
      v5 = v201;
    }
    while ( v166 != (DirectComposition::CDevice *)((char *)v201 + 488) );
  }
  v9 = Response[0];
LABEL_11:
  v10 = Microsoft_Windows_DirectCompositionEnableBits;
  if ( (Microsoft_Windows_DirectCompositionEnableBits & 8) != 0 )
  {
    McTemplateU0xqqq_EventWriteTransfer(
      *((_DWORD *)v5 + 104) - 1,
      v7,
      (_DWORD)v5,
      *((_DWORD *)v5 + 40),
      *((_BYTE *)v5 + 416) - 1,
      *((_DWORD *)v5 + 105));
    v10 = Microsoft_Windows_DirectCompositionEnableBits;
  }
  if ( v8 >= 0 && *((_DWORD *)v5 + 93) )
  {
    (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)v5 + 20) + 32LL))(*((_QWORD *)v5 + 20), 1LL);
    goto LABEL_321;
  }
  if ( v9 )
  {
    if ( (v10 & 8) != 0 )
    {
      v183 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v5 + 20) + 8LL))(*((_QWORD *)v5 + 20));
      McTemplateU0x_EventWriteTransfer(v184, &DCOMPEVENT_BLOCK_FOR_EXCESSIVE_PENDING_Start, v183);
    }
    while ( (int)DirectComposition::CDevice::CommitToKernel(v5, 1, 0LL) >= 0
         && (*(int (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)v5 + 20) + 32LL))(*((_QWORD *)v5 + 20), 0LL) >= 0
         && DirectComposition::CDevice::ShouldBlockForExcessivePending(v5) )
      ;
    if ( (Microsoft_Windows_DirectCompositionEnableBits & 8) != 0 )
    {
      v185 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v5 + 20) + 8LL))(*((_QWORD *)v5 + 20));
      McTemplateU0x_EventWriteTransfer(v186, &DCOMPEVENT_BLOCK_FOR_EXCESSIVE_PENDING_Stop, v185);
    }
  }
  if ( v8 >= 0 )
  {
LABEL_321:
    if ( *((_DWORD *)v5 + 93) )
    {
      v196 = DirectComposition::CDevice::CommitToKernel(v5, 1, 0LL);
      v8 = v196;
      if ( v196 >= 0 )
      {
        (*(void (__fastcall **)(DirectComposition::CDevice *))(*(_QWORD *)v5 + 32LL))(v5);
        v8 = DirectComposition::CDevice::OfferPendingSurfaces(v5, v187, v188);
        v196 = v8;
      }
    }
  }
  if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_CompositionTextures>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_CompositionTextures>::GetImpl'::`2'::impl) )
  {
    if ( v8 < 0 )
      goto LABEL_337;
    goto LABEL_332;
  }
  if ( v8 < 0 )
    goto LABEL_337;
  v201 = (DirectComposition::CDevice *)**((_QWORD **)v5 + 90);
  if ( !(unsigned __int8)std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<ID3D11Device5 * const,DirectComposition::CDeviceTextureManager *>>>,std::_Iterator_base0>::operator!=(&v201) )
  {
LABEL_332:
    v193 = v207;
    while ( *((_DWORD *)v5 + 46) )
      DirectComposition::CDevice::CommitToKernel(v5, 0, v193);
    v8 = v196;
    if ( *((int *)v5 + 158) < 0 )
    {
      v8 = *((_DWORD *)v5 + 158);
      *((_DWORD *)v5 + 158) = 0;
LABEL_342:
      CGuard<DirectComposition::CDeviceLock>::~CGuard<DirectComposition::CDeviceLock>(&v208);
      return (unsigned int)v8;
    }
LABEL_337:
    *((_DWORD *)v5 + 158) = 0;
    if ( v8 >= 0 )
    {
      v194 = (ULONGLONG *)((char *)v5 + 736);
      AcquireSRWLockExclusive((PSRWLOCK)v5 + 94);
      *((_DWORD *)v5 + 190) = GetCurrentThreadId();
      if ( *((_BYTE *)v5 + 744) )
      {
        v195 = GetTickCount64();
        if ( v195 >= *v194 )
        {
          CTelemetryHelper::LogTelemetryLocked((DirectComposition::CDevice *)((char *)v5 + 736));
          *v194 = v195 + 600000;
        }
      }
      *((_DWORD *)v5 + 190) = 0;
      ReleaseSRWLockExclusive((PSRWLOCK)v5 + 94);
    }
    goto LABEL_342;
  }
  while ( 1 )
  {
    v190 = DirectComposition::CDeviceTextureManager::PostCommit(*((DirectComposition::CDeviceTextureManager **)v189 + 5));
    v191 = v190;
    if ( v190 < 0 )
      break;
    std::_Tree_unchecked_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<ID3D11Device5 * const,DirectComposition::CDeviceTextureManager *>>>>::operator++(&v201);
    if ( !(unsigned __int8)std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<ID3D11Device5 * const,DirectComposition::CDeviceTextureManager *>>>,std::_Iterator_base0>::operator!=(&v201) )
      goto LABEL_332;
    v189 = v201;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x660,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\device.cpp",
    (const char *)(unsigned int)v190);
  CGuard<DirectComposition::CDeviceLock>::~CGuard<DirectComposition::CDeviceLock>(&v208);
  return v191;
}
