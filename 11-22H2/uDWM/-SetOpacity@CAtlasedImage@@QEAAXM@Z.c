/*
 * XREFs of ?SetOpacity@CAtlasedImage@@QEAAXM@Z @ 0x1800AC860
 * Callers:
 *     ?SetShadowOpacity@CTopLevelWindow@@QEAAXM@Z @ 0x180007A50 (-SetShadowOpacity@CTopLevelWindow@@QEAAXM@Z.c)
 *     ?RedrawVisual@CButton@@AEAAJXZ @ 0x18002C1C0 (-RedrawVisual@CButton@@AEAAJXZ.c)
 *     ?UpdateCrossfade@CButton@@AEAAXXZ @ 0x18006BBA8 (-UpdateCrossfade@CButton@@AEAAXXZ.c)
 * Callees:
 *     floor @ 0x18005D2C8 (floor.c)
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
  CAtlasedImage::InternalSetOpacity(this, v4);
}
