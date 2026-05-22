/*
 * XREFs of ?Destroy@CompositionConditionalValue@Interactions@Composition@UI@Windows@@UEAAXXZ @ 0x18012D250
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalUnlock@?$RefPtr@VCompositionDrawingSurface@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x180080BA8 (-InternalUnlock@-$RefPtr@VCompositionDrawingSurface@Composition@UI@Windows@@@WRL2@Microsoft@@IEA.c)
 */

void __fastcall Windows::UI::Composition::Interactions::CompositionConditionalValue::Destroy(
        Microsoft::WRL2::NestableRuntimeClass **this)
{
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionDrawingSurface>::InternalUnlock(this + 18);
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionDrawingSurface>::InternalUnlock(this + 19);
  Windows::UI::Composition::CompositionObject::Destroy((Windows::UI::Composition::CompositionObject *)this);
}
