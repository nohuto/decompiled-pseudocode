/*
 * XREFs of ??_EInjectionAnimator@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x1801624F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18008E864 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1CompositionPropertyAnimator@Composition@UI@Windows@@UEAA@XZ @ 0x180161958 (--1CompositionPropertyAnimator@Composition@UI@Windows@@UEAA@XZ.c)
 */

Windows::UI::Composition::InjectionAnimator *__fastcall Windows::UI::Composition::InjectionAnimator::`vector deleting destructor'(
        Windows::UI::Composition::InjectionAnimator *this,
        char a2)
{
  Windows::UI::Composition::CompositionPropertyAnimator::~CompositionPropertyAnimator(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
