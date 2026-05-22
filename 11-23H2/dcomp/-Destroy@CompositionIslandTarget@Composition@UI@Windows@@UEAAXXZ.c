/*
 * XREFs of ?Destroy@CompositionIslandTarget@Composition@UI@Windows@@UEAAXXZ @ 0x180159F00
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 */

void __fastcall Windows::UI::Composition::CompositionIslandTarget::Destroy(
        Microsoft::WRL2::NestableRuntimeClass **this)
{
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(this + 20);
  Windows::UI::Composition::CompositionObject::Destroy((Windows::UI::Composition::CompositionObject *)this);
}
