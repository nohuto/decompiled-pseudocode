/*
 * XREFs of ??1disconnect_aware_handler@impl@winrt@@QEAA@XZ @ 0x180023118
 * Callers:
 *     ?Release@?$implements_delegate@U?$AsyncOperationCompletedHandler@UIRandomAccessStreamWithContentType@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@V_lambda_221c2fd13a07a77425ee53efb520030b_@@@impl@winrt@@UEAAIXZ @ 0x180022DF0 (-Release@-$implements_delegate@U-$AsyncOperationCompletedHandler@UIRandomAccessStreamWithContent.c)
 *     ?await_suspend@?$await_adapter@U?$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@QEAAXU?$coroutine_handle@X@experimental@std@@@Z @ 0x180022E64 (-await_suspend@-$await_adapter@U-$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@St.c)
 *     ?await_suspend@?$await_adapter@U?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@QEAAXU?$coroutine_handle@X@experimental@std@@@Z @ 0x180022F40 (-await_suspend@-$await_adapter@U-$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@.c)
 *     ??$?0V_lambda_221c2fd13a07a77425ee53efb520030b_@@@?$AsyncOperationCompletedHandler@UIRandomAccessStreamWithContentType@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@QEAA@V_lambda_221c2fd13a07a77425ee53efb520030b_@@@Z @ 0x180023000 (--$-0V_lambda_221c2fd13a07a77425ee53efb520030b_@@@-$AsyncOperationCompletedHandler@UIRandomAcces.c)
 *     ??$?0V_lambda_5631fd495d09b515f200478214f04faf_@@@?$AsyncOperationCompletedHandler@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@QEAA@V_lambda_5631fd495d09b515f200478214f04faf_@@@Z @ 0x18002308C (--$-0V_lambda_5631fd495d09b515f200478214f04faf_@@@-$AsyncOperationCompletedHandler@UIRandomAcces.c)
 *     ?Release@?$implements_delegate@UAsyncActionCompletedHandler@Foundation@Windows@winrt@@V_lambda_fcf98652dc0cd937c818a0b0ee1f275d_@@@impl@winrt@@UEAAIXZ @ 0x1800FC1A0 (-Release@-$implements_delegate@UAsyncActionCompletedHandler@Foundation@Windows@winrt@@V_lambda_f.c)
 *     ?await_suspend@?$await_adapter@UIAsyncAction@Foundation@Windows@winrt@@@impl@winrt@@QEAAXU?$coroutine_handle@X@experimental@std@@@Z @ 0x180143190 (-await_suspend@-$await_adapter@UIAsyncAction@Foundation@Windows@winrt@@@impl@winrt@@QEAAXU-$coro.c)
 *     ??$?0V_lambda_fcf98652dc0cd937c818a0b0ee1f275d_@@@AsyncActionCompletedHandler@Foundation@Windows@winrt@@QEAA@V_lambda_fcf98652dc0cd937c818a0b0ee1f275d_@@@Z @ 0x180143268 (--$-0V_lambda_fcf98652dc0cd937c818a0b0ee1f275d_@@@AsyncActionCompletedHandler@Foundation@Windows.c)
 *     ??1_lambda_e19b98bcf2579e04276d4d07a2ffd8e4_@@QEAA@XZ @ 0x1801432F4 (--1_lambda_e19b98bcf2579e04276d4d07a2ffd8e4_@@QEAA@XZ.c)
 *     _winrt::impl::await_adapter_winrt::Windows::Foundation::IAsyncAction_::await_suspend_::_1_::dtor$1 @ 0x180214CAD (_winrt--impl--await_adapter_winrt--Windows--Foundation--IAsyncAction_--await_suspend_--_1_--dtor.c)
 *     ??$?0V_lambda_e19b98bcf2579e04276d4d07a2ffd8e4_@@@?$AsyncOperationCompletedHandler@_N@Foundation@Windows@winrt@@QEAA@V_lambda_e19b98bcf2579e04276d4d07a2ffd8e4_@@@Z @ 0x180499E00 (--$-0V_lambda_e19b98bcf2579e04276d4d07a2ffd8e4_@@@-$AsyncOperationCompletedHandler@_N@Foundation.c)
 *     ?Release@?$implements_delegate@U?$AsyncOperationCompletedHandler@_N@Foundation@Windows@winrt@@V_lambda_e19b98bcf2579e04276d4d07a2ffd8e4_@@@impl@winrt@@UEAAIXZ @ 0x18049AC20 (-Release@-$implements_delegate@U-$AsyncOperationCompletedHandler@_N@Foundation@Windows@winrt@@V_.c)
 *     ?await_suspend@?$await_adapter@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@@impl@winrt@@QEAAXU?$coroutine_handle@X@experimental@std@@@Z @ 0x18049B518 (-await_suspend@-$await_adapter@U-$IAsyncOperation@_N@Foundation@Windows@winrt@@@impl@winrt@@QEAA.c)
 *     _winrt::impl::await_adapter_winrt::Windows::Foundation::IAsyncOperation_bool___::await_suspend_::_1_::dtor$1 @ 0x18049B5DB (_winrt--impl--await_adapter_winrt--Windows--Foundation--IAsyncOperation_bool___--aw_ea_18049B5DB.c)
 *     ??$?0V_lambda_e810b03a6e5f5a022cc95ca4940e8036_@@@?$AsyncOperationCompletedHandler@I@Foundation@Windows@winrt@@QEAA@V_lambda_e810b03a6e5f5a022cc95ca4940e8036_@@@Z @ 0x18056B67C (--$-0V_lambda_e810b03a6e5f5a022cc95ca4940e8036_@@@-$AsyncOperationCompletedHandler@I@Foundation@.c)
 *     ?await_suspend@?$await_adapter@U?$IAsyncOperation@I@Foundation@Windows@winrt@@@impl@winrt@@QEAAXU?$coroutine_handle@X@experimental@std@@@Z @ 0x18056E974 (-await_suspend@-$await_adapter@U-$IAsyncOperation@I@Foundation@Windows@winrt@@@impl@winrt@@QEAAX.c)
 *     _winrt::impl::await_adapter_winrt::Windows::Foundation::IAsyncOperation_unsigned_int___::await_suspend_::_1_::dtor$1 @ 0x18056EA56 (_winrt--impl--await_adapter_winrt--Windows--Foundation--IAsyncOperation_unsigned_in_ea_18056EA56.c)
 *     ??$?0V_lambda_23bc9049807001c581f3d238f4c7b21c_@@@?$AsyncOperationCompletedHandler@W4HttpStatusCode@Http@Web@Windows@winrt@@@Foundation@Windows@winrt@@QEAA@V_lambda_23bc9049807001c581f3d238f4c7b21c_@@@Z @ 0x1805D377C (--$-0V_lambda_23bc9049807001c581f3d238f4c7b21c_@@@-$AsyncOperationCompletedHandler@W4HttpStatusC.c)
 *     ?await_suspend@?$await_adapter@U?$IAsyncOperation@W4HttpStatusCode@Http@Web@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@QEAAXU?$coroutine_handle@X@experimental@std@@@Z @ 0x1805D5F84 (-await_suspend@-$await_adapter@U-$IAsyncOperation@W4HttpStatusCode@Http@Web@Windows@winrt@@@Foun.c)
 *     _winrt::impl::await_adapter_winrt::Windows::Foundation::IAsyncOperation_enum_winrt::Windows::Web::Http::HttpStatusCode___::await_suspend_::_1_::dtor$1 @ 0x1805D6066 (_winrt--impl--await_adapter_winrt--Windows--Foundation--IAsyncOperation_enum_winrt-_ea_1805D6066.c)
 * Callees:
 *     ?resume_apartment@impl@winrt@@YAXAEBUresume_apartment_context@12@U?$coroutine_handle@X@experimental@std@@@Z @ 0x1800296A4 (-resume_apartment@impl@winrt@@YAXAEBUresume_apartment_context@12@U-$coroutine_handle@X@experimen.c)
 */

void __fastcall winrt::impl::disconnect_aware_handler::~disconnect_aware_handler(
        winrt::impl::disconnect_aware_handler *this)
{
  if ( *((_QWORD *)this + 2) )
  {
    *((_QWORD *)this + 2) = 0LL;
    winrt::impl::resume_apartment();
  }
  if ( *(_QWORD *)this )
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(this);
}
