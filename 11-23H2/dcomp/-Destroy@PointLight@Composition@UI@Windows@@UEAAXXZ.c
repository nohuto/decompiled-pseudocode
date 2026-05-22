/*
 * XREFs of ?Destroy@PointLight@Composition@UI@Windows@@UEAAXXZ @ 0x18017A130
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalUnlock@?$RefPtr@VCompositionBatch@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x180082D58 (-InternalUnlock@-$RefPtr@VCompositionBatch@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ.c)
 */

void __fastcall Windows::UI::Composition::PointLight::Destroy(volatile signed __int32 **this, __int64 a2)
{
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionBatch>::InternalUnlock(this + 42, a2);
  Windows::UI::Composition::CompositionLight::Destroy((Windows::UI::Composition::CompositionLight *)this);
}
