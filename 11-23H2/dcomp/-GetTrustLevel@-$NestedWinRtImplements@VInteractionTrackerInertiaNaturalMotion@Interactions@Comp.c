/*
 * XREFs of ?GetTrustLevel@?$NestedWinRtImplements@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@UIInteractionTrackerInertiaNaturalMotion@2345@@WRL2@Microsoft@@UEAAJPEAW4TrustLevel@@@Z @ 0x18008FBE0
 * Callers:
 *     ?GetTrustLevel@?$NestedWinRtImplements@VVisual@Composition@UI@Windows@@UIVisual@234@UIVisual2@234@UIVisual3@234@UIVisual4@234@@WRL2@Microsoft@@W7EAAJPEAW4TrustLevel@@@Z @ 0x1800ACE30 (-GetTrustLevel@-$NestedWinRtImplements@VVisual@Composition@UI@Windows@@UIVisual@234@UIVisual2@23.c)
 *     ?GetTrustLevel@?$NestedWinRtImplements@VVisual@Composition@UI@Windows@@UIVisual@234@UIVisual2@234@UIVisual3@234@UIVisual4@234@@WRL2@Microsoft@@WBA@EAAJPEAW4TrustLevel@@@Z @ 0x1800ACE50 (-GetTrustLevel@-$NestedWinRtImplements@VVisual@Composition@UI@Windows@@UIVisual@234_ea_1800ACE50.c)
 *     ?GetTrustLevel@?$NestedWinRtImplements@VVisual@Composition@UI@Windows@@UIVisual@234@UIVisual2@234@UIVisual3@234@UIVisual4@234@@WRL2@Microsoft@@WBI@EAAJPEAW4TrustLevel@@@Z @ 0x1800ACE70 (-GetTrustLevel@-$NestedWinRtImplements@VVisual@Composition@UI@Windows@@UIVisual@234_ea_1800ACE70.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion,Windows::UI::Composition::Interactions::IInteractionTrackerInertiaNaturalMotion>::GetTrustLevel(
        __int64 a1,
        _DWORD *a2)
{
  __int64 result; // rax

  result = 0LL;
  *a2 = *(_DWORD *)(*(_QWORD *)(a1 - 160) + 32LL);
  return result;
}
