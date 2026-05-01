/*
 * XREFs of ??$await_suspend@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVMeetAndChatIris@implementation@Shell@Internal@Windows@2@W4MeetAndChatUsageType@5672@@experimental@std@@@?$notify_awaiter@U?$IAsyncOperation@W4HttpStatusCode@Http@Web@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@QEAAXU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVMeetAndChatIris@implementation@Shell@Internal@Windows@2@W4MeetAndChatUsageType@5672@@experimental@std@@@experimental@std@@@Z @ 0x1805D3D6C
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::MeetAndChatIris::ReportMeetAndChatUsage$_ResumeCoro$1 @ 0x1801D63D0 (winrt--Windows--Internal--Shell--implementation--MeetAndChatIris--ReportMeetAndChatUsage$_Resume.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall winrt::impl::notify_awaiter<winrt::Windows::Foundation::IAsyncOperation<enum winrt::Windows::Web::Http::HttpStatusCode>>::await_suspend<std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::implementation::MeetAndChatIris *,enum winrt::Windows::Internal::Shell::MeetAndChatUsageType>::promise_type>(
        __int64 a1,
        __int64 a2)
{
  return winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<enum winrt::Windows::Web::Http::HttpStatusCode>>::await_suspend(
           a1,
           a2);
}
