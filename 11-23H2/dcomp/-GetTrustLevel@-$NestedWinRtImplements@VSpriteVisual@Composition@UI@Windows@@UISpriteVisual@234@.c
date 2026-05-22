/*
 * XREFs of ?GetTrustLevel@?$NestedWinRtImplements@VSpriteVisual@Composition@UI@Windows@@UISpriteVisual@234@UISpriteVisual2@234@@WRL2@Microsoft@@W7EAAJPEAW4TrustLevel@@@Z @ 0x1800AE950
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::SpriteVisual,Windows::UI::Composition::ISpriteVisual,Windows::UI::Composition::ISpriteVisual2>::GetTrustLevel(
        __int64 a1,
        _DWORD *a2)
{
  return Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::Internal::SuperWetInkVisual,Windows::UI::Composition::Internal::ISuperWetInkVisual>::GetTrustLevel(
           a1 - 8,
           a2);
}
