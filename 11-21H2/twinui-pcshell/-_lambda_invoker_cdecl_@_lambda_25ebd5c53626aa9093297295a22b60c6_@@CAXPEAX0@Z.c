/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_25ebd5c53626aa9093297295a22b60c6_@@CAXPEAX0@Z @ 0x1803459E0
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800F70DC (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ?resume_apartment_sync@impl@winrt@@YAXAEBU?$com_ptr@UIContextCallback@impl@winrt@@@2@U?$coroutine_handle@X@experimental@std@@@Z @ 0x180351844 (-resume_apartment_sync@impl@winrt@@YAXAEBU-$com_ptr@UIContextCallback@impl@winrt@@@2@U-$coroutin.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall _lambda_25ebd5c53626aa9093297295a22b60c6_::_lambda_invoker_cdecl_(
        PTP_CALLBACK_INSTANCE Instance,
        __int64 *Context)
{
  winrt::impl::resume_apartment_sync(Context, Context[1]);
  if ( *Context )
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(Context);
  operator delete(Context);
}
