/*
 * XREFs of ?Destroy@DistantLight@Composition@UI@Windows@@UEAAXXZ @ 0x180176260
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalUnlock@?$RefPtr@VCompositionBatch@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x180082D58 (-InternalUnlock@-$RefPtr@VCompositionBatch@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ.c)
 */

void __fastcall Windows::UI::Composition::DistantLight::Destroy(volatile signed __int32 **this, __int64 a2)
{
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionBatch>::InternalUnlock(this + 40, a2);
  Windows::UI::Composition::CompositionLight::Destroy((Windows::UI::Composition::CompositionLight *)this);
}
