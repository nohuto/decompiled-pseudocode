/*
 * XREFs of ?GetTrustLevel@?$NestedWinRtImplements@VSuperWetInkVisual@Internal@Composition@UI@Windows@@UISuperWetInkVisual@2345@@WRL2@Microsoft@@UEAAJPEAW4TrustLevel@@@Z @ 0x18008FED0
 * Callers:
 *     ?GetTrustLevel@?$NestedWinRtImplements@VSpriteVisual@Composition@UI@Windows@@UISpriteVisual@234@UISpriteVisual2@234@@WRL2@Microsoft@@W7EAAJPEAW4TrustLevel@@@Z @ 0x1800AE950 (-GetTrustLevel@-$NestedWinRtImplements@VSpriteVisual@Composition@UI@Windows@@UISpriteVisual@234@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::Internal::SuperWetInkVisual,Windows::UI::Composition::Internal::ISuperWetInkVisual>::GetTrustLevel(
        __int64 a1,
        _DWORD *a2)
{
  __int64 result; // rax

  result = 0LL;
  *a2 = *(_DWORD *)(*(_QWORD *)(a1 - 304) + 32LL);
  return result;
}
