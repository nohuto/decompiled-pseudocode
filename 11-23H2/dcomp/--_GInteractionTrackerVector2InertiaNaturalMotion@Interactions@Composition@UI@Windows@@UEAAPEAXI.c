/*
 * XREFs of ??_GInteractionTrackerVector2InertiaNaturalMotion@Interactions@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x18013E760
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@VInteropDwmCompositor@Composition@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18008D740 (-InternalRelease@-$ComPtr@VInteropDwmCompositor@Composition@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18008E864 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1InteractionTrackerVector2InertiaModifier@Interactions@Composition@UI@Windows@@UEAA@XZ @ 0x18013D588 (--1InteractionTrackerVector2InertiaModifier@Interactions@Composition@UI@Windows@@UEAA@XZ.c)
 */

Microsoft::WRL2::NestableRuntimeClass **__fastcall Windows::UI::Composition::Interactions::InteractionTrackerVector2InertiaNaturalMotion::`scalar deleting destructor'(
        Microsoft::WRL2::NestableRuntimeClass **this,
        char a2)
{
  Microsoft::WRL::ComPtr<Windows::UI::Composition::InteropDwmCompositor>::InternalRelease(this + 23);
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
