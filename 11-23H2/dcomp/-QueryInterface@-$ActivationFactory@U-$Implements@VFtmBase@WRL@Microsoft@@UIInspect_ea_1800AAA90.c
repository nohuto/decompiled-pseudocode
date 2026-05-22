/*
 * XREFs of ?QueryInterface@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UIInspectable@@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AAA90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,IInspectable>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        void **a3)
{
  return Windows::UI::Composition::Effects::WhiteNoiseEffectFactory::QueryInterface(
           (Windows::UI::Composition::Effects::WhiteNoiseEffectFactory *)(a1 - 8),
           a2,
           a3);
}
