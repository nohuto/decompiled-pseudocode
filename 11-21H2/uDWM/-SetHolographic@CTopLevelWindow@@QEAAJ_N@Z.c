/*
 * XREFs of ?SetHolographic@CTopLevelWindow@@QEAAJ_N@Z @ 0x180012904
 * Callers:
 *     ?SetHolographic@CWindowList@@UEAAJPEAUIDwmWindow@@_N@Z @ 0x1800210C0 (-SetHolographic@CWindowList@@UEAAJPEAUIDwmWindow@@_N@Z.c)
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x180031C90 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ShowWindow@CTopLevelWindow@@QEAAJ_N@Z @ 0x180027570 (-ShowWindow@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x180033080 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 */

__int64 __fastcall CTopLevelWindow::SetHolographic(CTopLevelWindow *this, char a2)
{
  unsigned int v3; // ebx
  char v4; // cl
  int updated; // eax

  v3 = 0;
  v4 = *((_BYTE *)this + 249);
  if ( a2 != ((v4 & 2) != 0) )
  {
    *((_BYTE *)this + 249) = (2 * a2) | v4 & 0xFD;
    updated = CTopLevelWindow::UpdateWindowVisuals(this);
    v3 = updated;
    if ( updated >= 0 )
      CTopLevelWindow::ShowWindow(this, (*((_BYTE *)this + 249) & 2) == 0);
    else
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x11Du);
  }
  return v3;
}
