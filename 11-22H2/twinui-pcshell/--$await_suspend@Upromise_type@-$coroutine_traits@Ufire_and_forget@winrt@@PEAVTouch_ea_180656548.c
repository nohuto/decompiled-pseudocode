/*
 * XREFs of ??$await_suspend@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVTouchEdgeGripperHost@@_N@experimental@std@@@?$notify_awaiter@AEAUDispatcherQueue@System@Windows@winrt@@@impl@winrt@@QEAA?A_PU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVTouchEdgeGripperHost@@_N@experimental@std@@@experimental@std@@@Z @ 0x180656548
 * Callers:
 *     TouchEdgeGripperHost::CreateGripperWindowAsync$_ResumeCoro$1 @ 0x18021EBA0 (TouchEdgeGripperHost--CreateGripperWindowAsync$_ResumeCoro$1.c)
 *     TouchEdgeGripperHost::DismissGripperWindowAsync$_ResumeCoro$1 @ 0x18021F1E0 (TouchEdgeGripperHost--DismissGripperWindowAsync$_ResumeCoro$1.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
char __fastcall winrt::impl::notify_awaiter<winrt::Windows::System::DispatcherQueue &>::await_suspend<std::experimental::coroutine_traits<winrt::fire_and_forget,TouchEdgeGripperHost *,bool>::promise_type>(
        unsigned __int64 a1,
        unsigned __int64 a2)
{
  return `winrt::resume_foreground'::`2'::awaitable::await_suspend(a1, a2);
}
