/*
 * XREFs of ?wait_callback@?$event_watcher_t@V?$unique_storage@U?$resource_policy@PEAUevent_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_event_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z @ 0x1800D2ED0
 * Callers:
 *     <none>
 * Callees:
 *     ??R?$function@$$A6AXXZ@wistd@@QEBAXXZ @ 0x1800D1FEC (--R-$function@$$A6AXXZ@wistd@@QEBAXXZ.c)
 *     ?ResetEvent@details@wil@@YAXPEAX@Z @ 0x1800D27F4 (-ResetEvent@details@wil@@YAXPEAX@Z.c)
 */

void __fastcall wil::event_watcher_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::event_watcher_state *,void (*)(wil::details::event_watcher_state *),&void wil::details::delete_event_watcher_state(wil::details::event_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::event_watcher_state *,wil::details::event_watcher_state *,0,std::nullptr_t>>,wil::err_exception_policy>::wait_callback(
        PTP_CALLBACK_INSTANCE Instance,
        wil::details **Context,
        PTP_WAIT Wait,
        TP_WAIT_RESULT WaitResult)
{
  wil::details::ResetEvent(Context[15], Context);
  wistd::function<void (void)>::operator()((__int64)Context);
  SetThreadpoolWait(Wait, Context[15], 0LL);
}
