/*
 * XREFs of ?QueryInterface@?$NestedWinRtImplements@VCompositionTexture@Composition@UI@Windows@@UICompositionTexture@234@UICompositionSurface@234@@WRL2@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AC730
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::CompositionTexture,Windows::UI::Composition::ICompositionTexture,Windows::UI::Composition::ICompositionSurface>::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        void **a3)
{
  return Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::CompositionCommitDeferral,Windows::UI::Composition::ICompositionCommitDeferralPartner>::QueryInterface(
           a1 - 8,
           a2,
           a3);
}
