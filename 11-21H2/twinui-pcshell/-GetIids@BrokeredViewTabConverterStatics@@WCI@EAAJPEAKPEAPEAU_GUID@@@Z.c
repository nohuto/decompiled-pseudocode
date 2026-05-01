/*
 * XREFs of ?GetIids@BrokeredViewTabConverterStatics@@WCI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1801F9650
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall BrokeredViewTabConverterStatics::GetIids(__int64 a1)
{
  return Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::Internal::ComposableShell::Tabs::IBrokeredViewTabConverterStatics>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::GetIids(a1 - 40);
}
