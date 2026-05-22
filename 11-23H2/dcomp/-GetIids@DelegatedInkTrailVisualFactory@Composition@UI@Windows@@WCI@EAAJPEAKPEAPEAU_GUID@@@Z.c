/*
 * XREFs of ?GetIids@DelegatedInkTrailVisualFactory@Composition@UI@Windows@@WCI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800A9790
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::UI::Composition::DelegatedInkTrailVisualFactory::GetIids(__int64 a1)
{
  return Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::UI::Composition::IDelegatedInkTrailVisualStatics>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::GetIids(a1 - 40);
}
