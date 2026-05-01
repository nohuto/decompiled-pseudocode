/*
 * XREFs of ??1exception_ptr@std@@QEAA@XZ @ 0x1804DFA8C
 * Callers:
 *     ?unhandled_exception@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@UPackageVolume@Deployment@Management@Windows@winrt@@@Foundation@Windows@winrt@@PEAVLockScreenWidgetPackageHelperBase@@@experimental@std@@U?$IAsyncOperation@UPackageVolume@Deployment@Management@Windows@winrt@@@Foundation@Windows@winrt@@X@impl@winrt@@QEAAXXZ @ 0x1802293FC (-unhandled_exception@-$promise_base@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@UPackage.c)
 *     __anonymous_namespace_::RunSynchronousInSTA__lambda_1fbeaa579e3ee671bf380f4b4d3dd4b7____::_1_::dtor$0 @ 0x18024ED00 (__anonymous_namespace_--RunSynchronousInSTA__lambda_1fbeaa579e3ee671bf380f4b4d3dd4b7____--_1_--d.c)
 *     __anonymous_namespace_::RunSynchronousInSTA__lambda_49390bb1d2cae92a58be327124002af0____::_1_::dtor$0 @ 0x18024EE3C (__anonymous_namespace_--RunSynchronousInSTA__lambda_49390bb1d2cae92a58be327124002af0____--_1_--d.c)
 *     __anonymous_namespace_::RunSynchronousInSTA__lambda_50bb0220b5fa1030b541f5726b219874____::_1_::dtor$0 @ 0x18024EF68 (__anonymous_namespace_--RunSynchronousInSTA__lambda_50bb0220b5fa1030b541f5726b219874____--_1_--d.c)
 *     __anonymous_namespace_::RunSynchronousInSTA__lambda_6f980fbbc6752bcaca442c74782693a9____::_1_::dtor$0 @ 0x18024F0B4 (__anonymous_namespace_--RunSynchronousInSTA__lambda_6f980fbbc6752bcaca442c74782693a9____--_1_--d.c)
 *     __anonymous_namespace_::RunSynchronousInSTA__lambda_832c05d38d5c282b3aadaebeafbaeeca____::_1_::dtor$0 @ 0x18024F1F0 (__anonymous_namespace_--RunSynchronousInSTA__lambda_832c05d38d5c282b3aadaebeafbaeeca____--_1_--d.c)
 *     __anonymous_namespace_::RunSynchronousInSTA__lambda_de2d726059b44d27a392c508ba387a14____::_1_::dtor$0 @ 0x18024F328 (__anonymous_namespace_--RunSynchronousInSTA__lambda_de2d726059b44d27a392c508ba387a14____--_1_--d.c)
 *     _UwpWindowManagerBridge::RuntimeClassInitialize_::_1_::dtor$1 @ 0x1802B85C2 (_UwpWindowManagerBridge--RuntimeClassInitialize_--_1_--dtor$1.c)
 *     _std::rethrow_exception_::_1_::dtor$0 @ 0x1804E0BF6 (_std--rethrow_exception_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall std::exception_ptr::~exception_ptr(std::exception_ptr *this)
{
  __ExceptionPtrDestroy(this);
}
