/*
 * XREFs of ?Destroy@CompositionVisualSurface@Composition@UI@Windows@@UEAAXXZ @ 0x180091A50
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalUnlock@?$RefPtr@VCompositionBatch@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x180082D58 (-InternalUnlock@-$RefPtr@VCompositionBatch@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ.c)
 */

void __fastcall Windows::UI::Composition::CompositionVisualSurface::Destroy(volatile signed __int32 **this, __int64 a2)
{
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionBatch>::InternalUnlock(this + 22, a2);
  Windows::UI::Composition::ProxyObject::Destroy((Windows::UI::Composition::ProxyObject *)this);
}
