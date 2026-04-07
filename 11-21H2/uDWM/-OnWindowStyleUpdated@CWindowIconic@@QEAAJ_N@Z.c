/*
 * XREFs of ?OnWindowStyleUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x18004B2A0
 * Callers:
 *     ?OnWindowStyleUpdated@CWindowData@@QEAAJXZ @ 0x180020E24 (-OnWindowStyleUpdated@CWindowData@@QEAAJXZ.c)
 *     ?StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002DF10 (-StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z @ 0x18004A8F4 (-Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z.c)
 *     ?SetBitmap@CWindowIconic@@QEAAJPEAVCBitmapSource@@_N1@Z @ 0x18004B4FC (-SetBitmap@CWindowIconic@@QEAAJPEAVCBitmapSource@@_N1@Z.c)
 *     ?SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z @ 0x18004B790 (-SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RenderRecursive@CVisual@@UEAAJXZ @ 0x18001C2D0 (-RenderRecursive@CVisual@@UEAAJXZ.c)
 *     ?OnWindowStyleUpdated@CTopLevelWindow@@QEAAJXZ @ 0x180023E74 (-OnWindowStyleUpdated@CTopLevelWindow@@QEAAJXZ.c)
 *     ?WasMaximized@CWindowIconic@@AEAA_NXZ @ 0x18004B39C (-WasMaximized@CWindowIconic@@AEAA_NXZ.c)
 *     IsOpenThemeDataPresent @ 0x180061548 (IsOpenThemeDataPresent.c)
 */

__int64 __fastcall CWindowIconic::OnWindowStyleUpdated(CWindowIconic *this, char a2)
{
  unsigned int v4; // edi
  int v6; // eax

  v4 = 0;
  *(_DWORD *)(*((_QWORD *)this + 10) + 116LL) = *(_DWORD *)(*((_QWORD *)this + 9) + 116LL);
  *(_DWORD *)(*((_QWORD *)this + 10) + 120LL) = *(_DWORD *)(*((_QWORD *)this + 9) + 120LL);
  *(_DWORD *)(*((_QWORD *)this + 10) + 124LL) = *(_DWORD *)(*((_QWORD *)this + 9) + 124LL);
  *(_BYTE *)(*((_QWORD *)this + 10) + 664LL) = ((unsigned __int8)IsOpenThemeDataPresent() != 0 ? 8 : 0) | *(_BYTE *)(*((_QWORD *)this + 10) + 664LL) & 0xF7;
  *(_DWORD *)(*((_QWORD *)this + 10) + 412LL) = *(_DWORD *)(*((_QWORD *)this + 9) + 412LL);
  *(_BYTE *)(*((_QWORD *)this + 10) + 664LL) ^= (*(_BYTE *)(*((_QWORD *)this + 10) + 664LL) ^ *(_BYTE *)(*((_QWORD *)this + 9) + 664LL)) & 2;
  *(_DWORD *)(*((_QWORD *)this + 10) + 116LL) &= 0xFF30FFFF;
  if ( *((_DWORD *)this + 4) != 2 || *((_BYTE *)this + 21) )
    *(_DWORD *)(*((_QWORD *)this + 10) + 116LL) |= 0xCF0000u;
  *(_DWORD *)(*((_QWORD *)this + 10) + 116LL) &= ~0x20000000u;
  if ( CWindowIconic::WasMaximized(this) )
    *(_DWORD *)(*((_QWORD *)this + 10) + 116LL) |= 0x1000000u;
  CTopLevelWindow::OnWindowStyleUpdated(*((CTopLevelWindow **)this + 11));
  if ( a2 )
  {
    v6 = CVisual::RenderRecursive(*((CVisual **)this + 11));
    v4 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x22Fu);
  }
  return v4;
}
