/*
 * XREFs of ?GetRuntimeClassName@?$NestedWinRtImplements@VCompositionCommitDeferral@Composition@UI@Windows@@UICompositionCommitDeferralPartner@234@@WRL2@Microsoft@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180128210
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::CompositionCommitDeferral,Windows::UI::Composition::ICompositionCommitDeferralPartner>::GetRuntimeClassName(
        __int64 a1,
        HSTRING *a2)
{
  return Microsoft::WRL2::NestableRuntimeClass::InternalGetRuntimeClassName(
           (Microsoft::WRL2::NestableRuntimeClass *)(a1 - 128),
           a2);
}
