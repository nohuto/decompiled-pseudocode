/*
 * XREFs of ?AddRef@StartupTaskActivatedEventArgsImpl@@W7EAAKXZ @ 0x18020DCD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall StartupTaskActivatedEventArgsImpl::AddRef(__int64 a1)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,CActivatedEventArgsBase,Windows::ApplicationModel::Activation::IStartupTaskActivatedEventArgs>::AddRef(a1 - 8);
}
