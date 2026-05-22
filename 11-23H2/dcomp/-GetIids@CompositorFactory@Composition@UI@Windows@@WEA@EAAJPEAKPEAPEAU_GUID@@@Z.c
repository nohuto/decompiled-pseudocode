/*
 * XREFs of ?GetIids@CompositorFactory@Composition@UI@Windows@@WEA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800AA4F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::UI::Composition::CompositorFactory::GetIids(__int64 a1)
{
  return Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::UI::Composition::IInteropCompositorFactoryPartner>,Windows::UI::Composition::ICompositorStatics,Windows::UI::Composition::IInteropCompositorFactoryRestricted,0>::GetIids(a1 - 64);
}
