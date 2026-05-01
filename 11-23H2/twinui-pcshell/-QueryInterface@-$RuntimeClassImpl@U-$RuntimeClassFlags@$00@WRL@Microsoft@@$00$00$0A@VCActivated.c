/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VCActivatedEventArgsBase@@UIStartupTaskActivatedEventArgs@Activation@ApplicationModel@Windows@@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802AA1E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,CActivatedEventArgsBase,Windows::ApplicationModel::Activation::IStartupTaskActivatedEventArgs>::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        void **a3)
{
  return StartupTaskActivatedEventArgsImpl::QueryInterface((StartupTaskActivatedEventArgsImpl *)(a1 - 8), a2, a3);
}
