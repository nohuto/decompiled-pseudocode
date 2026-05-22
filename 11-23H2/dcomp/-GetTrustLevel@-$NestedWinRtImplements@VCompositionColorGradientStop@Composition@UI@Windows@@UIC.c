/*
 * XREFs of ?GetTrustLevel@?$NestedWinRtImplements@VCompositionColorGradientStop@Composition@UI@Windows@@UICompositionColorGradientStop@234@@WRL2@Microsoft@@UEAAJPEAW4TrustLevel@@@Z @ 0x18008F9A0
 * Callers:
 *     ?GetTrustLevel@?$NestedWinRtImplements@VCompositionVisualSurface@Composition@UI@Windows@@UICompositionVisualSurface@234@UICompositionSurface@234@@WRL2@Microsoft@@W7EAAJPEAW4TrustLevel@@@Z @ 0x1800AC510 (-GetTrustLevel@-$NestedWinRtImplements@VCompositionVisualSurface@Composition@UI@Windows@@UICompo.c)
 *     ?GetTrustLevel@?$NestedWinRtImplements@VCompositionGraphicsDevice@Composition@UI@Windows@@UICompositionGraphicsDevice@234@UICompositionGraphicsDevice2@234@UICompositionGraphicsDevice3@234@UICompositionGraphicsDevice4@234@@WRL2@Microsoft@@WBA@EAAJPEAW4TrustLevel@@@Z @ 0x1800AE850 (-GetTrustLevel@-$NestedWinRtImplements@VCompositionGraphicsDevice@Composition@UI@Windows@@UIComp.c)
 *     ?GetTrustLevel@?$NestedWinRtImplements@VCompositionGraphicsDevice@Composition@UI@Windows@@UICompositionGraphicsDevice@234@UICompositionGraphicsDevice2@234@UICompositionGraphicsDevice3@234@UICompositionGraphicsDevice4@234@@WRL2@Microsoft@@WBI@EAAJPEAW4TrustLevel@@@Z @ 0x1800AE870 (-GetTrustLevel@-$NestedWinRtImplements@VCompositionGraphicsDevice@Composition@UI@Wi_ea_1800AE870.c)
 *     ?GetTrustLevel@?$NestedWinRtImplements@VInteractionTracker@Interactions@Composition@UI@Windows@@UIInteractionTracker@2345@UIInteractionTracker2@2345@UIInteractionTracker3@2345@UIInteractionTracker4@2345@UIInteractionTracker5@2345@@WRL2@Microsoft@@WCA@EAAJPEAW4TrustLevel@@@Z @ 0x1800AFA60 (-GetTrustLevel@-$NestedWinRtImplements@VInteractionTracker@Interactions@Composition@UI@Windows@@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::CompositionColorGradientStop,Windows::UI::Composition::ICompositionColorGradientStop>::GetTrustLevel(
        __int64 a1,
        _DWORD *a2)
{
  __int64 result; // rax

  result = 0LL;
  *a2 = *(_DWORD *)(*(_QWORD *)(a1 - 128) + 32LL);
  return result;
}
