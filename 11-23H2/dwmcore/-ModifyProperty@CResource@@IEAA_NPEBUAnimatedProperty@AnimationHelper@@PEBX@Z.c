/*
 * XREFs of ?ModifyProperty@CResource@@IEAA_NPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1800C3F7C
 * Callers:
 *     ?SetBoundsStrokeStyleInvalidatingAnimatedProperty@CSpriteVectorShape@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x18001D8E0 (-SetBoundsStrokeStyleInvalidatingAnimatedProperty@CSpriteVectorShape@@AEAAJPEBUAnimatedProperty@.c)
 *     ?SetTrimInvalidatingAnimatedProperty@CGeometry@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1800200D0 (-SetTrimInvalidatingAnimatedProperty@CGeometry@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@.c)
 *     ?SetAnimatedProperty@CResource@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1800C11A0 (-SetAnimatedProperty@CResource@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?SetDirectionProperty@CCompositionLight@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1800C3AA0 (-SetDirectionProperty@CCompositionLight@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?SetAnimatedProperty@CDropShadow@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1800C3CF0 (-SetAnimatedProperty@CDropShadow@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?SetAnimatedProperty@CCompositionLight@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1800C3D50 (-SetAnimatedProperty@CCompositionLight@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?SetSourceSize@CVisualSurface@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1800C3DD0 (-SetSourceSize@CVisualSurface@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?SetAnimatedProperty@CColorGradientStop@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1800C3EC0 (-SetAnimatedProperty@CColorGradientStop@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?SetColorProperty@CColorBrush@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1800C3F20 (-SetColorProperty@CColorBrush@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?SetSourceOffset@CVisualSurface@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x18021AB70 (-SetSourceOffset@CVisualSurface@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?SetOriginOffsetProperty@CRadialGradientBrush@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x18024DE60 (-SetOriginOffsetProperty@CRadialGradientBrush@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?SetRenderStrokeStyleInvalidatingAnimatedProperty@CSpriteVectorShape@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x180251EA0 (-SetRenderStrokeStyleInvalidatingAnimatedProperty@CSpriteVectorShape@@AEAAJPEBUAnimatedProperty@.c)
 *     ?SetAnimatedProperty@CViewBox@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1802552E0 (-SetAnimatedProperty@CViewBox@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 * Callees:
 *     memcmp_0 @ 0x18011B65C (memcmp_0.c)
 *     memcpy_0 @ 0x18011B668 (memcpy_0.c)
 */

char __fastcall CResource::ModifyProperty(
        CResource *this,
        const struct AnimationHelper::AnimatedProperty *a2,
        const void *a3)
{
  size_t v4; // rbp
  char *v5; // rsi
  char v6; // bl

  v4 = *((_QWORD *)a2 + 2);
  v5 = (char *)this + *((_QWORD *)a2 + 1);
  v6 = 0;
  if ( memcmp_0(v5, a3, v4) )
  {
    v6 = 1;
    memcpy_0(v5, a3, v4);
  }
  return v6;
}
