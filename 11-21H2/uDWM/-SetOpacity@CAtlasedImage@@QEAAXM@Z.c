/*
 * XREFs of ?SetOpacity@CAtlasedImage@@QEAAXM@Z @ 0x180005CF4
 * Callers:
 *     ?UpdateCrossfade@CButton@@AEAAXXZ @ 0x180005C88 (-UpdateCrossfade@CButton@@AEAAXXZ.c)
 *     ?SetShadowOpacity@CTopLevelWindow@@QEAAXM@Z @ 0x18001B994 (-SetShadowOpacity@CTopLevelWindow@@QEAAXM@Z.c)
 *     ?RedrawVisual@CButton@@AEAAJXZ @ 0x180032070 (-RedrawVisual@CButton@@AEAAJXZ.c)
 * Callees:
 *     floor @ 0x180060EC8 (floor.c)
 */

void __fastcall CAtlasedImage::SetOpacity(CAtlasedImage *this, float a2)
{
  int v3; // edx
  unsigned __int8 v4; // al

  v3 = (int)floor((float)(a2 * 255.0) + 0.5);
  v4 = -1;
  if ( v3 <= 255 )
  {
    v4 = 0;
    if ( v3 >= 0 )
      v4 = v3;
  }
  CAtlasedImage::InternalSetOpacity(this, 16843009 * v4);
}
