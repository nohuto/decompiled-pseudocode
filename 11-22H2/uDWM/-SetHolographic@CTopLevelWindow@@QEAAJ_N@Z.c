/*
 * XREFs of ?SetHolographic@CTopLevelWindow@@QEAAJ_N@Z @ 0x180057A58
 * Callers:
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x180030C60 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?SetHolographic@CWindowList@@UEAAJPEAUIDwmWindow@@_N@Z @ 0x180035450 (-SetHolographic@CWindowList@@UEAAJPEAUIDwmWindow@@_N@Z.c)
 * Callees:
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x180026220 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 *     ?ShowWindow@CTopLevelWindow@@QEAAJ_N@Z @ 0x180034E90 (-ShowWindow@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
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
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x114u, 0LL);
  }
  return v3;
}
