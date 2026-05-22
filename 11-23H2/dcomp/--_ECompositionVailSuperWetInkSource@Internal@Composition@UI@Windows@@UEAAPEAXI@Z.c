/*
 * XREFs of ??_ECompositionVailSuperWetInkSource@Internal@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x180123E30
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18008E864 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1CompositionVailSuperWetInkSource@Internal@Composition@UI@Windows@@UEAA@XZ @ 0x180123158 (--1CompositionVailSuperWetInkSource@Internal@Composition@UI@Windows@@UEAA@XZ.c)
 */

Windows::UI::Composition::Internal::CompositionVailSuperWetInkSource *__fastcall Windows::UI::Composition::Internal::CompositionVailSuperWetInkSource::`vector deleting destructor'(
        Windows::UI::Composition::Internal::CompositionVailSuperWetInkSource *this,
        char a2)
{
  Windows::UI::Composition::Internal::CompositionVailSuperWetInkSource::~CompositionVailSuperWetInkSource(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
