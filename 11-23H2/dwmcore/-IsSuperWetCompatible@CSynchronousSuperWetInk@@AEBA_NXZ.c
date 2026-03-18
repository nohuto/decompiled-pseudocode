/*
 * XREFs of ?IsSuperWetCompatible@CSynchronousSuperWetInk@@AEBA_NXZ @ 0x180253584
 * Callers:
 *     ?PreRender@CComposition@@IEAAJXZ @ 0x180047A10 (-PreRender@CComposition@@IEAAJXZ.c)
 *     ??1CSynchronousSuperWetInk@@EEAA@XZ @ 0x180252D98 (--1CSynchronousSuperWetInk@@EEAA@XZ.c)
 *     ?Draw@CSynchronousSuperWetInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1802532F4 (-Draw@CSynchronousSuperWetInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?GetBounds@CSynchronousSuperWetInk@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180253398 (-GetBounds@CSynchronousSuperWetInk@@UEBAJAEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMil3DRectF.c)
 *     ?IsSuperWetCompatible@CSynchronousSuperWetInk@@UEAA_NPEAVCD3DDevice@@AEBUDCompWetInkStrokeRenderState@@_N@Z @ 0x1802535C0 (-IsSuperWetCompatible@CSynchronousSuperWetInk@@UEAA_NPEAVCD3DDevice@@AEBUDCompWetInkStrokeRender.c)
 *     ?OnPropertyChanged@CSynchronousSuperWetInk@@QEAAXXZ @ 0x180253908 (-OnPropertyChanged@CSynchronousSuperWetInk@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall CSynchronousSuperWetInk::IsSuperWetCompatible(CSynchronousSuperWetInk *this)
{
  char result; // al

  result = 0;
  if ( *((_DWORD *)this + 43) == 2 || *((_QWORD *)this + 23) )
  {
    if ( *((_QWORD *)this + 11) )
    {
      if ( *((_QWORD *)this + 26) )
        return 1;
    }
  }
  return result;
}
