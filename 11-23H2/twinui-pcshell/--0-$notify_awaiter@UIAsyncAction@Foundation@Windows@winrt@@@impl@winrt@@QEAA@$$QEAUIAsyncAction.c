/*
 * XREFs of ??0?$notify_awaiter@UIAsyncAction@Foundation@Windows@winrt@@@impl@winrt@@QEAA@$$QEAUIAsyncAction@Foundation@Windows@2@PEAUcancellable_promise@2@@Z @ 0x180694EFC
 * Callers:
 *     ??$await_transform@UIAsyncAction@Foundation@Windows@winrt@@@?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAUDashboardManager@implementation@Shell@Internal@34@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@QEAA?A_P$$QEAUIAsyncAction@Foundation@Windows@2@@Z @ 0x18022FA74 (--$await_transform@UIAsyncAction@Foundation@Windows@winrt@@@-$promise_base@Upromise_type@-$corou.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::notify_awaiter<winrt::Windows::Foundation::IAsyncAction>::notify_awaiter<winrt::Windows::Foundation::IAsyncAction>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_BYTE *)(a1 + 24) = 1;
  if ( a3 )
  {
    *(_QWORD *)a1 = a3;
    a3[1] = a1;
    *a3 = _lambda_dcee8798513fab46317d31c20fdb92c7_::_lambda_invoker_cdecl_;
  }
  return a1;
}
