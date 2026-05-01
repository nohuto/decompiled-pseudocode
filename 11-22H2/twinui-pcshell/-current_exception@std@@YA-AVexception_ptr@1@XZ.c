/*
 * XREFs of ?current_exception@std@@YA?AVexception_ptr@1@XZ @ 0x1804E0BAC
 * Callers:
 *     ?unhandled_exception@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@UPackageVolume@Deployment@Management@Windows@winrt@@@Foundation@Windows@winrt@@PEAVLockScreenWidgetPackageHelperBase@@@experimental@std@@U?$IAsyncOperation@UPackageVolume@Deployment@Management@Windows@winrt@@@Foundation@Windows@winrt@@X@impl@winrt@@QEAAXXZ @ 0x1802293FC (-unhandled_exception@-$promise_base@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@UPackage.c)
 *     __lambda_28c8d881b27bf1ac2cdae8c290af34c5_::operator()_::_1_::catch$1 @ 0x18024FB1D (__lambda_28c8d881b27bf1ac2cdae8c290af34c5_--operator()_--_1_--catch$1.c)
 *     __lambda_32e8f84988e4294a1229b4d4483bb0b7_::operator()_::_1_::catch$1 @ 0x18024FB8D (__lambda_32e8f84988e4294a1229b4d4483bb0b7_--operator()_--_1_--catch$1.c)
 *     __lambda_96fcfb23d2949330f9f81abba36111b7_::operator()_::_1_::catch$1 @ 0x180250131 (__lambda_96fcfb23d2949330f9f81abba36111b7_--operator()_--_1_--catch$1.c)
 *     __lambda_bcfbc8e9dbb18e4ddb6540cdb574c293_::operator()_::_1_::catch$1 @ 0x1802501A1 (__lambda_bcfbc8e9dbb18e4ddb6540cdb574c293_--operator()_--_1_--catch$1.c)
 *     __lambda_c339d120b376647924ab8d58f8f10fc7_::operator()_::_1_::catch$1 @ 0x180250211 (__lambda_c339d120b376647924ab8d58f8f10fc7_--operator()_--_1_--catch$1.c)
 *     __lambda_c9b45bb761211b190adbb06a9db82044_::operator()_::_1_::catch$1 @ 0x180250281 (__lambda_c9b45bb761211b190adbb06a9db82044_--operator()_--_1_--catch$1.c)
 *     ?unhandled_exception@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUPinManager@implementation@Shell@Internal@34@Uhstring@4@U94@USecondaryTile@StartScreen@UI@34@PEFBU_ITEMIDLIST@@_N_NW4PINNEDLISTMODIFYCALLER@@VPinManagerPinItemToTaskbarShim@PinManagerTelemetry@@V?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@V?$test_watcher@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@X@impl@winrt@@QEAAXXZ @ 0x1804FDD20 (-unhandled_exception@-$promise_base@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@_N@Found.c)
 *     winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____anonymous_namespace_::PinConsentPromptManager___std::shared_ptr_PinOperationContext__PinConsentPromptContent_const_&_::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool____void_::unhandled_exception @ 0x18063D320 (winrt--impl--promise_base_std--experimental--coroutine_traits_winrt--Windows--Found_ea_18063D320.c)
 * Callees:
 *     <none>
 */

void *__fastcall std::current_exception(void *a1)
{
  __ExceptionPtrCreate(a1);
  __ExceptionPtrCurrentException(a1);
  return a1;
}
