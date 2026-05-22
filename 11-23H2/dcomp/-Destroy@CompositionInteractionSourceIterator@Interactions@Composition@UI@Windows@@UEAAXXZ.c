/*
 * XREFs of ?Destroy@CompositionInteractionSourceIterator@Interactions@Composition@UI@Windows@@UEAAXXZ @ 0x1801A2030
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 */

void __fastcall Windows::UI::Composition::Interactions::CompositionInteractionSourceIterator::Destroy(
        Microsoft::WRL2::NestableRuntimeClass **this)
{
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(this + 8);
  Microsoft::WRL2::ContextRuntimeClass::Destroy((Microsoft::WRL2::ContextRuntimeClass *)this);
}
