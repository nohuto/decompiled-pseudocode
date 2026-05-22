/*
 * XREFs of ?AddRef@?$NestedWinRtImplements@VDistantLight@Composition@UI@Windows@@UIDistantLight@234@UIDistantLight2@234@@WRL2@Microsoft@@W7EAAKXZ @ 0x1800AE330
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::DistantLight,Windows::UI::Composition::IDistantLight,Windows::UI::Composition::IDistantLight2>::AddRef(
        __int64 a1)
{
  return Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::AmbientLight,Windows::UI::Composition::IAmbientLight,Windows::UI::Composition::IAmbientLight2>::AddRef(a1 - 8);
}
