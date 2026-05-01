/*
 * XREFs of ?cancel@cancellable_promise@winrt@@QEAAXXZ @ 0x18041EA80
 * Callers:
 *     ?Cancel@?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVFallbackFlyoutView@@PEAUHWND__@@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@QEAAXXZ @ 0x1801C5D18 (-Cancel@-$promise_base@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@.c)
 *     ?Cancel@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperationWithProgress@UMeetAndChatInstallResult@MeetAndChat@Shell@Internal@Windows@winrt@@UMeetAndChatInstallProgress@23456@@Foundation@Windows@winrt@@PEAUMeetAndChatManager@implementation@Shell@Internal@34@@experimental@std@@U?$IAsyncOperationWithProgress@UMeetAndChatInstallResult@MeetAndChat@Shell@Internal@Windows@winrt@@UMeetAndChatInstallProgress@23456@@Foundation@Windows@winrt@@UMeetAndChatInstallProgress@MeetAndChat@Shell@Internal@78@@impl@winrt@@QEAAXXZ @ 0x18041D458 (-Cancel@-$promise_base@Upromise_type@-$coroutine_traits@U-$IAsyncOperationWithProgress@UMeetAndC.c)
 *     winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamReference___lambda_b8623916b833b4369876a538bb21da9f__const___::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamReference__void_::Cancel @ 0x18057B038 (winrt--impl--promise_base_std--experimental--coroutine_traits_winrt--Windows--Found_ea_18057B038.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::cancellable_promise::cancel(winrt::cancellable_promise *this)
{
  void (__fastcall *v2)(_QWORD); // rax

  v2 = (void (__fastcall *)(_QWORD))_InterlockedExchange64((volatile __int64 *)this, 1LL);
  if ( (unsigned __int64)v2 >= 2 )
    v2(*((_QWORD *)this + 1));
  *(_QWORD *)this = 0LL;
}
