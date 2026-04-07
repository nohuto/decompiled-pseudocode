/*
 * XREFs of ?UpdateAccent@CTopLevelWindow@@QEAAJ_N@Z @ 0x1800170B4
 * Callers:
 *     ?OnAccentPolicyUpdated@CTopLevelWindow@@QEAAXXZ @ 0x180017084 (-OnAccentPolicyUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ?OnWindowCloakChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@_N2@Z @ 0x1800D0FFC (-OnWindowCloakChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@_N2@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UnregisterAccentState@CWindowList@@QEAAXPEAVCWindowData@@@Z @ 0x180008B2C (-UnregisterAccentState@CWindowList@@QEAAXPEAVCWindowData@@@Z.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x18000CD38 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?Create@CAccent@@SAJPEAPEAV1@@Z @ 0x180016F30 (-Create@CAccent@@SAJPEAPEAV1@@Z.c)
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z @ 0x180017244 (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z.c)
 *     ?SetParentVisible@CAccent@@QEAAX_N@Z @ 0x180017598 (-SetParentVisible@CAccent@@QEAAX_N@Z.c)
 *     ?RegisterAccentState@CWindowList@@QEAAXPEAVCWindowData@@W4ACCENT_STATE@@@Z @ 0x1800175E8 (-RegisterAccentState@CWindowList@@QEAAXPEAVCWindowData@@W4ACCENT_STATE@@@Z.c)
 *     ?UpdateAcrylicBackgroundBrush@CAccent@@IEAAJXZ @ 0x180018E0C (-UpdateAcrylicBackgroundBrush@CAccent@@IEAAJXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180034D80 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?GetTransparentGradientColorForAccent@CTopLevelWindow@@AEBAKXZ @ 0x1800E5124 (-GetTransparentGradientColorForAccent@CTopLevelWindow@@AEBAKXZ.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateAccent(CTopLevelWindow *this, bool a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rdx
  int v6; // eax
  struct CVisual **v8; // rsi
  struct CVisual *v9; // r8
  int inserted; // eax
  struct CVisual *v11; // rcx
  int updated; // eax
  __int64 v13; // rcx
  __int64 v14; // rax
  struct CWindowData *v15; // rdx
  CWindowList *v16; // rcx
  int v17; // r9d
  CBaseObject *v18; // rcx
  unsigned int v19; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = 0;
  v4 = *((_QWORD *)this + 94);
  v6 = *(_DWORD *)(v4 + 168);
  if ( !v6 || v6 == 6 )
  {
    if ( *((_QWORD *)this + 35) )
    {
      CWindowList::UnregisterAccentState(
        *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 52),
        (struct CWindowData *)v4);
      inserted = VisualCollection::Remove(
                   (VisualCollection *)(*((_QWORD *)this + 34) + 32LL),
                   *((struct CVisual **)this + 35));
      v3 = inserted;
      if ( inserted < 0 )
      {
        v19 = 3674;
        goto LABEL_21;
      }
      v18 = (CBaseObject *)*((_QWORD *)this + 35);
      if ( v18 )
      {
        CBaseObject::Release(v18);
        *((_QWORD *)this + 35) = 0LL;
      }
    }
  }
  else
  {
    v8 = (struct CVisual **)((char *)this + 280);
    v9 = (struct CVisual *)*((_QWORD *)this + 35);
    if ( !v9 )
    {
      inserted = CAccent::Create((struct CAccent **)this + 35);
      v3 = inserted;
      if ( inserted < 0 )
      {
        v19 = 3635;
        goto LABEL_21;
      }
      v11 = *v8;
      *((_QWORD *)v11 + 47) = *((_QWORD *)this + 107);
      updated = CAccent::UpdateAcrylicBackgroundBrush(v11);
      v3 = updated;
      if ( updated < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x90,
          (int)"clientcore\\windows\\dwm\\udwm\\accent.cpp",
          (const char *)(unsigned int)updated);
        v17 = v3;
        v19 = 3636;
        goto LABEL_23;
      }
      *((_BYTE *)*v8 + 640) = (*(_DWORD *)(*((_QWORD *)this + 94) + 120LL) & 0x400000) != 0;
      inserted = VisualCollection::InsertRelative((VisualCollection *)(*((_QWORD *)this + 34) + 32LL), *v8, 0LL, 1, 1);
      v3 = inserted;
      if ( inserted < 0 )
      {
        v19 = 3638;
        goto LABEL_21;
      }
      v9 = *v8;
      v4 = *((_QWORD *)this + 94);
    }
    v13 = *(_QWORD *)(v4 + 136);
    *((_QWORD *)v9 + 51) = *(_QWORD *)(v4 + 40);
    *((_QWORD *)v9 + 52) = v13;
    v14 = *((_QWORD *)this + 94);
    v15 = (struct CWindowData *)v14;
    if ( !*(_DWORD *)(v14 + 176) && (*(_BYTE *)(v14 + 172) & 2) == 0 && *(_DWORD *)(v14 + 168) == 2 )
    {
      *(_DWORD *)(*((_QWORD *)this + 94) + 176LL) = CTopLevelWindow::GetTransparentGradientColorForAccent(this);
      v15 = (struct CWindowData *)*((_QWORD *)this + 94);
    }
    v16 = (CWindowList *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 52);
    if ( (unsigned int)(*((_DWORD *)v15 + 42) - 3) > 2 )
      CWindowList::UnregisterAccentState(v16, v15);
    else
      CWindowList::RegisterAccentState(v16);
    CAccent::SetParentVisible(*v8, a2);
    inserted = CAccent::UpdateAccentPolicy(
                 *v8,
                 (const struct tagRECT *)(*((_QWORD *)this + 94) + 48LL),
                 (const struct ACCENT_POLICY *)(*((_QWORD *)this + 94) + 168LL),
                 *(struct CBaseGeometryProxy **)(*((_QWORD *)this + 94) + 424LL));
    v3 = inserted;
    if ( inserted < 0 )
    {
      v19 = 3667;
LABEL_21:
      v17 = inserted;
LABEL_23:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v17, v19);
    }
  }
  return v3;
}
