/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_e9bebc7f8c018e57c97e4fe07c36625e_@@CA?AUDispatcherQueueController@System@Windows@winrt@@AEBUIDispatcherQueueControllerStatics@345@@Z @ 0x180178500
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateOnDedicatedThread@?$consume_Windows_System_IDispatcherQueueControllerStatics@UIDispatcherQueueControllerStatics@System@Windows@winrt@@@impl@winrt@@QEBA?AUDispatcherQueueController@System@Windows@3@XZ @ 0x180178528 (-CreateOnDedicatedThread@-$consume_Windows_System_IDispatcherQueueControllerStatics@UIDispatcher.c)
 */

__int64 __fastcall _lambda_e9bebc7f8c018e57c97e4fe07c36625e_::_lambda_invoker_cdecl_(__int64 a1, __int64 a2)
{
  winrt::impl::consume_Windows_System_IDispatcherQueueControllerStatics<winrt::Windows::System::IDispatcherQueueControllerStatics>::CreateOnDedicatedThread(
    a2,
    a1);
  return a1;
}
