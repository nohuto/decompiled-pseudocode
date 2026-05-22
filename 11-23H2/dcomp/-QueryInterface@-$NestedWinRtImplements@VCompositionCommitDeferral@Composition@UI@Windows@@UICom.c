/*
 * XREFs of ?QueryInterface@?$NestedWinRtImplements@VCompositionCommitDeferral@Composition@UI@Windows@@UICompositionCommitDeferralPartner@234@@WRL2@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180074E30
 * Callers:
 *     ?QueryInterface@?$NestedWinRtImplements@VCompositionTexture@Composition@UI@Windows@@UICompositionTexture@234@UICompositionSurface@234@@WRL2@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AC730 (-QueryInterface@-$NestedWinRtImplements@VCompositionTexture@Composition@UI@Windows@@UICompositio.c)
 *     ?QueryInterface@?$NestedWinRtImplements@VCompositionAnimationGroup@Composition@UI@Windows@@UICompositionAnimationGroup@234@UICompositionAnimationBase@234@UICompositionAnimationBaseInternal@234@U?$IIterable@PEAVCompositionAnimation@Composition@UI@Windows@@@Collections@Foundation@4@@WRL2@Microsoft@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AE150 (-QueryInterface@-$NestedWinRtImplements@VCompositionAnimationGroup@Composition@UI@Windows@@UICom.c)
 *     ?QueryInterface@?$NestedWinRtImplements@VCompositionAnimationGroup@Composition@UI@Windows@@UICompositionAnimationGroup@234@UICompositionAnimationBase@234@UICompositionAnimationBaseInternal@234@U?$IIterable@PEAVCompositionAnimation@Composition@UI@Windows@@@Collections@Foundation@4@@WRL2@Microsoft@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AE170 (-QueryInterface@-$NestedWinRtImplements@VCompositionAnimationGroup@Composition@UI@W_ea_1800AE170.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::CompositionCommitDeferral,Windows::UI::Composition::ICompositionCommitDeferralPartner>::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        void **a3)
{
  return Microsoft::WRL2::NestableRuntimeClass::InternalQueryInterface(
           (Microsoft::WRL2::NestableRuntimeClass *)(a1 - 128),
           a2,
           a3);
}
