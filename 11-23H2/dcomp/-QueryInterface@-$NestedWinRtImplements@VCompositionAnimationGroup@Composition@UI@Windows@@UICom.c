/*
 * XREFs of ?QueryInterface@?$NestedWinRtImplements@VCompositionAnimationGroup@Composition@UI@Windows@@UICompositionAnimationGroup@234@UICompositionAnimationBase@234@UICompositionAnimationBaseInternal@234@U?$IIterable@PEAVCompositionAnimation@Composition@UI@Windows@@@Collections@Foundation@4@@WRL2@Microsoft@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AE150
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::CompositionAnimationGroup,Windows::UI::Composition::ICompositionAnimationGroup,Windows::UI::Composition::ICompositionAnimationBase,Windows::UI::Composition::ICompositionAnimationBaseInternal,Windows::Foundation::Collections::IIterable<Windows::UI::Composition::CompositionAnimation *>>::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        void **a3)
{
  return Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::CompositionCommitDeferral,Windows::UI::Composition::ICompositionCommitDeferralPartner>::QueryInterface(
           a1 - 16,
           a2,
           a3);
}
