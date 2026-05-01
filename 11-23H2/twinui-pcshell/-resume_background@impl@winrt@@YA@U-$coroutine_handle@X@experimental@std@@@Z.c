/*
 * XREFs of ?resume_background@impl@winrt@@YA@U?$coroutine_handle@X@experimental@std@@@Z @ 0x1803922D4
 * Callers:
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAUDashboardManager@implementation@Shell@Internal@34@@experimental@std@@@?$notify_awaiter@Uawaitable@?1??resume_background@winrt@@YA@XZ@@impl@winrt@@QEAA?A_PU?$coroutine_handle@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAUDashboardManager@implementation@Shell@Internal@34@@experimental@std@@@experimental@std@@@Z @ 0x1801FB824 (--$await_suspend@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAUDa.c)
 * Callees:
 *     TrySubmitThreadpoolCallback_0 @ 0x1801CEFC5 (TrySubmitThreadpoolCallback_0.c)
 *     ?throw_last_error@winrt@@YAXXZ @ 0x1803925DC (-throw_last_error@winrt@@YAXXZ.c)
 */

BOOL __fastcall winrt::impl::resume_background(PVOID pv)
{
  BOOL result; // eax
  winrt *v2; // rcx

  result = TrySubmitThreadpoolCallback_0((PTP_SIMPLE_CALLBACK)winrt::impl::resume_background_callback, pv, 0LL);
  if ( !result )
    winrt::throw_last_error(v2);
  return result;
}
