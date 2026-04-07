/*
 * XREFs of ?OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z @ 0x180035F78
 * Callers:
 *     ?UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z @ 0x180030C00 (-UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z.c)
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x180031C90 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?SetWindowOffscreen@CTopLevelWindow@@QEAAX_N@Z @ 0x1800E5FEC (-SetWindowOffscreen@CTopLevelWindow@@QEAAX_N@Z.c)
 *     ?RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z @ 0x1800EDF64 (-RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ?GetPhysicalPtFromLogical@CWindowList@@QEAAXPEAVCWindowData@@AEAUtagRECT@@PEAH2@Z @ 0x1800325FC (-GetPhysicalPtFromLogical@CWindowList@@QEAAXPEAVCWindowData@@AEAUtagRECT@@PEAH2@Z.c)
 *     ?UpdateAccentState@CWindowList@@QEAAXPEAVCWindowData@@W4ACCENT_STATE@@@Z @ 0x18003609C (-UpdateAccentState@CWindowList@@QEAAXPEAVCWindowData@@W4ACCENT_STATE@@@Z.c)
 *     ?TrackCrossDisplaysMoveDuringModeChange@CWindowList@@QEAAXPEAVCWindowData@@HH@Z @ 0x180036160 (-TrackCrossDisplaysMoveDuringModeChange@CWindowList@@QEAAXPEAVCWindowData@@HH@Z.c)
 *     ?OnOffsetUpdated@CTopLevelWindow3D@@QEAAJ_N@Z @ 0x180036234 (-OnOffsetUpdated@CTopLevelWindow3D@@QEAAJ_N@Z.c)
 *     ?OnOffsetUpdated@CTopLevelWindow@@QEAAXXZ @ 0x180036290 (-OnOffsetUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ?OnWindowOffsetUpdated@CSecondaryWindowRepresentation@@QEAAXXZ @ 0x180046C64 (-OnWindowOffsetUpdated@CSecondaryWindowRepresentation@@QEAAXXZ.c)
 *     CWindowList::ForEachSoftwareCursorListener__lambda_7b4eafa3d9ad544f92972777e9ad05a8___ @ 0x18005F800 (CWindowList--ForEachSoftwareCursorListener__lambda_7b4eafa3d9ad544f92972777e9ad05a8___.c)
 *     ?UpdateRectFromWindow@CProjectionBorderVisual@@QEAAXPEAVCWindowData@@@Z @ 0x1800D0860 (-UpdateRectFromWindow@CProjectionBorderVisual@@QEAAXPEAVCWindowData@@@Z.c)
 */

void __fastcall CWindowList::OnPositionChange(CWindowList *this, struct CWindowData *a2, bool a3)
{
  int v6; // edi
  int v7; // ebx
  struct CWindowData *v8; // rdx
  unsigned int v9; // ebx
  CTopLevelWindow *v10; // rcx
  CTopLevelWindow3D *v11; // rcx
  CProjectionBorderVisual *v12; // rcx
  struct CWindowData *v13; // rdi
  __int64 v14; // rcx
  int v15; // [rsp+30h] [rbp-20h] BYREF
  _QWORD v16[3]; // [rsp+38h] [rbp-18h] BYREF
  struct CWindowData *v17; // [rsp+88h] [rbp+38h] BYREF
  int v18; // [rsp+98h] [rbp+48h] BYREF
  int v19; // [rsp+9Ch] [rbp+4Ch]

  v17 = a2;
  CWindowList::GetPhysicalPtFromLogical(this, a2, (struct tagRECT *)((char *)a2 + 216), &v15, &v18);
  v6 = v18;
  v7 = v15;
  CWindowList::TrackCrossDisplaysMoveDuringModeChange(this, a2, v15, v18);
  OffsetRect((LPRECT)v17 + 3, v7 - *((_DWORD *)v17 + 12), v6 - *((_DWORD *)v17 + 13));
  v8 = v17;
  v9 = 0;
  v10 = (CTopLevelWindow *)*((_QWORD *)v17 + 55);
  if ( v10 )
  {
    CTopLevelWindow::OnOffsetUpdated(v10);
    v8 = v17;
    if ( (*((_BYTE *)v17 + 668) & 2) != 0 )
    {
      v18 = *((_DWORD *)v17 + 12);
      v19 = *((_DWORD *)v17 + 13);
      v16[0] = &v17;
      v16[1] = &v18;
      CWindowList::ForEachSoftwareCursorListener__lambda_7b4eafa3d9ad544f92972777e9ad05a8___(this, v16);
      v8 = v17;
    }
  }
  v11 = (CTopLevelWindow3D *)*((_QWORD *)v8 + 56);
  if ( v11 )
  {
    CTopLevelWindow3D::OnOffsetUpdated(v11, a3);
    v8 = v17;
  }
  v12 = (CProjectionBorderVisual *)*((_QWORD *)v8 + 58);
  if ( v12 )
  {
    CProjectionBorderVisual::UpdateRectFromWindow(v12, v8);
    v8 = v17;
  }
  v13 = v8;
  if ( *((_DWORD *)v8 + 130) )
  {
    do
    {
      v14 = *(_QWORD *)(*((_QWORD *)v8 + 62) + 8LL * v9);
      if ( *(struct CWindowData **)(v14 + 64) == v13 && *(_DWORD *)(v14 + 72) == 1 )
      {
        CSecondaryWindowRepresentation::OnWindowOffsetUpdated((CSecondaryWindowRepresentation *)v14);
        v8 = v17;
      }
      ++v9;
    }
    while ( v9 < *((_DWORD *)v8 + 130) );
  }
  CWindowList::UpdateAccentState(this, v8, 3LL);
}
