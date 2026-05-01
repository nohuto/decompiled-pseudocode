/*
 * XREFs of ?resume_background@impl@winrt@@YAXU?$coroutine_handle@X@experimental@std@@@Z @ 0x18033D91C
 * Callers:
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@$$V@experimental@std@@@?$notify_awaiter@Uawaitable@?1??resume_background@winrt@@YA@XZ@@impl@winrt@@QEAAXU?$coroutine_handle@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@$$V@experimental@std@@@experimental@std@@@Z @ 0x1801C2304 (--$await_suspend@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@_N@Foundation@_ea_1801C2304.c)
 * Callees:
 *     TrySubmitThreadpoolCallback_0 @ 0x18018F6DF (TrySubmitThreadpoolCallback_0.c)
 *     ?throw_last_error@winrt@@YAXXZ @ 0x18033DC7C (-throw_last_error@winrt@@YAXXZ.c)
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
