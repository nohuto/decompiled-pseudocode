/*
 * XREFs of ?Release@StartupTaskActivatedEventArgsImpl@@UEAAKXZ @ 0x180574100
 * Callers:
 *     ?Release@StartupTaskActivatedEventArgsImpl@@W7EAAKXZ @ 0x18020E3D0 (-Release@StartupTaskActivatedEventArgsImpl@@W7EAAKXZ.c)
 *     ?Release@StartupTaskActivatedEventArgsImpl@@WBA@EAAKXZ @ 0x18020E3F0 (-Release@StartupTaskActivatedEventArgsImpl@@WBA@EAAKXZ.c)
 *     ?Release@StartupTaskActivatedEventArgsImpl@@WBI@EAAKXZ @ 0x18020E410 (-Release@StartupTaskActivatedEventArgsImpl@@WBI@EAAKXZ.c)
 *     ?Release@StartupTaskActivatedEventArgsImpl@@WCA@EAAKXZ @ 0x18020E430 (-Release@StartupTaskActivatedEventArgsImpl@@WCA@EAAKXZ.c)
 *     ?Release@StartupTaskActivatedEventArgsImpl@@WJI@EAAKXZ @ 0x18020E450 (-Release@StartupTaskActivatedEventArgsImpl@@WJI@EAAKXZ.c)
 *     ?Release@StartupTaskActivatedEventArgsImpl@@WKA@EAAKXZ @ 0x18020E470 (-Release@StartupTaskActivatedEventArgsImpl@@WKA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall StartupTaskActivatedEventArgsImpl::Release(__int64 this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,CActivatedEventArgsBase,Windows::ApplicationModel::Activation::IStartupTaskActivatedEventArgs>::Release(this);
}
