/*
 * XREFs of ?Release@StartupTaskActivatedEventArgsImpl@@UEAAKXZ @ 0x1806320D0
 * Callers:
 *     ?Release@StartupTaskActivatedEventArgsImpl@@W7EAAKXZ @ 0x1802AA620 (-Release@StartupTaskActivatedEventArgsImpl@@W7EAAKXZ.c)
 *     ?Release@StartupTaskActivatedEventArgsImpl@@WBA@EAAKXZ @ 0x1802AA640 (-Release@StartupTaskActivatedEventArgsImpl@@WBA@EAAKXZ.c)
 *     ?Release@StartupTaskActivatedEventArgsImpl@@WBI@EAAKXZ @ 0x1802AA660 (-Release@StartupTaskActivatedEventArgsImpl@@WBI@EAAKXZ.c)
 *     ?Release@StartupTaskActivatedEventArgsImpl@@WCA@EAAKXZ @ 0x1802AA680 (-Release@StartupTaskActivatedEventArgsImpl@@WCA@EAAKXZ.c)
 *     ?Release@StartupTaskActivatedEventArgsImpl@@WJI@EAAKXZ @ 0x1802AA6A0 (-Release@StartupTaskActivatedEventArgsImpl@@WJI@EAAKXZ.c)
 *     ?Release@StartupTaskActivatedEventArgsImpl@@WKA@EAAKXZ @ 0x1802AA6C0 (-Release@StartupTaskActivatedEventArgsImpl@@WKA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall StartupTaskActivatedEventArgsImpl::Release(__int64 this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,CActivatedEventArgsBase,Windows::ApplicationModel::Activation::IStartupTaskActivatedEventArgs>::Release(this);
}
