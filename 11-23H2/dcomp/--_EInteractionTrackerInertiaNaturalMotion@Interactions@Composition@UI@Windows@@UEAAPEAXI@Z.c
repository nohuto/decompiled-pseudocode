/*
 * XREFs of ??_EInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x18013E160
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18008E864 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1InteractionTrackerVector2InertiaModifier@Interactions@Composition@UI@Windows@@UEAA@XZ @ 0x18013D588 (--1InteractionTrackerVector2InertiaModifier@Interactions@Composition@UI@Windows@@UEAA@XZ.c)
 */

Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion *__fastcall Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion::`vector deleting destructor'(
        Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion *this,
        char a2)
{
  Microsoft::WRL2::NestableRuntimeClass *v4; // rcx

  v4 = (Microsoft::WRL2::NestableRuntimeClass *)*((_QWORD *)this + 23);
  if ( v4 )
  {
    *((_QWORD *)this + 23) = 0LL;
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v4);
  }
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
