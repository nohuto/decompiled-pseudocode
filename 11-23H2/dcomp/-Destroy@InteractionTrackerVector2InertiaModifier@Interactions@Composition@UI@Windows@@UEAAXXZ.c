/*
 * XREFs of ?Destroy@InteractionTrackerVector2InertiaModifier@Interactions@Composition@UI@Windows@@UEAAXXZ @ 0x180190450
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionDrawingSurface@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x180080BA8 (-InternalUnlock@-$RefPtr@VCompositionDrawingSurface@Composition@UI@Windows@@@WRL2@Microsoft@@IEA.c)
 */

void __fastcall Windows::UI::Composition::Interactions::InteractionTrackerVector2InertiaModifier::Destroy(
        Windows::UI::Composition::Interactions::InteractionTrackerVector2InertiaModifier *this)
{
  *((_DWORD *)this + 36) = 0;
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionDrawingSurface>::InternalUnlock((Microsoft::WRL2::NestableRuntimeClass **)this + 19);
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock((Microsoft::WRL2::NestableRuntimeClass **)this + 20);
  Windows::UI::Composition::CompositionObject::Destroy(this);
}
