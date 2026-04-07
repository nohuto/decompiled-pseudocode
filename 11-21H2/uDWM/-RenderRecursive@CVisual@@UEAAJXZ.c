/*
 * XREFs of ?RenderRecursive@CVisual@@UEAAJXZ @ 0x18001C2D0
 * Callers:
 *     ?ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z @ 0x180006AA0 (-ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?SetColorizationParameters@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_SETCOLORIZATIONPARAMETERS@@@Z @ 0x18000AFD0 (-SetColorizationParameters@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_SETCOLORIZATIONPARAMETER.c)
 *     ?Initialize@CWindowSnapshot@@IEAAJPEAVCTopLevelWindow@@@Z @ 0x18001BEAC (-Initialize@CWindowSnapshot@@IEAAJPEAVCTopLevelWindow@@@Z.c)
 *     ?UpdateProperties@CThumbnailVisual@@QEAAJK@Z @ 0x18001CBFC (-UpdateProperties@CThumbnailVisual@@QEAAJK@Z.c)
 *     ?SettingsChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE@@@Z @ 0x18001D898 (-SettingsChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE@@@Z.c)
 *     ?OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z @ 0x180023C58 (-OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z.c)
 *     ?UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z @ 0x18004ABB8 (-UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z.c)
 *     ?OnWindowStyleUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x18004B2A0 (-OnWindowStyleUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     ?OnIconUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x18004B578 (-OnIconUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     ?OnTitleUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x18004B5F4 (-OnTitleUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     ?OnAlphaUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x18004B6D0 (-OnAlphaUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     ?OnColorizationUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x18004B728 (-OnColorizationUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     ?SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z @ 0x18004B790 (-SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z.c)
 *     wistd::__function::__func__lambda_044de6e8757de13608340bdff9bfffd6__void___cdecl(int_const_&)_::operator() @ 0x18005EF20 (wistd--__function--__func__lambda_044de6e8757de13608340bdff9bfffd6__void___cdecl(in_ea_18005EF20.c)
 *     ?StartAnimationShowOrHide@CAcrylicSheet@@QEAAJW4AcrylicSheetAnimationType@@@Z @ 0x18009AC60 (-StartAnimationShowOrHide@CAcrylicSheet@@QEAAJW4AcrylicSheetAnimationType@@@Z.c)
 *     ?RecloneWindow@CDesktopThumbnailBase@@QEAAXPEAVCWindowData@@@Z @ 0x1800B2DC0 (-RecloneWindow@CDesktopThumbnailBase@@QEAAXPEAVCWindowData@@@Z.c)
 *     ?_ClearAnimationOpaqueVisuals@CLivePreview@@AEAAJXZ @ 0x1800C328C (-_ClearAnimationOpaqueVisuals@CLivePreview@@AEAAJXZ.c)
 *     ?CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z @ 0x1800E43A4 (-CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z.c)
 *     CTransitionVisualController::ForEachOwnedWindow__lambda_6dbdf9e79a6466586a7973a857b99254___ @ 0x1800E965C (CTransitionVisualController--ForEachOwnedWindow__lambda_6dbdf9e79a6466586a7973a857b99254___.c)
 *     ?_RecursivelyRenderOwnedWindows@CTransitionVisualController@@IEAAXPEAVCWindowData@@@Z @ 0x1800EF018 (-_RecursivelyRenderOwnedWindows@CTransitionVisualController@@IEAAXPEAVCWindowData@@@Z.c)
 *     ?_RestoreWindowVisual@CTransitionVisualController@@IEAAJPEAVCWindowData@@@Z @ 0x1800EF0B0 (-_RestoreWindowVisual@CTransitionVisualController@@IEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::RenderRecursive(CVisual *this)
{
  unsigned int v2; // edi
  int v3; // eax
  int v5; // r15d
  char v6; // bp
  __int64 v7; // rsi
  __int64 v8; // rcx
  int v9; // eax
  unsigned int v10; // r14d
  int v11; // eax
  unsigned int v12; // edi
  int v13; // eax
  unsigned int v14; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( (*((_DWORD *)this + 22) & 0xFFFFFFFE) != 0
    && (v11 = (*(__int64 (__fastcall **)(CVisual *))(*(_QWORD *)this + 48LL))(this), v12 = v11, v11 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x143,
      (int)"clientcore\\windows\\dwm\\udwm\\visual.cpp",
      (const char *)(unsigned int)v11);
    return v12;
  }
  else
  {
    v2 = 0;
    while ( 1 )
    {
      v3 = *((_DWORD *)this + 22);
      if ( (v3 & 1) == 0 || v2 >= 3 )
        break;
      v5 = *((_DWORD *)this + 20);
      ++v2;
      v6 = 0;
      LODWORD(v7) = -1;
      while ( 1 )
      {
        if ( !v6 )
        {
          LODWORD(v7) = *((_DWORD *)this + 18);
          v6 = 1;
        }
        v7 = (unsigned int)(v7 - 1);
        if ( (_DWORD)v7 == -1 )
          break;
        v8 = *(_QWORD *)(*((_QWORD *)this + 6) + 8 * v7);
        v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 64LL))(v8);
        v10 = v9;
        if ( v9 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x150,
            (int)"clientcore\\windows\\dwm\\udwm\\visual.cpp",
            (const char *)(unsigned int)v9);
          return v10;
        }
      }
      if ( v5 == *((_DWORD *)this + 20) )
        *((_DWORD *)this + 22) &= ~1u;
    }
    if ( (v3 & 0xFFFFFFFE) != 0
      && (v13 = (*(__int64 (__fastcall **)(CVisual *))(*(_QWORD *)this + 56LL))(this), v14 = v13, v13 < 0) )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x165,
        (int)"clientcore\\windows\\dwm\\udwm\\visual.cpp",
        (const char *)(unsigned int)v13);
      return v14;
    }
    else
    {
      return 0LL;
    }
  }
}
