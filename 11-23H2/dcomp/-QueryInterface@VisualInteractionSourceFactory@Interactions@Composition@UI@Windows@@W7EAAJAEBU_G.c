/*
 * XREFs of ?QueryInterface@VisualInteractionSourceFactory@Interactions@Composition@UI@Windows@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AAE70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::UI::Composition::Interactions::VisualInteractionSourceFactory::QueryInterface(__int64 a1)
{
  return Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::UI::Composition::Interactions::IVisualInteractionSourceStatics>,Windows::UI::Composition::Interactions::IVisualInteractionSourceStatics2,Microsoft::WRL::Details::Nil,0>::QueryInterface(a1 - 8);
}
