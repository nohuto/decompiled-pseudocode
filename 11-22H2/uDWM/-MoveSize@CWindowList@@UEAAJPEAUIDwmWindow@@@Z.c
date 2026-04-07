/*
 * XREFs of ?MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180024190
 * Callers:
 *     <none>
 * Callees:
 *     ?_ShouldTrack@CAnimationScheduler@@AEAA_NPEBVCWindowData@@PEAVCStoryboard@@_N@Z @ 0x1800035A4 (-_ShouldTrack@CAnimationScheduler@@AEAA_NPEBVCWindowData@@PEAVCStoryboard@@_N@Z.c)
 *     ?UpdateOwnerLists@CWindowData@@QEAAX_N@Z @ 0x180013838 (-UpdateOwnerLists@CWindowData@@QEAAX_N@Z.c)
 *     ?WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x18001453C (-WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180025534 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ??B?$com_ptr_t@VCAcrylicSheet@@Uerr_returncode_policy@wil@@@wil@@QEBA_NXZ @ 0x180025564 (--B-$com_ptr_t@VCAcrylicSheet@@Uerr_returncode_policy@wil@@@wil@@QEBA_NXZ.c)
 *     ?UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z @ 0x1800278D0 (-UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z.c)
 *     ?OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z @ 0x18002E744 (-OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x18002FA10 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??0CWindowData@@QEAA@XZ @ 0x1800308C8 (--0CWindowData@@QEAA@XZ.c)
 *     ?SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z @ 0x1800338F0 (-SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z.c)
 *     ?ShouldBeIncludedInOwnerSWR@CWindowData@@AEBA_NXZ @ 0x1800373B0 (-ShouldBeIncludedInOwnerSWR@CWindowData@@AEBA_NXZ.c)
 *     ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x180037860 (-PropagateDirtyChildren@CVisual@@QEAAXXZ.c)
 *     ?PropertiesAllowAutoParenting@CWindowData@@QEBA_NXZ @ 0x180038098 (-PropertiesAllowAutoParenting@CWindowData@@QEBA_NXZ.c)
 *     ?GetCurrent@TransitionManager@implementation@Transitions@Udwm@winrt@@SA?AU1345@XZ @ 0x180040DF0 (-GetCurrent@TransitionManager@implementation@Transitions@Udwm@winrt@@SA-AU1345@XZ.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x1800434D8 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_XTests@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18004BC74 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_XTests@@@details@wil@@AE.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_SnapToSnapAnimation@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18004C66C (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_SnapToSnapAnimation@@@de.c)
 *     ?QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIPEAUwil_details_FeatureReportingCache@@@Z @ 0x18004CB84 (-QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIPEAUwil_details_FeatureRep.c)
 *     ?EnsureSubscribedToUsageFlush@EnabledStateManager@details@wil@@QEAAXP6AXPEAX@Z@Z @ 0x18004CCB8 (-EnsureSubscribedToUsageFlush@EnabledStateManager@details@wil@@QEAAXP6AXPEAX@Z@Z.c)
 *     ?OnWindowPositionChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@UtagPOINT@@PEA_N@Z @ 0x1800527CC (-OnWindowPositionChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@UtagPOINT@@PEA_N@Z.c)
 *     __security_check_cookie @ 0x18005C460 (__security_check_cookie.c)
 *     wil_details_FeatureReporting_RecordUsageInCache @ 0x18005F0D8 (wil_details_FeatureReporting_RecordUsageInCache.c)
 *     wil_details_MapReportingKind @ 0x18005F254 (wil_details_MapReportingKind.c)
 *     ?RunAcrylicSheetEndArrangementAnimation@CWindowList@@AEAAJXZ @ 0x180065ED0 (-RunAcrylicSheetEndArrangementAnimation@CWindowList@@AEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?UpdateRect@CAcrylicSheet@@QEAAJAEBUtagRECT@@@Z @ 0x18006B8DE (-UpdateRect@CAcrylicSheet@@QEAAJAEBUtagRECT@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetMarginAdjustedWindowRect@CAcrylicSheet@@CA?AUtagRECT@@PEAVCWindowData@@@Z @ 0x1800A3520 (-GetMarginAdjustedWindowRect@CAcrylicSheet@@CA-AUtagRECT@@PEAVCWindowData@@@Z.c)
 *     ?OnWindowClientContentRectChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@PEBUtagRECT@@2@Z @ 0x1800D6324 (-OnWindowClientContentRectChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@.c)
 *     ?OnWindowSizeChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@UtagSIZE@@@Z @ 0x1800D64F8 (-OnWindowSizeChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@UtagSIZE@@@Z.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x1800D894C (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ?OnIsInWindowMove@CTopLevelWindow@@QEAAX_NAEBUtagRECT@@@Z @ 0x1800E665C (-OnIsInWindowMove@CTopLevelWindow@@QEAAX_NAEBUtagRECT@@@Z.c)
 *     ?ApplyWindowResizeStateTransition@CWindowList@@AEAAJXZ @ 0x18010922C (-ApplyWindowResizeStateTransition@CWindowList@@AEAAJXZ.c)
 *     ?ToggleAutoParenting@CWindowList@@AEAAJPEAVCWindowData@@@Z @ 0x18010CF94 (-ToggleAutoParenting@CWindowList@@AEAAJPEAVCWindowData@@@Z.c)
 *     ?WindowMaximizeSnapCancel@?$consume_Udwm_Transitions_Private_IWindowStateTransitionManager@UIWindowStateTransitionManager@Private@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@XZ @ 0x18010D554 (-WindowMaximizeSnapCancel@-$consume_Udwm_Transitions_Private_IWindowStateTransitionManager@UIWin.c)
 *     ?WindowMaximizeSnapPostTransition@?$consume_Udwm_Transitions_Private_IWindowStateTransitionManager@UIWindowStateTransitionManager@Private@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@XZ @ 0x18010D58C (-WindowMaximizeSnapPostTransition@-$consume_Udwm_Transitions_Private_IWindowStateTransitionManag.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall CWindowList::MoveSize(CWindowList *this, struct IDwmWindow *a2)
{
  int v4; // ebx
  __int64 v5; // r13
  CWindowData *v6; // rax
  CWindowData *v7; // rax
  unsigned int v8; // edi
  LONG *v9; // rsi
  int v10; // ebx
  int v11; // edi
  __int64 v12; // r11
  __int64 v13; // r10
  int v14; // edx
  unsigned int v15; // r9d
  struct tagPOINT v16; // r14
  __int64 v17; // r8
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // r9
  unsigned int v21; // edx
  unsigned int v22; // r8d
  __int64 v23; // r9
  __int64 v24; // rcx
  LONG v25; // r12d
  LONG v26; // r13d
  __int64 v27; // r11
  int v28; // edx
  unsigned int v29; // r8d
  struct tagPOINT v30; // r8
  int v31; // edx
  struct tagPOINT v32; // r9
  unsigned __int64 v33; // rcx
  _DWORD *v34; // rbx
  __int64 v35; // rsi
  CAnimationScheduler *v36; // rcx
  char v37; // r15
  __int64 v38; // rdi
  struct tagPOINT v39; // rbx
  const struct CStoryboard *v40; // r12
  struct tagPOINT v41; // rdi
  __int64 v42; // rcx
  int updated; // eax
  struct tagPOINT v45; // r15
  struct tagPOINT v46; // r12
  __int64 (__fastcall ***v47)(_QWORD, __int64 *, _QWORD *); // rbx
  unsigned __int64 v48; // rdi
  int v49; // eax
  __int64 v50; // rax
  int v51; // eax
  const char *v52; // r9
  __int16 v53; // di
  __int64 v54; // rbx
  __int64 v55; // rax
  __int64 top; // r8
  int v57; // esi
  struct tagPOINT v58; // rax
  struct tagPOINT v59; // r15
  __int16 v60; // di
  __int64 v61; // rax
  unsigned __int64 v62; // rcx
  const char *v63; // r9
  __int64 v64; // r8
  int v65; // esi
  struct tagPOINT v66; // r12
  CWindowList *v67; // rsi
  struct IDwmWindow *v68; // r15
  __int64 v69; // rax
  __int64 (__fastcall ***v70)(_QWORD, __int64 *, _QWORD *); // rbx
  __int64 v71; // rdi
  int v72; // eax
  winrt::Windows::Foundation::IUnknown *v73; // rcx
  __int64 (__fastcall ***v74)(_QWORD, __int64 *, struct tagPOINT *); // rbx
  struct tagPOINT v75; // rdi
  int v76; // eax
  __int64 v77; // rax
  bool v78; // al
  unsigned int v79; // edi
  __int64 v80; // rbx
  __int64 v81; // rax
  int v82; // r9d
  wchar_t **v83; // r10
  WCHAR *v84; // rax
  int v85; // edx
  char v86; // al
  int v87; // eax
  unsigned int v88; // esi
  __int64 v89; // rdx
  __int64 v90; // rax
  char *v91; // rax
  char *v92; // rdi
  struct tagPOINT v93; // rbx
  __int64 v94; // rax
  CWindowList *v95; // rcx
  __int64 v96; // rdx
  __int64 i; // rax
  __int64 v98; // r9
  int v99; // edx
  unsigned int v100; // r8d
  RECT v101; // xmm0
  __int64 v102; // r9
  int v103; // edx
  unsigned int v104; // r8d
  RECT v105; // xmm0
  struct tagPOINT v106; // rcx
  RECT *v107; // rsi
  __int64 v108; // rdi
  char v109; // r15
  unsigned int v110; // ebx
  const struct CStoryboard *v111; // rsi
  CVisual *v112; // rcx
  int v113; // eax
  CAcrylicSheet **v114; // rbx
  CWindowList *v115; // r9
  char v116; // al
  CAcrylicSheet *v117; // rbx
  int v118; // eax
  __int64 v119; // rdx
  __int64 v120; // rdx
  int v121; // eax
  int v122; // [rsp+20h] [rbp-478h]
  unsigned int v123; // [rsp+20h] [rbp-478h]
  int v124; // [rsp+20h] [rbp-478h]
  int v125; // [rsp+30h] [rbp-468h]
  bool v126; // [rsp+50h] [rbp-448h] BYREF
  int v127; // [rsp+54h] [rbp-444h]
  struct tagPOINT v128; // [rsp+58h] [rbp-440h]
  int v129; // [rsp+60h] [rbp-438h] BYREF
  struct tagPOINT v130; // [rsp+68h] [rbp-430h] BYREF
  struct tagPOINT v131; // [rsp+70h] [rbp-428h] BYREF
  __int64 v132; // [rsp+78h] [rbp-420h]
  int v133; // [rsp+80h] [rbp-418h]
  int v134; // [rsp+84h] [rbp-414h] BYREF
  char v135; // [rsp+88h] [rbp-410h]
  int v136; // [rsp+8Ch] [rbp-40Ch] BYREF
  char v137; // [rsp+90h] [rbp-408h]
  CWindowList *v138; // [rsp+98h] [rbp-400h]
  unsigned __int64 v139; // [rsp+A0h] [rbp-3F8h] BYREF
  struct IDwmWindow *v140; // [rsp+A8h] [rbp-3F0h]
  struct tagRECT v141; // [rsp+B0h] [rbp-3E8h] BYREF
  __int64 v142; // [rsp+C0h] [rbp-3D8h]
  LONG v143; // [rsp+C8h] [rbp-3D0h]
  int v144; // [rsp+D0h] [rbp-3C8h] BYREF
  __int64 v145; // [rsp+D8h] [rbp-3C0h] BYREF
  struct _RTL_CRITICAL_SECTION *v146; // [rsp+E0h] [rbp-3B8h] BYREF
  unsigned __int64 v147; // [rsp+E8h] [rbp-3B0h] BYREF
  __int64 (__fastcall ***v148)(_QWORD, __int64 *, unsigned __int64 *); // [rsp+F0h] [rbp-3A8h] BYREF
  __int64 v149; // [rsp+F8h] [rbp-3A0h]
  __int64 v150; // [rsp+100h] [rbp-398h] BYREF
  __int64 (__fastcall ***v151)(_QWORD, __int64 *, __int64 *); // [rsp+108h] [rbp-390h] BYREF
  __int64 (__fastcall ***v152)(_QWORD, __int64 *, struct tagPOINT *); // [rsp+110h] [rbp-388h] BYREF
  _QWORD *v153; // [rsp+118h] [rbp-380h]
  struct tagPOINT v154; // [rsp+120h] [rbp-378h] BYREF
  struct IDwmWindow *v155; // [rsp+128h] [rbp-370h]
  CWindowList *v156; // [rsp+130h] [rbp-368h]
  struct _RTL_CRITICAL_SECTION *v157; // [rsp+138h] [rbp-360h]
  char v158[8]; // [rsp+140h] [rbp-358h] BYREF
  char v159[8]; // [rsp+148h] [rbp-350h] BYREF
  struct _RTL_CRITICAL_SECTION *v160; // [rsp+150h] [rbp-348h]
  _QWORD Buffer[2]; // [rsp+160h] [rbp-338h] BYREF
  __int128 v162; // [rsp+170h] [rbp-328h]
  __int128 v163; // [rsp+180h] [rbp-318h]
  __int128 v164; // [rsp+190h] [rbp-308h]
  __int64 v165; // [rsp+1A0h] [rbp-2F8h]
  char v166; // [rsp+1A8h] [rbp-2F0h]
  struct tagRECT v167; // [rsp+1C0h] [rbp-2D8h] BYREF
  char v168[24]; // [rsp+1D0h] [rbp-2C8h] BYREF
  char v169[24]; // [rsp+1E8h] [rbp-2B0h] BYREF
  struct tagPOINT v170; // [rsp+200h] [rbp-298h] BYREF
  int v171; // [rsp+208h] [rbp-290h]
  int v172; // [rsp+20Ch] [rbp-28Ch]
  RECT rc1; // [rsp+210h] [rbp-288h] BYREF
  RECT v174; // [rsp+220h] [rbp-278h] BYREF
  RECT rc2; // [rsp+230h] [rbp-268h] BYREF
  RECT v176; // [rsp+240h] [rbp-258h] BYREF
  WCHAR ClassName[264]; // [rsp+250h] [rbp-248h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+498h] [rbp+0h]

  v140 = a2;
  v138 = this;
  v156 = this;
  v155 = a2;
  v146 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = 0;
  v5 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 8LL))(a2);
  v128 = (struct tagPOINT)v5;
  if ( !v5 && (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 16LL))(a2) )
  {
    v6 = (CWindowData *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                          WPF::g_pProcessHeap,
                          864LL);
    v132 = (__int64)v6;
    if ( !v6 || (v7 = CWindowData::CWindowData(v6), v5 = (__int64)v7, (v128 = (struct tagPOINT)v7) == 0LL) )
    {
      v4 = -2147024882;
      v123 = 2180;
      goto LABEL_7;
    }
    *((_QWORD *)v7 + 3) = a2;
    (**(void (__fastcall ***)(struct IDwmWindow *, CWindowData *))a2)(a2, v7);
    *(_QWORD *)(v5 + 40) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 24LL))(a2);
    v4 = CWindowList::SyncWindowData(this, a2, (struct CWindowData *)v5);
    if ( v4 < 0 )
    {
      v123 = 2184;
LABEL_7:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, v123, 0LL);
      v8 = v4;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0xD43u, 0LL);
LABEL_56:
      CGuard<CDwmCS>::~CGuard<CDwmCS>(&v146);
      return v8;
    }
  }
  v132 = v5;
  v127 = v4;
  v133 = v4;
  if ( !v5 )
  {
    v8 = v4;
    goto LABEL_56;
  }
  v126 = 0;
  (*(void (__fastcall **)(struct IDwmWindow *, struct tagPOINT *))(*(_QWORD *)a2 + 88LL))(a2, &v170);
  v9 = (LONG *)(v5 + 216);
  v10 = v170.x - *(_DWORD *)(v5 + 216);
  v11 = v170.y - *(_DWORD *)(v5 + 220);
  v12 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 23);
  v153 = (_QWORD *)(v5 + 40);
  v13 = *(_QWORD *)(v5 + 40);
  v14 = 0;
  v15 = *(_DWORD *)(v12 + 72);
  v16 = (struct tagPOINT)v5;
  v149 = v5;
  if ( v15 )
  {
    v17 = *(_QWORD *)(v12 + 48);
    v149 = v5;
    while ( **(_QWORD **)(v17 + 8LL * (unsigned int)v14) != v13 )
    {
      if ( ++v14 >= v15 )
        goto LABEL_18;
    }
    if ( v14 >= 0 )
    {
      _mm_lfence();
      v18 = *(_QWORD *)(*(_QWORD *)(v12 + 48) + 8LL * (unsigned int)v14);
      if ( (*(_BYTE *)(v18 + 40) & 4) != 0 )
      {
        v19 = *(_QWORD *)(v18 + 104);
        v10 = v170.x - v19;
        v11 = v170.y - HIDWORD(v19);
      }
    }
  }
LABEL_18:
  if ( v10 || v11 )
  {
    v130 = v170;
    CAnimationScheduler::OnWindowPositionChange(
      *((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance + 23),
      (const struct CWindowData *)v5,
      v170,
      &v126);
    if ( !v126 )
    {
      OffsetRect((LPRECT)(v5 + 216), v10, v11);
      v20 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 24);
      v21 = 0;
      v22 = *(_DWORD *)(v20 + 48);
      if ( v22 )
      {
        v23 = *(_QWORD *)(v20 + 24);
        while ( 1 )
        {
          v24 = v23 + 24LL * v21;
          if ( *(_BYTE *)(v24 + 16) )
          {
            if ( *(_QWORD *)(v5 + 440) == *(_QWORD *)v24 )
              break;
          }
          if ( ++v21 >= v22 )
            goto LABEL_28;
        }
        v131.x = *v9;
        v131.y = *(_DWORD *)(v5 + 220);
        CVisual::SetOffset(*(CVisual **)(v24 + 8), &v131);
      }
LABEL_28:
      CWindowList::OnPositionChange(this, (struct CWindowData *)v5, 1);
    }
  }
  v25 = 0;
  if ( v171 - v170.x >= 0 )
    v25 = v171 - v170.x;
  v143 = v25;
  v26 = 0;
  if ( v172 - v170.y >= 0 )
    v26 = v172 - v170.y;
  v27 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 23);
  v28 = 0;
  v29 = *(_DWORD *)(v27 + 72);
  if ( !v29 )
    goto LABEL_36;
  while ( **(_QWORD **)(*(_QWORD *)(v27 + 48) + 8LL * (unsigned int)v28) != *v153 )
  {
    if ( ++v28 >= v29 )
      goto LABEL_36;
  }
  if ( v28 >= 0
    && (_mm_lfence(), v42 = *(_QWORD *)(*(_QWORD *)(v27 + 48) + 8LL * (unsigned int)v28),
                      (*(_BYTE *)(v42 + 40) & 2) != 0) )
  {
    v139 = *(_QWORD *)(v42 + 112);
    v33 = HIDWORD(v139);
    v32 = v128;
    v30 = v128;
    v31 = v139;
  }
  else
  {
LABEL_36:
    v30 = v16;
    v31 = v9[2] - *v9;
    if ( v31 < 0 )
      v31 = 0;
    v32 = v128;
    LODWORD(v33) = 0;
    if ( *(_DWORD *)(*(_QWORD *)&v16 + 228LL) - *(_DWORD *)(*(_QWORD *)&v128 + 220LL) >= 0 )
      LODWORD(v33) = *(_DWORD *)(*(_QWORD *)&v16 + 228LL) - *(_DWORD *)(*(_QWORD *)&v128 + 220LL);
  }
  v34 = (_DWORD *)(*(_QWORD *)&v30 + 228LL);
  if ( v25 != v31 || v26 != (_DWORD)v33 )
  {
    v131.x = v25;
    v131.y = v26;
    v35 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 23);
    v157 = &CDesktopManager::s_csDwmInstance;
    EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
    v37 = 0;
    v126 = 0;
    v38 = 0LL;
    if ( *(_DWORD *)(v35 + 40) )
    {
      v39 = v131;
      do
      {
        v40 = *(const struct CStoryboard **)(*(_QWORD *)(v35 + 16) + 8 * v38);
        if ( CAnimationScheduler::_ShouldTrack(v36, *(HWND **)&v16, v40, 0) )
          v37 |= (int)CWindowPropertyTracker::OnWindowSizeChange(
                        (CWindowPropertyTracker *)(v35 + 48),
                        v40,
                        *(const struct CWindowData **)&v16,
                        (struct tagSIZE)v39) >= 0;
        v38 = (unsigned int)(v38 + 1);
      }
      while ( (unsigned int)v38 < *(_DWORD *)(v35 + 40) );
      v126 = v37;
      v41 = v128;
      v34 = (_DWORD *)(*(_QWORD *)&v128 + 228LL);
      v25 = v143;
    }
    else
    {
      v41 = v128;
    }
    LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
    if ( !v37 )
    {
      *(_DWORD *)(*(_QWORD *)&v16 + 224LL) = v25 + *(_DWORD *)(*(_QWORD *)&v41 + 216LL);
      *v34 = v26 + *(_DWORD *)(*(_QWORD *)&v41 + 220LL);
      updated = CWindowList::UpdateWindowScale(v138, *(struct CWindowData **)&v16, 0);
      v127 = updated;
      v133 = updated;
      if ( updated < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0xD7Cu, 0LL);
LABEL_55:
        v8 = v127;
        goto LABEL_56;
      }
    }
    v32 = v128;
  }
  try
  {
    v45 = v32;
    v131 = v32;
    v46 = v16;
    v130 = v16;
    winrt::Udwm::Transitions::implementation::TransitionManager::GetCurrent(&v148);
    v47 = v148;
    if ( v148 )
    {
      v147 = 0LL;
      v49 = (**v148)(v148, &winrt::impl::guid_v<winrt::Udwm::Transitions::Private::IAnimationsTransitionManager>, &v147);
      if ( v49 < 0 )
        winrt::throw_hresult((unsigned int)v49);
      v48 = v147;
      v139 = v147;
    }
    else
    {
      v139 = 0LL;
      v48 = 0LL;
    }
    v50 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)v140 + 24LL))(v140);
    v51 = (*(__int64 (__fastcall **)(unsigned __int64, __int64))(*(_QWORD *)v48 + 56LL))(v48, v50);
    if ( v51 < 0 )
      winrt::throw_hresult((unsigned int)v51);
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v139);
    if ( v47 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v148);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0xD85,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
      v52);
    v127 = v133;
    v16 = (struct tagPOINT)v149;
    v45 = v131;
    v46 = v130;
    v140 = v155;
    v138 = v156;
    v128 = (struct tagPOINT)v132;
  }
  v53 = `wil::Feature<__WilFeatureTraits_Feature_SnapToSnapAnimation>::GetImpl'::`2'::impl;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_SnapToSnapAnimation>::GetImpl'::`2'::impl & 4) == 0 )
  {
    v132 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_SnapToSnapAnimation>::GetCachedFeatureEnabledState(
                        &`wil::Feature<__WilFeatureTraits_Feature_SnapToSnapAnimation>::GetImpl'::`2'::impl,
                        v158);
    v53 = v132;
  }
  v134 = 0;
  v135 = 3;
  v144 = 3;
  v54 = (unsigned int)wil_details_MapReportingKind(3LL, 1LL);
  v55 = wil_details_FeatureReporting_RecordUsageInCache(v168, &unk_18014BDF8, v54);
  v141 = *(struct tagRECT *)v55;
  v142 = *(_QWORD *)(v55 + 16);
  if ( g_wil_details_RecordSRUMFeatureUsage && (!(_DWORD)v54 || (unsigned int)(v54 - 100) <= 0x31) )
    g_wil_details_RecordSRUMFeatureUsage(35385316LL, (unsigned int)v54, 1LL);
  if ( v141.left )
    wil::details::EnabledStateManager::QueueBackgroundUsageReporting(
      &wil::details::g_enabledStateManager,
      0x21BEFE4u,
      (struct wil_details_FeatureReportingCache *)&unk_18014BDF8);
  top = (unsigned int)v141.top;
  if ( v141.top )
    wil::details::WilApi_RecordFeatureUsage((wil::details *)0x21BEFE4);
  v57 = v142;
  if ( !(_DWORD)v142 )
    wil::details::EnabledStateManager::EnsureSubscribedToUsageFlush(
      (wil::details::EnabledStateManager *)&wil::details::g_enabledStateManager,
      (void (*)(void *))_lambda_aa194dc0bf891154933407eb98fb868a_::_lambda_invoker_cdecl_);
  if ( (v53 & 0x400) != 0 )
    wil::details::WilApi_RecordFeatureUsage((wil::details *)0x21BEFE4);
  if ( v57 )
  {
    v58 = v128;
  }
  else
  {
    if ( g_wil_details_realtimeFeatureUsageHook )
    {
      LOBYTE(top) = 3;
      g_wil_details_realtimeFeatureUsageHook(35385316LL, (unsigned int)v54, top);
    }
    v16 = v46;
    v128 = v45;
    if ( g_wil_details_pfnFeatureLoggingHook )
    {
      g_wil_details_pfnFeatureLoggingHook(35385316LL, &v134, 0LL, 1LL, &v144, 0LL, 0, 1LL);
      v58 = v45;
      v128 = v45;
    }
    else
    {
      v58 = v45;
    }
  }
  v59 = v58;
  v60 = `wil::Feature<__WilFeatureTraits_Feature_XTests>::GetImpl'::`2'::impl;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_XTests>::GetImpl'::`2'::impl & 4) == 0 )
  {
    v132 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_XTests>::GetCachedFeatureEnabledState(
                        &`wil::Feature<__WilFeatureTraits_Feature_XTests>::GetImpl'::`2'::impl,
                        v159);
    v60 = v132;
  }
  v136 = 0;
  v137 = 3;
  v129 = 3;
  v61 = wil_details_FeatureReporting_RecordUsageInCache(v169, &unk_18014C0B0, (unsigned int)v54);
  v141 = *(struct tagRECT *)v61;
  v142 = *(_QWORD *)(v61 + 16);
  if ( g_wil_details_RecordSRUMFeatureUsage )
  {
    if ( !(_DWORD)v54 || (v62 = (unsigned int)(v54 - 100), (unsigned int)v62 <= 0x31) )
      g_wil_details_RecordSRUMFeatureUsage(31692694LL, (unsigned int)v54, 1LL);
  }
  if ( v141.left )
    wil::details::EnabledStateManager::QueueBackgroundUsageReporting(
      &wil::details::g_enabledStateManager,
      0x1E39796u,
      (struct wil_details_FeatureReportingCache *)&unk_18014C0B0);
  v64 = (unsigned int)v141.top;
  if ( v141.top )
    wil::details::WilApi_RecordFeatureUsage((wil::details *)0x1E39796);
  v65 = v142;
  if ( !(_DWORD)v142 )
    wil::details::EnabledStateManager::EnsureSubscribedToUsageFlush(
      (wil::details::EnabledStateManager *)&wil::details::g_enabledStateManager,
      (void (*)(void *))_lambda_aa194dc0bf891154933407eb98fb868a_::_lambda_invoker_cdecl_);
  if ( (v60 & 0x400) != 0 )
    wil::details::WilApi_RecordFeatureUsage((wil::details *)0x1E39796);
  try
  {
    if ( v65 )
    {
      v66 = v128;
    }
    else
    {
      if ( g_wil_details_realtimeFeatureUsageHook )
      {
        LOBYTE(v64) = 3;
        g_wil_details_realtimeFeatureUsageHook(31692694LL, (unsigned int)v54, v64);
      }
      if ( g_wil_details_pfnFeatureLoggingHook )
      {
        LOBYTE(v125) = 0;
        g_wil_details_pfnFeatureLoggingHook(31692694LL, &v136, 0LL, 1LL, &v129, 0LL, v125, 1LL);
      }
      v66 = v59;
    }
    v67 = v138;
    v68 = v140;
    if ( *((_BYTE *)v138 + 681)
      && (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)v140 + 24LL))(v140) == *((_QWORD *)v67 + 86) )
    {
      *((_BYTE *)v67 + 681) = 0;
      *((_QWORD *)v67 + 86) = 0LL;
      v69 = *(_QWORD *)(*(_QWORD *)&v16 + 448LL);
      if ( !v69 || (*(_DWORD *)(*(_QWORD *)&v16 + 116LL) & 0x20000000) != 0 || *(_BYTE *)(v69 + 536) )
      {
        winrt::Udwm::Transitions::implementation::TransitionManager::GetCurrent(&v152);
        v74 = v152;
        if ( v152 )
        {
          v154 = 0LL;
          v76 = (**v152)(
                  v152,
                  &winrt::impl::guid_v<winrt::Udwm::Transitions::Private::IWindowStateTransitionManager>,
                  &v154);
          if ( v76 < 0 )
            winrt::throw_hresult((unsigned int)v76);
          v75 = v154;
          v130 = v154;
        }
        else
        {
          v130 = 0LL;
          v75 = 0LL;
        }
        winrt::impl::consume_Udwm_Transitions_Private_IWindowStateTransitionManager<winrt::Udwm::Transitions::Private::IWindowStateTransitionManager>::WindowMaximizeSnapCancel(&v130);
        if ( v75 )
          winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v130);
        if ( v74 )
        {
          v73 = (winrt::Windows::Foundation::IUnknown *)&v152;
          goto LABEL_129;
        }
      }
      else
      {
        winrt::Udwm::Transitions::implementation::TransitionManager::GetCurrent(&v151);
        v70 = v151;
        if ( v151 )
        {
          v150 = 0LL;
          v72 = (**v151)(
                  v151,
                  &winrt::impl::guid_v<winrt::Udwm::Transitions::Private::IWindowStateTransitionManager>,
                  &v150);
          if ( v72 < 0 )
            winrt::throw_hresult((unsigned int)v72);
          v71 = v150;
          v145 = v150;
        }
        else
        {
          v145 = 0LL;
          v71 = 0LL;
        }
        winrt::impl::consume_Udwm_Transitions_Private_IWindowStateTransitionManager<winrt::Udwm::Transitions::Private::IWindowStateTransitionManager>::WindowMaximizeSnapPostTransition(&v145);
        if ( v71 )
          winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v145);
        if ( v70 )
        {
          v73 = (winrt::Windows::Foundation::IUnknown *)&v151;
LABEL_129:
          winrt::Windows::Foundation::IUnknown::unconditional_release_ref(v73);
        }
      }
    }
  }
  catch ( ... )
  {
    v129 = wil::details::in1diag3::Return_CaughtException(
             retaddr,
             (void *)0xDAA,
             (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
             v63);
    CGuard<CDwmCS>::~CGuard<CDwmCS>(&v146);
    return (unsigned int)v129;
  }
  if ( !v126 )
  {
    v77 = *(_QWORD *)(*(_QWORD *)&v16 + 600LL);
    v78 = v77 && *(char *)(v77 + 673) < 0 && CWindowData::ShouldBeIncludedInOwnerSWR(*(CWindowData **)&v16);
    if ( (*(_BYTE *)(*(_QWORD *)&v16 + 674LL) & 1) != v78 )
      CWindowData::UpdateOwnerLists(*(CWindowData **)&v16, !(*(_BYTE *)(*(_QWORD *)&v16 + 674LL) & 1));
    v79 = 0;
    if ( *(_DWORD *)(*(_QWORD *)&v16 + 632LL) )
    {
      while ( 1 )
      {
        v62 = v79;
        v80 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)&v16 + 608LL) + 8LL * v79);
        v81 = *(_QWORD *)(v80 + 600);
        if ( !v81
          || *(char *)(v81 + 673) >= 0
          || *(char *)(v80 + 120) < 0 && (*(_DWORD *)(v80 + 680) & 0xFFF) != 0x11
          || !CWindowData::PropertiesAllowAutoParenting(*(CWindowData **)(*(_QWORD *)(*(_QWORD *)&v16 + 608LL)
                                                                        + 8LL * v79)) )
        {
          goto LABEL_153;
        }
        ClassName[0] = 0;
        if ( GetClassNameW(*(HWND *)(v80 + 40), ClassName, 260) )
          break;
LABEL_152:
        v86 = 1;
LABEL_154:
        if ( (*(_BYTE *)(v80 + 674) & 1) != v86 )
          CWindowData::UpdateOwnerLists((CWindowData *)v80, !(*(_BYTE *)(v80 + 674) & 1));
        if ( ++v79 >= *(_DWORD *)(*(_QWORD *)&v16 + 632LL) )
          goto LABEL_157;
      }
      v82 = 0;
      v83 = off_180115FA0;
      while ( 1 )
      {
        v84 = ClassName;
        do
        {
          v62 = *(WCHAR *)((char *)v84 + (char *)*v83 - (char *)ClassName);
          v85 = *v84 - (_DWORD)v62;
          if ( v85 )
            break;
          ++v84;
        }
        while ( (_DWORD)v62 );
        if ( !v85 )
          break;
        ++v82;
        ++v83;
        if ( v82 )
          goto LABEL_152;
      }
LABEL_153:
      v86 = 0;
      goto LABEL_154;
    }
  }
LABEL_157:
  if ( **(_QWORD **)&v16 == v16 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)&v16 + 678LL) & 0x10) == 0
      || (v87 = CWindowList::ToggleAutoParenting((CWindowList *)v62, *(struct CWindowData **)&v16), v88 = v87, v87 >= 0) )
    {
LABEL_192:
      v98 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 23);
      v99 = 0;
      v100 = *(_DWORD *)(v98 + 72);
      if ( !v100 )
        goto LABEL_195;
      while ( **(_QWORD **)(*(_QWORD *)(v98 + 48) + 8LL * (unsigned int)v99) != *v153 )
      {
        if ( ++v99 >= v100 )
          goto LABEL_195;
      }
      if ( v99 >= 0
        && (_mm_lfence(),
            v119 = *(_QWORD *)(*(_QWORD *)(v98 + 48) + 8LL * (unsigned int)v99),
            (*(_BYTE *)(v119 + 40) & 8) != 0) )
      {
        v101 = *(RECT *)(v119 + 120);
      }
      else
      {
LABEL_195:
        v101 = *(RECT *)(*(_QWORD *)&v16 + 232LL);
      }
      rc2 = v101;
      v102 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 23);
      v103 = 0;
      v104 = *(_DWORD *)(v102 + 72);
      if ( !v104 )
        goto LABEL_199;
      while ( **(_QWORD **)(*(_QWORD *)(v102 + 48) + 8LL * (unsigned int)v103) != *v153 )
      {
        if ( ++v103 >= v104 )
          goto LABEL_199;
      }
      if ( v103 >= 0
        && (_mm_lfence(),
            v120 = *(_QWORD *)(*(_QWORD *)(v102 + 48) + 8LL * (unsigned int)v103),
            (*(_BYTE *)(v120 + 40) & 0x10) != 0) )
      {
        v105 = *(RECT *)(v120 + 136);
        v106 = v66;
      }
      else
      {
LABEL_199:
        v105 = *(RECT *)(*(_QWORD *)&v16 + 248LL);
        v106 = v16;
      }
      v176 = v105;
      v107 = (RECT *)(*(_QWORD *)&v106 + 248LL);
      (*(void (__fastcall **)(struct IDwmWindow *, RECT *))(*(_QWORD *)v68 + 96LL))(v68, &rc1);
      (*(void (__fastcall **)(struct IDwmWindow *, RECT *))(*(_QWORD *)v68 + 104LL))(v68, &v174);
      if ( !EqualRect(&rc1, &rc2) || !EqualRect(&v174, &v176) )
      {
        v108 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 23);
        v160 = &CDesktopManager::s_csDwmInstance;
        EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
        v109 = 0;
        v110 = 0;
        if ( *(_DWORD *)(v108 + 40) )
        {
          do
          {
            v111 = *(const struct CStoryboard **)(*(_QWORD *)(v108 + 16) + 8LL * v110);
            if ( CAnimationScheduler::_ShouldTrack((CAnimationScheduler *)v110, *(HWND **)&v16, v111, 0) )
              v109 |= (int)CWindowPropertyTracker::OnWindowClientContentRectChange(
                             (CWindowPropertyTracker *)(v108 + 48),
                             v111,
                             *(const struct CWindowData **)&v16,
                             &rc1,
                             &v174) >= 0;
            ++v110;
          }
          while ( v110 < *(_DWORD *)(v108 + 40) );
          v107 = (RECT *)(*(_QWORD *)&v66 + 248LL);
        }
        LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
        if ( !v109 )
        {
          *(RECT *)(*(_QWORD *)&v16 + 232LL) = rc1;
          *v107 = v174;
          v112 = *(CVisual **)(*(_QWORD *)&v16 + 440LL);
          if ( v112 )
          {
            v113 = *((_DWORD *)v112 + 22);
            if ( (v113 & 0x4000000) == 0 )
            {
              *((_DWORD *)v112 + 22) = v113 | 0x4000000;
              CVisual::PropagateDirtyChildren(v112);
            }
          }
        }
      }
      if ( !*(_QWORD *)(*(_QWORD *)&v16 + 440LL) )
        goto LABEL_55;
      v114 = (CAcrylicSheet **)((char *)v138 + 544);
      if ( !(unsigned __int8)wil::com_ptr_t<CAcrylicSheet,wil::err_returncode_policy>::operator bool((char *)v138 + 544)
        || *((_QWORD *)v115 + 88) != v16 )
      {
        goto LABEL_55;
      }
      v116 = *(_BYTE *)(*(_QWORD *)&v16 + 677LL);
      if ( (v116 & 0x40) != 0 )
      {
        if ( v116 < 0 )
        {
          v121 = CWindowList::RunAcrylicSheetEndArrangementAnimation(v115);
          v127 = v121;
          if ( v121 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v121, 0xDEAu, 0LL);
            goto LABEL_55;
          }
        }
      }
      else
      {
        if ( (v116 & 0x20) != 0 )
        {
          *(_BYTE *)(*(_QWORD *)&v16 + 677LL) = v116 & 0xDF;
          CWindowList::ApplyWindowResizeStateTransition(v115);
        }
        if ( (unsigned __int8)wil::com_ptr_t<CAcrylicSheet,wil::err_returncode_policy>::operator bool(v114) )
        {
          v117 = *v114;
          v141 = *CAcrylicSheet::GetMarginAdjustedWindowRect(&v167, *(struct CWindowData **)&v16);
          v118 = CAcrylicSheet::UpdateRect(v117, &v141);
          v127 = v118;
          if ( v118 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v118, 0xDE5u, 0LL);
            goto LABEL_55;
          }
        }
      }
      if ( (*(_BYTE *)(*(_QWORD *)&v16 + 677LL) & 0x10) != 0 )
        CTopLevelWindow::OnIsInWindowMove(
          *(CTopLevelWindow **)(*(_QWORD *)&v16 + 440LL),
          1,
          (const struct tagRECT *)(*(_QWORD *)&v16 + 48LL));
      goto LABEL_55;
    }
    v89 = 8184LL;
  }
  else
  {
    v90 = *(_QWORD *)(*(_QWORD *)&v16 + 136LL);
    Buffer[1] = 0LL;
    v162 = 0LL;
    v165 = -1LL;
    v166 = 0;
    v163 = 0LL;
    v164 = 0LL;
    Buffer[0] = v90;
    v91 = (char *)RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)v67 + 8), Buffer);
    v92 = v91 + 80;
    if ( !v91 )
      v92 = 0LL;
    v93 = v16;
    while ( 1 )
    {
      if ( (*(_BYTE *)(*(_QWORD *)&v93 + 672LL) & 1) != 0 )
      {
        v94 = *(_QWORD *)(*(_QWORD *)&v93 + 440LL);
        if ( v94 )
        {
          if ( *(_QWORD *)(v94 + 24) )
          {
            v95 = *(CWindowList **)(*(_QWORD *)&v93 + 24LL);
            if ( v95 )
            {
              if ( (*(unsigned __int8 (__fastcall **)(CWindowList *))(*(_QWORD *)v95 + 440LL))(v95) )
              {
                if ( CWindowData::PropertiesAllowAutoParenting(*(CWindowData **)&v93)
                  && (*(_BYTE *)(*(_QWORD *)&v93 + 677LL) & 0x10) == 0
                  && !*(_QWORD *)(*(_QWORD *)&v93 + 464LL)
                  && (*(_BYTE *)(*(_QWORD *)&v93 + 676LL) & 2) == 0 )
                {
                  v96 = *(_QWORD *)(*(_QWORD *)&v93 + 600LL);
                  if ( (*(_BYTE *)(v96 + 672) & 1) != 0 && *(_QWORD *)(v96 + 440) && (*(_BYTE *)(v96 + 678) & 0x10) == 0 )
                  {
                    for ( i = *(_QWORD *)(*(_QWORD *)&v93 + 8LL); (char *)i != v92; i = *(_QWORD *)(i + 8) )
                    {
                      if ( i == v96 )
                        goto LABEL_185;
                      if ( (*(_BYTE *)(i + 672) & 1) != 0 )
                      {
                        v95 = *(CWindowList **)(i + 440);
                        if ( v95 )
                        {
                          if ( *((_QWORD *)v95 + 3) )
                          {
                            if ( *(_QWORD *)(i + 600) == v96 && (*(_BYTE *)(i + 678) & 0x10) != 0 )
                            {
LABEL_185:
                              LOBYTE(v95) = 1;
                              goto LABEL_187;
                            }
                            break;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            LOBYTE(v95) = 0;
LABEL_187:
            if ( (_BYTE)v95 == ((*(_BYTE *)(*(_QWORD *)&v93 + 678LL) & 0x10) != 0) )
              goto LABEL_192;
            v87 = CWindowList::ToggleAutoParenting(v95, *(struct CWindowData **)&v93);
            v88 = v87;
            if ( v87 < 0 )
              break;
          }
        }
      }
      v93 = **(struct tagPOINT **)&v93;
      if ( !*(_QWORD *)&v93 || *(char **)&v93 == v92 || v93 == v16 )
        goto LABEL_192;
    }
    v89 = 8200LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v89,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
    (const char *)(unsigned int)v87,
    v122);
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xDB6,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
    (const char *)v88,
    v124);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v146);
  return v88;
}
