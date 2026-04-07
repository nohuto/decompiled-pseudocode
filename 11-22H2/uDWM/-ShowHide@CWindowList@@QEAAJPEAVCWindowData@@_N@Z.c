/*
 * XREFs of ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x180030C60
 * Callers:
 *     ?CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002BEC0 (-CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?CloakChange@CWindowList@@UEAAJPEAUIDwmWindow@@0_N@Z @ 0x180030A20 (-CloakChange@CWindowList@@UEAAJPEAUIDwmWindow@@0_N@Z.c)
 *     ?ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180035E5C (-ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?ShowHide@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180037570 (-ShowHide@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z @ 0x1800EC040 (-RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ?_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ @ 0x18000EF34 (-_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ.c)
 *     ?UpdateOwnerLists@CWindowData@@QEAAX_N@Z @ 0x180013838 (-UpdateOwnerLists@CWindowData@@QEAAX_N@Z.c)
 *     ?OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x18001EA48 (-OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18001F59C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x18001F610 (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z @ 0x1800278D0 (-UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z.c)
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x18002A780 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 *     ?InsertIntoVisualTree@CWindowList@@AEAAJPEAVCWindowData@@@Z @ 0x18002D888 (-InsertIntoVisualTree@CWindowList@@AEAAJPEAVCWindowData@@@Z.c)
 *     ?OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z @ 0x18002E744 (-OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?UpdateThumbnailsForNewWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z @ 0x18002FF74 (-UpdateThumbnailsForNewWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z.c)
 *     ?SetPassiveUpdateMode@CWindowList@@UEAAJPEAUIDwmWindow@@_N@Z @ 0x180030050 (-SetPassiveUpdateMode@CWindowList@@UEAAJPEAUIDwmWindow@@_N@Z.c)
 *     ?SetExcludeFromDDA@CWindowList@@UEAAJPEAUIDwmWindow@@_N@Z @ 0x180030110 (-SetExcludeFromDDA@CWindowList@@UEAAJPEAUIDwmWindow@@_N@Z.c)
 *     ?ShowProjectionBorder@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x1800301F4 (-ShowProjectionBorder@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?UpdateRemoteAppRenderTargetOpacity@CTopLevelWindow@@QEAAJXZ @ 0x180030280 (-UpdateRemoteAppRenderTargetOpacity@CTopLevelWindow@@QEAAJXZ.c)
 *     ?OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z @ 0x18003211C (-OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z.c)
 *     ?ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z @ 0x1800343B4 (-ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z.c)
 *     ?NotifyRepresentationChanged@CWindowData@@QEAAJXZ @ 0x1800369CC (-NotifyRepresentationChanged@CWindowData@@QEAAJXZ.c)
 *     ?EnsureTopLevelWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z @ 0x180036A6C (-EnsureTopLevelWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z.c)
 *     ?ShouldBeIncludedInOwnerSWR@CWindowData@@AEBA_NXZ @ 0x1800373B0 (-ShouldBeIncludedInOwnerSWR@CWindowData@@AEBA_NXZ.c)
 *     ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x180037860 (-PropagateDirtyChildren@CVisual@@QEAAXXZ.c)
 *     ?PropertiesAllowAutoParenting@CWindowData@@QEBA_NXZ @ 0x180038098 (-PropertiesAllowAutoParenting@CWindowData@@QEBA_NXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180038C6C (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?GetActiveStoryboardCount@CAnimationScheduler@@QEAAHXZ @ 0x18003A1C0 (-GetActiveStoryboardCount@CAnimationScheduler@@QEAAHXZ.c)
 *     ?UpdateAccent@CTopLevelWindow@@QEAAJ_N@Z @ 0x180045CD4 (-UpdateAccent@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x180050730 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?UpdateDesktopWindowReplacement@CWindowList@@AEAAJ_K@Z @ 0x180052CC4 (-UpdateDesktopWindowReplacement@CWindowList@@AEAAJ_K@Z.c)
 *     ?InternalRelease@?$ComPtr@VCVisualSurfaceProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800541A4 (-InternalRelease@-$ComPtr@VCVisualSurfaceProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Hide@CVisual@@QEAAXXZ @ 0x18005660C (-Hide@CVisual@@QEAAXXZ.c)
 *     ?Unhide@CVisual@@QEAAXXZ @ 0x180056ED4 (-Unhide@CVisual@@QEAAXXZ.c)
 *     ?SetHolographic@CTopLevelWindow@@QEAAJ_N@Z @ 0x180057A58 (-SetHolographic@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Capture_ItemClosedEventOnVisibility@@@details@wil@@QEAA_NXZ @ 0x180065124 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Capture_ItemClosedEventOnVisibili.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnColorizationUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x180107060 (-OnColorizationUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     ?ToggleAutoParenting@CWindowList@@AEAAJPEAVCWindowData@@@Z @ 0x18010CF94 (-ToggleAutoParenting@CWindowList@@AEAAJPEAVCWindowData@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::ShowHide(CWindowList *this, struct CWindowData *a2, char a3)
{
  char v3; // r15
  char v6; // al
  __int64 v7; // rdx
  __int64 v8; // r12
  int v9; // eax
  CWindowList *v10; // rcx
  unsigned int v11; // ebx
  int inserted; // eax
  unsigned int v14; // esi
  __int64 v15; // rdx
  __int64 v16; // rax
  char *v17; // rax
  char *v18; // r14
  struct CWindowData *v19; // rbx
  char v20; // si
  CWindowList *v21; // rcx
  __int64 v22; // rdx
  __int64 i; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rbx
  int v27; // eax
  __int64 j; // rbx
  __int64 v29; // rsi
  int v30; // eax
  __int64 k; // rbx
  int updated; // eax
  unsigned int v33; // ebx
  __int64 v34; // rbx
  int v35; // eax
  __int64 m; // rbx
  __int64 v37; // rbx
  int v38; // eax
  __int64 n; // rbx
  __int64 v40; // rbx
  double v41; // xmm6_8
  float v42; // xmm0_4
  __int64 v43; // rsi
  int v44; // eax
  __int64 ii; // rbx
  int v46; // eax
  __int64 jj; // rbx
  __int64 v48; // rbx
  int v49; // eax
  __int64 kk; // rbx
  CWindowIconic *v51; // rcx
  __int64 v52; // rbx
  CRenderDataVisual *v53; // rcx
  int v54; // eax
  __int64 mm; // rbx
  __int64 v56; // rbx
  int v57; // eax
  __int64 nn; // rbx
  CTopLevelWindow *v59; // rcx
  __int64 v60; // rax
  bool v61; // dl
  __int64 v62; // rbx
  int v63; // eax
  int v64; // eax
  struct CVisual *v65; // rdx
  __int64 v66; // rcx
  char v67; // al
  __int64 v68; // rcx
  char v69; // al
  int v70; // eax
  unsigned int v71; // ebx
  int v72; // eax
  unsigned int v73; // ebx
  CVisual *v74; // rcx
  int v75; // eax
  CVisual *v76; // rcx
  int v77; // eax
  int v78; // eax
  unsigned int v79; // ebx
  int v80; // eax
  unsigned int v81; // ebx
  int v82; // eax
  unsigned int v83; // ebx
  int v84; // eax
  unsigned int v85; // ebx
  CTopLevelWindow3D *v86; // rcx
  int v87; // eax
  unsigned int v88; // ebx
  __int64 v89; // rax
  bool v90; // al
  int v91; // esi
  __int64 v92; // rdx
  __int64 v93; // r8
  __int64 v94; // r9
  unsigned int v95; // ebx
  unsigned int v96; // r14d
  __int64 v97; // r15
  int v98; // eax
  int v99; // ebx
  CWindowData *v100; // rcx
  int v101; // eax
  CTransitionVisualController *v102; // r10
  int v103; // eax
  _QWORD *v104; // rax
  int v105; // eax
  unsigned int v106; // ebx
  int v107; // [rsp+28h] [rbp-79h]
  int v108; // [rsp+28h] [rbp-79h]
  int v109; // [rsp+28h] [rbp-79h]
  __int128 v110; // [rsp+38h] [rbp-69h] BYREF
  __int64 v111; // [rsp+48h] [rbp-59h]
  unsigned int v112; // [rsp+50h] [rbp-51h]
  __int64 Buffer; // [rsp+58h] [rbp-49h] BYREF
  __int64 v114; // [rsp+60h] [rbp-41h]
  __int128 v115; // [rsp+68h] [rbp-39h]
  __int128 v116; // [rsp+78h] [rbp-29h]
  __int128 v117; // [rsp+88h] [rbp-19h]
  __int64 v118; // [rsp+98h] [rbp-9h]
  char v119; // [rsp+A0h] [rbp-1h]
  wil::details::in1diag3 *retaddr; // [rsp+100h] [rbp+5Fh]
  bool v121; // [rsp+110h] [rbp+6Fh] BYREF
  char v122; // [rsp+118h] [rbp+77h]

  v122 = a3;
  v3 = a3;
  v6 = *((_BYTE *)a2 + 672) & 1;
  v121 = 0;
  v7 = *((_QWORD *)a2 + 5);
  v8 = 0LL;
  if ( v7 && v7 == *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 77) || !v6 )
  {
    v84 = CLivePreview::OnWindowShowHide(
            *((CLivePreview **)CDesktopManager::s_pDesktopManagerInstance + 57),
            a2,
            &v121,
            0);
    v85 = v84;
    if ( v84 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xBF7,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
        (const char *)(unsigned int)v84,
        v107);
      return v85;
    }
    if ( !v121 )
    {
      v86 = (CTopLevelWindow3D *)*((_QWORD *)a2 + 56);
      if ( v86 )
      {
        v87 = CTopLevelWindow3D::ShowWindow(v86, 0, 0);
        v88 = v87;
        if ( v87 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xBFD,
            (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
            (const char *)(unsigned int)v87,
            v107);
          return v88;
        }
      }
    }
  }
  else
  {
    v9 = CWindowList::EnsureTopLevelWindow(this, a2);
    v11 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xBBB,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
        (const char *)(unsigned int)v9,
        v107);
      return v11;
    }
    if ( *(struct CWindowData **)a2 == a2 )
    {
      if ( (*((_BYTE *)a2 + 678) & 0x10) != 0 )
      {
        inserted = CWindowList::ToggleAutoParenting(v10, a2);
        v14 = inserted;
        if ( inserted < 0 )
        {
          v15 = 8184LL;
LABEL_46:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v15,
            (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
            (const char *)(unsigned int)inserted,
            v107);
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xBBE,
            (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
            (const char *)v14,
            v108);
          return v14;
        }
      }
    }
    else
    {
      v16 = *((_QWORD *)a2 + 17);
      v114 = 0LL;
      v115 = 0LL;
      v118 = -1LL;
      v119 = 0;
      v116 = 0LL;
      v117 = 0LL;
      Buffer = v16;
      v17 = (char *)RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 8), &Buffer);
      v18 = v17 + 80;
      if ( !v17 )
        v18 = 0LL;
      v19 = a2;
      v20 = 1;
LABEL_13:
      v21 = (CWindowList *)*((_QWORD *)v19 + 3);
      if ( v21 )
      {
        if ( (*(unsigned __int8 (__fastcall **)(CWindowList *))(*(_QWORD *)v21 + 440LL))(v21) )
        {
          if ( CWindowData::PropertiesAllowAutoParenting(v19)
            && (*((_BYTE *)v19 + 677) & 0x10) == 0
            && !*((_QWORD *)v19 + 58)
            && (*((_BYTE *)v19 + 676) & 2) == 0 )
          {
            v22 = *((_QWORD *)v19 + 75);
            if ( (*(_BYTE *)(v22 + 672) & 1) != 0 && *(_QWORD *)(v22 + 440) && (*(_BYTE *)(v22 + 678) & 0x10) == 0 )
            {
              for ( i = *((_QWORD *)v19 + 1); (char *)i != v18; i = *(_QWORD *)(i + 8) )
              {
                if ( i == v22 )
                  goto LABEL_31;
                if ( (*(_BYTE *)(i + 672) & 1) != 0 )
                {
                  v21 = *(CWindowList **)(i + 440);
                  if ( v21 )
                  {
                    if ( *((_QWORD *)v21 + 3) )
                    {
                      if ( *(_QWORD *)(i + 600) == v22 && (*(_BYTE *)(i + 678) & 0x10) != 0 )
                      {
LABEL_31:
                        LOBYTE(v21) = 1;
                        goto LABEL_33;
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
      LOBYTE(v21) = 0;
LABEL_33:
      if ( (_BYTE)v21 == ((*((_BYTE *)v19 + 678) & 0x10) != 0) )
      {
        if ( v20 )
        {
          inserted = CWindowList::InsertIntoVisualTree(this, (struct _LIST_ENTRY *)v19);
          v14 = inserted;
          if ( inserted >= 0 )
            goto LABEL_38;
          v15 = 8207LL;
          goto LABEL_46;
        }
      }
      else
      {
        inserted = CWindowList::ToggleAutoParenting(v21, v19);
        v14 = inserted;
        if ( inserted < 0 )
        {
          v15 = 8200LL;
          goto LABEL_46;
        }
LABEL_38:
        while ( 1 )
        {
          v20 = 0;
          v24 = *(_QWORD *)v19;
          v19 = (struct CWindowData *)v24;
          if ( !v24 || (char *)v24 == v18 || (struct CWindowData *)v24 == a2 )
            break;
          if ( (*(_BYTE *)(v24 + 672) & 1) != 0 )
          {
            v25 = *(_QWORD *)(v24 + 440);
            if ( v25 )
            {
              if ( *(_QWORD *)(v25 + 24) )
                goto LABEL_13;
            }
          }
        }
      }
    }
    v26 = *((_QWORD *)a2 + 55);
    v27 = *(_DWORD *)(v26 + 88);
    if ( (v27 & 0x400000) == 0 )
    {
      *(_DWORD *)(v26 + 88) = v27 | 0x400000;
      for ( j = *(_QWORD *)(v26 + 24); j; j = *(_QWORD *)(j + 24) )
      {
        if ( (*(_BYTE *)(j + 88) & 1) != 0 )
          break;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)j + 32LL))(j);
      }
    }
    v29 = *((_QWORD *)a2 + 55);
    v30 = *(_DWORD *)(v29 + 88);
    if ( (v30 & 0x8000) == 0 )
    {
      *(_DWORD *)(v29 + 88) = v30 | 0x8000;
      for ( k = *(_QWORD *)(v29 + 24); k; k = *(_QWORD *)(k + 24) )
      {
        if ( (*(_BYTE *)(k + 88) & 1) != 0 )
          break;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)k + 32LL))(k);
      }
    }
    updated = CTopLevelWindow::UpdateRemoteAppRenderTargetOpacity((CTopLevelWindow *)v29);
    v33 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x64Fu, 0LL);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xBC2,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
        (const char *)v33,
        v109);
      return v33;
    }
    v34 = *((_QWORD *)a2 + 55);
    v35 = *(_DWORD *)(v34 + 88);
    if ( (v35 & 0x10000) == 0 )
    {
      *(_DWORD *)(v34 + 88) = v35 | 0x10000;
      for ( m = *(_QWORD *)(v34 + 24); m; m = *(_QWORD *)(m + 24) )
      {
        if ( (*(_BYTE *)(m + 88) & 1) != 0 )
          break;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)m + 32LL))(m);
      }
    }
    v37 = *((_QWORD *)a2 + 55);
    v38 = *(_DWORD *)(v37 + 88);
    if ( (v38 & 0x20000) == 0 )
    {
      *(_DWORD *)(v37 + 88) = v38 | 0x20000;
      for ( n = *(_QWORD *)(v37 + 24); n; n = *(_QWORD *)(n + 24) )
      {
        if ( (*(_BYTE *)(n + 88) & 1) != 0 )
          break;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)n + 32LL))(n);
      }
    }
    v40 = *((_QWORD *)a2 + 55);
    v41 = (double)*(unsigned __int8 *)(*(_QWORD *)(v40 + 752) + 408LL) / 255.0;
    if ( (*(_BYTE *)(*(_QWORD *)(v40 + 752) + 676LL) & 2) != 0 )
    {
      if ( v41 <= 0.0 )
      {
        CVisual::SetOpacity(*((CVisual **)a2 + 55), 1.0);
        CVisual::Hide((CVisual *)v40);
        *(_BYTE *)(v40 + 249) |= 0x40u;
      }
      else
      {
        if ( (*(_BYTE *)(v40 + 249) & 0x40) != 0 )
        {
          CVisual::Unhide(*((CVisual **)a2 + 55));
          *(_BYTE *)(v40 + 249) &= ~0x40u;
        }
        CVisual::SetOpacity((CVisual *)v40, v41);
      }
    }
    else
    {
      v42 = v41;
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)*(double *)(v40 + 192) - v42) & _xmm) > 0.0000011920929 )
      {
        *(double *)(v40 + 192) = v41;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v40 + 24LL))(v40, 32LL);
      }
    }
    v43 = *((_QWORD *)a2 + 55);
    v44 = *(_DWORD *)(v43 + 88);
    if ( (v44 & 0x40000) == 0 )
    {
      *(_DWORD *)(v43 + 88) = v44 | 0x40000;
      for ( ii = *(_QWORD *)(v43 + 24); ii; ii = *(_QWORD *)(ii + 24) )
      {
        if ( (*(_BYTE *)(ii + 88) & 1) != 0 )
          break;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)ii + 32LL))(ii);
      }
    }
    v46 = *(_DWORD *)(v43 + 88);
    if ( (v46 & 0x4000000) == 0 )
    {
      *(_DWORD *)(v43 + 88) = v46 | 0x4000000;
      for ( jj = *(_QWORD *)(v43 + 24); jj; jj = *(_QWORD *)(jj + 24) )
      {
        if ( (*(_BYTE *)(jj + 88) & 1) != 0 )
          break;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)jj + 32LL))(jj);
      }
    }
    v48 = *((_QWORD *)a2 + 55);
    if ( v48 )
    {
      v49 = *(_DWORD *)(v48 + 88);
      if ( (v49 & 0x100000) == 0 )
      {
        *(_DWORD *)(v48 + 88) = v49 | 0x100000;
        for ( kk = *(_QWORD *)(v48 + 24); kk; kk = *(_QWORD *)(kk + 24) )
        {
          if ( (*(_BYTE *)(kk + 88) & 1) != 0 )
            break;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)kk + 32LL))(kk);
        }
      }
    }
    v51 = (CWindowIconic *)*((_QWORD *)a2 + 61);
    if ( v51 )
      CWindowIconic::OnColorizationUpdated(v51, 1);
    v52 = *((_QWORD *)a2 + 55);
    v53 = *(CRenderDataVisual **)(v52 + 336);
    if ( v53 )
      CRenderDataVisual::ClearInstructions(v53);
    v54 = *(_DWORD *)(v52 + 88);
    if ( (v54 & 0x80000) == 0 )
    {
      *(_DWORD *)(v52 + 88) = v54 | 0x80000;
      for ( mm = *(_QWORD *)(v52 + 24); mm; mm = *(_QWORD *)(mm + 24) )
      {
        if ( (*(_BYTE *)(mm + 88) & 1) != 0 )
          break;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)mm + 32LL))(mm);
      }
    }
    v56 = *((_QWORD *)a2 + 55);
    v57 = *(_DWORD *)(v56 + 88);
    if ( (v57 & 0x4000) == 0 )
    {
      *(_DWORD *)(v56 + 88) = v57 | 0x4000;
      for ( nn = *(_QWORD *)(v56 + 24); nn; nn = *(_QWORD *)(nn + 24) )
      {
        if ( (*(_BYTE *)(nn + 88) & 1) != 0 )
          break;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)nn + 32LL))(nn);
      }
    }
    v59 = (CTopLevelWindow *)*((_QWORD *)a2 + 55);
    v60 = *((_QWORD *)v59 + 94);
    v61 = v60 && (*(_BYTE *)(v60 + 672) & 1) != 0 && (*(_BYTE *)(v60 + 676) & 1) == 0;
    CTopLevelWindow::UpdateAccent(v59, v61);
    v62 = *((_QWORD *)a2 + 55);
    v63 = *(_DWORD *)(v62 + 88);
    if ( (v63 & 0x4000) == 0 )
    {
      *(_DWORD *)(v62 + 88) = v63 | 0x4000;
      CVisual::PropagateDirtyChildren((CVisual *)v62);
    }
    v64 = *(_DWORD *)(v62 + 88);
    if ( (v64 & 0x100000) == 0 )
    {
      *(_DWORD *)(v62 + 88) = v64 | 0x100000;
      CVisual::PropagateDirtyChildren((CVisual *)v62);
    }
    v65 = *(struct CVisual **)(v62 + 320);
    if ( v65 )
    {
      VisualCollection::Remove((VisualCollection *)(*(_QWORD *)(v62 + 288) + 32LL), v65);
      Microsoft::WRL::ComPtr<CVisualSurfaceProxy>::InternalRelease(v62 + 320);
    }
    v66 = *((_QWORD *)a2 + 3);
    if ( v66 )
    {
      v67 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v66 + 296LL))(v66);
      CWindowList::SetExcludeFromDDA(this, *((struct IDwmWindow **)a2 + 3), v67);
    }
    v68 = *((_QWORD *)a2 + 3);
    if ( v68 )
    {
      v69 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v68 + 304LL))(v68);
      CWindowList::SetPassiveUpdateMode(this, *((struct IDwmWindow **)a2 + 3), v69);
    }
    if ( (*((_BYTE *)a2 + 677) & 2) != 0 )
    {
      v70 = CTopLevelWindow::SetHolographic(*((CTopLevelWindow **)a2 + 55), (*((_BYTE *)a2 + 677) & 2) != 0);
      v71 = v70;
      if ( v70 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xBD9,
          (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
          (const char *)(unsigned int)v70,
          v107);
        return v71;
      }
    }
    CWindowList::OnPositionChange(this, a2, 0);
    v72 = CWindowList::UpdateWindowScale((struct CWindowData **)this, a2, 0);
    v73 = v72;
    if ( v72 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xBDF,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
        (const char *)(unsigned int)v72,
        v107);
      return v73;
    }
    v74 = (CVisual *)*((_QWORD *)a2 + 55);
    if ( v74 )
    {
      v75 = *((_DWORD *)v74 + 22);
      if ( (v75 & 0x4000000) == 0 )
      {
        *((_DWORD *)v74 + 22) = v75 | 0x4000000;
        CVisual::PropagateDirtyChildren(v74);
      }
    }
    v76 = (CVisual *)*((_QWORD *)a2 + 55);
    if ( v76 )
    {
      v77 = *((_DWORD *)v76 + 22);
      if ( (*((_BYTE *)a2 + 673) & 0x20) != 0 )
      {
        if ( (v77 & 0x2000000) == 0 )
        {
          *((_DWORD *)v76 + 22) = v77 | 0x2000000;
          CVisual::PropagateDirtyChildren(v76);
        }
      }
      else
      {
        *((_DWORD *)v76 + 22) = v77 & 0xFDFFFFFF;
      }
    }
    v78 = CWindowList::UpdateThumbnailsForNewWindow(v76, a2);
    v79 = v78;
    if ( v78 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xBE3,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
        (const char *)(unsigned int)v78,
        v107);
      return v79;
    }
    v80 = CLivePreview::OnWindowShowHide(
            *((CLivePreview **)CDesktopManager::s_pDesktopManagerInstance + 57),
            a2,
            &v121,
            0);
    v81 = v80;
    if ( v80 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xBE7,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
        (const char *)(unsigned int)v80,
        v107);
      return v81;
    }
    CWindowList::ShowProjectionBorder(this, a2, *((_QWORD *)a2 + 58) != 0LL);
    if ( !v121 )
    {
      v82 = CTopLevelWindow3D::ShowWindow(
              *((CTopLevelWindow3D **)a2 + 56),
              1,
              *(_BYTE *)(*((_QWORD *)a2 + 55) + 844LL) == 0);
      v83 = v82;
      if ( v82 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xBF0,
          (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
          (const char *)(unsigned int)v82,
          v107);
        return v83;
      }
    }
  }
  v89 = *((_QWORD *)a2 + 75);
  v90 = v89 && *(char *)(v89 + 673) < 0 && CWindowData::ShouldBeIncludedInOwnerSWR(a2);
  if ( (*((_BYTE *)a2 + 674) & 1) != v90 )
    CWindowData::UpdateOwnerLists(a2, !(*((_BYTE *)a2 + 674) & 1));
  v91 = 0;
  if ( *((_DWORD *)a2 + 130) )
  {
    v110 = 0LL;
    v111 = 0LL;
    v112 = 0;
    if ( (int)DynArrayImpl<0>::AddMultipleAndSet((__int64)&v110, 8, *((_DWORD *)a2 + 130), *((_QWORD *)a2 + 62)) >= 0 )
    {
      v95 = 0;
      v96 = v112;
      if ( v112 )
      {
        v97 = v110;
        while ( 1 )
        {
          v98 = CSecondaryWindowRepresentation::OnRepresentationUpdated(
                  *(CSecondaryWindowRepresentation **)(v97 + 8LL * v95),
                  v92,
                  v93,
                  v94);
          v91 = v98;
          if ( v98 < 0 )
            break;
          if ( ++v95 >= v96 )
          {
            v3 = v122;
            goto LABEL_153;
          }
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v98, 0x535u, 0LL);
        DynArrayImpl<0>::~DynArrayImpl<0>(&v110);
        v99 = v91;
        goto LABEL_155;
      }
    }
LABEL_153:
    DynArrayImpl<0>::~DynArrayImpl<0>(&v110);
  }
  v99 = v91;
  if ( v91 < 0 )
  {
LABEL_155:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v91, 0x2EFu, 0LL);
LABEL_168:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC02,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
      (const char *)(unsigned int)v99,
      v107);
    return (unsigned int)v99;
  }
  v100 = (CWindowData *)*((_QWORD *)a2 + 75);
  if ( v100 )
  {
    v101 = CWindowData::NotifyRepresentationChanged(v100);
    v99 = v101;
    if ( v101 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v101, 0x2F2u, 0LL);
      goto LABEL_168;
    }
  }
  if ( *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 24)
    && *((_DWORD *)a2 + 33) != 1
    && (int)CAnimationScheduler::GetActiveStoryboardCount(*((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance
                                                          + 23)) > 0 )
  {
    CTransitionVisualController::_SetupHighZOrderStaticWindows(v102);
  }
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Capture_ItemClosedEventOnVisibility>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Capture_ItemClosedEventOnVisibility>::GetImpl'::`2'::impl) )
  {
    v103 = (*(__int64 (__fastcall **)(_QWORD, struct CWindowData *))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                      + 58)
                                                                   + 152LL))(
             *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 58),
             a2);
    v99 = v103;
    if ( v103 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v103, 0x2FDu, 0LL);
      goto LABEL_168;
    }
  }
  if ( v99 < 0 )
    goto LABEL_168;
  if ( !v3 )
    return 0LL;
  v114 = 0LL;
  v115 = 0LL;
  v118 = -1LL;
  v119 = 0;
  v116 = 0LL;
  v117 = 0LL;
  Buffer = *((_QWORD *)a2 + 17);
  v104 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 8), &Buffer);
  if ( v104 )
    v8 = v104[8];
  if ( *((_QWORD *)a2 + 5) != v8 )
    return 0LL;
  v105 = CWindowList::UpdateDesktopWindowReplacement(this, *((_QWORD *)a2 + 17));
  v106 = v105;
  if ( v105 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xC0C,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
    (const char *)(unsigned int)v105,
    v107);
  return v106;
}
