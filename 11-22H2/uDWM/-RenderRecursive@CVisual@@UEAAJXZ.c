/*
 * XREFs of ?RenderRecursive@CVisual@@UEAAJXZ @ 0x180047520
 * Callers:
 *     ?RecloneWindow@CDesktopThumbnailBase@@QEAAXPEAVCWindowData@@@Z @ 0x1800062D4 (-RecloneWindow@CDesktopThumbnailBase@@QEAAXPEAVCWindowData@@@Z.c)
 *     ?CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_NPEAPEAV1@@Z @ 0x1800063E0 (-CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_NPEAPEAV1@@Z.c)
 *     ?Initialize@CWindowSnapshot@@IEAAJPEAVCTopLevelWindow@@@Z @ 0x180006EA8 (-Initialize@CWindowSnapshot@@IEAAJPEAVCTopLevelWindow@@@Z.c)
 *     ?ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z @ 0x180008108 (-ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?UpdateProperties@CThumbnailVisual@@QEAAJK@Z @ 0x18000995C (-UpdateProperties@CThumbnailVisual@@QEAAJK@Z.c)
 *     ?OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z @ 0x18003211C (-OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z.c)
 *     ?SetColorizationParameters@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_SETCOLORIZATIONPARAMETERS@@@Z @ 0x180039458 (-SetColorizationParameters@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_SETCOLORIZATIONPARAMETER.c)
 *     ?SettingsChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE@@@Z @ 0x180039CEC (-SettingsChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE@@@Z.c)
 *     _lambda_6990cc1065daf1bb2b53d774e458881b_::operator() @ 0x180065200 (_lambda_6990cc1065daf1bb2b53d774e458881b_--operator().c)
 *     ?_ClearAnimationOpaqueVisuals@CLivePreview@@AEAAJXZ @ 0x1800C7B80 (-_ClearAnimationOpaqueVisuals@CLivePreview@@AEAAJXZ.c)
 *     CTransitionVisualController::ForEachOwnedWindow__lambda_6dbdf9e79a6466586a7973a857b99254___ @ 0x1800E9E28 (CTransitionVisualController--ForEachOwnedWindow__lambda_6dbdf9e79a6466586a7973a857b99254___.c)
 *     ?_RecursivelyRenderOwnedWindows@CTransitionVisualController@@IEAAXPEAVCWindowData@@@Z @ 0x1800EC684 (-_RecursivelyRenderOwnedWindows@CTransitionVisualController@@IEAAXPEAVCWindowData@@@Z.c)
 *     ?_RestoreWindowVisual@CTransitionVisualController@@IEAAJPEAVCWindowData@@@Z @ 0x1800EC6C8 (-_RestoreWindowVisual@CTransitionVisualController@@IEAAJPEAVCWindowData@@@Z.c)
 *     ?OnAlphaUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x180106FE0 (-OnAlphaUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     ?OnColorizationUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x180107060 (-OnColorizationUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     ?OnIconUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x180107194 (-OnIconUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     ?OnTitleUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x18010731C (-OnTitleUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     ?OnWindowStyleUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x1801073E8 (-OnWindowStyleUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     ?SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z @ 0x180107634 (-SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z.c)
 *     ?UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z @ 0x180107A2C (-UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CVisual::RenderRecursive(CVisual *this)
{
  int v1; // r15d
  unsigned int v3; // edi
  int v4; // eax
  int v6; // r15d
  char v7; // bp
  __int64 v8; // rsi
  __int64 v9; // rcx
  int v10; // eax
  unsigned int v11; // r14d
  int v12; // eax
  unsigned int v13; // edi
  int v14; // eax
  unsigned int v15; // ebx
  int v16; // [rsp+20h] [rbp-18h]
  int v17; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( (*((_DWORD *)this + 22) & 0xFFFFFFFE) != 0
    && (v12 = (*(__int64 (__fastcall **)(CVisual *))(*(_QWORD *)this + 48LL))(this), v13 = v12, v12 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x143,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\visual.cpp",
      (const char *)(unsigned int)v12,
      v16);
    return v13;
  }
  else
  {
    v3 = 0;
    v17 = v1;
    while ( 1 )
    {
      v4 = *((_DWORD *)this + 22);
      if ( (v4 & 1) == 0 || v3 >= 3 )
        break;
      v6 = *((_DWORD *)this + 20);
      ++v3;
      v7 = 0;
      LODWORD(v8) = -1;
      while ( 1 )
      {
        if ( !v7 )
        {
          LODWORD(v8) = *((_DWORD *)this + 18);
          v7 = 1;
        }
        v8 = (unsigned int)(v8 - 1);
        if ( (_DWORD)v8 == -1 )
          break;
        v9 = *(_QWORD *)(*((_QWORD *)this + 6) + 8 * v8);
        v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 64LL))(v9);
        v11 = v10;
        if ( v10 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x150,
            (unsigned int)"clientcore\\windows\\dwm\\udwm\\visual.cpp",
            (const char *)(unsigned int)v10,
            v17);
          return v11;
        }
      }
      if ( v6 == *((_DWORD *)this + 20) )
        *((_DWORD *)this + 22) &= ~1u;
    }
    if ( (v4 & 0xFFFFFFFE) != 0
      && (v14 = (*(__int64 (__fastcall **)(CVisual *))(*(_QWORD *)this + 56LL))(this), v15 = v14, v14 < 0) )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x165,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\visual.cpp",
        (const char *)(unsigned int)v14,
        v17);
      return v15;
    }
    else
    {
      return 0LL;
    }
  }
}
