/*
 * XREFs of ??_ECompositionProjectedShadowCaster@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x180011460
 * Callers:
 *     <none>
 * Callees:
 *     ??1CompositionProjectedShadowCaster@Composition@UI@Windows@@UEAA@XZ @ 0x1800114A4 (--1CompositionProjectedShadowCaster@Composition@UI@Windows@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18008E864 (-__global_delete@@YAXPEAX_K@Z.c)
 */

Windows::UI::Composition::CompositionProjectedShadowCaster *__fastcall Windows::UI::Composition::CompositionProjectedShadowCaster::`vector deleting destructor'(
        Windows::UI::Composition::CompositionProjectedShadowCaster *this,
        char a2)
{
  Windows::UI::Composition::CompositionProjectedShadowCaster::~CompositionProjectedShadowCaster(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0xD0uLL);
    else
      operator delete(this);
  }
  return this;
}
