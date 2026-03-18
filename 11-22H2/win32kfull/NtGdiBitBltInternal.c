/*
 * XREFs of NtGdiBitBltInternal @ 0x1C01042C0
 * Callers:
 *     ?UT_InvertCaret@@YAXXZ @ 0x1C00065F8 (-UT_InvertCaret@@YAXXZ.c)
 *     CreateSpb @ 0x1C000DD04 (CreateSpb.c)
 *     ?BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z @ 0x1C00103C8 (-BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z.c)
 *     xxxCompositedPaint @ 0x1C0016544 (xxxCompositedPaint.c)
 *     _DrawIconEx @ 0x1C0028030 (_DrawIconEx.c)
 *     ?_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z @ 0x1C002BA80 (-_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z.c)
 *     BitBltSysBmp @ 0x1C009A400 (BitBltSysBmp.c)
 *     UpdateSpriteArea @ 0x1C00A6444 (UpdateSpriteArea.c)
 *     RecolorDeskPattern @ 0x1C00BDFC0 (RecolorDeskPattern.c)
 *     xxxDrawCaptionBar @ 0x1C00C689C (xxxDrawCaptionBar.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C00F7B60 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     NtGdiBitBlt @ 0x1C0106AC0 (NtGdiBitBlt.c)
 *     StopFade @ 0x1C01BCD50 (StopFade.c)
 *     xxxPrintWindow @ 0x1C01BCFE4 (xxxPrintWindow.c)
 *     NtUserBitBltSysBmp @ 0x1C01CCDC0 (NtUserBitBltSysBmp.c)
 *     RestoreSpb @ 0x1C01F938C (RestoreSpb.c)
 *     xxxClientExtTextOutW @ 0x1C021212C (xxxClientExtTextOutW.c)
 *     xxxClientGetTextExtentPointW @ 0x1C0212AAC (xxxClientGetTextExtentPointW.c)
 *     xxxClientLpkDrawTextEx @ 0x1C0212EB8 (xxxClientLpkDrawTextEx.c)
 *     xxxClientPSMTextOut @ 0x1C02132C0 (xxxClientPSMTextOut.c)
 *     ?zzzMNFadeSelection@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C02164D8 (-zzzMNFadeSelection@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     ?xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z @ 0x1C02243DC (-xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z.c)
 *     ?TooltipAnimate@@YAHPEAUtagTOOLTIPWND@@@Z @ 0x1C0225638 (-TooltipAnimate@@YAHPEAUtagTOOLTIPWND@@@Z.c)
 *     xxxSnapWindow @ 0x1C02281E8 (xxxSnapWindow.c)
 *     ?DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z @ 0x1C022B9A4 (-DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z.c)
 *     ?InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z @ 0x1C022E08C (-InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z.c)
 *     ?DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z @ 0x1C0233414 (-DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z.c)
 *     MNAnimate @ 0x1C0234404 (MNAnimate.c)
 *     xxxRealDrawMenuItem @ 0x1C0236930 (xxxRealDrawMenuItem.c)
 *     BltColor @ 0x1C023F394 (BltColor.c)
 *     CreateCompatiblePublicDC @ 0x1C023F4DC (CreateCompatiblePublicDC.c)
 *     DxgkEngBltViaGDI @ 0x1C026F280 (DxgkEngBltViaGDI.c)
 * Callees:
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C0010D14 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     ??_5ERECTL@@QEAAXAEBU_RECTL@@@Z @ 0x1C001E740 (--_5ERECTL@@QEAAXAEBU_RECTL@@@Z.c)
 *     GreDereferenceObject @ 0x1C002D3F8 (GreDereferenceObject.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C00311EC (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     GreClientRgnUpdated @ 0x1C00346B4 (GreClientRgnUpdated.c)
 *     ?vAddToCache@EXLATEOBJ@@QEAAXVXEPALOBJ@@000@Z @ 0x1C0099AE4 (-vAddToCache@EXLATEOBJ@@QEAAXVXEPALOBJ@@000@Z.c)
 *     ?bDisposeTrgDco@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C009CAE0 (-bDisposeTrgDco@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?bDisposeSrcDco@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C009CC20 (-bDisposeSrcDco@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?bUnMapSrcSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C009E958 (-bUnMapSrcSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?ulTime@XEPALOBJ@@QEAAKXZ @ 0x1C00AC154 (-ulTime@XEPALOBJ@@QEAAKXZ.c)
 *     ?pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@ZXZ @ 0x1C00B265C (-pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C00DA0C8 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C00E0C40 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?bUnMapTrgSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C00F7234 (-bUnMapTrgSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     bCvtPts1 @ 0x1C00F7380 (bCvtPts1.c)
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1C00FDE70 (-vClearRendering@DC@@QEAAXXZ.c)
 *     ?CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00FE930 (-CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     GreStretchBltInternal @ 0x1C00FF3A0 (GreStretchBltInternal.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C0101D80 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C01026C0 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 *     ?GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z @ 0x1C0107D28 (-GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C011B310 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C011BFF0 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C011C01C (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ?RestoreAttributesHelper@XDCOBJ@@AEAAXXZ @ 0x1C011C0E4 (-RestoreAttributesHelper@XDCOBJ@@AEAAXXZ.c)
 *     ??1DLODCOBJ@@QEAA@XZ @ 0x1C011C6F8 (--1DLODCOBJ@@QEAA@XZ.c)
 *     ?bValid@DLODCOBJ@@QEAA_NXZ @ 0x1C011C724 (-bValid@DLODCOBJ@@QEAA_NXZ.c)
 *     W32GetThreadWin32Thread @ 0x1C011E0CC (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013E000 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x1C013E430 (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013E4C0 (--0-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C013EAC8 (--0DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ??1DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C013EB4C (--1DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ??1CAutoTGO@@QEAA@XZ @ 0x1C013EE24 (--1CAutoTGO@@QEAA@XZ.c)
 *     GreStretchBlt @ 0x1C013F104 (GreStretchBlt.c)
 *     _NtGdiBitBltInternal_::_2_::ScreenAccessState::_ScreenAccessState @ 0x1C013F348 (_NtGdiBitBltInternal_--_2_--ScreenAccessState--_ScreenAccessState.c)
 *     _guard_dispatch_icall_nop @ 0x1C0141260 (_guard_dispatch_icall_nop.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C0264DB0 (--0SURFREF@@QEAA@XZ.c)
 *     ??1SEMOBJ@@QEAA@XZ @ 0x1C026572C (--1SEMOBJ@@QEAA@XZ.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C0266BBC (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 *     ?vScale@ERECTL@@QEAAXAEBVPOINTFL@@@Z @ 0x1C0266D90 (-vScale@ERECTL@@QEAAXAEBVPOINTFL@@@Z.c)
 *     ?TmpSrcCleanup@DEVLOCKBLTOBJ@@QEAAXXZ @ 0x1C026BA54 (-TmpSrcCleanup@DEVLOCKBLTOBJ@@QEAAXXZ.c)
 *     SimBitBlt @ 0x1C0270640 (SimBitBlt.c)
 *     GreClientRgnUpdatedStable @ 0x1C0288070 (GreClientRgnUpdatedStable.c)
 *     ?bUnHookBmpDrv@@YAHAEAVXDCOBJ@@@Z @ 0x1C02A3300 (-bUnHookBmpDrv@@YAHAEAVXDCOBJ@@@Z.c)
 *     ?bUnHookRedir@@YAHAEAVXDCOBJ@@@Z @ 0x1C02A66FC (-bUnHookRedir@@YAHAEAVXDCOBJ@@@Z.c)
 *     ?bRedirHooked@XDCOBJ@@QEAAHXZ @ 0x1C02C06A4 (-bRedirHooked@XDCOBJ@@QEAAHXZ.c)
 */

__int64 __fastcall NtGdiBitBltInternal(
        __int64 a1,
        LONG left,
        LONG top,
        int a4,
        int a5,
        HDC a6,
        int a7,
        int a8,
        int a9,
        int a10,
        char a11)
{
  HDC v12; // rdx
  HDC v13; // r10
  int v15; // r15d
  int v17; // ecx
  __int64 ThreadWin32Thread; // rax
  unsigned int v19; // r14d
  unsigned int v20; // ebx
  int v22; // esi
  __int64 v23; // rdx
  __int64 *v24; // rax
  __int64 v25; // rax
  __int64 v26; // rcx
  bool v27; // zf
  struct UMPDOBJ *v28; // rax
  DC *v29; // rdx
  int v30; // ebx
  struct _DC_ATTR *v31; // rax
  __int64 v32; // rdx
  __int64 *v33; // rax
  __int64 v34; // rax
  __int64 v35; // rcx
  struct UMPDOBJ *v36; // rax
  DC *v37; // rdx
  int v38; // ebx
  struct _DC_ATTR *UserAttr; // rax
  LONG v40; // ebx
  DC *v41; // r9
  DC *v42; // rdx
  __int64 v43; // r10
  int v44; // r8d
  __int64 v45; // rbx
  unsigned int v46; // eax
  int v47; // edi
  struct MATRIX *v48; // rdx
  int v49; // ecx
  LONG x; // edx
  LONG y; // r8d
  LONG bottom; // r8d
  LONG right; // edx
  LONG v54; // eax
  LONG v55; // eax
  DC *v56; // rcx
  int v57; // eax
  unsigned __int64 v58; // rdx
  __int64 v59; // r9
  DC *v60; // r13
  __int64 v61; // rbx
  __int64 v62; // rdi
  __int64 v63; // r15
  unsigned __int8 v64; // cl
  __int64 v65; // rdx
  char *v66; // r10
  int v67; // ecx
  __int64 v68; // rcx
  DC *v69; // r12
  __int64 v70; // r8
  unsigned __int64 v71; // rsi
  int v72; // eax
  int v73; // eax
  int v74; // eax
  int v75; // eax
  _DWORD *v76; // rcx
  __int64 v77; // rsi
  int v78; // r10d
  __int64 v79; // rax
  int v80; // edx
  int v81; // r14d
  int v82; // ebx
  int v83; // eax
  int v84; // ecx
  LONG v85; // ecx
  struct REGION *v86; // rax
  int v87; // ecx
  __int64 v88; // rax
  LONG v89; // r9d
  int v90; // edx
  int v91; // r8d
  struct _RECTL *v92; // rcx
  LONG v93; // r10d
  DC *v94; // rcx
  LONG v95; // eax
  XLATEOBJ *v96; // rbx
  XLATEOBJ *v97; // r15
  __int64 v98; // r14
  __int64 v99; // rax
  Gre::Base *v100; // rcx
  __int64 v101; // rax
  __int64 v102; // rax
  int v103; // edx
  __int64 v104; // rax
  unsigned int v105; // r12d
  struct Gre::Base::SESSION_GLOBALS *v106; // r13
  __int64 v107; // rbx
  __int64 v108; // rax
  unsigned int v109; // r11d
  int v110; // eax
  __int64 v111; // r9
  __int64 v112; // rax
  int v113; // ecx
  int v114; // eax
  __int64 v115; // r9
  XLATEOBJ *v116; // rdx
  int v117; // r8d
  unsigned __int64 v118; // rcx
  int v119; // eax
  __int64 v120; // r10
  __int64 v121; // rax
  __int64 XlateObject; // rax
  unsigned int v123; // edx
  unsigned int v124; // r8d
  RECTL v125; // xmm6
  _DWORD *v126; // rax
  LONG v127; // edi
  int v128; // eax
  LONG v129; // esi
  _DWORD *v130; // rax
  int v131; // eax
  float v132; // xmm0_4
  int v133; // eax
  float v134; // xmm1_4
  int v135; // ecx
  LONG v136; // r8d
  int v137; // r10d
  int v138; // eax
  LONG v139; // edx
  __m128i v140; // xmm0
  int v141; // r11d
  __m128i v142; // xmm6
  bool v143; // cc
  int v144; // ecx
  int v145; // eax
  int v146; // eax
  LONG v147; // edx
  LONG v148; // eax
  LONG v149; // r8d
  LONG v150; // ecx
  RECTL v151; // xmm6
  int v152; // eax
  int v153; // eax
  int v154; // eax
  SURFACE *v155; // rsi
  char v156; // di
  __int64 v157; // rax
  int v158; // eax
  __int128 *v159; // rax
  __int64 v160; // rdi
  __int64 v161; // rax
  unsigned int v162; // eax
  __int64 v163; // rax
  int cEntries; // eax
  int (*v165)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // rax
  __int64 v166; // rdx
  int v167; // r11d
  int v168; // r14d
  DC *v169; // rdx
  SURFACE *v170; // rcx
  SURFACE *v171; // rcx
  __int64 v172; // r8
  __int64 v173; // rdx
  __int64 v174; // r8
  DC *v175; // r9
  __int64 v176; // rbx
  __int64 CurrentProcess; // rax
  int v178; // eax
  __int64 *v179; // rax
  __int64 v180; // rax
  struct Gre::Base::SESSION_GLOBALS *v181; // rbx
  Gre::Base *v182; // rcx
  struct Gre::Base::SESSION_GLOBALS *v183; // rbx
  __int64 v184; // rbx
  __int16 v185; // ax
  int v186; // eax
  __int64 v187; // rax
  struct Gre::Base::SESSION_GLOBALS *v188; // rbx
  Gre::Base *v189; // rcx
  struct Gre::Base::SESSION_GLOBALS *v190; // rbx
  __int64 v191; // rbx
  __int64 *v192; // rax
  __int64 v193; // rax
  __int64 v194; // rdx
  __int64 v195; // rax
  __int64 v196; // rdx
  HSURF v197; // rbx
  Gre::Base *v198; // rcx
  struct Gre::Base::SESSION_GLOBALS *v199; // rbx
  char v200; // di
  __int64 v201; // rax
  __int64 v202; // rdx
  __int64 v203; // rax
  __int64 v204; // rdx
  HSURF v205; // rbx
  Gre::Base *v206; // rcx
  struct Gre::Base::SESSION_GLOBALS *v207; // rbx
  char v208; // di
  __int64 v209; // rax
  __int64 v210; // rax
  __int64 v211; // rax
  signed __int32 v212[8]; // [rsp+0h] [rbp-100h] BYREF
  XLATEOBJ *v213; // [rsp+20h] [rbp-E0h]
  RECTL *v214; // [rsp+28h] [rbp-D8h]
  POINTL *v215; // [rsp+30h] [rbp-D0h]
  POINTL *v216; // [rsp+38h] [rbp-C8h]
  __int64 v217; // [rsp+40h] [rbp-C0h]
  POINTL *v218; // [rsp+48h] [rbp-B8h]
  __int64 v219; // [rsp+70h] [rbp-90h] BYREF
  int v220; // [rsp+78h] [rbp-88h]
  XLATEOBJ *v221; // [rsp+80h] [rbp-80h] BYREF
  signed int v222; // [rsp+88h] [rbp-78h]
  __int64 v223; // [rsp+90h] [rbp-70h]
  HDC v224; // [rsp+98h] [rbp-68h]
  DC *v225; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v226; // [rsp+A8h] [rbp-58h]
  char v227[32]; // [rsp+B0h] [rbp-50h] BYREF
  DC *v228; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v229; // [rsp+D8h] [rbp-28h]
  char v230[32]; // [rsp+E0h] [rbp-20h] BYREF
  int v231; // [rsp+100h] [rbp+0h]
  __int64 v232; // [rsp+108h] [rbp+8h] BYREF
  __int64 v233; // [rsp+110h] [rbp+10h] BYREF
  unsigned __int64 v234; // [rsp+118h] [rbp+18h]
  int v235; // [rsp+120h] [rbp+20h]
  int v236; // [rsp+124h] [rbp+24h]
  int v237; // [rsp+128h] [rbp+28h] BYREF
  int v238; // [rsp+12Ch] [rbp+2Ch] BYREF
  unsigned int v239; // [rsp+130h] [rbp+30h]
  unsigned __int64 v240; // [rsp+138h] [rbp+38h] BYREF
  int v241; // [rsp+140h] [rbp+40h]
  int v242; // [rsp+144h] [rbp+44h]
  unsigned __int64 v243; // [rsp+148h] [rbp+48h] BYREF
  LONG v244; // [rsp+150h] [rbp+50h]
  LONG v245; // [rsp+154h] [rbp+54h]
  SURFACE *v246; // [rsp+158h] [rbp+58h]
  __int128 v247; // [rsp+160h] [rbp+60h] BYREF
  __int128 v248; // [rsp+170h] [rbp+70h]
  __int64 v249; // [rsp+180h] [rbp+80h]
  __int64 v250; // [rsp+188h] [rbp+88h] BYREF
  char v251; // [rsp+190h] [rbp+90h]
  int v252; // [rsp+194h] [rbp+94h]
  _BYTE v253[32]; // [rsp+198h] [rbp+98h] BYREF
  int v254; // [rsp+1B8h] [rbp+B8h]
  __int128 v255; // [rsp+1C0h] [rbp+C0h]
  unsigned int v256; // [rsp+1D0h] [rbp+D0h]
  int v257; // [rsp+1D4h] [rbp+D4h]
  DC *v258; // [rsp+1D8h] [rbp+D8h] BYREF
  __int64 v259; // [rsp+1E0h] [rbp+E0h]
  char v260[32]; // [rsp+1E8h] [rbp+E8h] BYREF
  __int16 v261; // [rsp+208h] [rbp+108h]
  DC *v262; // [rsp+210h] [rbp+110h] BYREF
  __int64 v263; // [rsp+218h] [rbp+118h]
  char v264[32]; // [rsp+220h] [rbp+120h] BYREF
  __int16 v265; // [rsp+240h] [rbp+140h]
  __int64 v266; // [rsp+248h] [rbp+148h]
  __int128 v267; // [rsp+250h] [rbp+150h]
  HDC v268; // [rsp+260h] [rbp+160h]
  __int64 v269; // [rsp+268h] [rbp+168h]
  __int64 v270; // [rsp+270h] [rbp+170h]
  HDC v271; // [rsp+278h] [rbp+178h]
  int v272; // [rsp+280h] [rbp+180h]
  int v273; // [rsp+284h] [rbp+184h]
  __int64 v274; // [rsp+288h] [rbp+188h] BYREF
  float v275[2]; // [rsp+290h] [rbp+190h] BYREF
  float v276[2]; // [rsp+298h] [rbp+198h] BYREF
  __int64 v277; // [rsp+2A0h] [rbp+1A0h] BYREF
  int v278; // [rsp+2A8h] [rbp+1A8h]
  int v279; // [rsp+2ACh] [rbp+1ACh]
  struct MATRIX *v280; // [rsp+2B0h] [rbp+1B0h] BYREF
  int v281; // [rsp+2B8h] [rbp+1B8h]
  int v282; // [rsp+2BCh] [rbp+1BCh]
  RECTL v283; // [rsp+2C0h] [rbp+1C0h]
  __int64 v284; // [rsp+2D0h] [rbp+1D0h] BYREF
  __int64 v285; // [rsp+2D8h] [rbp+1D8h] BYREF
  __int64 v286; // [rsp+2E0h] [rbp+1E0h] BYREF
  __int64 v287; // [rsp+2E8h] [rbp+1E8h] BYREF
  __int64 v288; // [rsp+2F0h] [rbp+1F0h] BYREF
  DC *v289[2]; // [rsp+2F8h] [rbp+1F8h] BYREF
  char v290[40]; // [rsp+308h] [rbp+208h] BYREF
  __int128 v291; // [rsp+330h] [rbp+230h]
  DC *v292[2]; // [rsp+340h] [rbp+240h] BYREF
  char v293[32]; // [rsp+350h] [rbp+250h] BYREF
  _BYTE v294[32]; // [rsp+370h] [rbp+270h] BYREF
  HSURF *v295; // [rsp+390h] [rbp+290h]
  _BYTE v296[32]; // [rsp+398h] [rbp+298h] BYREF
  HSURF *v297; // [rsp+3B8h] [rbp+2B8h]
  _BYTE v298[32]; // [rsp+3C0h] [rbp+2C0h] BYREF
  struct SURFACE *v299; // [rsp+3E0h] [rbp+2E0h]
  _BYTE v300[32]; // [rsp+3E8h] [rbp+2E8h] BYREF
  struct SURFACE *v301; // [rsp+408h] [rbp+308h]
  RECTL v302; // [rsp+420h] [rbp+320h] BYREF
  POINTL v303[2]; // [rsp+430h] [rbp+330h] BYREF
  RECTL v304; // [rsp+440h] [rbp+340h] BYREF
  RECTL v305; // [rsp+450h] [rbp+350h]
  RECTL v306; // [rsp+460h] [rbp+360h] BYREF
  RECTL v307; // [rsp+470h] [rbp+370h] BYREF
  int v308; // [rsp+540h] [rbp+440h]

  v12 = a6;
  v13 = (HDC)a1;
  LOBYTE(v219) = (a11 & 4) != 0;
  v15 = a7;
  v223 = a1;
  v17 = a5;
  HIDWORD(v219) = a5;
  v224 = a6;
  v220 = a8;
  if ( (a11 & 4) != 0 )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
    v17 = HIDWORD(v219);
    v13 = (HDC)v223;
    v12 = v224;
    if ( ThreadWin32Thread )
      *(_DWORD *)(ThreadWin32Thread + 328) |= 8u;
    else
      LOBYTE(v219) = 0;
  }
  v19 = 0;
  if ( (a9 & 0x40000000) != 0 )
  {
    v20 = GreStretchBltInternal(
            v13,
            left,
            top,
            a4,
            v17,
            v12,
            a7,
            a8,
            a4,
            v17,
            a9 & 0xDFFFFFFF,
            a10,
            (a9 & 0x20000000) != 0 ? 2 : 0);
    NtGdiBitBltInternal_::_2_::ScreenAccessState::_ScreenAccessState(&v219);
    return v20;
  }
  v222 = a9 & 0xDFFFFFFF;
  v239 = 0;
  v22 = a9 & 0x5FFFFFFF;
  v226 = 0LL;
  UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(v227);
  LOBYTE(v23) = 1;
  v225 = (DC *)HmgLockEx(v223, v23, 0LL);
  if ( !v225 )
  {
    if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
      PsGetWin32KFilterSet();
    goto LABEL_27;
  }
  v24 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( !v24
    || (v25 = *v24) == 0
    || (v26 = *(_QWORD *)(v25 + 40), v27 = v26 == v25 + 40, v28 = (struct UMPDOBJ *)(v26 - 40), v27) )
  {
    v28 = 0LL;
  }
  v29 = v225;
  if ( *((_WORD *)v225 + 6) == 1 )
  {
    *((_QWORD *)v225 + 271) = v28;
    *((_DWORD *)v225 + 544) = 0xFFFF;
    v29 = v225;
  }
  else if ( *((struct UMPDOBJ **)v225 + 271) != v28 )
  {
    XDCOBJ::LogUmpdCallbackStatus((XDCOBJ *)&v225, v28);
    goto LABEL_21;
  }
  if ( !HIDWORD(v226) )
  {
    if ( !*((_DWORD *)v29 + 528) )
    {
LABEL_28:
      if ( !v29 )
        goto LABEL_491;
      if ( (*((_DWORD *)v29 + 11) & 2) != 0 )
      {
LABEL_35:
        if ( (*((_DWORD *)v29 + 130) & 4) != 0 )
        {
          DC::vMarkTransformDirty(v29);
          v29 = v225;
        }
        if ( !v29 || (*((_DWORD *)v29 + 9) & 0x10000) != 0 )
          goto LABEL_491;
        if ( ((gajRop3[(unsigned __int8)a9] | gajRop3[BYTE1(a9)]) & 2) != 0 && v22 != 16711778 && v22 != 66 )
          bSpDwmValidateSurface((struct XDCOBJ *)&v225, left, top, a4, SHIDWORD(v219));
        v228 = 0LL;
        v229 = 0LL;
        UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(v230);
        LOBYTE(v32) = 1;
        v228 = (DC *)HmgLockEx(v224, v32, HIDWORD(v229));
        if ( v228 )
        {
          v33 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
          if ( !v33
            || (v34 = *v33) == 0
            || (v35 = *(_QWORD *)(v34 + 40), v27 = v35 == v34 + 40, v36 = (struct UMPDOBJ *)(v35 - 40), v27) )
          {
            v36 = 0LL;
          }
          v37 = v228;
          if ( *((_WORD *)v228 + 6) == 1 )
          {
            *((_QWORD *)v228 + 271) = v36;
            *((_DWORD *)v228 + 544) = 0xFFFF;
            v37 = v228;
          }
          else if ( *((struct UMPDOBJ **)v228 + 271) != v36 )
          {
            XDCOBJ::LogUmpdCallbackStatus((XDCOBJ *)&v228, v36);
            goto LABEL_58;
          }
          if ( HIDWORD(v229) )
          {
            if ( (*(_DWORD *)(*((_QWORD *)v37 + 6) + 40LL) & 0x8000) == 0 )
            {
LABEL_54:
              _InterlockedDecrement((volatile signed __int32 *)v37 + 3);
              v228 = 0LL;
LABEL_490:
              DCOBJ::~DCOBJ((DCOBJ *)&v228);
              goto LABEL_491;
            }
            v38 = *((_DWORD *)v37 + 528);
            if ( v38 != ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
            {
              v37 = v228;
              goto LABEL_54;
            }
          }
          else
          {
            if ( !*((_DWORD *)v37 + 528) )
            {
LABEL_65:
              if ( !v37 )
                goto LABEL_490;
              if ( (*((_DWORD *)v37 + 11) & 2) != 0 )
              {
LABEL_72:
                if ( (*((_DWORD *)v37 + 130) & 4) != 0 )
                {
                  DC::vMarkTransformDirty(v37);
                  v37 = v228;
                }
                if ( !v37 )
                  goto LABEL_490;
                v40 = v220;
                bSpDwmValidateSurface((struct XDCOBJ *)&v228, a7, v220, a4, SHIDWORD(v219));
                v41 = v225;
                v42 = v228;
                v43 = *((_QWORD *)v225 + 122);
                v44 = *(_DWORD *)(v43 + 108);
                if ( ((*(_BYTE *)(*((_QWORD *)v228 + 122) + 108LL) ^ *(_BYTE *)(v43 + 108)) & 7) != 0
                  && (v222 < 0 && (v44 & 1) != 0 || (v44 & 9) == 9) )
                {
                  v45 = *(_QWORD *)(v43 + 308);
                  v46 = DC::dwSetLayout(v225, -1, 0);
                  v41 = v225;
                  v42 = v228;
                  v47 = v45 - left;
                  v40 = v220;
                  left = v47 - a4;
                  v239 = v46;
                  v222 = 0x80000000;
                }
                else
                {
                  v222 = 0;
                }
                v278 = *(_DWORD *)(*((_QWORD *)v41 + 122) + 208LL);
                v279 = *(_DWORD *)(*((_QWORD *)v41 + 122) + 108LL) & 1;
                if ( (*(_DWORD *)(*((_QWORD *)v41 + 122) + 340LL) & 0x1E000) != 0 )
                {
                  EXFORMOBJ::vInit((EXFORMOBJ *)&v277, (struct XDCOBJ *)&v225, 0x204u, 0);
                  v42 = v228;
                }
                else
                {
                  v277 = (__int64)v41 + 320;
                }
                v281 = *(_DWORD *)(*((_QWORD *)v42 + 122) + 208LL);
                v282 = *(_DWORD *)(*((_QWORD *)v42 + 122) + 108LL) & 1;
                if ( (*(_DWORD *)(*((_QWORD *)v42 + 122) + 340LL) & 0x1E000) != 0 )
                {
                  EXFORMOBJ::vInit((EXFORMOBJ *)&v280, (struct XDCOBJ *)&v228, 0x204u, 0);
                  v48 = v280;
                }
                else
                {
                  v48 = (DC *)((char *)v42 + 320);
                  v280 = v48;
                }
                if ( (*(_DWORD *)(v277 + 32) & 1) != 0 && EXFORMOBJ::bEqualExceptTranslations((EXFORMOBJ *)&v277, v48) )
                {
                  v49 = HIDWORD(v219);
                  x = a7 + a4;
                  v303[0].x = a7;
                  v303[0].y = v40;
                  y = HIDWORD(v219) + v40;
                  v303[1].x = a7 + a4;
                  v303[1].y = HIDWORD(v219) + v40;
                  if ( (*((_BYTE *)v280 + 32) & 0x43) != 0x43 )
                  {
                    bCvtPts1((__int64)v280, (int *)v303, 2LL);
                    y = v303[1].y;
                    x = v303[1].x;
                    v49 = HIDWORD(v219);
                    v40 = v303[0].y;
                    v15 = v303[0].x;
                  }
                  if ( v282 )
                  {
                    ++v15;
                    ++x;
                    v303[0].x = v15;
                    v303[1].x = x;
                  }
                  if ( v15 > x )
                  {
                    v303[0].x = x;
                    v303[1].x = v15;
                  }
                  if ( v40 > y )
                  {
                    v303[0].y = y;
                    v303[1].y = v40;
                  }
                  bottom = v49 + top;
                  v302.left = left;
                  right = left + a4;
                  v302.top = top;
                  v302.right = left + a4;
                  v302.bottom = v49 + top;
                  if ( (*(_BYTE *)(v277 + 32) & 0x43) != 0x43 )
                  {
                    bCvtPts1(v277, &v302.left, 2LL);
                    bottom = v302.bottom;
                    right = v302.right;
                    top = v302.top;
                    left = v302.left;
                  }
                  if ( v279 )
                  {
                    ++left;
                    ++right;
                    v302.left = left;
                    v302.right = right;
                  }
                  if ( left > right )
                  {
                    v54 = left;
                    v302.left = right;
                    left = right;
                    v302.right = v54;
                    right = v54;
                  }
                  if ( top > bottom )
                  {
                    v55 = top;
                    v302.top = bottom;
                    top = bottom;
                    v302.bottom = v55;
                    bottom = v55;
                  }
                  if ( left != right && top != bottom )
                  {
                    v56 = v225;
                    v57 = *((_DWORD *)v225 + 9);
                    if ( (v57 & 0xE0) != 0 )
                    {
                      if ( (v57 & 0x20) != 0 )
                      {
                        ERECTL::operator|=((_DWORD *)v225 + 266, &v302);
                        v56 = v225;
                      }
                      if ( (*((_DWORD *)v56 + 9) & 0x80u) != 0 )
                        ERECTL::operator|=((_DWORD *)v56 + 274, &v302);
                    }
                    v250 = 0LL;
                    v251 = 0;
                    v252 = 0;
                    v254 = 0;
                    v258 = 0LL;
                    v259 = 0LL;
                    UnexpectedThreadTerminationHandler<DLODCOBJ>::UnexpectedThreadTerminationHandler<DLODCOBJ>(v260);
                    v261 = 256;
                    v262 = 0LL;
                    v263 = 0LL;
                    UnexpectedThreadTerminationHandler<DLODCOBJ>::UnexpectedThreadTerminationHandler<DLODCOBJ>(v264);
                    v265 = 256;
                    v247 = 0LL;
                    v248 = 0LL;
                    v255 = 0LL;
                    v267 = 0LL;
                    v249 = 0LL;
                    v256 = 0;
                    v266 = 0LL;
                    v268 = 0LL;
                    v271 = 0LL;
                    v269 = 0LL;
                    v270 = 0LL;
                    v258 = 0LL;
                    v262 = 0LL;
                    if ( !(unsigned int)DEVLOCKBLTOBJ::bLock(
                                          (DEVLOCKBLTOBJ *)&v247,
                                          (struct XDCOBJ *)&v225,
                                          (struct XDCOBJ *)&v228) )
                    {
                      v168 = XDCOBJ::bFullScreen((XDCOBJ *)&v228);
                      v19 = XDCOBJ::bFullScreen((XDCOBJ *)&v225) | v168;
                      goto LABEL_177;
                    }
                    v60 = v225;
                    v61 = *((_QWORD *)v225 + 62);
                    v246 = (SURFACE *)v61;
                    if ( !v61 )
                    {
                      v19 = 1;
                      goto LABEL_177;
                    }
                    v62 = *(_QWORD *)(v61 + 128);
                    v63 = *((_QWORD *)v225 + 11);
                    v64 = (a9 & 0x5FFFFFFFu) >> 16;
                    v236 = (v64 << 8) | v64;
                    if ( ((v64 ^ (unsigned __int8)(16 * v64)) & 0xF0) != 0 )
                    {
                      v65 = *((_QWORD *)v225 + 122);
                      v66 = (char *)v225 + 1200;
                      v223 = (__int64)v225 + 1200;
                      if ( (*(_DWORD *)(v65 + 152) & 0x1000) != 0 )
                      {
                        GreDCSelectBrush(v225, *(_QWORD *)(v65 + 160));
                        v66 = (char *)v223;
                        v60 = v225;
                      }
                      v58 = *((_QWORD *)v60 + 122);
                      v67 = *(_DWORD *)(v58 + 152);
                      if ( (v67 & 1) != 0 || (*((_DWORD *)v60 + 79) & 1) != 0 )
                      {
                        LODWORD(v215) = 1;
                        *(_DWORD *)(v58 + 152) = v67 & 0xFFFFFFFE;
                        v214 = (RECTL *)v61;
                        v213 = (XLATEOBJ *)v62;
                        *((_DWORD *)v225 + 79) &= ~1u;
                        EBRUSHOBJ::vInitBrush(v66, v225, *((_QWORD *)v225 + 17), v63, v213, v214, (_DWORD)v215);
                        v60 = v225;
                      }
                    }
                    else
                    {
                      v223 = 0LL;
                    }
                    v68 = *((_DWORD *)v60 + 10) & 1;
                    v69 = v228;
                    v59 = (unsigned int)(*((_DWORD *)v60 + 2 * v68 + 254) + v302.left);
                    v302.left += *((_DWORD *)v60 + 2 * v68 + 254);
                    v302.right += *((_DWORD *)v60 + 2 * v68 + 254);
                    v70 = (unsigned int)(*((_DWORD *)v60 + 2 * v68 + 255) + v302.top);
                    v302.top += *((_DWORD *)v60 + 2 * v68 + 255);
                    v302.bottom += *((_DWORD *)v60 + 2 * v68 + 255);
                    v71 = *((_QWORD *)v228 + 62);
                    v234 = v71;
                    if ( !v71 )
                      goto LABEL_329;
                    if ( (a11 & 2) != 0 )
                    {
LABEL_142:
                      v76 = (_DWORD *)((char *)v69 + 1024);
                      v77 = *(_QWORD *)(v71 + 128);
                      if ( (*((_DWORD *)v69 + 10) & 1) == 0 )
                        v76 = (_DWORD *)((char *)v69 + 1016);
                      v78 = 0;
                      v79 = *(_QWORD *)(v234 + 48);
                      v80 = 0;
                      v81 = v70 - *((_DWORD *)v69 + 2 * (*((_DWORD *)v69 + 10) & 1) + 255) - v303[0].y;
                      v82 = v59 - *v76 - v303[0].x;
                      v273 = v82;
                      v231 = v81;
                      if ( v79 && v234 == *(_QWORD *)(v79 + 2528) && (*(_DWORD *)(v79 + 40) & 0x20000) != 0 )
                      {
                        v80 = *(_DWORD *)(v79 + 2560);
                        v78 = *(_DWORD *)(v79 + 2564);
                      }
                      if ( v80 + v82 > (int)v59 )
                        v59 = (unsigned int)(v80 + v82);
                      v302.left = v59;
                      if ( v78 + v81 > (int)v70 )
                        LODWORD(v70) = v78 + v81;
                      v83 = v302.bottom;
                      v302.top = v70;
                      v84 = v80 + *(_DWORD *)(v234 + 56);
                      v58 = (unsigned int)v302.right;
                      v85 = v82 + v84;
                      if ( v85 < v302.right )
                        v58 = (unsigned int)v85;
                      v302.right = v58;
                      if ( v81 + v78 + *(_DWORD *)(v234 + 60) < v302.bottom )
                        v83 = v81 + v78 + *(_DWORD *)(v234 + 60);
                      v302.bottom = v83;
                      if ( (int)v59 < (int)v58 && (int)v70 < v83 )
                      {
                        v224 = 0LL;
                        if ( (int)v59 >= *((_DWORD *)v60 + 250)
                          && (int)v58 <= *((_DWORD *)v60 + 252)
                          && (int)v70 >= *((_DWORD *)v60 + 251)
                          && v83 <= *((_DWORD *)v60 + 253) )
                        {
LABEL_164:
                          v87 = *((_DWORD *)v60 + 9);
                          if ( (v87 & 0xE0) == 0 )
                            goto LABEL_193;
                          v304 = v302;
                          v88 = *((_DWORD *)v60 + 10) & 1;
                          v89 = v302.left - *((_DWORD *)v60 + 2 * v88 + 254);
                          v304.left = v89;
                          v90 = v302.right - *((_DWORD *)v60 + 2 * v88 + 254);
                          v304.right = v90;
                          v91 = v302.top - *((_DWORD *)v60 + 2 * v88 + 255);
                          v304.top = v91;
                          v304.bottom = v302.bottom - *((_DWORD *)v60 + 2 * v88 + 255);
                          if ( (v87 & 0x40) == 0 )
                          {
LABEL_193:
                            v95 = v302.left - v82;
                            v96 = 0LL;
                            v303[0].x = v95;
                            v221 = 0LL;
                            v303[0].y = v302.top - v81;
                            if ( *((_QWORD *)v69 + 62) == *((_QWORD *)v60 + 62) )
                            {
                              v97 = 0LL;
                              v19 = 1;
LABEL_249:
                              v123 = 0;
                              v124 = 0;
                              v125 = v302;
                              v283 = v302;
                              v291 = *(_OWORD *)&v303[0].x;
                              v306 = v302;
                              v307 = *(RECTL *)&v303[0].x;
                              v240 = 0LL;
                              if ( *((int *)v246 + 28) < 0 )
                              {
                                v126 = (_DWORD *)*((_QWORD *)v246 + 6);
                                if ( v126 )
                                {
                                  if ( (v126[10] & 0x20000) != 0 )
                                  {
                                    v123 = v126[640];
                                    v124 = v126[641];
                                    v240 = __PAIR64__(v124, v123);
                                  }
                                }
                              }
                              v127 = 0;
                              v128 = v123 + *((_DWORD *)v246 + 14);
                              v243 = 0LL;
                              v129 = 0;
                              v241 = v128;
                              v242 = v124 + *((_DWORD *)v246 + 15);
                              if ( *(int *)(v234 + 112) < 0 )
                              {
                                v130 = *(_DWORD **)(v234 + 48);
                                if ( v130 )
                                {
                                  if ( (v130[10] & 0x20000) != 0 )
                                  {
                                    v127 = v130[640];
                                    v129 = v130[641];
                                    v243 = __PAIR64__(v129, v127);
                                  }
                                }
                              }
                              v244 = v127 + *(_DWORD *)(v234 + 56);
                              v245 = v129 + *(_DWORD *)(v234 + 60);
                              v131 = *((_DWORD *)v60 + 130);
                              if ( (v131 & 1) != 0 && (v131 & 2) == 0 )
                              {
                                v132 = 1.0 / *((float *)v60 + 132);
                                v275[0] = 1.0 / COERCE_FLOAT(*(_QWORD *)((char *)v60 + 524));
                                v275[1] = v132;
                                ERECTL::vScale((ERECTL *)&v240, (const struct POINTFL *)v275);
                                ERECTL::vScale((ERECTL *)&v306, (const struct POINTFL *)v275);
                                v60 = v225;
                                v69 = v228;
                                v125 = v306;
                              }
                              v133 = *((_DWORD *)v69 + 130);
                              if ( (v133 & 1) != 0 && (v133 & 2) == 0 )
                              {
                                v134 = 1.0 / COERCE_FLOAT(*(_QWORD *)((char *)v69 + 524));
                                v276[1] = 1.0 / *((float *)v69 + 132);
                                v276[0] = v134;
                                ERECTL::vScale((ERECTL *)&v243, (const struct POINTFL *)v276);
                                ERECTL::vScale((ERECTL *)&v307, (const struct POINTFL *)v276);
                                v60 = v225;
                                v69 = v228;
                                v129 = HIDWORD(v243);
                                v127 = v243;
                              }
                              v135 = _mm_cvtsi128_si32((__m128i)v125);
                              v305 = v125;
                              v59 = (unsigned int)v125.top;
                              v136 = v125.right;
                              v137 = v307.left - v135;
                              v138 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v125, 4));
                              v139 = v135;
                              v140 = _mm_srli_si128((__m128i)v125, 8);
                              v141 = v307.top - v138;
                              v142 = _mm_srli_si128((__m128i)v125, 12);
                              v143 = (int)v240 <= v135;
                              v144 = v305.bottom;
                              if ( !v143 )
                                v139 = v240;
                              v143 = SHIDWORD(v240) <= v138;
                              v145 = _mm_cvtsi128_si32(v140);
                              if ( !v143 )
                                v59 = HIDWORD(v240);
                              v143 = v241 < v145;
                              v146 = _mm_cvtsi128_si32(v142);
                              if ( v143 )
                                v136 = v241;
                              if ( v242 < v146 )
                                v144 = v242;
                              if ( v136 >= v139 )
                              {
                                if ( v144 < (int)v59 )
                                  v59 = (unsigned int)v144;
                              }
                              else
                              {
                                v139 = v136;
                              }
                              v147 = v137 + v139;
                              v148 = v59 + v141;
                              v149 = v137 + v136;
                              v150 = v141 + v144;
                              if ( v127 > v147 )
                                v147 = v127;
                              v305.left = v147;
                              if ( v129 > v148 )
                                v148 = v129;
                              v305.top = v148;
                              if ( v244 < v149 )
                                v149 = v244;
                              v305.right = v149;
                              if ( v245 < v150 )
                                v150 = v245;
                              v305.bottom = v150;
                              if ( v149 >= v147 )
                              {
                                if ( v150 < v148 )
                                  v148 = v150;
                                v305.top = v148;
                              }
                              else
                              {
                                v147 = v149;
                                v305.left = v149;
                              }
                              v151 = v305;
                              v307 = v305;
                              v152 = v148 - v141;
                              v306.left = v147 - v137;
                              v118 = (unsigned int)(v150 - v141);
                              v306.top = v152;
                              v306.right = v149 - v137;
                              v306.bottom = v118;
                              if ( v147 - v137 >= v149 - v137 || v152 >= (int)v118 )
                              {
                                v155 = v246;
                                v156 = 0;
                              }
                              else
                              {
                                v153 = *((_DWORD *)v60 + 130);
                                v118 = v19;
                                if ( (v153 & 1) != 0 && (v153 & 2) == 0 )
                                {
                                  v287 = *(_QWORD *)((char *)v60 + 524);
                                  ERECTL::vScale((ERECTL *)&v306, (const struct POINTFL *)&v287);
                                  v69 = v228;
                                }
                                v154 = *((_DWORD *)v69 + 130);
                                if ( (v154 & 1) != 0 && (v154 & 2) == 0 )
                                {
                                  v288 = *(_QWORD *)((char *)v69 + 524);
                                  ERECTL::vScale((ERECTL *)&v307, (const struct POINTFL *)&v288);
                                  v151 = v307;
                                }
                                v155 = v246;
                                v156 = 1;
                                *(RECTL *)&v303[0].x = v151;
                                v302 = v306;
                                ++*((_DWORD *)v246 + 23);
                                v60 = v225;
                                v69 = v228;
                              }
                              v157 = *((_QWORD *)v69 + 6);
                              BYTE2(v219) = v156;
                              if ( *((_QWORD *)v60 + 6) == v157
                                || (v158 = XDCOBJ::bRedirHooked((XDCOBJ *)&v225), v60 = v225, v69 = v228, v158)
                                && (v118 = *((_QWORD *)v225 + 6), *(_QWORD *)(v118 + 3496) == *((_QWORD *)v228 + 6)) )
                              {
                                v58 = v234;
                              }
                              else
                              {
                                v58 = v234;
                                if ( *(_WORD *)(v234 + 100)
                                  || *(_QWORD *)(v234 + 24)
                                  || (v118 = *(unsigned int *)(*((_QWORD *)v225 + 6) + 40LL), (v118 & 0x80u) != 0LL) )
                                {
                                  if ( v156 )
                                  {
                                    v159 = &v247;
                                    if ( (*(_DWORD *)(*((_QWORD *)v155 + 6) + 40LL) & 0x80u) == 0 )
                                      v159 = 0LL;
                                    v19 = SimBitBlt(
                                            (SURFOBJ *)((char *)v155 + 24),
                                            (SURFOBJ *)(v234 + 24),
                                            v97,
                                            &v302,
                                            v303,
                                            0LL,
                                            v223,
                                            (POINTL *)v225 + 149,
                                            v236,
                                            (__int64)v159);
                                  }
                                  goto LABEL_322;
                                }
                              }
                              if ( v236 == 52428 )
                              {
                                v27 = (a11 & 1) == 0;
                                v308 = a11 & 1;
                                v160 = *((_QWORD *)v155 + 6);
                                if ( !v27 )
                                {
                                  EtwWindowRendering(
                                    *((_QWORD *)v60 + 58),
                                    *((_QWORD *)v60 + 59),
                                    **((_QWORD **)v60 + 62),
                                    (unsigned int)v283.left,
                                    v283.top,
                                    v283.right,
                                    v283.bottom,
                                    *((_QWORD *)v69 + 58),
                                    *((_QWORD *)v69 + 59),
                                    **((_QWORD **)v69 + 62),
                                    v291,
                                    DWORD1(v291),
                                    v291 + abs32(v283.right - v283.bottom),
                                    DWORD1(v291) + abs32(v283.bottom - v283.top),
                                    v219);
                                  v155 = v246;
                                  *((_WORD *)v246 + 51) |= 0x40u;
                                  v161 = W32GetThreadWin32Thread(KeGetCurrentThread());
                                  if ( v161 )
                                    *(_DWORD *)(v161 + 328) &= ~1u;
                                  GreClientRgnUpdated(0LL);
                                  GreClientRgnUpdatedStable();
                                  v96 = v221;
                                }
                                if ( BYTE2(v219) )
                                {
                                  if ( (*((_DWORD *)v155 + 28) & 0x400) != 0 )
                                    v162 = (*(__int64 (__fastcall **)(__int64, unsigned __int64, HDC, XLATEOBJ *, RECTL *, POINTL *))(v160 + 2816))(
                                             (__int64)v155 + 24,
                                             v234 + 24,
                                             v224,
                                             v97,
                                             &v302,
                                             v303);
                                  else
                                    v162 = ((__int64 (__fastcall *)(char *, unsigned __int64, HDC, XLATEOBJ *, RECTL *, POINTL *))EngCopyBits)(
                                             (char *)v155 + 24,
                                             v234 + 24,
                                             v224,
                                             v97,
                                             &v302,
                                             v303);
                                  v19 = v162;
                                }
                                if ( v308 )
                                {
                                  *((_WORD *)v155 + 51) &= ~0x40u;
                                  v163 = W32GetThreadWin32Thread(KeGetCurrentThread());
                                  v96 = v221;
                                  if ( v163 )
                                    *(_DWORD *)(v163 + 328) |= 1u;
                                }
                              }
                              else if ( v156 )
                              {
                                v165 = SURFACE::pfnBitBlt(v155);
                                v19 = ((__int64 (__fastcall *)(char *, __int64, _QWORD, HDC, XLATEOBJ *, RECTL *, POINTL *, _QWORD, __int64, char *, int))v165)(
                                        (char *)v155 + 24,
                                        v166 + 24,
                                        0LL,
                                        v224,
                                        v97,
                                        &v302,
                                        v303,
                                        0LL,
                                        v223,
                                        (char *)v60 + 1192,
                                        v167);
                              }
LABEL_322:
                              if ( v96 )
                              {
                                cEntries = v96[1].cEntries;
                                if ( cEntries < 0 )
                                {
                                  if ( cEntries == -1 )
                                    FreeThreadBufferWithTag(v96);
                                }
                                else
                                {
                                  _InterlockedDecrement(
                                    (volatile signed __int32 *)Gre::Base::Globals((Gre::Base *)v118)
                                  + 8 * (int)v96[1].cEntries
                                  + 1658);
                                }
                              }
LABEL_177:
                              if ( (v256 & 0x1000) == 0 )
                                goto LABEL_357;
                              if ( (v256 & 0x8000) != 0 )
                              {
                                if ( v258 && HIBYTE(v261) )
                                  DEVLOCKBLTOBJ::bUnMapTrgSurfaceView((DEVLOCKBLTOBJ *)&v247);
                                _InterlockedOr(v212, 0);
                                v94 = v262;
                                if ( !v262 || !HIBYTE(v265) )
                                  goto LABEL_350;
                                DEVLOCKBLTOBJ::bUnMapSrcSurfaceView((DEVLOCKBLTOBJ *)&v247);
                              }
                              else
                              {
                                v169 = v262;
                                if ( v262 && HIBYTE(v265) )
                                {
                                  if ( (*((_DWORD *)v262 + 11) & 1) == 0 )
                                  {
                                    v170 = (SURFACE *)*((_QWORD *)v262 + 62);
                                    if ( v170 )
                                    {
                                      SURFACE::bUnMap(v170, &v247, 0LL);
                                      v169 = v262;
                                    }
                                  }
                                  *((_DWORD *)v169 + 11) &= ~1u;
                                }
                                _InterlockedOr(v212, 0);
                                if ( v258 && HIBYTE(v261) )
                                {
                                  if ( (v256 & 0x400) != 0 )
                                  {
                                    bUnHookRedir((struct XDCOBJ *)&v258);
                                    v256 &= ~0x400u;
                                  }
                                  if ( (v256 & 0x2000) != 0 )
                                  {
                                    bUnHookBmpDrv((struct XDCOBJ *)&v258);
                                    v256 &= ~0x2000u;
                                  }
                                  if ( (v256 & 0x1000) != 0 )
                                  {
                                    if ( (*((_DWORD *)v258 + 11) & 1) == 0 )
                                    {
                                      v171 = (SURFACE *)*((_QWORD *)v258 + 62);
                                      if ( v171 )
                                        SURFACE::bUnMap(v171, &v247, v258);
                                    }
                                    *((_DWORD *)v258 + 11) &= ~1u;
                                  }
                                }
                              }
                              v94 = v262;
LABEL_350:
                              v58 = (unsigned __int64)v258;
                              if ( !v258
                                || !HIBYTE(v261)
                                || (v256 & 0x1000) == 0
                                || (*((_DWORD *)v258 + 9) & 0x4000) == 0
                                || !*((_QWORD *)v258 + 59)
                                || !*((_DWORD *)v258 + 122) )
                              {
LABEL_358:
                                if ( v250 )
                                {
                                  if ( v254 )
                                  {
                                    PopThreadGuardedObject(v253);
                                    v254 = 0;
                                  }
                                  DEVLOCKBLTOBJ::TmpSrcCleanup((DEVLOCKBLTOBJ *)&v247);
                                  v94 = v262;
                                }
                                v172 = v256;
                                if ( (v256 & 0x1000) == 0 )
                                {
                                  if ( (v256 & 0x800000) != 0 )
                                  {
                                    GreDecLockCount(v94, v58, v256, v59);
                                    v256 &= ~0x800000u;
                                  }
                                  goto LABEL_439;
                                }
                                if ( (v256 & 0x8000) != 0 )
                                {
                                  DEVLOCKBLTOBJ::bDisposeTrgDco((DEVLOCKBLTOBJ *)&v247);
                                  _InterlockedOr(v212, 0);
                                  DEVLOCKBLTOBJ::bDisposeSrcDco((DEVLOCKBLTOBJ *)&v247, v173, v174);
                                  v256 &= ~0x8000u;
                                  goto LABEL_434;
                                }
                                if ( !v94 || !HIBYTE(v265) )
                                {
LABEL_401:
                                  _InterlockedOr(v212, 0);
                                  v175 = v258;
                                  if ( !v258 || !HIBYTE(v261) )
                                  {
LABEL_434:
                                    GreDecLockCount(v94, v58, v172, v175);
                                    v256 &= ~0x1000u;
                                    v192 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
                                    if ( v192 )
                                    {
                                      v193 = *v192;
                                      if ( v193 )
                                      {
                                        *(_QWORD *)(v193 + 320) = 0LL;
                                        *(_QWORD *)(v193 + 312) = 0LL;
                                      }
                                    }
LABEL_439:
                                    if ( (_QWORD)v247 )
                                    {
                                      EtwTraceGreLockReleaseSemaphore(L"hsemTrg");
                                      GreReleaseSemaphoreInternal(v247);
                                    }
                                    if ( *((_QWORD *)&v247 + 1) )
                                    {
                                      EtwTraceGreLockReleaseSemaphore(L"hsemSrc");
                                      GreReleaseSemaphoreInternal(*((_QWORD *)&v247 + 1));
                                    }
                                    if ( (v256 & 8) != 0 )
                                      v256 &= ~8u;
                                    if ( (_QWORD)v248 )
                                    {
                                      EtwTraceGreLockReleaseSemaphore(L"hsemDMC");
                                      GreReleaseSemaphoreInternal(v248);
                                    }
                                    if ( *((_QWORD *)&v267 + 1) )
                                    {
                                      DCOBJ::DCOBJ((DCOBJ *)v289, v268);
                                      SURFREF::SURFREF((SURFREF *)v294);
                                      SURFREF::SURFREF((SURFREF *)v300);
                                      LOBYTE(v194) = 5;
                                      v195 = HmgShareLock(v267, v194);
                                      LOBYTE(v196) = 5;
                                      v295 = (HSURF *)v195;
                                      v301 = (struct SURFACE *)HmgShareLock(*((_QWORD *)&v267 + 1), v196);
                                      v197 = *v295;
                                      DC::pSurface(v289[0], v301);
                                      DEC_SHARE_REF_CNT(v295);
                                      v295 = 0LL;
                                      DEC_SHARE_REF_CNT(v301);
                                      v301 = 0LL;
                                      GreDereferenceObject(v197, 1u);
                                      v198 = v289[0];
                                      v268 = 0LL;
                                      *(_QWORD *)&v267 = 0LL;
                                      *((_DWORD *)v289[0] + 9) |= v257;
                                      v199 = Gre::Base::Globals(v198);
                                      if ( (*((_DWORD *)v289[0] + 9) & 0x200) != 0 )
                                      {
                                        v200 = 0;
                                        if ( !(unsigned int)GreGetLockCount(v289[0])
                                          && !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(*((_QWORD *)v199 + 15)) )
                                        {
                                          GreAcquireSemaphoreSharedInternal(*((_QWORD *)v199 + 15));
                                          EtwTraceGreLockAcquireSemaphoreShared(
                                            L"GreBaseGlobals.hsemGreLock",
                                            *((_QWORD *)v199 + 15));
                                          v200 = 1;
                                        }
                                        DCVISRGNSHARELOCK::DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)((char *)&v219 + 1));
                                        LOBYTE(v213) = 5;
                                        v201 = HmgShareUnlockRemoveObject(
                                                 *((_QWORD *)&v267 + 1),
                                                 0LL,
                                                 0LL,
                                                 0LL,
                                                 (_DWORD)v213);
                                        if ( v201 )
                                          SURFACE::bDeleteSurface(v201, 0LL, 1LL);
                                        *((_QWORD *)v289[0] + 63) = 0LL;
                                        DC::vClearRendering(v289[0]);
                                        *((_QWORD *)&v267 + 1) = 0LL;
                                        DCVISRGNSHARELOCK::~DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)((char *)&v219 + 1));
                                        if ( v200 )
                                        {
                                          EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemGreLock");
                                          GreReleaseSemaphoreInternal(*((_QWORD *)v199 + 15));
                                        }
                                      }
                                      else
                                      {
                                        LOBYTE(v213) = 5;
                                        v210 = HmgShareUnlockRemoveObject(
                                                 *((_QWORD *)&v267 + 1),
                                                 0LL,
                                                 0LL,
                                                 0LL,
                                                 (_DWORD)v213);
                                        if ( v210 )
                                          SURFACE::bDeleteSurface(v210, 0LL, 1LL);
                                        *((_QWORD *)v289[0] + 63) = 0LL;
                                        *((_QWORD *)&v267 + 1) = 0LL;
                                      }
                                      EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDynamicModeChange");
                                      GreReleaseSemaphoreInternal(*((_QWORD *)v199 + 10));
                                      if ( v301 )
                                        DEC_SHARE_REF_CNT(v301);
                                      UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v300);
                                      if ( v295 )
                                        DEC_SHARE_REF_CNT(v295);
                                      UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v294);
                                      if ( v289[0] )
                                        XDCOBJ::vUnlockFast((XDCOBJ *)v289);
                                      UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v290);
                                    }
                                    if ( v270 )
                                    {
                                      DCOBJ::DCOBJ((DCOBJ *)v292, v271);
                                      SURFREF::SURFREF((SURFREF *)v296);
                                      SURFREF::SURFREF((SURFREF *)v298);
                                      LOBYTE(v202) = 5;
                                      v203 = HmgShareLock(v269, v202);
                                      LOBYTE(v204) = 5;
                                      v297 = (HSURF *)v203;
                                      v299 = (struct SURFACE *)HmgShareLock(v270, v204);
                                      v205 = *v297;
                                      DC::pSurface(v292[0], v299);
                                      DEC_SHARE_REF_CNT(v297);
                                      v297 = 0LL;
                                      DEC_SHARE_REF_CNT(v299);
                                      v299 = 0LL;
                                      GreDereferenceObject(v205, 1u);
                                      v271 = 0LL;
                                      v269 = 0LL;
                                      v207 = Gre::Base::Globals(v206);
                                      if ( (*((_DWORD *)v292[0] + 9) & 0x200) != 0 )
                                      {
                                        v208 = 0;
                                        if ( !(unsigned int)GreGetLockCount(v292[0])
                                          && !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(*((_QWORD *)v207 + 15)) )
                                        {
                                          GreAcquireSemaphoreSharedInternal(*((_QWORD *)v207 + 15));
                                          EtwTraceGreLockAcquireSemaphoreShared(
                                            L"GreBaseGlobals.hsemGreLock",
                                            *((_QWORD *)v207 + 15));
                                          v208 = 1;
                                        }
                                        DCVISRGNSHARELOCK::DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)((char *)&v219 + 1));
                                        LOBYTE(v213) = 5;
                                        v209 = HmgShareUnlockRemoveObject(v270, 0LL, 0LL, 0LL, (_DWORD)v213);
                                        if ( v209 )
                                          SURFACE::bDeleteSurface(v209, 0LL, 1LL);
                                        *((_QWORD *)v292[0] + 63) = 0LL;
                                        DC::vClearRendering(v292[0]);
                                        v270 = 0LL;
                                        DCVISRGNSHARELOCK::~DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)((char *)&v219 + 1));
                                        if ( v208 )
                                        {
                                          EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemGreLock");
                                          GreReleaseSemaphoreInternal(*((_QWORD *)v207 + 15));
                                        }
                                      }
                                      else
                                      {
                                        LOBYTE(v213) = 5;
                                        v211 = HmgShareUnlockRemoveObject(v270, 0LL, 0LL, 0LL, (_DWORD)v213);
                                        if ( v211 )
                                          SURFACE::bDeleteSurface(v211, 0LL, 1LL);
                                        *((_QWORD *)v292[0] + 63) = 0LL;
                                        v270 = 0LL;
                                      }
                                      EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDynamicModeChange");
                                      GreReleaseSemaphoreInternal(*((_QWORD *)v207 + 10));
                                      if ( v299 )
                                        DEC_SHARE_REF_CNT(v299);
                                      UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v298);
                                      if ( v297 )
                                        DEC_SHARE_REF_CNT(v297);
                                      UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v296);
                                      if ( v292[0] )
                                        XDCOBJ::vUnlockFast((XDCOBJ *)v292);
                                      UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v293);
                                    }
                                    DLODCOBJ::~DLODCOBJ((DLODCOBJ *)&v262);
                                    DLODCOBJ::~DLODCOBJ((DLODCOBJ *)&v258);
                                    CAutoTGO::~CAutoTGO((CAutoTGO *)v253);
                                    SURFMEM::~SURFMEM((SURFMEM *)&v250);
                                    goto LABEL_488;
                                  }
                                  v185 = v256;
                                  v58 = *((_QWORD *)v258 + 6);
                                  if ( (v256 & 0x10) != 0 )
                                  {
                                    *((_DWORD *)v258 + 9) &= ~0x4000u;
                                    DC::pSurface(v258, *(struct SURFACE **)(v58 + 2528));
                                    v175 = v258;
                                    v185 = v256;
                                  }
                                  if ( v175 )
                                  {
                                    if ( (v185 & 0x1000) == 0
                                      || (v58 = (unsigned __int64)v262) != 0
                                      && HIBYTE(v265)
                                      && DLODCOBJ::bValid((DLODCOBJ *)&v258)
                                      && *(_QWORD *)v58 == *(_QWORD *)v175 )
                                    {
LABEL_424:
                                      if ( v175 )
                                      {
                                        if ( (_BYTE)v261 )
                                        {
                                          *((_DWORD *)v175 + 10) &= ~2u;
                                          v175 = v258;
                                          LOBYTE(v261) = 0;
                                        }
                                        if ( v175 )
                                        {
                                          if ( (_DWORD)v259 && (*((_DWORD *)v175 + 11) & 2) != 0 )
                                          {
                                            XDCOBJ::RestoreAttributesHelper((XDCOBJ *)&v258);
                                            *((_DWORD *)v258 + 11) &= ~2u;
                                            v175 = v258;
                                            LODWORD(v259) = 0;
                                          }
                                          v238 = 0;
                                          v191 = *(_QWORD *)v175;
                                          HmgDecrementExclusiveReferenceCountEx(v175, HIDWORD(v259), &v238);
                                          if ( v238 )
                                            GrepDeleteDC(v191, 0x2000000LL);
                                        }
                                      }
                                      goto LABEL_433;
                                    }
                                    if ( v175 )
                                    {
                                      v186 = *((_DWORD *)v175 + 9);
                                      if ( (v186 & 0x200) != 0 )
                                      {
                                        if ( (v186 & 0x4000) == 0 )
                                        {
                                          v187 = W32GetThreadWin32Thread(KeGetCurrentThread());
                                          if ( v187 )
                                            *(_DWORD *)(v187 + 328) &= ~1u;
                                          v175 = v258;
                                        }
                                        if ( v175 && HIBYTE(v261) && !(_QWORD)v267
                                          || DLODCOBJ::bValid((DLODCOBJ *)&v262)
                                          && *(_QWORD *)v175 == *(_QWORD *)v58
                                          && !v269 )
                                        {
                                          v188 = Gre::Base::Globals(v94);
                                          GreAcquireSemaphoreSharedInternal(*((_QWORD *)v188 + 11));
                                          EtwTraceGreLockAcquireSemaphoreShared(
                                            L"GreBaseGlobals.hsemDCVisRgn",
                                            *((_QWORD *)v188 + 11));
                                          DC::vClearRendering(v258);
                                          v190 = Gre::Base::Globals(v189);
                                          EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDCVisRgn");
                                          GreReleaseSemaphoreInternal(*((_QWORD *)v190 + 11));
                                          v175 = v258;
                                        }
                                      }
                                      goto LABEL_424;
                                    }
                                  }
LABEL_433:
                                  v258 = 0LL;
                                  goto LABEL_434;
                                }
                                v58 = *((_QWORD *)v94 + 6);
                                if ( (v256 & 0x20) != 0 )
                                {
                                  *((_DWORD *)v94 + 9) &= ~0x4000u;
                                  DC::pSurface(v262, *(struct SURFACE **)(v58 + 2528));
                                  v94 = v262;
                                }
                                if ( v266 )
                                {
                                  v176 = *(_QWORD *)(v266 + 72);
                                  CurrentProcess = PsGetCurrentProcess(v94, v58, v172);
                                  MmUnmapViewOfSection(CurrentProcess, v176);
                                  v94 = v262;
                                }
                                if ( v94 )
                                {
                                  if ( (v256 & 0x1000) == 0 )
                                    goto LABEL_391;
                                  if ( HIBYTE(v265) )
                                  {
                                    v58 = (unsigned __int64)v258;
                                    if ( v258 )
                                    {
                                      if ( HIBYTE(v261) && *(_QWORD *)v94 == *(_QWORD *)v258 )
                                        goto LABEL_391;
                                    }
                                  }
                                  v178 = *((_DWORD *)v94 + 9);
                                  if ( (v178 & 0x200) == 0 )
                                    goto LABEL_391;
                                  if ( (v178 & 0x4000) == 0 )
                                  {
                                    v179 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
                                    if ( v179 )
                                    {
                                      v180 = *v179;
                                      if ( v180 )
                                        *(_DWORD *)(v180 + 328) &= ~1u;
                                    }
                                    v94 = v262;
                                  }
                                  v58 = (unsigned __int64)v258;
                                  if ( v258 && HIBYTE(v261) && *(_QWORD *)v94 == *(_QWORD *)v258 && !(_QWORD)v267 )
                                    goto LABEL_390;
                                  if ( v94 )
                                  {
                                    if ( HIBYTE(v265) && !v269 )
                                    {
LABEL_390:
                                      v181 = Gre::Base::Globals(v94);
                                      GreAcquireSemaphoreSharedInternal(*((_QWORD *)v181 + 11));
                                      EtwTraceGreLockAcquireSemaphoreShared(
                                        L"GreBaseGlobals.hsemDCVisRgn",
                                        *((_QWORD *)v181 + 11));
                                      DC::vClearRendering(v262);
                                      v183 = Gre::Base::Globals(v182);
                                      EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDCVisRgn");
                                      GreReleaseSemaphoreInternal(*((_QWORD *)v183 + 11));
                                      v94 = v262;
                                    }
LABEL_391:
                                    if ( v94 )
                                    {
                                      if ( (_BYTE)v265 )
                                      {
                                        *((_DWORD *)v94 + 10) &= ~2u;
                                        v94 = v262;
                                        LOBYTE(v265) = 0;
                                      }
                                      if ( v94 )
                                      {
                                        if ( (_DWORD)v263 && (*((_DWORD *)v94 + 11) & 2) != 0 )
                                        {
                                          XDCOBJ::RestoreAttributesHelper((XDCOBJ *)&v262);
                                          *((_DWORD *)v262 + 11) &= ~2u;
                                          v94 = v262;
                                          LODWORD(v263) = 0;
                                        }
                                        v237 = 0;
                                        v184 = *(_QWORD *)v94;
                                        HmgDecrementExclusiveReferenceCountEx(v94, HIDWORD(v263), &v237);
                                        if ( v237 )
                                          GrepDeleteDC(v184, 0x2000000LL);
                                      }
                                    }
                                  }
                                }
                                v262 = 0LL;
                                goto LABEL_401;
                              }
                              GreUpdateSpriteDevLockEnd((struct XDCOBJ *)&v258, v256 & 0x400000);
LABEL_357:
                              v94 = v262;
                              goto LABEL_358;
                            }
                            v98 = *((_QWORD *)v69 + 11);
                            HIDWORD(v219) = a10;
                            if ( a10 == -1 )
                              HIDWORD(v219) = *(_DWORD *)(*((_QWORD *)v69 + 122) + 180LL);
                            v99 = *((_QWORD *)v60 + 122);
                            v100 = (Gre::Base *)*(unsigned int *)(v99 + 176);
                            v235 = *(_DWORD *)(v99 + 184);
                            v272 = *((_DWORD *)v60 + 30);
                            v220 = (int)v100;
                            if ( !v77 )
                            {
                              if ( v62 )
                              {
                                if ( (*(_DWORD *)(v62 + 24) & 0x800) == 0 )
                                  goto LABEL_237;
                                v121 = *(_QWORD *)(v63 + 80);
                                if ( v121 )
                                {
                                  if ( v121 != *(_QWORD *)(v63 + 72) )
                                    goto LABEL_237;
                                }
                              }
                              goto LABEL_243;
                            }
                            if ( !v62 )
                            {
                              if ( (*(_DWORD *)(v77 + 24) & 0x800) == 0 )
                                goto LABEL_237;
                              v101 = *(_QWORD *)(v63 + 80);
                              if ( v101 )
                              {
                                if ( v101 != *(_QWORD *)(v63 + 72) )
                                  goto LABEL_237;
                              }
                              goto LABEL_243;
                            }
                            v102 = *(_QWORD *)(v77 + 120);
                            if ( v102 == v77 )
                              v103 = *(_DWORD *)(v77 + 32);
                            else
                              v103 = *(_DWORD *)(v102 + 32);
                            v104 = *(_QWORD *)(v62 + 120);
                            if ( v104 == v62 )
                              v100 = (Gre::Base *)*(unsigned int *)(v62 + 32);
                            else
                              v100 = (Gre::Base *)*(unsigned int *)(v104 + 32);
                            if ( v103 == (_DWORD)v100 )
                            {
LABEL_243:
                              v96 = (XLATEOBJ *)((char *)Gre::Base::Globals(v100) + 6896);
                              v221 = v96;
                              goto LABEL_244;
                            }
                            v105 = *(_DWORD *)(v77 + 56);
                            v285 = v63;
                            v284 = v98;
                            v106 = Gre::Base::Globals(v100);
                            v107 = *((_QWORD *)v106 + 5);
                            v286 = v107;
                            GreAcquireSemaphore(v107);
                            v108 = *(_QWORD *)(v77 + 120);
                            v109 = 0;
                            for ( *(_QWORD *)&v305.left = v108; ; v108 = *(_QWORD *)&v305.left )
                            {
                              if ( v108 == v77 )
                                v110 = *(_DWORD *)(v77 + 32);
                              else
                                v110 = *(_DWORD *)(v108 + 32);
                              v111 = 32LL * v105;
                              if ( *(_DWORD *)((char *)v106 + v111 + 6648) != v110 )
                                goto LABEL_229;
                              v112 = *(_QWORD *)(v62 + 120);
                              v113 = v112 == v62 ? *(_DWORD *)(v62 + 32) : *(_DWORD *)(v112 + 32);
                              if ( *(_DWORD *)((char *)v106 + v111 + 6652) != v113 )
                                goto LABEL_229;
                              v114 = XEPALOBJ::ulTime((XEPALOBJ *)&v285);
                              if ( *(_DWORD *)((char *)v106 + v115 + 6660) != v114 )
                                goto LABEL_229;
                              v116 = *(XLATEOBJ **)((char *)v106 + v115 + 6640);
                              v221 = v116;
                              if ( (v116[3].flXlate & 0x6000) != 0 )
                                goto LABEL_229;
                              v117 = v116[3].flXlate & 0x100;
                              if ( (v116->flXlate & 4) == 0 )
                                break;
                              if ( HIDWORD(v219) == v116[1].iUniq )
                              {
                                v119 = XEPALOBJ::ulTime((XEPALOBJ *)&v284);
                                if ( *((_DWORD *)v106 + 8 * v120 + 1664) == v119 )
                                {
LABEL_223:
                                  _InterlockedIncrement((volatile signed __int32 *)((char *)v106 + v115 + 6632));
                                  *(_DWORD *)(v77 + 56) = v105;
                                  SEMOBJ::~SEMOBJ((SEMOBJ *)&v286);
                                  v96 = v221;
                                  goto LABEL_244;
                                }
                              }
                              if ( v117 )
                                goto LABEL_227;
LABEL_229:
                              ++v109;
                              v105 = ((_BYTE)v105 + 1) & 7;
                              if ( v109 >= 8 )
                              {
                                if ( v107 )
                                {
                                  EtwTraceGreLockReleaseSemaphore(L"hsem");
                                  GreReleaseSemaphoreInternal(v107);
                                }
LABEL_237:
                                LODWORD(v218) = 0;
                                LODWORD(v217) = HIDWORD(v219);
                                LODWORD(v216) = v220;
                                LODWORD(v215) = v235;
                                XlateObject = CreateXlateObject(0LL, v272, v77, v62, v98, v63, v215, v216, v217, v218);
                                v221 = (XLATEOBJ *)XlateObject;
                                v96 = (XLATEOBJ *)XlateObject;
                                if ( XlateObject )
                                {
                                  if ( v77 && v62 && !_bittest((const signed __int32 *)(XlateObject + 76), 9u) )
                                    EXLATEOBJ::vAddToCache((Gre::Base *)&v221, v77, v62, v98, v63);
LABEL_244:
                                  v19 = 1;
                                }
                                else
                                {
                                  v19 = 0;
                                }
                                v60 = v225;
                                v97 = v96;
                                if ( (*((_DWORD *)v225 + 9) & 1) == 0 )
                                {
                                  v303[1].x = v302.right - v273;
                                  v303[1].y = v302.bottom - v231;
                                }
                                if ( v19 )
                                {
                                  v69 = v228;
                                  goto LABEL_249;
                                }
                                goto LABEL_322;
                              }
                            }
                            if ( !v117 )
                              goto LABEL_223;
LABEL_227:
                            if ( v235 == v116[1].flXlate && v220 == *(_DWORD *)&v116[1].iSrcType )
                              goto LABEL_223;
                            goto LABEL_229;
                          }
                          v92 = (struct _RECTL *)((char *)v60 + 1080);
                          v93 = *((_DWORD *)v60 + 270);
                          if ( v93 == *((_DWORD *)v60 + 272) || *((_DWORD *)v60 + 271) == *((_DWORD *)v60 + 273) )
                          {
                            *v92 = v304;
                          }
                          else
                          {
                            if ( v89 < v93 )
                            {
                              v92->left = v89;
                              v60 = v225;
                              v69 = v228;
                              v90 = v304.right;
                              v91 = v304.top;
                            }
                            if ( v91 < v92->top )
                            {
                              v92->top = v91;
                              v60 = v225;
                              v69 = v228;
                              v90 = v304.right;
                            }
                            if ( v90 > v92->right )
                            {
                              v92->right = v90;
                              v60 = v225;
                              v69 = v228;
                            }
                            if ( v304.bottom <= v92->bottom )
                              goto LABEL_187;
                            v92->bottom = v304.bottom;
                          }
                          v69 = v228;
                          v60 = v225;
LABEL_187:
                          v274 = *((_QWORD *)v60 + 148);
                          if ( v274 )
                          {
                            RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v233);
                            RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v233);
                            RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v232);
                            RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v232);
                            if ( v233 )
                            {
                              if ( v232 )
                              {
                                RGNOBJ::vSet((RGNOBJ *)&v232, &v304);
                                if ( RGNOBJ::bMerge(
                                       (RGNOBJ *)&v233,
                                       (struct RGNOBJ *)&v274,
                                       (struct RGNOBJ *)&v232,
                                       0xEu) )
                                {
                                  RGNOBJ::vSwap((RGNOBJ *)&v274, (struct RGNOBJ *)&v233);
                                  *((_QWORD *)v225 + 148) = v274;
                                }
                              }
                            }
                            RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v232);
                            RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v232);
                            RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v233);
                            RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v233);
                            v60 = v225;
                            v69 = v228;
                          }
                          goto LABEL_193;
                        }
                        v224 = (HDC)((char *)v60 + 1768);
                        v86 = XDCOBJ::prgnEffRao(&v225);
                        XCLIPOBJ::vSetup((DC *)((char *)v60 + 1768), v86, (struct ERECTL *)&v302, 2);
                        v302 = *(RECTL *)((char *)v60 + 1772);
                        if ( !ERECTL::bEmpty((ERECTL *)&v302) )
                        {
                          v60 = v225;
                          v69 = v228;
                          goto LABEL_164;
                        }
                      }
LABEL_329:
                      v19 = 1;
                      goto LABEL_177;
                    }
                    if ( *(_DWORD *)(v71 + 656) )
                    {
                      if ( ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) != *(_DWORD *)(v71 + 656) )
                        goto LABEL_176;
                      v60 = v225;
                      v69 = v228;
                      v70 = (unsigned int)v302.top;
                      v59 = (unsigned int)v302.left;
                    }
                    v72 = *(_DWORD *)(v71 + 112);
                    if ( (v72 & 0x800) != 0 )
                    {
                      v73 = UserSurfaceAccessCheck(*(_QWORD *)(v71 + 648));
                    }
                    else
                    {
                      if ( (v72 & 0x10000000) == 0 )
                      {
LABEL_133:
                        if ( (*(_DWORD *)(v61 + 116) & 8) == 0 && !*(_QWORD *)(v61 + 224)
                          || !_bittest16((const signed __int16 *)(v61 + 102), 9u) )
                        {
                          v74 = *(_DWORD *)(v61 + 112);
                          if ( (v74 & 0x800) != 0 )
                          {
                            v75 = UserSurfaceAccessCheck(*(_QWORD *)(v61 + 648));
                          }
                          else
                          {
                            if ( (v74 & 0x10000000) == 0 )
                              goto LABEL_142;
                            v75 = UserScreenAccessCheck(v68, v58, v70);
                          }
                          if ( v75 )
                          {
                            v60 = v225;
                            v69 = v228;
                            LODWORD(v70) = v302.top;
                            v59 = (unsigned int)v302.left;
                            goto LABEL_142;
                          }
                        }
LABEL_176:
                        EngSetLastError(6u);
                        goto LABEL_177;
                      }
                      v73 = UserScreenAccessCheck(v68, v58, v70);
                    }
                    if ( !v73 )
                      goto LABEL_176;
                    v60 = v225;
                    v69 = v228;
                    v70 = (unsigned int)v302.top;
                    v59 = (unsigned int)v302.left;
                    goto LABEL_133;
                  }
                  v19 = 1;
                }
                else
                {
                  v19 = GreStretchBlt(
                          v223,
                          left,
                          top,
                          a4,
                          HIDWORD(v219),
                          (__int64)v224,
                          a7,
                          v40,
                          a4,
                          HIDWORD(v219),
                          v22,
                          a10);
                }
LABEL_488:
                if ( v222 )
                  DC::dwSetLayout(v225, -1, v239);
                goto LABEL_490;
              }
              if ( HIDWORD(v229) )
              {
LABEL_71:
                *((_DWORD *)v37 + 11) |= 2u;
                v37 = v228;
                LODWORD(v229) = 1;
                goto LABEL_72;
              }
              UserAttr = XDCOBJ::GetUserAttr((XDCOBJ *)&v228);
              if ( !UserAttr || DC::SaveAttributes(v228, UserAttr) )
              {
                v37 = v228;
                goto LABEL_71;
              }
LABEL_58:
              _InterlockedDecrement((volatile signed __int32 *)v228 + 3);
              v228 = 0LL;
              goto LABEL_490;
            }
            *((_DWORD *)v37 + 528) = 0;
          }
        }
        else if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
        {
          PsGetWin32KFilterSet();
        }
        v37 = v228;
        goto LABEL_65;
      }
      if ( HIDWORD(v226) )
      {
LABEL_34:
        *((_DWORD *)v29 + 11) |= 2u;
        v29 = v225;
        LODWORD(v226) = 1;
        goto LABEL_35;
      }
      v31 = XDCOBJ::GetUserAttr((XDCOBJ *)&v225);
      if ( !v31 || DC::SaveAttributes(v225, v31) )
      {
        v29 = v225;
        goto LABEL_34;
      }
LABEL_21:
      _InterlockedDecrement((volatile signed __int32 *)v225 + 3);
      v225 = 0LL;
      goto LABEL_491;
    }
    *((_DWORD *)v29 + 528) = 0;
LABEL_27:
    v29 = v225;
    goto LABEL_28;
  }
  if ( (*(_DWORD *)(*((_QWORD *)v29 + 6) + 40LL) & 0x8000) != 0 )
  {
    v30 = *((_DWORD *)v29 + 528);
    if ( v30 != ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
    {
      v29 = v225;
      goto LABEL_18;
    }
    goto LABEL_27;
  }
LABEL_18:
  _InterlockedDecrement((volatile signed __int32 *)v29 + 3);
  v225 = 0LL;
LABEL_491:
  DCOBJ::~DCOBJ((DCOBJ *)&v225);
  NtGdiBitBltInternal_::_2_::ScreenAccessState::_ScreenAccessState(&v219);
  return v19;
}
