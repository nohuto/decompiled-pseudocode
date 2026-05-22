/*
 * XREFs of ?GetIids@AppContentRootFactory@UI@Windows@@WCI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800A97F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::UI::AppContentRootFactory::GetIids(__int64 a1)
{
  return Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::UI::IUIContentRootFactory>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::GetIids(a1 - 40);
}
