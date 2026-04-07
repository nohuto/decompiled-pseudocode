/*
 * XREFs of ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x180031C90
 * Callers:
 *     ?CloakChange@CWindowList@@UEAAJPEAUIDwmWindow@@0_N@Z @ 0x18000EE60 (-CloakChange@CWindowList@@UEAAJPEAUIDwmWindow@@0_N@Z.c)
 *     ?ShowHide@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18001D680 (-ShowHide@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18001EFD0 (-ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180032710 (-CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z @ 0x1800EDF64 (-RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ShowProjectionBorder@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x18000F014 (-ShowProjectionBorder@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?UpdateThumbnailsForNewWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z @ 0x180010240 (-UpdateThumbnailsForNewWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z.c)
 *     ?SetHolographic@CTopLevelWindow@@QEAAJ_N@Z @ 0x180012904 (-SetHolographic@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?OnAccentPolicyUpdated@CTopLevelWindow@@QEAAXXZ @ 0x180017084 (-OnAccentPolicyUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ?UpdateDesktopWindowReplacement@CWindowList@@AEAAJ_K@Z @ 0x1800176A4 (-UpdateDesktopWindowReplacement@CWindowList@@AEAAJ_K@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001DB80 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?OnVisibilityUpdated@CWindowData@@QEAAJXZ @ 0x18001F7F8 (-OnVisibilityUpdated@CWindowData@@QEAAJXZ.c)
 *     ?SetExcludeFromDDA@CWindowList@@UEAAJPEAUIDwmWindow@@_N@Z @ 0x18001FE70 (-SetExcludeFromDDA@CWindowList@@UEAAJPEAUIDwmWindow@@_N@Z.c)
 *     ?SetPassiveUpdateMode@CWindowList@@UEAAJPEAUIDwmWindow@@_N@Z @ 0x18001FF60 (-SetPassiveUpdateMode@CWindowList@@UEAAJPEAUIDwmWindow@@_N@Z.c)
 *     ?OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z @ 0x180023C58 (-OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z.c)
 *     ?OnWindowStyleUpdated@CTopLevelWindow@@QEAAJXZ @ 0x180023E74 (-OnWindowStyleUpdated@CTopLevelWindow@@QEAAJXZ.c)
 *     ?OnSourceConstantAlphaUpdated@CTopLevelWindow@@QEAAXXZ @ 0x180023F78 (-OnSourceConstantAlphaUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x18002730C (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?ReevaluateAutoParenting@CWindowList@@AEAAJPEAVCWindowData@@_N@Z @ 0x180030AC4 (-ReevaluateAutoParenting@CWindowList@@AEAAJPEAVCWindowData@@_N@Z.c)
 *     ?UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z @ 0x180030C00 (-UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z.c)
 *     ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x180034B64 (-PropagateDirtyChildren@CVisual@@QEAAXXZ.c)
 *     ?ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z @ 0x180035B2C (-ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z.c)
 *     ?OnColorizationUpdated@CWindowData@@QEAAXXZ @ 0x180035D2C (-OnColorizationUpdated@CWindowData@@QEAAXXZ.c)
 *     ?OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z @ 0x180035F78 (-OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?EnsureTopLevelWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z @ 0x180038808 (-EnsureTopLevelWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowList::ShowHide(CWindowList *this, struct CWindowData *a2, char a3)
{
  __int64 v4; // rcx
  char v5; // al
  int updated; // edi
  CVisual *v9; // rdi
  int v10; // eax
  CVisual *v11; // rcx
  __int64 v12; // rdi
  CRenderDataVisual *v13; // rcx
  int v14; // eax
  CVisual *v15; // rdi
  int v16; // eax
  __int64 v17; // rcx
  char v18; // al
  __int64 v19; // rcx
  char v20; // al
  CWindowList *v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rax
  _QWORD *v24; // rax
  CTopLevelWindow3D *v26; // rcx
  int v27; // eax
  unsigned int v28; // ebx
  CVisual *v29; // rcx
  __int64 v30; // rdx
  _QWORD Buffer[2]; // [rsp+20h] [rbp-60h] BYREF
  __int128 v32; // [rsp+30h] [rbp-50h]
  __int128 v33; // [rsp+40h] [rbp-40h]
  __int128 v34; // [rsp+50h] [rbp-30h]
  __int64 v35; // [rsp+60h] [rbp-20h]
  char v36; // [rsp+68h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]
  bool v38; // [rsp+A8h] [rbp+28h] BYREF

  v4 = *((_QWORD *)a2 + 5);
  v5 = *((_BYTE *)a2 + 664) & 1;
  v38 = 0;
  if ( v4 && v4 == *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 75) || !v5 )
  {
    updated = CLivePreview::OnWindowShowHide(
                *((CLivePreview **)CDesktopManager::s_pDesktopManagerInstance + 55),
                a2,
                &v38,
                0);
    if ( updated < 0 )
    {
      v30 = 2977LL;
      goto LABEL_48;
    }
    if ( v38 )
      goto LABEL_32;
    v26 = (CTopLevelWindow3D *)*((_QWORD *)a2 + 56);
    if ( !v26 )
      goto LABEL_32;
    updated = CTopLevelWindow3D::ShowWindow(v26, 0, 0);
    if ( updated >= 0 )
      goto LABEL_32;
    v30 = 2983LL;
LABEL_48:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v30,
      (int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
      (const char *)(unsigned int)updated);
    return (unsigned int)updated;
  }
  updated = CWindowList::EnsureTopLevelWindow(this, a2);
  if ( updated < 0 )
  {
    v30 = 2917LL;
    goto LABEL_48;
  }
  updated = CWindowList::ReevaluateAutoParenting(this, a2, 1);
  if ( updated < 0 )
  {
    v30 = 2920LL;
    goto LABEL_48;
  }
  CVisual::SetDirtyFlags(*((CVisual **)a2 + 55), 0x400000);
  updated = CTopLevelWindow::OnWindowStyleUpdated(*((CTopLevelWindow **)a2 + 55));
  if ( updated < 0 )
  {
    v30 = 2924LL;
    goto LABEL_48;
  }
  CVisual::SetDirtyFlags(*((CVisual **)a2 + 55), 0x10000);
  CVisual::SetDirtyFlags(*((CVisual **)a2 + 55), 0x20000);
  CTopLevelWindow::OnSourceConstantAlphaUpdated(*((CTopLevelWindow **)a2 + 55));
  v9 = (CVisual *)*((_QWORD *)a2 + 55);
  v10 = *((_DWORD *)v9 + 22);
  if ( (v10 & 0x40000) == 0 )
  {
    v11 = (CVisual *)*((_QWORD *)a2 + 55);
    *((_DWORD *)v9 + 22) = v10 | 0x40000;
    CVisual::PropagateDirtyChildren(v11);
    v10 = *((_DWORD *)v9 + 22);
  }
  if ( (v10 & 0x4000000) == 0 )
  {
    *((_DWORD *)v9 + 22) = v10 | 0x4000000;
    CVisual::PropagateDirtyChildren(v9);
  }
  CWindowData::OnColorizationUpdated(a2);
  v12 = *((_QWORD *)a2 + 55);
  v13 = *(CRenderDataVisual **)(v12 + 312);
  if ( v13 )
    CRenderDataVisual::ClearInstructions(v13);
  v14 = *(_DWORD *)(v12 + 88);
  if ( (v14 & 0x80000) == 0 )
  {
    *(_DWORD *)(v12 + 88) = v14 | 0x80000;
    CVisual::PropagateDirtyChildren((CVisual *)v12);
  }
  CVisual::SetDirtyFlags(*((CVisual **)a2 + 55), 0x4000);
  CTopLevelWindow::OnAccentPolicyUpdated(*((CTopLevelWindow **)a2 + 55));
  v15 = (CVisual *)*((_QWORD *)a2 + 55);
  v16 = *((_DWORD *)v15 + 22);
  if ( (v16 & 0x4000) == 0 )
  {
    v29 = (CVisual *)*((_QWORD *)a2 + 55);
    *((_DWORD *)v15 + 22) = v16 | 0x4000;
    CVisual::PropagateDirtyChildren(v29);
    v16 = *((_DWORD *)v15 + 22);
  }
  if ( (v16 & 0x100000) == 0 )
  {
    *((_DWORD *)v15 + 22) = v16 | 0x100000;
    CVisual::PropagateDirtyChildren(v15);
  }
  v17 = *((_QWORD *)a2 + 3);
  if ( v17 )
  {
    v18 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 296LL))(v17);
    CWindowList::SetExcludeFromDDA(this, *((struct IDwmWindow **)a2 + 3), v18);
    v19 = *((_QWORD *)a2 + 3);
    if ( v19 )
    {
      v20 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 304LL))(v19);
      CWindowList::SetPassiveUpdateMode(this, *((struct IDwmWindow **)a2 + 3), v20);
    }
  }
  if ( (*((_BYTE *)a2 + 669) & 2) != 0 )
  {
    updated = CTopLevelWindow::SetHolographic(*((CTopLevelWindow **)a2 + 55), (*((_BYTE *)a2 + 669) & 2) != 0);
    if ( updated < 0 )
    {
      v30 = 2947LL;
      goto LABEL_48;
    }
  }
  CWindowList::OnPositionChange(this, a2, 0);
  updated = CWindowList::UpdateWindowScale((struct CWindowData **)this, a2, 0);
  if ( updated < 0 )
  {
    v30 = 2953LL;
    goto LABEL_48;
  }
  if ( *((_QWORD *)a2 + 55) )
  {
    CVisual::SetDirtyFlags(*((CVisual **)a2 + 55), 0x4000000);
    v22 = *((_QWORD *)a2 + 55);
    if ( v22 )
    {
      if ( (*((_BYTE *)a2 + 665) & 0x20) != 0 )
        CVisual::SetDirtyFlags(*((CVisual **)a2 + 55), 0x2000000);
      else
        *(_DWORD *)(v22 + 88) &= ~0x2000000u;
    }
  }
  updated = CWindowList::UpdateThumbnailsForNewWindow(v21, a2);
  if ( updated < 0 )
  {
    v30 = 2957LL;
    goto LABEL_48;
  }
  updated = CLivePreview::OnWindowShowHide(
              *((CLivePreview **)CDesktopManager::s_pDesktopManagerInstance + 55),
              a2,
              &v38,
              0);
  if ( updated < 0 )
  {
    v30 = 2961LL;
    goto LABEL_48;
  }
  CWindowList::ShowProjectionBorder(this, a2, *((_QWORD *)a2 + 58) != 0LL);
  if ( !v38 )
  {
    updated = CTopLevelWindow3D::ShowWindow(
                *((CTopLevelWindow3D **)a2 + 56),
                1,
                *(_BYTE *)(*((_QWORD *)a2 + 55) + 865LL) == 0);
    if ( updated < 0 )
    {
      v30 = 2970LL;
      goto LABEL_48;
    }
  }
LABEL_32:
  updated = CWindowData::OnVisibilityUpdated((CWindowData **)a2);
  if ( updated < 0 )
  {
    v30 = 2988LL;
    goto LABEL_48;
  }
  if ( !a3 )
    return 0LL;
  v23 = *((_QWORD *)a2 + 17);
  Buffer[1] = 0LL;
  v35 = -1LL;
  v32 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  Buffer[0] = v23;
  v36 = 0;
  v24 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 8), Buffer);
  if ( v24 )
    v24 = (_QWORD *)v24[8];
  if ( *((_QWORD **)a2 + 5) != v24 )
    return 0LL;
  v27 = CWindowList::UpdateDesktopWindowReplacement(this, *((_QWORD *)a2 + 17));
  v28 = v27;
  if ( v27 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xBB6,
    (int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
    (const char *)(unsigned int)v27);
  return v28;
}
