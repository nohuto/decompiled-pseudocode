/*
 * XREFs of ?Provider@PinManagerTelemetry@@SAQEBU_tlgProvider_t@@XZ @ 0x180084D70
 * Callers:
 *     ??0PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x180088BE8 (--0PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     std::_Ref_count_obj2__anonymous_namespace_::PinConsentPromptManager_::_Ref_count_obj2__anonymous_namespace_::PinConsentPromptManager___ @ 0x180088D80 (std--_Ref_count_obj2__anonymous_namespace_--PinConsentPromptManager_--_Ref_count_obj2__anonymous.c)
 *     ??0PinHistory@@QEAA@XZ @ 0x18008B404 (--0PinHistory@@QEAA@XZ.c)
 *     ?StartActivity@PinManagerPinItemFromTrustedCaller@PinManagerTelemetry@@QEAAXPEBG0W4PinManagerRequestPinItemResult@2@@Z @ 0x180252310 (-StartActivity@PinManagerPinItemFromTrustedCaller@PinManagerTelemetry@@QEAAXPEBG0W4PinManagerReq.c)
 *     ?StartActivity@PinManagerUnpinTaskbarItem@PinManagerTelemetry@@QEAAXPEBG0@Z @ 0x180252410 (-StartActivity@PinManagerUnpinTaskbarItem@PinManagerTelemetry@@QEAAXPEBG0@Z.c)
 *     ?StartActivity@PinManagerUpdatePinnedTaskbarItem@PinManagerTelemetry@@QEAAXPEBG0@Z @ 0x1802524F0 (-StartActivity@PinManagerUpdatePinnedTaskbarItem@PinManagerTelemetry@@QEAAXPEBG0@Z.c)
 *     ?Stop@?$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1802525D0 (-Stop@-$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Para.c)
 *     ?StopActivity@PinManagerPinItemFromTrustedCaller@PinManagerTelemetry@@MEAAXXZ @ 0x1802526F0 (-StopActivity@PinManagerPinItemFromTrustedCaller@PinManagerTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@PinManagerUnpinTaskbarItem@PinManagerTelemetry@@MEAAXXZ @ 0x180252920 (-StopActivity@PinManagerUnpinTaskbarItem@PinManagerTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@PinManagerUpdatePinnedTaskbarItem@PinManagerTelemetry@@MEAAXXZ @ 0x180252B50 (-StopActivity@PinManagerUpdatePinnedTaskbarItem@PinManagerTelemetry@@MEAAXXZ.c)
 *     _anonymous_namespace_::CreateTemporaryFile @ 0x1806AC808 (_anonymous_namespace_--CreateTemporaryFile.c)
 *     _anonymous_namespace_::CreateTemporaryLogoFile @ 0x1806ACB64 (_anonymous_namespace_--CreateTemporaryLogoFile.c)
 *     _anonymous_namespace_::GetWicBitmapFromHBitmap @ 0x1806AD79C (_anonymous_namespace_--GetWicBitmapFromHBitmap.c)
 *     _anonymous_namespace_::GetWicBitmapFromStreamReference @ 0x1806AD8F8 (_anonymous_namespace_--GetWicBitmapFromStreamReference.c)
 * Callees:
 *     ?get@?$static_lazy@VPinManagerTelemetry@@@details@wil@@QEAAPEAVPinManagerTelemetry@@P6AXXZ@Z @ 0x180084D90 (-get@-$static_lazy@VPinManagerTelemetry@@@details@wil@@QEAAPEAVPinManagerTelemetry@@P6AXXZ@Z.c)
 */

const struct _tlgProvider_t *__fastcall PinManagerTelemetry::Provider(__int64 a1)
{
  return *(const struct _tlgProvider_t **)(wil::details::static_lazy<PinManagerTelemetry>::get(
                                             a1,
                                             _lambda_0da5e8ba5c2e2fa19b2167a51cfd1f3e_::_lambda_invoker_cdecl_)
                                         + 8);
}
