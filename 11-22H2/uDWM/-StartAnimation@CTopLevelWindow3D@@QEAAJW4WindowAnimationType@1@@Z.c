/*
 * XREFs of ?StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z @ 0x18001F964
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow3D@@UEAAJXZ @ 0x18002B800 (-ValidateVisual@CTopLevelWindow3D@@UEAAJXZ.c)
 *     ?OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z @ 0x18002E744 (-OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z @ 0x1800343B4 (-ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z.c)
 *     ?BeginDestroySprite@CTopLevelWindow3D@@QEAAJPEA_N@Z @ 0x180037924 (-BeginDestroySprite@CTopLevelWindow3D@@QEAAJPEA_N@Z.c)
 *     ?OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ @ 0x180048970 (-OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?OnSizeChanged@CTopLevelWindow3D@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x180054720 (-OnSizeChanged@CTopLevelWindow3D@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z @ 0x1800B8484 (-Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z.c)
 *     ?OnIsInWindowMoveUpdated@CTopLevelWindow3D@@QEAAJ_N@Z @ 0x1800E7674 (-OnIsInWindowMoveUpdated@CTopLevelWindow3D@@QEAAJ_N@Z.c)
 *     ?StartAnimationForMaximizeSnapTransition@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@AEBUtagRECT@@@Z @ 0x1800E7734 (-StartAnimationForMaximizeSnapTransition@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@AEBUtag.c)
 *     ?StartDelayHideAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x1800E77D4 (-StartDelayHideAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?StartGrowAnimationForThumbnail@CTopLevelWindow3D@@QEAAJXZ @ 0x1800E7878 (-StartGrowAnimationForThumbnail@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?StartMinimizeAnimationForDisplayChange@CTopLevelWindow3D@@QEAAJXZ @ 0x1800E78D8 (-StartMinimizeAnimationForDisplayChange@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?StartShrinkAnimationForThumbnail@CTopLevelWindow3D@@QEAAJMUtagPOINT@@@Z @ 0x1800E7998 (-StartShrinkAnimationForThumbnail@CTopLevelWindow3D@@QEAAJMUtagPOINT@@@Z.c)
 *     ?StartHideAnimation@UserResizeVisual@implementation@Transitions@Udwm@winrt@@QEAAXUUnloadDelegate@345@@Z @ 0x180104A80 (-StartHideAnimation@UserResizeVisual@implementation@Transitions@Udwm@winrt@@QEAAXUUnloadDelegate.c)
 *     ?StartShowAnimation@?$produce@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@UIUserResizeVisual@345@@impl@winrt@@UEAAHXZ @ 0x180104B70 (-StartShowAnimation@-$produce@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@UIUserRes.c)
 * Callees:
 *     ?GetFinalMinRect@CTopLevelWindow3D@@SAXPEAUtagRECT@@MPEAUMilPointAndSizeF@@@Z @ 0x1800148A0 (-GetFinalMinRect@CTopLevelWindow3D@@SAXPEAUtagRECT@@MPEAUMilPointAndSizeF@@@Z.c)
 *     ?EnsureSecondaryWindowRepresentation@CTopLevelWindow3D@@QEAAJ_N@Z @ 0x18001BFA8 (-EnsureSecondaryWindowRepresentation@CTopLevelWindow3D@@QEAAJ_N@Z.c)
 *     ?IsMaximizeSnapAnimationRejuvenationEnabled@CDesktopManager@@SAHXZ @ 0x18001DA8C (-IsMaximizeSnapAnimationRejuvenationEnabled@CDesktopManager@@SAHXZ.c)
 *     ?GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z @ 0x180020544 (-GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z.c)
 *     ?ConvertTimingFunctionToInterpolationParameters@CTopLevelWindow3D@@AEAA?AUInterpolationParameters@@PEAUTA_TIMINGFUNCTION@@@Z @ 0x1800205B8 (-ConvertTimingFunctionToInterpolationParameters@CTopLevelWindow3D@@AEAA-AUInterpolationParameter.c)
 *     ?CreateTimelineForTransform@CTopLevelWindow3D@@AEAAJW4WindowTransformAttribute@1@MMMAEBUInterpolationParameters@@@Z @ 0x180020700 (-CreateTimelineForTransform@CTopLevelWindow3D@@AEAAJW4WindowTransformAttribute@1@MMMAEBUInterpol.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x180025580 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x180037860 (-PropagateDirtyChildren@CVisual@@QEAAXXZ.c)
 *     ?OnZOrderUpdated@CTopLevelWindow3D@@QEAAJ_N@Z @ 0x180048B6C (-OnZOrderUpdated@CTopLevelWindow3D@@QEAAJ_N@Z.c)
 *     ?RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z @ 0x180048C20 (-RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z.c)
 *     ?CheckAnyPreference@CDesktopManager@@SA_NK@Z @ 0x18004911C (-CheckAnyPreference@CDesktopManager@@SA_NK@Z.c)
 *     ??0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z @ 0x18004A8AC (--0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z.c)
 *     ?GetAnimationIds@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@PEAH1@Z @ 0x18004BB38 (-GetAnimationIds@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@PEAH1@Z.c)
 *     ?GetScenarioGuid@CTopLevelWindow3D@@AEAAXW4WindowAnimationType@1@PEAU_GUID@@@Z @ 0x1800564FC (-GetScenarioGuid@CTopLevelWindow3D@@AEAAXW4WindowAnimationType@1@PEAU_GUID@@@Z.c)
 *     ?reset@?$com_ptr_t@VIDCompositionAnimationStats@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005671C (-reset@-$com_ptr_t@VIDCompositionAnimationStats@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18005C460 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AdjustMinimizeInitialPositionIfNeeded@CDisplayModeChangeAnimationHelper@@SAXPEBVCDWMDisplaySet@@AEBUMilPointAndSizeF@@AEBUMilPoint2F@@PEAU4@@Z @ 0x1800BCD0C (-AdjustMinimizeInitialPositionIfNeeded@CDisplayModeChangeAnimationHelper@@SAXPEBVCDWMDisplaySet@.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U?$_tlgWrapperByVal@$07@@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333333333AEBU?$_tlgWrapperByVal@$07@@444@Z @ 0x1800E71D8 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U-$_tlgWrapperByVal@$07@@U2@U2@U2@@.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x1801111D0 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 */

__int64 __fastcall CTopLevelWindow3D::StartAnimation(__int64 a1, unsigned int a2)
{
  float v4; // xmm14_4
  __int64 v5; // rcx
  int v6; // r8d
  __int64 *v7; // r13
  __int64 v8; // rax
  unsigned __int64 v9; // rcx
  __int64 v10; // rax
  int TimelineForTransform; // eax
  int ThemeAnimationTransform; // ebx
  _DWORD *v13; // rax
  _DWORD *v14; // r9
  int v15; // edx
  int v16; // r8d
  int v17; // ebx
  int v18; // r14d
  int v19; // r15d
  int v20; // r12d
  int v21; // ecx
  __int64 v22; // rdx
  __m128i v23; // xmm0
  __m128i v24; // xmm6
  unsigned int v25; // eax
  int v26; // ecx
  int v27; // r8d
  unsigned __int32 v28; // xmm0_4
  __m128i v29; // xmm12
  unsigned int v30; // eax
  int v31; // ecx
  float v32; // xmm6_4
  __m128i v33; // xmm9
  __m128i v34; // xmm8
  __m128i v35; // xmm10
  unsigned int v36; // eax
  __int64 v37; // rcx
  unsigned __int32 v38; // xmm8_4
  __m128i v39; // xmm11
  unsigned int v40; // eax
  unsigned __int32 v41; // xmm10_4
  __m128i v42; // xmm15
  unsigned __int32 v43; // xmm11_4
  int v44; // eax
  float v45; // xmm15_4
  float v46; // xmm12_4
  float v47; // xmm9_4
  int IsMaximizeSnapAnimationRejuvenationEnabled; // eax
  int v49; // ecx
  float v50; // xmm2_4
  float v51; // xmm1_4
  int v52; // eax
  __int64 v53; // rcx
  unsigned int v54; // eax
  int v55; // r15d
  __int64 v56; // rdx
  __int64 Theme; // rax
  unsigned int v58; // esi
  float v59; // r12d
  __int64 v60; // rax
  unsigned int v61; // ebx
  __int64 v62; // r14
  __int64 v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rcx
  int v66; // esi
  bool v67; // bl
  __int64 v68; // rdx
  __int64 v69; // rcx
  float v70; // xmm6_4
  __int64 v71; // rax
  __int64 v72; // rdx
  unsigned int v73; // ebx
  __int64 v74; // rsi
  __int64 v75; // rax
  __int64 v76; // rax
  __int128 v77; // xmm1
  __int64 v78; // xmm0_8
  __int64 v79; // rax
  __int64 v80; // rdx
  __int64 v81; // rcx
  int v82; // eax
  int v83; // ecx
  int v84; // eax
  __int64 v85; // rcx
  __int64 v86; // rax
  __int64 v87; // rdx
  _QWORD *v88; // r8
  int v89; // eax
  int v91; // eax
  int v92; // eax
  int v93; // esi
  bool v94; // zf
  __int64 v95; // rax
  __m128i v96; // xmm1
  int v97; // ecx
  unsigned int v98; // eax
  float v99; // xmm2_4
  __m128i v100; // xmm0
  __m128i v101; // xmm1
  int v102; // eax
  float v103; // xmm3_4
  unsigned int v104; // eax
  float v105; // xmm4_4
  __m128i v106; // xmm8
  unsigned int v107; // eax
  int v108; // ebx
  __m128i v109; // xmm10
  unsigned int v110; // eax
  int v111; // r14d
  __m128i v112; // xmm11
  int v113; // eax
  float v114; // xmm1_4
  unsigned int v115; // eax
  int v116; // ecx
  CDesktopManager *v117; // rax
  int v118; // ecx
  int v119; // r8d
  int v120; // r9d
  float v121; // xmm5_4
  float v122; // xmm3_4
  float v123; // xmm2_4
  float v124; // xmm3_4
  float v125; // xmm0_4
  float v126; // xmm3_4
  float v127; // xmm1_4
  float v128; // xmm0_4
  float v129; // xmm2_4
  unsigned int v131; // eax
  int v132; // ecx
  CDesktopManager *v133; // rax
  int v134; // ecx
  int v135; // r8d
  int v136; // r9d
  unsigned int v137; // eax
  __int64 v138; // rax
  __int128 v139; // xmm0
  double v140; // xmm1_8
  __m128i v141; // xmm0
  unsigned int v142; // [rsp+28h] [rbp-F0h]
  float v143; // [rsp+98h] [rbp-80h]
  unsigned int v144; // [rsp+9Ch] [rbp-7Ch] BYREF
  float v145; // [rsp+A0h] [rbp-78h]
  unsigned __int32 v146; // [rsp+A4h] [rbp-74h]
  _BYTE v147[40]; // [rsp+A8h] [rbp-70h] BYREF
  float v148; // [rsp+D0h] [rbp-48h]
  unsigned __int32 v149; // [rsp+D4h] [rbp-44h]
  int v150; // [rsp+D8h] [rbp-40h] BYREF
  unsigned int v151; // [rsp+E0h] [rbp-38h] BYREF
  unsigned int v152; // [rsp+E4h] [rbp-34h] BYREF
  float v153; // [rsp+E8h] [rbp-30h]
  unsigned int v154; // [rsp+ECh] [rbp-2Ch] BYREF
  _DWORD v155[2]; // [rsp+F0h] [rbp-28h] BYREF
  unsigned __int64 v156; // [rsp+F8h] [rbp-20h] BYREF
  unsigned __int32 v157; // [rsp+100h] [rbp-18h] BYREF
  float v158; // [rsp+104h] [rbp-14h] BYREF
  int v159; // [rsp+108h] [rbp-10h] BYREF
  int v160; // [rsp+10Ch] [rbp-Ch] BYREF
  int v161; // [rsp+110h] [rbp-8h] BYREF
  int v162; // [rsp+114h] [rbp-4h] BYREF
  float v163; // [rsp+118h] [rbp+0h] BYREF
  int v164; // [rsp+11Ch] [rbp+4h] BYREF
  float v165; // [rsp+120h] [rbp+8h] BYREF
  unsigned __int32 v166; // [rsp+124h] [rbp+Ch] BYREF
  unsigned __int32 v167; // [rsp+128h] [rbp+10h] BYREF
  float v168; // [rsp+12Ch] [rbp+14h] BYREF
  int v169; // [rsp+130h] [rbp+18h] BYREF
  int v170; // [rsp+134h] [rbp+1Ch] BYREF
  int v171; // [rsp+138h] [rbp+20h] BYREF
  int v172; // [rsp+13Ch] [rbp+24h] BYREF
  float v173; // [rsp+140h] [rbp+28h] BYREF
  int v174; // [rsp+144h] [rbp+2Ch] BYREF
  float v175; // [rsp+148h] [rbp+30h] BYREF
  unsigned __int32 v176; // [rsp+14Ch] [rbp+34h] BYREF
  __int64 v177; // [rsp+150h] [rbp+38h] BYREF
  __int64 v178; // [rsp+158h] [rbp+40h] BYREF
  __int64 v179; // [rsp+160h] [rbp+48h] BYREF
  __int64 v180; // [rsp+168h] [rbp+50h] BYREF
  __int64 v181; // [rsp+170h] [rbp+58h] BYREF
  __int64 v182; // [rsp+178h] [rbp+60h] BYREF
  __int64 v183; // [rsp+180h] [rbp+68h] BYREF
  __int64 v184; // [rsp+188h] [rbp+70h] BYREF
  float v185; // [rsp+190h] [rbp+78h] BYREF
  unsigned __int32 v186; // [rsp+194h] [rbp+7Ch]
  unsigned __int32 v187; // [rsp+198h] [rbp+80h]
  float v188; // [rsp+19Ch] [rbp+84h]
  __int128 v189; // [rsp+1A0h] [rbp+88h] BYREF
  _BYTE v190[16]; // [rsp+1B0h] [rbp+98h] BYREF
  int *v191; // [rsp+1C0h] [rbp+A8h]
  __int64 v192; // [rsp+1C8h] [rbp+B0h]
  unsigned __int64 *v193; // [rsp+1D0h] [rbp+B8h]
  __int64 v194; // [rsp+1D8h] [rbp+C0h]

  *(_BYTE *)(a1 + 616) = 0;
  v154 = 0;
  v4 = 0.0;
  if ( CDesktopManager::CheckAnyPreference(0x10u) )
    goto LABEL_70;
  v7 = (__int64 *)(a1 + 336);
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
  {
    v8 = *v7;
    v192 = 4LL;
    v194 = 8LL;
    v9 = *(_QWORD *)(v8 + 40);
    v191 = &v150;
    v193 = &v156;
    v156 = v9;
    v150 = a2;
    McGenEventWrite_EtwEventWriteTransfer(
      (unsigned int)&Microsoft_Windows_Dwm_Udwm_Provider_Context,
      (unsigned int)&UdwmAnimation_Start,
      v6,
      3,
      (__int64)v190);
  }
  CTopLevelWindow3D::GetScenarioGuid(v5, a2, &v189);
  v10 = v189 - *(_QWORD *)&GUID_NULL.Data1;
  if ( (_QWORD)v189 == *(_QWORD *)&GUID_NULL.Data1 )
    v10 = *((_QWORD *)&v189 + 1) - *(_QWORD *)GUID_NULL.Data4;
  if ( v10 )
  {
    wil::com_ptr_t<IDCompositionAnimationStats,wil::err_returncode_policy>::reset(a1 + 376);
    if ( (int)DCompositionCreateAnimationStats(a1 + 376) >= 0 )
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 376) + 24LL))(*(_QWORD *)(a1 + 376), 0LL);
  }
  *(_BYTE *)(*v7 + 675) &= ~8u;
  *(_DWORD *)(a1 + 384) = a2;
  *(_OWORD *)(a1 + 304) = 0LL;
  TimelineForTransform = CTopLevelWindow3D::EnsureSecondaryWindowRepresentation((CTopLevelWindow3D *)a1, 1u);
  ThemeAnimationTransform = TimelineForTransform;
  if ( TimelineForTransform < 0 )
  {
    v142 = 1406;
    goto LABEL_225;
  }
  v13 = *(_DWORD **)(a1 + 344);
  v14 = (_DWORD *)*v7;
  v15 = *(_DWORD *)(a1 + 320);
  v16 = *(_DWORD *)(a1 + 324);
  v17 = v13[20] - v13[23];
  v18 = v13[21] - v13[25];
  v19 = v13[22];
  v20 = v13[24];
  v21 = *(_DWORD *)(a1 + 328) - v15;
  LODWORD(v13) = v15 + v19;
  v22 = *(unsigned int *)(*v7 + 48);
  v23 = _mm_cvtsi32_si128((unsigned int)v13);
  v24 = _mm_cvtsi32_si128(v16 + v20);
  v25 = 0;
  if ( v21 >= 0 )
    v25 = v21;
  v26 = *(_DWORD *)(a1 + 332) - v16;
  v27 = v14[13];
  v28 = _mm_cvtepi32_ps(v23).m128_u32[0];
  v29 = _mm_cvtsi32_si128(v25);
  v30 = 0;
  if ( v26 >= 0 )
    v30 = v26;
  LODWORD(v143) = v28;
  v31 = v14[14] - v22;
  LODWORD(v189) = v28;
  LODWORD(v32) = _mm_cvtepi32_ps(v24).m128_u32[0];
  v33 = _mm_cvtsi32_si128(v30);
  v34 = _mm_cvtsi32_si128(v19 + (int)v22);
  v35 = _mm_cvtsi32_si128(v20 + v27);
  v36 = 0;
  if ( v31 >= 0 )
    v36 = v31;
  v145 = v32;
  v37 = (unsigned int)(v14[15] - v27);
  *((float *)&v189 + 1) = v32;
  v38 = _mm_cvtepi32_ps(v34).m128_u32[0];
  v39 = _mm_cvtsi32_si128(v36);
  v40 = 0;
  if ( (int)v37 >= 0 )
    v40 = v37;
  LODWORD(v148) = v38;
  v41 = _mm_cvtepi32_ps(v35).m128_u32[0];
  v42 = _mm_cvtsi32_si128(v40);
  v43 = _mm_cvtepi32_ps(v39).m128_u32[0];
  v44 = *(_DWORD *)(a1 + 384) - 2;
  v185 = *(float *)&v38;
  v146 = v41;
  v186 = v41;
  v149 = v43;
  v187 = v43;
  LODWORD(v45) = _mm_cvtepi32_ps(v42).m128_u32[0];
  LODWORD(v46) = _mm_cvtepi32_ps(v29).m128_u32[0];
  v188 = v45;
  *((float *)&v189 + 2) = v46;
  LODWORD(v47) = _mm_cvtepi32_ps(v33).m128_u32[0];
  *((float *)&v189 + 3) = v47;
  if ( (v44 & 0xFFFFFFFD) != 0 || (unsigned int)CDesktopManager::IsMaximizeSnapAnimationRejuvenationEnabled(v37, v22) )
  {
    IsMaximizeSnapAnimationRejuvenationEnabled = CDesktopManager::IsMaximizeSnapAnimationRejuvenationEnabled(v37, v22);
    v49 = *(_DWORD *)(a1 + 384);
    if ( IsMaximizeSnapAnimationRejuvenationEnabled && v49 == 10 || v49 == 11 )
    {
      v95 = *(_QWORD *)(a1 + 344);
      v96 = *(__m128i *)(v95 + 88);
      v22 = (unsigned int)(*(_DWORD *)(v95 + 80) - *(_DWORD *)(v95 + 92) - *(_DWORD *)(v95 + 88));
      v97 = *(_DWORD *)(v95 + 84) - *(_DWORD *)(v95 + 100) - *(_DWORD *)(v95 + 96);
      v98 = 0;
      v99 = (float)-_mm_cvtsi128_si32(_mm_srli_si128(v96, 8));
      if ( v97 >= 0 )
        v98 = v97;
      v100 = _mm_cvtsi32_si128(v98);
      v101 = _mm_cvtsi32_si128(-_mm_cvtsi128_si32(v96));
      v102 = 0;
      v50 = v99 / _mm_cvtepi32_ps(v100).m128_f32[0];
      if ( (int)v22 >= 0 )
        v102 = v22;
      v51 = _mm_cvtepi32_ps(v101).m128_f32[0] / (float)v102;
    }
    else
    {
      v50 = 0.0;
      v51 = 0.0;
    }
  }
  else
  {
    v50 = FLOAT_0_5;
    v51 = FLOAT_0_5;
  }
  *(float *)(a1 + 524) = v51;
  *(float *)(a1 + 528) = v50;
  *(_DWORD *)(a1 + 532) = 0;
  v52 = CDesktopManager::IsMaximizeSnapAnimationRejuvenationEnabled(a1, v22);
  v53 = 274452LL;
  if ( v52 && (v54 = *(_DWORD *)(a1 + 384), v54 <= 0x12) && _bittest((const int *)&v53, v54) )
  {
    v53 = *v7;
    v32 = *(float *)(a1 + 624);
    v46 = *(float *)(a1 + 628);
    v103 = v46;
    v47 = *(float *)(a1 + 632);
    v104 = v19 + *(_DWORD *)(*v7 + 48);
    v143 = *(float *)(a1 + 620);
    v105 = v47;
    *(_QWORD *)&v189 = __PAIR64__(LODWORD(v32), LODWORD(v143));
    v145 = v32;
    v106 = _mm_cvtsi32_si128(v104);
    v107 = v20 + *(_DWORD *)(v53 + 52);
    v108 = v17 - v19;
    *((_QWORD *)&v189 + 1) = __PAIR64__(LODWORD(v47), LODWORD(v46));
    v55 = 0;
    v38 = _mm_cvtepi32_ps(v106).m128_u32[0];
    v109 = _mm_cvtsi32_si128(v107);
    v110 = 0;
    if ( v108 >= 0 )
      v110 = v108;
    LODWORD(v148) = v38;
    v111 = v18 - v20;
    v185 = *(float *)&v38;
    v41 = _mm_cvtepi32_ps(v109).m128_u32[0];
    v112 = _mm_cvtsi32_si128(v110);
    v113 = 0;
    if ( v111 >= 0 )
      v113 = v111;
    v146 = v41;
    v43 = _mm_cvtepi32_ps(v112).m128_u32[0];
    v186 = v41;
    v45 = (float)v113;
    v149 = v43;
    v188 = (float)v113;
    v187 = v43;
    if ( (*(_BYTE *)(v53 + 678) & 1) != 0 )
      *(_BYTE *)(a1 + 656) = 1;
    if ( COERCE_FLOAT(LODWORD(v47) & _xmm) < 0.001 || COERCE_FLOAT(LODWORD(v45) & _xmm) < 0.001 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgs();
    }
    else if ( (*(_BYTE *)(v53 + 678) & 1) == 0 )
    {
      v114 = *(float *)&v43 / v45;
      if ( (float)(*(float *)&v43 / v45) <= (float)(v46 / v47) )
      {
        v47 = (float)((float)((float)(1.0 / v114) * v46) - v47) + v47;
        *((float *)&v189 + 3) = (float)((float)((float)(1.0 / v114) * v46) - v105) + v105;
      }
      else
      {
        v46 = (float)((float)(v47 * v114) - v46) + v46;
        *((float *)&v189 + 2) = (float)((float)(v47 * v114) - v103) + v103;
      }
    }
  }
  else
  {
    v55 = 0;
  }
  if ( ((*(_DWORD *)(a1 + 384) - 3) & 0xFFFFFFFD) == 0 )
  {
    GetWindowMinimizeRect(*(_QWORD *)(*v7 + 40), a1 + 304);
    if ( !IsRectEmpty((const RECT *)(a1 + 304)) )
    {
      CTopLevelWindow3D::GetFinalMinRect((struct tagRECT *)(a1 + 304), v47 / v46, (struct MilPointAndSizeF *)&v185);
      v43 = v187;
      v41 = v186;
      *(float *)&v38 = v185;
      v45 = v188;
      v149 = v187;
      v146 = v186;
      v148 = v185;
      goto LABEL_28;
    }
    if ( *(_DWORD *)(a1 + 384) == 3 )
    {
      *(_DWORD *)(a1 + 384) = 6;
      goto LABEL_28;
    }
LABEL_70:
    TimelineForTransform = CTopLevelWindow3D::OnZOrderUpdated((CTopLevelWindow3D *)a1, 0);
    ThemeAnimationTransform = TimelineForTransform;
    if ( TimelineForTransform >= 0 )
      return (unsigned int)ThemeAnimationTransform;
    v142 = 2088;
LABEL_225:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, TimelineForTransform, v142, 0LL);
    return (unsigned int)ThemeAnimationTransform;
  }
LABEL_28:
  v56 = *(unsigned int *)(a1 + 384);
  if ( (unsigned int)(v56 - 7) <= 2 )
  {
    v4 = *((float *)CDesktopManager::s_pDesktopManagerInstance + 172);
    *(_DWORD *)v147 = 4;
    memset(&v147[8], 0, 32);
    TimelineForTransform = CTopLevelWindow3D::CreateTimelineForTransform(a1, 9LL);
    ThemeAnimationTransform = TimelineForTransform;
    if ( TimelineForTransform < 0 )
    {
      v142 = 1544;
      goto LABEL_225;
    }
    goto LABEL_63;
  }
  if ( (unsigned int)(v56 - 16) <= 1 )
  {
    v138 = *(_QWORD *)(a1 + 344);
    v4 = FLOAT_0_167;
    *(_OWORD *)v147 = xmmword_180129E60;
    *(_QWORD *)&v147[32] = 0x3FF0000000000000LL;
    v139 = *(_OWORD *)(v138 + 88);
    *(_OWORD *)&v147[16] = xmmword_180129E70;
    v189 = v139;
    if ( (_DWORD)v56 == 16 )
    {
      *(_DWORD *)(a1 + 640) -= (int)v143;
      *(_DWORD *)(a1 + 644) -= (int)v32;
      v140 = 1.0 - *(float *)(a1 + 636);
      v141 = _mm_cvtsi32_si128(*(_DWORD *)(a1 + 644) + DWORD2(v189));
      *(_DWORD *)(a1 + 648) = (int)((double)((int)v189 + *(_DWORD *)(a1 + 640)) * v140);
      *(_DWORD *)(a1 + 652) = (int)(_mm_cvtepi32_pd(v141).m128d_f64[0] * v140);
      TimelineForTransform = CTopLevelWindow3D::CreateTimelineForTransform(a1, 0LL);
      ThemeAnimationTransform = TimelineForTransform;
      if ( TimelineForTransform < 0 )
      {
        v142 = 1572;
        goto LABEL_225;
      }
      TimelineForTransform = CTopLevelWindow3D::CreateTimelineForTransform(a1, 1LL);
      ThemeAnimationTransform = TimelineForTransform;
      if ( TimelineForTransform < 0 )
      {
        v142 = 1573;
        goto LABEL_225;
      }
      TimelineForTransform = CTopLevelWindow3D::CreateTimelineForTransform(a1, 6LL);
      ThemeAnimationTransform = TimelineForTransform;
      if ( TimelineForTransform < 0 )
      {
        v142 = 1574;
        goto LABEL_225;
      }
      TimelineForTransform = CTopLevelWindow3D::CreateTimelineForTransform(a1, 7LL);
      ThemeAnimationTransform = TimelineForTransform;
      if ( TimelineForTransform < 0 )
      {
        v142 = 1575;
        goto LABEL_225;
      }
    }
    else
    {
      *(_QWORD *)(a1 + 648) = 0LL;
      *(_DWORD *)(a1 + 636) = 1065353216;
      TimelineForTransform = CTopLevelWindow3D::CreateTimelineForTransform(a1, 0LL);
      ThemeAnimationTransform = TimelineForTransform;
      if ( TimelineForTransform < 0 )
      {
        v142 = 1583;
        goto LABEL_225;
      }
      TimelineForTransform = CTopLevelWindow3D::CreateTimelineForTransform(a1, 1LL);
      ThemeAnimationTransform = TimelineForTransform;
      if ( TimelineForTransform < 0 )
      {
        v142 = 1584;
        goto LABEL_225;
      }
      TimelineForTransform = CTopLevelWindow3D::CreateTimelineForTransform(a1, 6LL);
      ThemeAnimationTransform = TimelineForTransform;
      if ( TimelineForTransform < 0 )
      {
        v142 = 1585;
        goto LABEL_225;
      }
      TimelineForTransform = CTopLevelWindow3D::CreateTimelineForTransform(a1, 7LL);
      ThemeAnimationTransform = TimelineForTransform;
      if ( TimelineForTransform < 0 )
      {
        v142 = 1586;
        goto LABEL_225;
      }
    }
    goto LABEL_63;
  }
  TimelineForTransform = CTopLevelWindow3D::GetAnimationIds(v53, v56, &v152, &v151);
  ThemeAnimationTransform = TimelineForTransform;
  if ( TimelineForTransform < 0 )
  {
    v142 = 1592;
    goto LABEL_225;
  }
  Theme = CDesktopManager::GetTheme(3LL);
  TimelineForTransform = GetThemeAnimationProperty(Theme, v152, v151, 1LL, &v154, 4, &v144);
  ThemeAnimationTransform = TimelineForTransform;
  if ( TimelineForTransform < 0 )
  {
    v142 = 1599;
    goto LABEL_225;
  }
  v58 = 0;
  v150 = 0;
  if ( !v154 )
  {
LABEL_63:
    v85 = *(_QWORD *)(a1 + 368);
    if ( !v85 )
    {
      v86 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
              WPF::g_pProcessHeap,
              120LL);
      v177 = v86;
      if ( v86 )
      {
        CTimelineBase::CTimelineBase(v86, v87, v86);
        *v88 = &CTimeline<float>::`vftable';
        *(_QWORD *)(a1 + 368) = v88;
        if ( v88 )
        {
          if ( (int)CDesktopManager::RegisterForGlobalTimeChangeNotification((struct CVisual *)a1) >= 0 )
            ++*((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 10);
          goto LABEL_68;
        }
      }
      else
      {
        *(_QWORD *)(a1 + 368) = 0LL;
      }
      ThemeAnimationTransform = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x81Cu, 0LL);
      return (unsigned int)ThemeAnimationTransform;
    }
    *(_QWORD *)(v85 + 48) = *(_QWORD *)(v85 + 32);
    *(_WORD *)(v85 + 72) = 256;
    CDesktopManager::s_fTimelineDirty = 1;
    *(double *)(v85 + 24) = v4;
LABEL_68:
    v89 = *(_DWORD *)(a1 + 88);
    if ( (v89 & 0x1000) == 0 )
    {
      *(_DWORD *)(a1 + 88) = v89 | 0x1000;
      CVisual::PropagateDirtyChildren((CVisual *)a1);
    }
    goto LABEL_70;
  }
  v59 = v188;
  while ( 1 )
  {
    v60 = CDesktopManager::GetTheme(3LL);
    if ( (unsigned int)GetThemeAnimationTransform(v60, v152, v151, v58, 0LL, 0, &v144) == -2147024662 )
      break;
LABEL_62:
    v150 = ++v58;
    if ( v58 >= v154 )
      goto LABEL_63;
  }
  v61 = v144;
  memset(&v147[8], 0, 32);
  *(_DWORD *)v147 = 0;
  v62 = (*(__int64 (__fastcall **)(WPF::HeapBase *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
          WPF::g_pProcessHeap,
          v144);
  v63 = CDesktopManager::GetTheme(3LL);
  ThemeAnimationTransform = GetThemeAnimationTransform(v63, v152, v151, v58, v62, v61, &v144);
  if ( ThemeAnimationTransform >= 0 )
  {
    v66 = *(_DWORD *)v62;
    v67 = (unsigned int)(*(_DWORD *)v62 - 1) <= 1;
    if ( ((unsigned int)CDesktopManager::IsMaximizeSnapAnimationRejuvenationEnabled(v65, v64)
       || (unsigned int)CDesktopManager::IsMaximizeSnapAnimationRejuvenationEnabled(v69, v68))
      && !v66 )
    {
      v67 = 1;
    }
    if ( !v67 )
      goto LABEL_61;
    v70 = (float)*(int *)(v62 + 12) / 1000.0;
    v71 = CDesktopManager::GetTheme(4LL);
    if ( (unsigned int)GetThemeTimingFunction(v71, *(unsigned int *)(v62 + 4), 0LL, 0LL, &v144) == -2147024662 )
    {
      v73 = v144;
      v74 = (*(__int64 (__fastcall **)(WPF::HeapBase *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
              WPF::g_pProcessHeap,
              v144);
      v75 = CDesktopManager::GetTheme(4LL);
      ThemeAnimationTransform = GetThemeTimingFunction(v75, *(unsigned int *)(v62 + 4), v74, v73, &v144);
      if ( ThemeAnimationTransform < 0 )
      {
        v137 = 1642;
        goto LABEL_200;
      }
      v76 = CTopLevelWindow3D::ConvertTimingFunctionToInterpolationParameters(a1, v190, v74);
      v77 = *(_OWORD *)(v76 + 16);
      *(_OWORD *)v147 = *(_OWORD *)v76;
      v78 = *(_QWORD *)(v76 + 32);
      v79 = *(_QWORD *)WPF::g_pProcessHeap;
      *(_QWORD *)&v147[32] = v78;
      *(_OWORD *)&v147[16] = v77;
      (*(void (__fastcall **)(WPF::HeapBase *, __int64))(v79 + 32))(WPF::g_pProcessHeap, v74);
      v55 = *(_DWORD *)v147;
    }
    if ( !*(_DWORD *)v62 )
    {
      if ( (*(_BYTE *)(v62 + 16) & 1) == 0 )
      {
        v137 = 1657;
        goto LABEL_176;
      }
      v92 = *(_DWORD *)(a1 + 384);
      v93 = v92;
      if ( v92 != 3 && v92 != 5 )
      {
        ThemeAnimationTransform = -2147024809;
        if ( (unsigned int)CDesktopManager::IsMaximizeSnapAnimationRejuvenationEnabled(1LL, v72) )
        {
          v131 = *(_DWORD *)(a1 + 384);
          if ( v131 <= 0x12 )
          {
            v132 = 274452;
            if ( _bittest(&v132, v131) )
              ThemeAnimationTransform = 0;
          }
        }
        v93 = *(_DWORD *)(a1 + 384);
        if ( (unsigned int)(v93 - 10) > 1 && ThemeAnimationTransform < 0 )
        {
          v137 = 1685;
          goto LABEL_178;
        }
      }
      if ( (unsigned int)(v93 - 10) <= 1 )
      {
        *(_OWORD *)&v147[16] = xmmword_180129E70;
        *(_OWORD *)v147 = xmmword_180129E60;
        *(_QWORD *)&v147[32] = 0x3FF0000000000000LL;
        if ( v93 == 10 )
          v70 = *(float *)&FLOAT_0_25;
        else
          v70 = FLOAT_0_167;
        ThemeAnimationTransform = CTopLevelWindow3D::CreateTimelineForTransform(a1, 1LL);
        if ( ThemeAnimationTransform < 0 )
        {
          v137 = 1702;
          goto LABEL_178;
        }
      }
      else if ( ((v93 - 3) & 0xFFFFFFFD) != 0 )
      {
        v133 = CDesktopManager::s_pDesktopManagerInstance;
        *(_BYTE *)(a1 + 616) = 1;
        v70 = *((float *)v133 + 173);
        v153 = v70;
        ThemeAnimationTransform = CTopLevelWindow3D::CreateTimelineForTransform(a1, 0LL);
        if ( ThemeAnimationTransform < 0 )
        {
          v137 = 1765;
          goto LABEL_178;
        }
        ThemeAnimationTransform = CTopLevelWindow3D::CreateTimelineForTransform(a1, 1LL);
        if ( ThemeAnimationTransform < 0 )
        {
          v137 = 1772;
          goto LABEL_178;
        }
        ThemeAnimationTransform = CTopLevelWindow3D::CreateTimelineForTransform(a1, 10LL);
        if ( ThemeAnimationTransform < 0 )
        {
          v137 = 1779;
          goto LABEL_178;
        }
        ThemeAnimationTransform = CTopLevelWindow3D::CreateTimelineForTransform(a1, 11LL);
        if ( ThemeAnimationTransform < 0 )
        {
          v137 = 1786;
          goto LABEL_178;
        }
        ThemeAnimationTransform = CTopLevelWindow3D::CreateTimelineForTransform(a1, 14LL);
        if ( ThemeAnimationTransform < 0 )
        {
          v137 = 1793;
          goto LABEL_178;
        }
        if ( (unsigned int)dword_180147058 > 4 && (byte_180147068 & 1) != 0 && (qword_180147070 & 1) == qword_180147070 )
        {
          v181 = *(_QWORD *)&v147[32];
          v182 = *(_QWORD *)&v147[24];
          v183 = *(_QWORD *)&v147[16];
          v177 = *(_QWORD *)&v147[8];
          v166 = v187;
          v167 = v186;
          v168 = v185;
          v169 = HIDWORD(v189);
          v170 = DWORD2(v189);
          v171 = DWORD1(v189);
          v172 = v189;
          v173 = v153;
          v164 = v55;
          v165 = v59;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
            v134,
            (unsigned int)&unk_18012777D,
            v135,
            v136,
            (__int64)&v173,
            (__int64)&v172,
            (__int64)&v171,
            (__int64)&v170,
            (__int64)&v169,
            (__int64)&v168,
            (__int64)&v167,
            (__int64)&v166,
            (__int64)&v165,
            (__int64)&v164,
            (__int64)&v177,
            (__int64)&v183,
            (__int64)&v182,
            (__int64)&v181);
        }
      }
      else
      {
        v94 = *(_BYTE *)(a1 + 617) == 0;
        v155[0] = 0;
        v155[1] = 0;
        if ( !v94 )
        {
          v156 = __PAIR64__(v146, LODWORD(v148));
          CDisplayModeChangeAnimationHelper::AdjustMinimizeInitialPositionIfNeeded(
            *((const struct CDWMDisplaySet **)CDesktopManager::s_pDesktopManagerInstance + 18),
            (const struct MilPointAndSizeF *)&v189,
            (const struct MilPoint2F *)&v156,
            (struct MilPoint2F *)v155);
        }
        ThemeAnimationTransform = CTopLevelWindow3D::CreateTimelineForTransform(a1, 0LL);
        if ( ThemeAnimationTransform < 0 )
        {
          v137 = 1740;
          goto LABEL_178;
        }
        ThemeAnimationTransform = CTopLevelWindow3D::CreateTimelineForTransform(a1, 1LL);
        if ( ThemeAnimationTransform < 0 )
        {
          v137 = 1747;
          goto LABEL_178;
        }
        v43 = v149;
        v41 = v146;
      }
      goto LABEL_60;
    }
    if ( *(_DWORD *)v62 != 1 )
    {
      if ( *(_DWORD *)v62 == 2 )
      {
        if ( (*(_BYTE *)(v62 + 16) & 1) != 0 )
        {
          v91 = *(_DWORD *)(a1 + 384);
          if ( v91 == 3 || v91 == 5 )
          {
            ThemeAnimationTransform = CTopLevelWindow3D::CreateTimelineForTransform(a1, 9LL);
            if ( ThemeAnimationTransform < 0 )
            {
              v137 = 2024;
              goto LABEL_178;
            }
          }
          else
          {
            if ( v91 != 1 && v91 != 6 )
            {
              v137 = 2045;
LABEL_176:
              ThemeAnimationTransform = -2147024809;
              goto LABEL_178;
            }
            ThemeAnimationTransform = CTopLevelWindow3D::CreateTimelineForTransform(a1, 9LL);
            if ( ThemeAnimationTransform < 0 )
            {
              v137 = 2040;
LABEL_178:
              v74 = 0LL;
              goto LABEL_200;
            }
          }
        }
        else
        {
          ThemeAnimationTransform = CTopLevelWindow3D::CreateTimelineForTransform(a1, 9LL);
          if ( ThemeAnimationTransform < 0 )
          {
            v137 = 2052;
            goto LABEL_178;
          }
        }
      }
      goto LABEL_60;
    }
    if ( (unsigned int)CDesktopManager::IsMaximizeSnapAnimationRejuvenationEnabled(
                         (unsigned int)(*(_DWORD *)v62 - 1),
                         v72)
      && ((*(_DWORD *)(a1 + 384) - 3) & 0xFFFFFFFD) == 0 )
    {
      ThemeAnimationTransform = CTopLevelWindow3D::CreateTimelineForTransform(a1, 6LL);
      if ( ThemeAnimationTransform < 0 )
      {
        v137 = 1831;
        goto LABEL_178;
      }
      ThemeAnimationTransform = CTopLevelWindow3D::CreateTimelineForTransform(a1, 7LL);
      if ( ThemeAnimationTransform < 0 )
      {
        v137 = 1837;
        goto LABEL_178;
      }
      goto LABEL_60;
    }
    v82 = *(_DWORD *)(v62 + 16);
    if ( (v82 & 1) != 0 )
    {
      if ( ((*(_DWORD *)(a1 + 384) - 3) & 0xFFFFFFFD) != 0 )
      {
        if ( !(unsigned int)CDesktopManager::IsMaximizeSnapAnimationRejuvenationEnabled(v81, v80)
          || (v115 = *(_DWORD *)(a1 + 384), v115 > 0x12)
          || (v116 = 274452, !_bittest(&v116, v115)) )
        {
          v137 = 1934;
          goto LABEL_176;
        }
        v117 = CDesktopManager::s_pDesktopManagerInstance;
        *(_BYTE *)(a1 + 616) = 1;
        v70 = *((float *)v117 + 173);
        v153 = v70;
        ThemeAnimationTransform = CTopLevelWindow3D::CreateTimelineForTransform(a1, 6LL);
        if ( ThemeAnimationTransform < 0 )
        {
          v137 = 1889;
          goto LABEL_178;
        }
        ThemeAnimationTransform = CTopLevelWindow3D::CreateTimelineForTransform(a1, 7LL);
        if ( ThemeAnimationTransform < 0 )
        {
          v137 = 1895;
          goto LABEL_178;
        }
        ThemeAnimationTransform = CTopLevelWindow3D::CreateTimelineForTransform(a1, 12LL);
        if ( ThemeAnimationTransform < 0 )
        {
          v137 = 1902;
          goto LABEL_178;
        }
        ThemeAnimationTransform = CTopLevelWindow3D::CreateTimelineForTransform(a1, 13LL);
        if ( ThemeAnimationTransform < 0 )
        {
          v137 = 1908;
          goto LABEL_178;
        }
        if ( (unsigned int)dword_180147058 > 4 && (byte_180147068 & 1) != 0 && (qword_180147070 & 1) == qword_180147070 )
        {
          v184 = *(_QWORD *)&v147[32];
          v178 = *(_QWORD *)&v147[24];
          v179 = *(_QWORD *)&v147[16];
          v180 = *(_QWORD *)&v147[8];
          v176 = v187;
          v157 = v186;
          v158 = v185;
          v159 = HIDWORD(v189);
          v160 = DWORD2(v189);
          v161 = DWORD1(v189);
          v162 = v189;
          v163 = v153;
          v174 = v55;
          v175 = v59;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
            v118,
            (unsigned int)&unk_1801278F7,
            v119,
            v120,
            (__int64)&v163,
            (__int64)&v162,
            (__int64)&v161,
            (__int64)&v160,
            (__int64)&v159,
            (__int64)&v158,
            (__int64)&v157,
            (__int64)&v176,
            (__int64)&v175,
            (__int64)&v174,
            (__int64)&v180,
            (__int64)&v179,
            (__int64)&v178,
            (__int64)&v184);
        }
      }
      else
      {
        v121 = *(float *)(v62 + 28);
        v122 = *(float *)(v62 + 32);
        *(float *)&v43 = (float)(v121 * v46) + (float)((float)(1.0 - v121) * *(float *)&v43);
        v148 = (float)(v121 * v143) + (float)((float)(1.0 - v121) * *(float *)&v38);
        *(float *)&v41 = (float)((float)(1.0 - v122) * *(float *)&v41) + (float)(v122 * v145);
        v185 = v148;
        v149 = v43;
        v187 = v43;
        v45 = (float)(v122 * v47) + (float)((float)(1.0 - v122) * v45);
        v146 = v41;
        v186 = v41;
        v188 = v45;
        ThemeAnimationTransform = CTopLevelWindow3D::CreateTimelineForTransform(a1, 0LL);
        if ( ThemeAnimationTransform < 0 )
        {
          v137 = 1860;
          goto LABEL_178;
        }
        ThemeAnimationTransform = CTopLevelWindow3D::CreateTimelineForTransform(a1, 1LL);
        if ( ThemeAnimationTransform < 0 )
        {
          v137 = 1861;
          goto LABEL_178;
        }
        ThemeAnimationTransform = CTopLevelWindow3D::CreateTimelineForTransform(a1, 6LL);
        if ( ThemeAnimationTransform < 0 )
        {
          v137 = 1866;
          goto LABEL_178;
        }
        ThemeAnimationTransform = CTopLevelWindow3D::CreateTimelineForTransform(a1, 7LL);
        if ( ThemeAnimationTransform < 0 )
        {
          v137 = 1867;
          goto LABEL_178;
        }
        v59 = v188;
      }
      goto LABEL_60;
    }
    if ( *(float *)&v43 > 0.0 && v45 > 0.0 )
    {
      v83 = *(_DWORD *)(a1 + 384);
      if ( v83 == 2 )
      {
        v123 = *(float *)(v62 + 28);
        v126 = fmaxf(v123, v46 / *(float *)&v43);
        v127 = fmaxf(*(float *)(v62 + 32), v47 / v45);
        v125 = fminf(v126, v127);
        v124 = fmaxf(v126, v127);
      }
      else
      {
        if ( v83 != 4 )
          goto LABEL_52;
        v123 = *(float *)(v62 + 28);
        v124 = fminf(fminf(v123, v46 / *(float *)&v43), fminf(*(float *)(v62 + 32), v47 / v45));
        v125 = v124;
      }
      v128 = v125 - *(float *)(v62 + 20);
      v129 = v123 - *(float *)(v62 + 20);
      *(float *)(v62 + 28) = v124;
      *(float *)(v62 + 32) = v124;
      v70 = fmaxf(0.0, (float)(v128 * v70) / v129);
    }
LABEL_52:
    if ( (v82 & 4) == 0 )
    {
LABEL_58:
      ThemeAnimationTransform = CTopLevelWindow3D::CreateTimelineForTransform(a1, 6LL);
      if ( ThemeAnimationTransform < 0 )
      {
        v137 = 2009;
        goto LABEL_178;
      }
      ThemeAnimationTransform = CTopLevelWindow3D::CreateTimelineForTransform(a1, 7LL);
      if ( ThemeAnimationTransform < 0 )
      {
        v137 = 2010;
        goto LABEL_178;
      }
LABEL_60:
      *(float *)&v38 = v148;
      v4 = fmaxf(v70, v4);
LABEL_61:
      (*(void (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        v62);
      v58 = v150;
      v55 = 0;
      goto LABEL_62;
    }
    v84 = *(_DWORD *)(a1 + 384);
    if ( v84 == 10 )
    {
      v70 = *(float *)&FLOAT_0_25;
    }
    else
    {
      if ( v84 != 11 )
      {
LABEL_55:
        ThemeAnimationTransform = CTopLevelWindow3D::CreateTimelineForTransform(a1, 0LL);
        if ( ThemeAnimationTransform < 0 )
        {
          v137 = 2004;
          goto LABEL_178;
        }
        ThemeAnimationTransform = CTopLevelWindow3D::CreateTimelineForTransform(a1, 1LL);
        if ( ThemeAnimationTransform < 0 )
        {
          v137 = 2005;
          goto LABEL_178;
        }
        v41 = v146;
        goto LABEL_58;
      }
      v70 = FLOAT_0_167;
    }
    *(_OWORD *)v147 = xmmword_180129E60;
    *(_QWORD *)&v147[32] = 0x3FF0000000000000LL;
    *(_OWORD *)&v147[16] = xmmword_180129E70;
    goto LABEL_55;
  }
  v74 = 0LL;
  v137 = 1623;
LABEL_200:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, ThemeAnimationTransform, v137, 0LL);
  if ( v62 )
    (*(void (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap, v62);
  if ( v74 )
    (*(void (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap, v74);
  return (unsigned int)ThemeAnimationTransform;
}
