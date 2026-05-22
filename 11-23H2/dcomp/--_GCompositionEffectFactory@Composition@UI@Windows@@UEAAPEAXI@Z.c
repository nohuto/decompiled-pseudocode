/*
 * XREFs of ??_GCompositionEffectFactory@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x18008AE40
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ??1CompositionEffectFactory@Composition@UI@Windows@@UEAA@XZ @ 0x18008AE84 (--1CompositionEffectFactory@Composition@UI@Windows@@UEAA@XZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18008E864 (-__global_delete@@YAXPEAX_K@Z.c)
 */

Windows::UI::Composition::CompositionEffectFactory *__fastcall Windows::UI::Composition::CompositionEffectFactory::`scalar deleting destructor'(
        Windows::UI::Composition::CompositionEffectFactory *this,
        char a2)
{
  Windows::UI::Composition::CompositionEffectFactory::~CompositionEffectFactory(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0xF0uLL);
    else
      operator delete(this);
  }
  return this;
}
