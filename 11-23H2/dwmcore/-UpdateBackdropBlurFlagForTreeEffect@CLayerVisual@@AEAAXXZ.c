/*
 * XREFs of ?UpdateBackdropBlurFlagForTreeEffect@CLayerVisual@@AEAAXXZ @ 0x180024BF0
 * Callers:
 *     ?ProcessSetEffect@CLayerVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LAYERVISUAL_SETEFFECT@@@Z @ 0x180024590 (-ProcessSetEffect@CLayerVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LAYERVISUAL_SETEFFECT@@@Z.c)
 *     ?ClearTreeEffect@CLayerVisual@@AEAAXXZ @ 0x1800246A4 (-ClearTreeEffect@CLayerVisual@@AEAAXXZ.c)
 *     ?OnChanged@CLayerVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180024BB0 (-OnChanged@CLayerVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?GetBrushGraph@CBrush@@QEAAPEAVCBrushRenderingGraph@@XZ @ 0x180024C74 (-GetBrushGraph@CBrush@@QEAAPEAVCBrushRenderingGraph@@XZ.c)
 *     ?UpdateHasBackdropInputFlag@CVisual@@IEAAXPEBVCBackdropBrush@@@Z @ 0x180080E28 (-UpdateHasBackdropInputFlag@CVisual@@IEAAXPEBVCBackdropBrush@@@Z.c)
 */

void __fastcall CLayerVisual::UpdateBackdropBlurFlagForTreeEffect(CLayerVisual *this)
{
  CBrush **v1; // rax
  const struct CBackdropBrush *v2; // rbx
  char v4; // bp
  char v5; // di
  struct CBrushRenderingGraph *BrushGraph; // rax

  v1 = (CBrush **)*((_QWORD *)this + 89);
  v2 = 0LL;
  v4 = 0;
  v5 = 0;
  if ( v1 )
  {
    if ( *v1 )
    {
      BrushGraph = CBrush::GetBrushGraph(*v1);
      if ( BrushGraph )
      {
        v5 = *((_BYTE *)BrushGraph + 196);
        v2 = (const struct CBackdropBrush *)*((_QWORD *)BrushGraph + 26);
        v4 = *((_BYTE *)BrushGraph + 198);
      }
    }
  }
  *((_BYTE *)this + 102) ^= (*((_BYTE *)this + 102) ^ (4 * v5)) & 4;
  CVisual::UpdateHasBackdropInputFlag(this, v2);
  CVisual::UpdateHasWindowBackdropInputFlag(this, v4);
}
