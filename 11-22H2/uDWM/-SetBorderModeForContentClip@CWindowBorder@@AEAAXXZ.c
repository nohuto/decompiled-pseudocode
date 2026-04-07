/*
 * XREFs of ?SetBorderModeForContentClip@CWindowBorder@@AEAAXXZ @ 0x18001B944
 * Callers:
 *     ?CreateBorderStructure@CWindowBorder@@AEAAJXZ @ 0x180019650 (-CreateBorderStructure@CWindowBorder@@AEAAJXZ.c)
 *     ?SetContent@CWindowBorder@@QEAAJPEAVCVisual@@@Z @ 0x18001B6B0 (-SetContent@CWindowBorder@@QEAAJPEAVCVisual@@@Z.c)
 *     ?SetBorderParameters@CWindowBorder@@QEAAJAEBUtagRECT@@MHAEBU_D3DCOLORVALUE@@W4BorderStyle@1@W4ShadowStyle@1@@Z @ 0x18001B75C (-SetBorderParameters@CWindowBorder@@QEAAJAEBUtagRECT@@MHAEBU_D3DCOLORVALUE@@W4BorderStyle@1@W4Sh.c)
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x180026220 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 *     ?EnableBorder@CWindowBorder@@QEAAJ_N@Z @ 0x1801064AC (-EnableBorder@CWindowBorder@@QEAAJ_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CWindowBorder::SetBorderModeForContentClip(CWindowBorder *this)
{
  int v1; // eax
  int v2; // eax

  if ( *((_QWORD *)this + 32) && *((_QWORD *)this + 33) && *((float *)this + 80) > 0.0 )
  {
    v2 = *((_DWORD *)this + 51);
    if ( (v2 & 8) == 0 || *((_DWORD *)this + 53) )
    {
      *((_DWORD *)this + 53) = 0;
      *((_DWORD *)this + 51) = v2 | 8;
      (*(void (__fastcall **)(CWindowBorder *, __int64))(*(_QWORD *)this + 24LL))(this, 64LL);
    }
  }
  else
  {
    v1 = *((_DWORD *)this + 51);
    if ( (v1 & 8) != 0 )
    {
      *((_DWORD *)this + 51) = v1 & 0xFFFFFFF7;
      (*(void (__fastcall **)(CWindowBorder *, __int64))(*(_QWORD *)this + 24LL))(this, 64LL);
    }
  }
}
