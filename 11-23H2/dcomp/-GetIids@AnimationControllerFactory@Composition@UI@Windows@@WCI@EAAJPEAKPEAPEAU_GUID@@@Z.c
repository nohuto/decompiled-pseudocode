/*
 * XREFs of ?GetIids@AnimationControllerFactory@Composition@UI@Windows@@WCI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800AA350
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::UI::Composition::AnimationControllerFactory::GetIids(__int64 a1)
{
  return Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,IInspectable>,Windows::UI::Composition::IAnimationControllerStatics,Microsoft::WRL::Details::Nil,0>::GetIids(a1 - 40);
}
