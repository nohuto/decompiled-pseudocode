/*
 * XREFs of ?await_resume@?$notify_awaiter@AEAUIAsyncAction@Foundation@Windows@winrt@@@impl@winrt@@QEAA@XZ @ 0x1806C88A8
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::MeetAndChatIris::GetFallbackContentAsync$_ResumeCoro$1 @ 0x180256050 (winrt--Windows--Internal--Shell--implementation--MeetAndChatIris--GetFallbackContentAsync$_Resum.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::impl::notify_awaiter<winrt::Windows::Foundation::IAsyncAction &>::await_resume(__int64 a1)
{
  if ( winrt_resume_handler )
    winrt_resume_handler();
  return winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncAction>::await_resume(a1);
}
