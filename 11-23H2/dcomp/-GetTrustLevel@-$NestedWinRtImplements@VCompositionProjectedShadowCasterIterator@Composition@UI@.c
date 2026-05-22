/*
 * XREFs of ?GetTrustLevel@?$NestedWinRtImplements@VCompositionProjectedShadowCasterIterator@Composition@UI@Windows@@U?$IIterator@PEAVCompositionProjectedShadowCaster@Composition@UI@Windows@@@Collections@Foundation@4@@WRL2@Microsoft@@UEAAJPEAW4TrustLevel@@@Z @ 0x18008F810
 * Callers:
 *     ?GetTrustLevel@?$NestedWinRtImplements@VCompositionObject@Composition@UI@Windows@@UICompositionObject@234@UICompositionObject2@234@UICompositionObject3@234@UICompositionObject4@234@UIAnimationObject@234@UICompositionObject5@234@@WRL2@Microsoft@@W7EAAJPEAW4TrustLevel@@@Z @ 0x1800AB710 (-GetTrustLevel@-$NestedWinRtImplements@VCompositionObject@Composition@UI@Windows@@UICompositionO.c)
 *     ?GetTrustLevel@?$NestedWinRtImplements@VCompositionObject@Composition@UI@Windows@@UICompositionObject@234@UICompositionObject2@234@UICompositionObject3@234@UICompositionObject4@234@UIAnimationObject@234@UICompositionObject5@234@@WRL2@Microsoft@@WBA@EAAJPEAW4TrustLevel@@@Z @ 0x1800AB730 (-GetTrustLevel@-$NestedWinRtImplements@VCompositionObject@Composition@UI@Windows@@U_ea_1800AB730.c)
 *     ?GetTrustLevel@?$NestedWinRtImplements@VCompositionObject@Composition@UI@Windows@@UICompositionObject@234@UICompositionObject2@234@UICompositionObject3@234@UICompositionObject4@234@UIAnimationObject@234@UICompositionObject5@234@@WRL2@Microsoft@@WBI@EAAJPEAW4TrustLevel@@@Z @ 0x1800AB750 (-GetTrustLevel@-$NestedWinRtImplements@VCompositionObject@Composition@UI@Windows@@U_ea_1800AB750.c)
 *     ?GetTrustLevel@?$NestedWinRtImplements@VCompositionObject@Composition@UI@Windows@@UICompositionObject@234@UICompositionObject2@234@UICompositionObject3@234@UICompositionObject4@234@UIAnimationObject@234@UICompositionObject5@234@@WRL2@Microsoft@@WCA@EAAJPEAW4TrustLevel@@@Z @ 0x1800AB770 (-GetTrustLevel@-$NestedWinRtImplements@VCompositionObject@Composition@UI@Windows@@U_ea_1800AB770.c)
 *     ?GetTrustLevel@?$NestedWinRtImplements@VCompositionObject@Composition@UI@Windows@@UICompositionObject@234@UICompositionObject2@234@UICompositionObject3@234@UICompositionObject4@234@UIAnimationObject@234@UICompositionObject5@234@@WRL2@Microsoft@@WCI@EAAJPEAW4TrustLevel@@@Z @ 0x1800AB790 (-GetTrustLevel@-$NestedWinRtImplements@VCompositionObject@Composition@UI@Windows@@U_ea_1800AB790.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::CompositionProjectedShadowCasterIterator,Windows::Foundation::Collections::IIterator<Windows::UI::Composition::CompositionProjectedShadowCaster *>>::GetTrustLevel(
        __int64 a1,
        _DWORD *a2)
{
  __int64 result; // rax

  result = 0LL;
  *a2 = *(_DWORD *)(*(_QWORD *)(a1 - 32) + 32LL);
  return result;
}
