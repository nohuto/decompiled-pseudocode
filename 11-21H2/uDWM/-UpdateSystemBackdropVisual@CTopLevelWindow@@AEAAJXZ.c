/*
 * XREFs of ?UpdateSystemBackdropVisual@CTopLevelWindow@@AEAAJXZ @ 0x180033FB4
 * Callers:
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x180033080 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x18000CD38 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z @ 0x18002440C (-SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?IsHighContrastMode@CDesktopManager@@SA_NXZ @ 0x180031960 (-IsHighContrastMode@CDesktopManager@@SA_NXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180034D80 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?UpdateSystemBackdropVisualBorderRect@CTopLevelWindow@@AEAAJXZ @ 0x180062F14 (-UpdateSystemBackdropVisualBorderRect@CTopLevelWindow@@AEAAJXZ.c)
 *     ?Create@CSystemBackdropVisual@@SAJPEAPEAV1@@Z @ 0x1800E0FF0 (-Create@CSystemBackdropVisual@@SAJPEAPEAV1@@Z.c)
 *     ?UpdateBrush@CSystemBackdropVisual@@QEAAJ_N000@Z @ 0x1800E1C64 (-UpdateBrush@CSystemBackdropVisual@@QEAAJ_N000@Z.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateSystemBackdropVisual(
        CTopLevelWindow *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  struct CVisual **v4; // rbx
  struct CVisual *v5; // rdx
  CTopLevelWindow *v6; // rdi
  int inserted; // esi
  __int64 v8; // rdx
  CVisual *v10; // rcx
  CSystemBackdropVisual *v11; // rsi
  bool v12; // bl
  bool IsHighContrastMode; // al
  int updated; // ebx
  __int64 v15; // rdx
  struct _MARGINS v16; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v4 = (struct CVisual **)((char *)this + 304);
  v5 = (struct CVisual *)*((_QWORD *)this + 38);
  v6 = this;
  if ( *(_DWORD *)(*((_QWORD *)this + 94) + 204LL) == 1 )
  {
    if ( !v5 )
    {
      inserted = CSystemBackdropVisual::Create((struct CSystemBackdropVisual **)this + 38);
      if ( inserted < 0 )
      {
        v8 = 339LL;
LABEL_5:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v8,
          (int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow.cpp",
          (const char *)(unsigned int)inserted);
        return (unsigned int)inserted;
      }
      inserted = VisualCollection::InsertRelative((VisualCollection *)(*((_QWORD *)v6 + 34) + 32LL), *v4, 0LL, 1, 1);
      if ( inserted < 0 )
      {
        v8 = 342LL;
        goto LABEL_5;
      }
      v10 = *v4;
      v16 = 0LL;
      CVisual::SetInsetFromParent(v10, &v16);
    }
  }
  else if ( v5 )
  {
    inserted = VisualCollection::Remove((VisualCollection *)(*((_QWORD *)this + 34) + 32LL), v5);
    if ( inserted < 0 )
    {
      v8 = 352LL;
      goto LABEL_5;
    }
    this = *v4;
    if ( *v4 )
    {
      *v4 = 0LL;
      CBaseObject::Release(this);
    }
  }
  v11 = *v4;
  if ( *v4 )
  {
    v12 = (*(_BYTE *)(*((_QWORD *)v6 + 94) + 669LL) & 4) != 0;
    IsHighContrastMode = CDesktopManager::IsHighContrastMode((__int64)this, (__int64)v5, a3, a4);
    updated = CSystemBackdropVisual::UpdateBrush(
                v11,
                (*(_BYTE *)(*((_QWORD *)v6 + 94) + 664LL) & 2) != 0,
                *(_BYTE *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 52) + 657LL),
                IsHighContrastMode,
                v12);
    if ( updated < 0 )
    {
      v15 = 363LL;
LABEL_17:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v15,
        (int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow.cpp",
        (const char *)(unsigned int)updated);
      return (unsigned int)updated;
    }
    updated = CTopLevelWindow::UpdateSystemBackdropVisualBorderRect(v6);
    if ( updated < 0 )
    {
      v15 = 365LL;
      goto LABEL_17;
    }
  }
  return 0LL;
}
