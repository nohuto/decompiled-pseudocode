/*
 * XREFs of ?UpdateSystemBackdropVisual@CTopLevelWindow@@AEAAJXZ @ 0x180023B04
 * Callers:
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x180026220 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?EnableTreatment@CWindowBackgroundTreatmentVisual@@QEAAXXZ @ 0x180012F18 (-EnableTreatment@CWindowBackgroundTreatmentVisual@@QEAAXXZ.c)
 *     ?SetState@CSystemBackdropVisual@@AEAAJW4BackdropState@1@_N@Z @ 0x180017E90 (-SetState@CSystemBackdropVisual@@AEAAJW4BackdropState@1@_N@Z.c)
 *     ?Create@CSystemBackdropVisual@@SAJW4SYSTEMBACKDROP_TYPE@@PEAPEAV1@@Z @ 0x180019068 (-Create@CSystemBackdropVisual@@SAJW4SYSTEMBACKDROP_TYPE@@PEAPEAV1@@Z.c)
 *     ?IsHighContrastMode@CDesktopManager@@SA_NXZ @ 0x18001B540 (-IsHighContrastMode@CDesktopManager@@SA_NXZ.c)
 *     ?GetEffectiveSystemBackdropType@CTopLevelWindow@@AEBA?AW4SYSTEMBACKDROP_TYPE@@XZ @ 0x18001C800 (-GetEffectiveSystemBackdropType@CTopLevelWindow@@AEBA-AW4SYSTEMBACKDROP_TYPE@@XZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180022C70 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z @ 0x180042020 (-SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x180050730 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?ResizeVisualToTitlebar@CTopLevelWindow@@AEAAJPEAVCVisual@@@Z @ 0x180052010 (-ResizeVisualToTitlebar@CTopLevelWindow@@AEAAJPEAVCVisual@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCVisualSurfaceProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800541A4 (-InternalRelease@-$ComPtr@VCVisualSurfaceProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateSystemBackdropVisual(CTopLevelWindow *this, __int64 a2)
{
  int v3; // esi
  unsigned __int64 *v4; // rdi
  struct CVisual *v5; // rdx
  CVisual *v6; // rcx
  int EffectiveSystemBackdropType; // ebp
  int inserted; // ebp
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdi
  char v13; // bp
  int v14; // eax
  int v15; // eax
  unsigned int v16; // ebx
  __int64 v17; // rdx
  DWORD SysColor; // eax
  int v19; // [rsp+20h] [rbp-28h]
  int v20; // [rsp+20h] [rbp-28h]
  struct _MARGINS v21; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v3 = 1;
  if ( (unsigned int)(*((_DWORD *)this + 210) - 2) > 2 )
  {
    v4 = (unsigned __int64 *)((char *)this + 320);
    v5 = (struct CVisual *)*((_QWORD *)this + 40);
    if ( !v5 )
      goto LABEL_3;
    inserted = VisualCollection::Remove((VisualCollection *)(*((_QWORD *)this + 36) + 32LL), v5);
    if ( inserted >= 0 )
    {
      Microsoft::WRL::ComPtr<CVisualSurfaceProxy>::InternalRelease(v4);
      goto LABEL_3;
    }
    v17 = 360LL;
LABEL_31:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow.cpp",
      (const char *)(unsigned int)inserted,
      v19);
    return (unsigned int)inserted;
  }
  EffectiveSystemBackdropType = CTopLevelWindow::GetEffectiveSystemBackdropType((__int64)this, a2);
  if ( EffectiveSystemBackdropType == 3 )
    CWindowBackgroundTreatmentVisual::EnableTreatment(*((CWindowBackgroundTreatmentVisual **)this + 33));
  v4 = (unsigned __int64 *)((char *)this + 320);
  if ( !*((_QWORD *)this + 40) )
  {
    Microsoft::WRL::ComPtr<CVisualSurfaceProxy>::InternalRelease((char *)this + 320);
    inserted = CSystemBackdropVisual::Create(EffectiveSystemBackdropType, (CSystemBackdropVisual **)this + 40);
    if ( inserted < 0 )
    {
      v17 = 342LL;
    }
    else
    {
      inserted = VisualCollection::InsertRelative(
                   (VisualCollection *)(*((_QWORD *)this + 36) + 32LL),
                   *v4,
                   0LL,
                   1u,
                   v19);
      if ( inserted >= 0 )
        goto LABEL_3;
      v17 = 345LL;
    }
    goto LABEL_31;
  }
LABEL_3:
  v6 = (CVisual *)*v4;
  if ( !*v4 )
    return 0LL;
  if ( *((_DWORD *)this + 210) != 4 )
  {
    v21 = 0LL;
    CVisual::SetInsetFromParent(v6, &v21);
    goto LABEL_13;
  }
  inserted = CTopLevelWindow::ResizeVisualToTitlebar(this, (struct CVisual *)*v4);
  if ( inserted < 0 )
  {
    v17 = 369LL;
    goto LABEL_31;
  }
LABEL_13:
  v12 = *v4;
  v13 = (*(_BYTE *)(*((_QWORD *)this + 94) + 677LL) & 4) != 0;
  if ( (unsigned __int8)CDesktopManager::IsHighContrastMode(v11, v10) )
  {
    v3 = 3;
  }
  else if ( (*(_BYTE *)(*((_QWORD *)this + 94) + 672LL) & 2) == 0
         || !*(_BYTE *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 54) + 641LL) )
  {
    v3 = 2;
  }
  v14 = *(_DWORD *)(v12 + 284);
  if ( v14 == v3 && *(_BYTE *)(v12 + 280) == v13 && v3 != 3 )
    return 0LL;
  if ( v14 == 3 && v3 == 3 )
  {
    SysColor = GetSysColor(5);
    if ( *(_BYTE *)(v12 + 288) == 0xFF
      && *(_WORD *)(v12 + 289) == (_WORD)SysColor
      && *(_BYTE *)(v12 + 291) == BYTE2(SysColor) )
    {
      return 0LL;
    }
  }
  v15 = CSystemBackdropVisual::SetState(v12, v3, v13);
  v16 = v15;
  if ( v15 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x53,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\systembackdropvisual.cpp",
    (const char *)(unsigned int)v15,
    v19);
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x17D,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow.cpp",
    (const char *)v16,
    v20);
  return v16;
}
