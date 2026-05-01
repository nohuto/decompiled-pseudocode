/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_871e5350aad6bf1182fd63b884b2a598_@@CA@AEBUIDispatcherQueueStatics@System@Windows@winrt@@@Z @ 0x180656320
 * Callers:
 *     <none>
 * Callees:
 *     ?GetForCurrentThread@?$consume_Windows_System_IDispatcherQueueStatics@UIDispatcherQueueStatics@System@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180656A50 (-GetForCurrentThread@-$consume_Windows_System_IDispatcherQueueStatics@UIDispatcherQueueStatics@S.c)
 */

const struct winrt::Windows::System::IDispatcherQueueStatics *__fastcall _lambda_871e5350aad6bf1182fd63b884b2a598_::_lambda_invoker_cdecl_(
        const struct winrt::Windows::System::IDispatcherQueueStatics *a1,
        __int64 a2)
{
  winrt::impl::consume_Windows_System_IDispatcherQueueStatics<winrt::Windows::System::IDispatcherQueueStatics>::GetForCurrentThread(
    a2,
    a1);
  return a1;
}
