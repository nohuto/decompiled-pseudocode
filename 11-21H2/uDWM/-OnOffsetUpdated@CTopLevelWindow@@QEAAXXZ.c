/*
 * XREFs of ?OnOffsetUpdated@CTopLevelWindow@@QEAAXXZ @ 0x180036290
 * Callers:
 *     ?OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z @ 0x180035F78 (-OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z @ 0x18004ABB8 (-UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z.c)
 * Callees:
 *     ?SetMouseCapture@CButton@@QEAAX_N@Z @ 0x180007ADC (-SetMouseCapture@CButton@@QEAAX_N@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x180036354 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?SetDirtyFlags@CDesktopThumbnailCVIVisual@@UEAAXK@Z @ 0x1800B2EC0 (-SetDirtyFlags@CDesktopThumbnailCVIVisual@@UEAAXK@Z.c)
 */

void __fastcall CTopLevelWindow::OnOffsetUpdated(CTopLevelWindow *this)
{
  __int64 v1; // rax
  bool v3; // zf
  LONG v4; // ecx
  LONG v5; // edx
  CDesktopThumbnailCVIVisual *v6; // rcx
  CButton *v7; // rcx
  __int64 v8; // rax
  LONG v9; // ecx
  CBaseObject *v10; // rcx
  struct tagPOINT v11; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 94);
  v3 = (*((_BYTE *)this + 249) & 1) == 0;
  v4 = *(_DWORD *)(v1 + 48);
  v5 = *(_DWORD *)(v1 + 52);
  v11.x = v4;
  v11.y = v5;
  if ( v3 )
  {
    if ( (*(_BYTE *)(v1 + 670) & 8) != 0 )
    {
      v8 = *(_QWORD *)(v1 + 600);
      v9 = v4 - *(_DWORD *)(v8 + 48);
      v11.y = v5 - *(_DWORD *)(v8 + 52);
      v11.x = v9;
    }
  }
  else
  {
    v11.x = -32000;
    v11.y = -32000;
  }
  CVisual::SetOffset(this, &v11);
  v6 = *(CDesktopThumbnailCVIVisual **)(*((_QWORD *)this + 94) + 640LL);
  if ( v6 )
    CDesktopThumbnailCVIVisual::SetDirtyFlags(v6, 0x1000u);
  v7 = (CButton *)*((_QWORD *)this + 97);
  if ( v7 )
  {
    CButton::SetMouseCapture(v7, 0);
    v10 = (CBaseObject *)*((_QWORD *)this + 97);
    if ( v10 )
    {
      CBaseObject::Release(v10);
      *((_QWORD *)this + 97) = 0LL;
    }
  }
  CTopLevelWindow::ChangeMouseOver(this, 0LL);
}
