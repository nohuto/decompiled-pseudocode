/*
 * XREFs of ??_GCompositionEffectBrush@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x180061D50
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ??1CompositionEffectBrush@Composition@UI@Windows@@UEAA@XZ @ 0x180061CE0 (--1CompositionEffectBrush@Composition@UI@Windows@@UEAA@XZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18008E864 (-__global_delete@@YAXPEAX_K@Z.c)
 */

Windows::UI::Composition::CompositionEffectBrush *__fastcall Windows::UI::Composition::CompositionEffectBrush::`scalar deleting destructor'(
        Windows::UI::Composition::CompositionEffectBrush *this,
        char a2)
{
  Windows::UI::Composition::CompositionEffectBrush::~CompositionEffectBrush(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0xC0uLL);
    else
      operator delete(this);
  }
  return this;
}
