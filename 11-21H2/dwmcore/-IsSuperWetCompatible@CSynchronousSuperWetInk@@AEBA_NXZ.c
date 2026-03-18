/*
 * XREFs of ?IsSuperWetCompatible@CSynchronousSuperWetInk@@AEBA_NXZ @ 0x1802414D4
 * Callers:
 *     ?DirtyActiveInk@CSuperWetInkManager@@QEAAXXZ @ 0x1800DCC08 (-DirtyActiveInk@CSuperWetInkManager@@QEAAXXZ.c)
 *     ??1CSynchronousSuperWetInk@@EEAA@XZ @ 0x180240B4C (--1CSynchronousSuperWetInk@@EEAA@XZ.c)
 *     ?Draw@CSynchronousSuperWetInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180241250 (-Draw@CSynchronousSuperWetInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?GetBounds@CSynchronousSuperWetInk@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1802412F4 (-GetBounds@CSynchronousSuperWetInk@@UEBAJAEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMil3DRectF.c)
 *     ?IsSuperWetCompatible@CSynchronousSuperWetInk@@UEAA_NPEAVCD3DDevice@@AEBUDCompWetInkStrokeRenderState@@_N@Z @ 0x180241510 (-IsSuperWetCompatible@CSynchronousSuperWetInk@@UEAA_NPEAVCD3DDevice@@AEBUDCompWetInkStrokeRender.c)
 *     ?OnPropertyChanged@CSynchronousSuperWetInk@@QEAAXXZ @ 0x180241858 (-OnPropertyChanged@CSynchronousSuperWetInk@@QEAAXXZ.c)
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
