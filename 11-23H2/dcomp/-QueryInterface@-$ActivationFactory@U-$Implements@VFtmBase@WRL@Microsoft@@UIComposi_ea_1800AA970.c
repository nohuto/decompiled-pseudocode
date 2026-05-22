/*
 * XREFs of ?QueryInterface@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UICompositionProjectedShadowCasterCollectionStatics@Composition@UI@Windows@@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AA970
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::UI::Composition::ICompositionProjectedShadowCasterCollectionStatics>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        void **a3)
{
  return Windows::UI::Composition::CompositionProjectedShadowCasterCollectionStatics::QueryInterface(
           (Windows::UI::Composition::CompositionProjectedShadowCasterCollectionStatics *)(a1 - 40),
           a2,
           a3);
}
