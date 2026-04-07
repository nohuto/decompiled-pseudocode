/*
 * XREFs of ?SetBorderModeForContentClip@CWindowBorder@@AEAAXXZ @ 0x1800374F8
 * Callers:
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x180033080 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 *     ?CreateBorderStructure@CWindowBorder@@AEAAJXZ @ 0x1800367E4 (-CreateBorderStructure@CWindowBorder@@AEAAJXZ.c)
 *     ?SetContent@CWindowBorder@@QEAAJPEAVCVisual@@@Z @ 0x180037460 (-SetContent@CWindowBorder@@QEAAJPEAVCVisual@@@Z.c)
 *     ?EnableBorder@CWindowBorder@@QEAAJ_N@Z @ 0x180101028 (-EnableBorder@CWindowBorder@@QEAAJ_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CWindowBorder::SetBorderModeForContentClip(CWindowBorder *this)
{
  if ( *((_QWORD *)this + 32) && *((_QWORD *)this + 33) && *((float *)this + 80) > 0.0 )
    CVisual::SetBorderMode(this);
  else
    CVisual::ClearBorderMode(this);
}
