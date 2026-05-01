/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_871e5350aad6bf1182fd63b884b2a598_@@CA?AUDispatcherQueue@System@Windows@winrt@@AEBUIDispatcherQueueStatics@345@@Z @ 0x1805AD3E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetForCurrentThread@?$consume_Windows_System_IDispatcherQueueStatics@UIDispatcherQueueStatics@System@Windows@winrt@@@impl@winrt@@QEBA?AUDispatcherQueue@System@Windows@3@XZ @ 0x1805AF308 (-GetForCurrentThread@-$consume_Windows_System_IDispatcherQueueStatics@UIDispatcherQueueStatics@S.c)
 */

__int64 __fastcall _lambda_871e5350aad6bf1182fd63b884b2a598_::_lambda_invoker_cdecl_(__int64 a1, __int64 a2)
{
  winrt::impl::consume_Windows_System_IDispatcherQueueStatics<winrt::Windows::System::IDispatcherQueueStatics>::GetForCurrentThread(
    a2,
    a1);
  return a1;
}
