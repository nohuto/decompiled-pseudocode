/*
 * XREFs of ?GetIids@StartupTaskActivatedEventArgsImpl@@WBA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1802AA080
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall StartupTaskActivatedEventArgsImpl::GetIids(__int64 a1)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,CActivatedEventArgsBase,Windows::ApplicationModel::Activation::IStartupTaskActivatedEventArgs>::GetIids(a1 - 16);
}
