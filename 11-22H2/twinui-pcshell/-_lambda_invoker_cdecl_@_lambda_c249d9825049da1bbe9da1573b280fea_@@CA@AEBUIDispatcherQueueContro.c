/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_c249d9825049da1bbe9da1573b280fea_@@CA@AEBUIDispatcherQueueControllerStatics@Dispatching@UI@Microsoft@winrt@@@Z @ 0x18006F9F0
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateOnCurrentThread@?$consume_Microsoft_UI_Dispatching_IDispatcherQueueControllerStatics@UIDispatcherQueueControllerStatics@Dispatching@UI@Microsoft@winrt@@@impl@winrt@@QEBA@XZ @ 0x18006FA18 (-CreateOnCurrentThread@-$consume_Microsoft_UI_Dispatching_IDispatcherQueueControllerStatics@UIDi.c)
 */

const struct winrt::Microsoft::UI::Dispatching::IDispatcherQueueControllerStatics *__fastcall _lambda_c249d9825049da1bbe9da1573b280fea_::_lambda_invoker_cdecl_(
        const struct winrt::Microsoft::UI::Dispatching::IDispatcherQueueControllerStatics *a1,
        __int64 a2)
{
  winrt::impl::consume_Microsoft_UI_Dispatching_IDispatcherQueueControllerStatics<winrt::Microsoft::UI::Dispatching::IDispatcherQueueControllerStatics>::CreateOnCurrentThread(
    a2,
    a1);
  return a1;
}
