/*
 * XREFs of winrt::impl::delegate_winrt::Windows::Foundation::AsyncOperationProgressHandler_winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallResult_winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallProgress___lambda_4951771febc4dc983c3581d22c2a6e45___::Invoke @ 0x1806BE1B0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _lambda_4951771febc4dc983c3581d22c2a6e45_::operator()_winrt::Windows::Foundation::IAsyncOperationWithProgress_winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallResult_winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallProgress__const_&_ @ 0x1806AEC6C (_lambda_4951771febc4dc983c3581d22c2a6e45_--operator()_winrt--Windows--Foundation--IAsyncOperatio.c)
 */

__int64 __fastcall winrt::impl::delegate_winrt::Windows::Foundation::AsyncOperationProgressHandler_winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallResult_winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallProgress___lambda_4951771febc4dc983c3581d22c2a6e45___::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 result; // rax
  unsigned int v4; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+28h] [rbp-20h] BYREF
  int v6; // [rsp+30h] [rbp-18h]

  v5 = *a3;
  v6 = *((_DWORD *)a3 + 2);
  lambda_4951771febc4dc983c3581d22c2a6e45_::operator()_winrt::Windows::Foundation::IAsyncOperationWithProgress_winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallResult_winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallProgress__const___(
    (RTL_SRWLOCK **)(a1 + 8),
    a2,
    (__int64)&v5);
  result = 0LL;
  while ( 2 )
  {
    try
    {
    }
    catch ( ... )
    {
      v4 = *winrt::to_hresult(&v4);
      result = v4;
      continue;
    }
    break;
  }
  return result;
}
