/*
 * XREFs of ?AddRef@StartupTaskActivatedEventArgsImpl@@WJI@EAAKXZ @ 0x1802A9FA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall StartupTaskActivatedEventArgsImpl::AddRef(__int64 a1)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,CActivatedEventArgsBase,Windows::ApplicationModel::Activation::IStartupTaskActivatedEventArgs>::AddRef(a1 - 152);
}
