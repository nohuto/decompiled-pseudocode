/*
 * XREFs of ??_ECompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x180123780
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18008E864 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1CompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@@UEAA@XZ @ 0x180122E6C (--1CompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@@UEAA@XZ.c)
 */

Windows::UI::Composition::Internal::CompositionAnimationTriggerPartner *__fastcall Windows::UI::Composition::Internal::CompositionAnimationTriggerPartner::`vector deleting destructor'(
        Windows::UI::Composition::Internal::CompositionAnimationTriggerPartner *this,
        volatile int *a2)
{
  char v2; // di

  v2 = (char)a2;
  Windows::UI::Composition::Internal::CompositionAnimationTriggerPartner::~CompositionAnimationTriggerPartner(this, a2);
  if ( (v2 & 1) != 0 )
  {
    if ( (v2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
