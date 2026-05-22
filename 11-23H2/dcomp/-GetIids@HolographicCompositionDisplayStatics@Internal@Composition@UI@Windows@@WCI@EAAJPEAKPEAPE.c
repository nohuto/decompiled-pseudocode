/*
 * XREFs of ?GetIids@HolographicCompositionDisplayStatics@Internal@Composition@UI@Windows@@WCI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800A97B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::UI::Composition::Internal::HolographicCompositionDisplayStatics::GetIids(__int64 a1)
{
  return Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::UI::Composition::Internal::IHolographicCompositionDisplayStatics>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::GetIids(a1 - 40);
}
