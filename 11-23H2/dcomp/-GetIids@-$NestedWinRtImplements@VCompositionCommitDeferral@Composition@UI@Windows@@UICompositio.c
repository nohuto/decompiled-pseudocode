/*
 * XREFs of ?GetIids@?$NestedWinRtImplements@VCompositionCommitDeferral@Composition@UI@Windows@@UICompositionCommitDeferralPartner@234@@WRL2@Microsoft@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x180127F20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::CompositionCommitDeferral,Windows::UI::Composition::ICompositionCommitDeferralPartner>::GetIids(
        __int64 a1,
        unsigned int *a2,
        struct _GUID **a3)
{
  return Microsoft::WRL2::NestableRuntimeClass::InternalGetIids(
           (Microsoft::WRL2::NestableRuntimeClass *)(a1 - 128),
           a2,
           a3);
}
