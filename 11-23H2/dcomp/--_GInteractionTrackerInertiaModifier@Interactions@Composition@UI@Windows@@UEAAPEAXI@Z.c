/*
 * XREFs of ??_GInteractionTrackerInertiaModifier@Interactions@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x18013D5D0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18008E864 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1InteractionTrackerVector2InertiaModifier@Interactions@Composition@UI@Windows@@UEAA@XZ @ 0x18013D588 (--1InteractionTrackerVector2InertiaModifier@Interactions@Composition@UI@Windows@@UEAA@XZ.c)
 */

Windows::UI::Composition::Interactions::InteractionTrackerInertiaModifier *__fastcall Windows::UI::Composition::Interactions::InteractionTrackerInertiaModifier::`scalar deleting destructor'(
        Windows::UI::Composition::Interactions::InteractionTrackerInertiaModifier *this,
        char a2)
{
  Windows::UI::Composition::Interactions::InteractionTrackerVector2InertiaModifier::~InteractionTrackerVector2InertiaModifier(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
