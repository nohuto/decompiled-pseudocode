/*
 * XREFs of ?SetOpacity@CVisual@@QEAAXM@Z @ 0x1800B3170
 * Callers:
 *     ?SetProperty@CVisual@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1800815C0 (-SetProperty@CVisual@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?ProcessSetOpacity@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETOPACITY@@@Z @ 0x180131A94 (-ProcessSetOpacity@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETOPACITY@@@Z.c)
 * Callees:
 *     ?NotifyScalarPropertyChanged@CPropertyChangeResource@@IEBAJIM@Z @ 0x180080EB8 (-NotifyScalarPropertyChanged@CPropertyChangeResource@@IEBAJIM@Z.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x180081EF4 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z @ 0x180082158 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z.c)
 *     ?GetOpacityInternal@CVisual@@QEBAMXZ @ 0x1800B3208 (-GetOpacityInternal@CVisual@@QEBAMXZ.c)
 *     ?SetOpacityInternal@CVisual@@QEAAXM@Z @ 0x1800B3264 (-SetOpacityInternal@CVisual@@QEAAXM@Z.c)
 */

void __fastcall CVisual::SetOpacity(CVisual *this, float a2)
{
  float OpacityInternal; // xmm7_4

  OpacityInternal = CVisual::GetOpacityInternal(this);
  if ( OpacityInternal != a2 )
  {
    CVisual::SetOpacityInternal(this, a2);
    CVisual::PropagateFlags(
      (__int64)this,
      ((COERCE_FLOAT(LODWORD(a2) & _xmm) < 0.0000011920929) ^ (COERCE_FLOAT(LODWORD(OpacityInternal) & _xmm) < 0.0000011920929))
    + 4);
    CPropertyChangeResource::NotifyScalarPropertyChanged(this, 0x19u, a2);
    CResource::InvalidateAnimationSources(this, 25);
  }
}
