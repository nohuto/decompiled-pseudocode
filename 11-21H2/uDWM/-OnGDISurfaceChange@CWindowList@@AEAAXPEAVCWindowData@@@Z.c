/*
 * XREFs of ?OnGDISurfaceChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180104D60
 * Callers:
 *     ?ReparentingFromDesktop@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18000C820 (-ReparentingFromDesktop@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CWindowList::OnGDISurfaceChange(CWindowList *this, struct CWindowData *a2)
{
  CVisual *v2; // rax

  v2 = (CVisual *)*((_QWORD *)a2 + 55);
  if ( v2 )
  {
    if ( (*((_BYTE *)a2 + 665) & 0x20) != 0 )
      CVisual::SetDirtyFlags(v2, 0x2000000);
    else
      *((_DWORD *)v2 + 22) &= ~0x2000000u;
  }
}
