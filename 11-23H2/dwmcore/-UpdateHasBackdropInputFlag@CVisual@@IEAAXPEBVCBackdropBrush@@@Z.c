/*
 * XREFs of ?UpdateHasBackdropInputFlag@CVisual@@IEAAXPEBVCBackdropBrush@@@Z @ 0x180080E28
 * Callers:
 *     ?UpdateBackdropBlurFlagForTreeEffect@CLayerVisual@@AEAAXXZ @ 0x180024BF0 (-UpdateBackdropBlurFlagForTreeEffect@CLayerVisual@@AEAAXXZ.c)
 *     ?UpdateBackdropBlurFlag@CVisual@@AEAAXXZ @ 0x1800800D4 (-UpdateBackdropBlurFlag@CVisual@@AEAAXXZ.c)
 * Callees:
 *     ?ClearAllBackdropVisualImages@CVisual@@AEAAXXZ @ 0x180024460 (-ClearAllBackdropVisualImages@CVisual@@AEAAXXZ.c)
 *     ??0DbgString@DwmDbg@@QEAA@QEBDZZ @ 0x18004209C (--0DbgString@DwmDbg@@QEAA@QEBDZZ.c)
 *     ?PropagateBackdropUpdates@CVisual@@AEAAXHH@Z @ 0x180081714 (-PropagateBackdropUpdates@CVisual@@AEAAXHH@Z.c)
 *     ?LogBrushEtwEvent@Backdrops@DwmDbg@@YAXVDbgString@2@PEBVCVisual@@0@Z @ 0x180271E64 (-LogBrushEtwEvent@Backdrops@DwmDbg@@YAXVDbgString@2@PEBVCVisual@@0@Z.c)
 */

void __fastcall CVisual::UpdateHasBackdropInputFlag(CVisual **this, const struct CBackdropBrush *a2)
{
  CVisual *v4; // rcx
  DwmDbg::DbgString *v5; // rbx
  DwmDbg::DbgString *v6; // rax
  char *v7; // [rsp+30h] [rbp+8h] BYREF
  char *v8; // [rsp+38h] [rbp+10h] BYREF

  if ( (a2 != 0LL) != ((_BYTE)this[34] & 1) )
  {
    if ( dword_1803E3760 )
    {
      v5 = DwmDbg::DbgString::DbgString(&v7, "m_fHasBackdropInput=%d", a2 != 0LL);
      v6 = DwmDbg::DbgString::DbgString(&v8, "Visual-HasBackdropInputFlagChanged");
      DwmDbg::Backdrops::LogBrushEtwEvent(v6, this, v5);
    }
    v4 = this[11];
    if ( a2 )
    {
      if ( v4 )
        CVisual::PropagateBackdropUpdates(v4, 1, 0);
      *((_BYTE *)this + 272) |= 1u;
    }
    else
    {
      if ( v4 )
        CVisual::PropagateBackdropUpdates(v4, -1, 0);
      *((_BYTE *)this + 272) &= ~1u;
      CVisual::ClearAllBackdropVisualImages((CVisual *)this);
    }
  }
}
