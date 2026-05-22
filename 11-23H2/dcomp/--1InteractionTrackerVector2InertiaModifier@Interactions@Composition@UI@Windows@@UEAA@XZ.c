/*
 * XREFs of ??1InteractionTrackerVector2InertiaModifier@Interactions@Composition@UI@Windows@@UEAA@XZ @ 0x18013D588
 * Callers:
 *     ??_GInteractionTrackerInertiaModifier@Interactions@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x18013D5D0 (--_GInteractionTrackerInertiaModifier@Interactions@Composition@UI@Windows@@UEAAPEAXI@Z.c)
 *     ??_GInteractionTrackerInertiaMotion@Interactions@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x18013D620 (--_GInteractionTrackerInertiaMotion@Interactions@Composition@UI@Windows@@UEAAPEAXI@Z.c)
 *     ??_EInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x18013E160 (--_EInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@UEAAPEAXI@Z.c)
 *     ??_GInteractionTrackerVector2InertiaNaturalMotion@Interactions@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x18013E760 (--_GInteractionTrackerVector2InertiaNaturalMotion@Interactions@Composition@UI@Windows@@UEAAPEAXI.c)
 * Callees:
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ??1CSparseStorage@@QEAA@XZ @ 0x180060868 (--1CSparseStorage@@QEAA@XZ.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionDrawingSurface@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x180080BA8 (-InternalUnlock@-$RefPtr@VCompositionDrawingSurface@Composition@UI@Windows@@@WRL2@Microsoft@@IEA.c)
 */

void __fastcall Windows::UI::Composition::Interactions::InteractionTrackerVector2InertiaModifier::~InteractionTrackerVector2InertiaModifier(
        Windows::UI::Composition::Interactions::InteractionTrackerVector2InertiaModifier *this)
{
  __int64 v2; // rdx

  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock((Microsoft::WRL2::NestableRuntimeClass **)this + 20);
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionDrawingSurface>::InternalUnlock((Microsoft::WRL2::NestableRuntimeClass **)this + 19);
  CSparseStorage::~CSparseStorage((void **)this + 14);
  Microsoft::WRL2::ContextRuntimeClass::~ContextRuntimeClass(this, v2);
}
