/*
 * XREFs of ??_ECompositionSpriteShape@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x18000E640
 * Callers:
 *     ??_ECompositionSpriteShape@Composition@UI@Windows@@WKA@EAAPEAXI@Z @ 0x1800AE2F0 (--_ECompositionSpriteShape@Composition@UI@Windows@@WKA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CompositionSpriteShape@Composition@UI@Windows@@UEAA@XZ @ 0x18000E684 (--1CompositionSpriteShape@Composition@UI@Windows@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18008E864 (-__global_delete@@YAXPEAX_K@Z.c)
 */

Windows::UI::Composition::CompositionSpriteShape *__fastcall Windows::UI::Composition::CompositionSpriteShape::`vector deleting destructor'(
        Windows::UI::Composition::CompositionSpriteShape *this,
        char a2)
{
  Windows::UI::Composition::CompositionSpriteShape::~CompositionSpriteShape(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0x110uLL);
    else
      operator delete(this);
  }
  return this;
}
