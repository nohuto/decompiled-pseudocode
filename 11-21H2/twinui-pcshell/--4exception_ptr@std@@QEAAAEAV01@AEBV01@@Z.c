/*
 * XREFs of ??4exception_ptr@std@@QEAAAEAV01@AEBV01@@Z @ 0x18041D194
 * Callers:
 *     ?unhandled_exception@?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVFallbackFlyoutView@@PEAUHWND__@@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@QEAAXXZ @ 0x1801D0070 (-unhandled_exception@-$promise_base@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Wi.c)
 *     ?unhandled_exception@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@I@Foundation@Windows@winrt@@PEAUDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@34@AEBV?$com_ptr_t@UIDropTarget@@Uerr_exception_policy@wil@@@wil@@AEBV?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@AEBUtagPOINT@@_N@experimental@std@@U?$IAsyncOperation@I@Foundation@Windows@winrt@@X@impl@winrt@@QEAAXXZ @ 0x18041F214 (-unhandled_exception@-$promise_base@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@I@Founda.c)
 *     winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamReference___lambda_b8623916b833b4369876a538bb21da9f__const___::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamReference__void_::unhandled_exception @ 0x18057D9A0 (winrt--impl--promise_base_std--experimental--coroutine_traits_winrt--Windows--Found_ea_18057D9A0.c)
 * Callees:
 *     <none>
 */

void *__fastcall std::exception_ptr::operator=(void *a1, const void *a2)
{
  __ExceptionPtrAssign(a1, a2);
  return a1;
}
