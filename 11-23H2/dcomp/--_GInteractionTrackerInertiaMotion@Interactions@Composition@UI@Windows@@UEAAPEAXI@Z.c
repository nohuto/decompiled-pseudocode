/*
 * XREFs of ??_GInteractionTrackerInertiaMotion@Interactions@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x18013D620
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionDrawingSurface@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x180080BA8 (-InternalUnlock@-$RefPtr@VCompositionDrawingSurface@Composition@UI@Windows@@@WRL2@Microsoft@@IEA.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18008E864 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1InteractionTrackerVector2InertiaModifier@Interactions@Composition@UI@Windows@@UEAA@XZ @ 0x18013D588 (--1InteractionTrackerVector2InertiaModifier@Interactions@Composition@UI@Windows@@UEAA@XZ.c)
 */

Microsoft::WRL2::NestableRuntimeClass **__fastcall Windows::UI::Composition::Interactions::InteractionTrackerInertiaMotion::`scalar deleting destructor'(
        Microsoft::WRL2::NestableRuntimeClass **this,
        char a2)
{
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionDrawingSurface>::InternalUnlock(this + 23);
  Windows::UI::Composition::Interactions::InteractionTrackerVector2InertiaModifier::~InteractionTrackerVector2InertiaModifier((Windows::UI::Composition::Interactions::InteractionTrackerVector2InertiaModifier *)this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
