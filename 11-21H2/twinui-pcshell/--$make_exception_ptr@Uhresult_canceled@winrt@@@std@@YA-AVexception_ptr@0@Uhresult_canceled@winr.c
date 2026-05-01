/*
 * XREFs of ??$make_exception_ptr@Uhresult_canceled@winrt@@@std@@YA?AVexception_ptr@0@Uhresult_canceled@winrt@@@Z @ 0x18041CD6C
 * Callers:
 *     ?Cancel@?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVFallbackFlyoutView@@PEAUHWND__@@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@QEAAXXZ @ 0x1801C5D18 (-Cancel@-$promise_base@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@.c)
 *     ?Cancel@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperationWithProgress@UMeetAndChatInstallResult@MeetAndChat@Shell@Internal@Windows@winrt@@UMeetAndChatInstallProgress@23456@@Foundation@Windows@winrt@@PEAUMeetAndChatManager@implementation@Shell@Internal@34@@experimental@std@@U?$IAsyncOperationWithProgress@UMeetAndChatInstallResult@MeetAndChat@Shell@Internal@Windows@winrt@@UMeetAndChatInstallProgress@23456@@Foundation@Windows@winrt@@UMeetAndChatInstallProgress@MeetAndChat@Shell@Internal@78@@impl@winrt@@QEAAXXZ @ 0x18041D458 (-Cancel@-$promise_base@Upromise_type@-$coroutine_traits@U-$IAsyncOperationWithProgress@UMeetAndC.c)
 *     winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamReference___lambda_b8623916b833b4369876a538bb21da9f__const___::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamReference__void_::Cancel @ 0x18057B038 (winrt--impl--promise_base_std--experimental--coroutine_traits_winrt--Windows--Found_ea_18057B038.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800F70DC (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ?close@?$handle_type@Ubstr_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18022A1B6 (-close@-$handle_type@Ubstr_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 */

void *__fastcall std::make_exception_ptr<winrt::hresult_canceled>(void *a1, __int64 *a2)
{
  _BYTE v5[24]; // [rsp+20h] [rbp-18h] BYREF

  __ExceptionPtrCreate(v5);
  __ExceptionPtrCopyException(v5, a2, &TI2_AUhresult_canceled_winrt__);
  __ExceptionPtrCopy(a1, v5);
  __ExceptionPtrDestroy(v5);
  if ( a2[2] )
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(a2 + 2);
  winrt::handle_type<winrt::impl::bstr_traits>::close((OLECHAR **)a2);
  return a1;
}
