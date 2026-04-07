/*
 * XREFs of ?OnSourceConstantAlphaUpdated@CTopLevelWindow@@QEAAXXZ @ 0x180023F78
 * Callers:
 *     ?AlphaChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180021AC0 (-AlphaChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x180031C90 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?OnAlphaUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x18004B6D0 (-OnAlphaUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 * Callees:
 *     ?Hide@CVisual@@QEAAXXZ @ 0x180010F7C (-Hide@CVisual@@QEAAXXZ.c)
 *     ?Unhide@CVisual@@QEAAXXZ @ 0x1800112D0 (-Unhide@CVisual@@QEAAXXZ.c)
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x18002A190 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 */

void __fastcall CTopLevelWindow::OnSourceConstantAlphaUpdated(CTopLevelWindow *this)
{
  double v2; // xmm6_8

  v2 = (double)*(unsigned __int8 *)(*((_QWORD *)this + 94) + 408LL) / 255.0;
  if ( (*(_BYTE *)(*((_QWORD *)this + 94) + 668LL) & 2) == 0 )
    goto LABEL_5;
  if ( v2 > 0.0 )
  {
    if ( *((char *)this + 249) < 0 )
    {
      CVisual::Unhide(this);
      *((_BYTE *)this + 249) &= ~0x80u;
    }
LABEL_5:
    CVisual::SetOpacity(this, v2);
    return;
  }
  CVisual::SetOpacity(this, 1.0);
  CVisual::Hide(this);
  *((_BYTE *)this + 249) |= 0x80u;
}
