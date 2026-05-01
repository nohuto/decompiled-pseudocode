/*
 * XREFs of ??$await_transform@AEAUIAsyncAction@Foundation@Windows@winrt@@@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@U?$IVectorView@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@Collections@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@PEAVMeetAndChatIris@implementation@Shell@Internal@34@AEAUMeetAndChatFallbackContent@7834@@experimental@std@@U?$IAsyncOperation@U?$IVectorView@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@Collections@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@X@impl@winrt@@QEAA?AU?$notify_awaiter@AEAUIAsyncAction@Foundation@Windows@winrt@@@12@AEAUIAsyncAction@Foundation@Windows@2@@Z @ 0x1805D3D78
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::MeetAndChatIris::GetFallbackContentAsync$_ResumeCoro$1 @ 0x1801D5E10 (winrt--Windows--Internal--Shell--implementation--MeetAndChatIris--GetFallbackContentAsync$_Resum.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x180188F6C (_CxxThrowException_0.c)
 *     ??0hresult_canceled@winrt@@QEAA@XZ @ 0x18041CF2C (--0hresult_canceled@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Internal::Shell::MeetAndChatFallbackProp>>,winrt::Windows::Internal::Shell::implementation::MeetAndChatIris *,winrt::Windows::Internal::Shell::MeetAndChatFallbackContent &>::promise_type,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Internal::Shell::MeetAndChatFallbackProp>>,void>::await_transform<winrt::Windows::Foundation::IAsyncAction &>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  char v3; // al
  __int64 v4; // rcx
  char v5; // al
  _QWORD *v6; // r8
  _BYTE pExceptionObject[40]; // [rsp+20h] [rbp-28h] BYREF

  if ( *(_DWORD *)(a1 + 88) == 2 )
  {
    winrt::hresult_canceled::hresult_canceled((winrt::hresult_canceled *)pExceptionObject);
    throw (winrt::hresult_canceled *)pExceptionObject;
  }
  v3 = *(_BYTE *)(a1 + 93);
  v4 = a1 + 72;
  v5 = -v3;
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = a3;
  *(_DWORD *)(a2 + 16) = 0;
  v6 = (_QWORD *)(v4 & -(__int64)(v5 != 0));
  if ( v6 )
  {
    *(_QWORD *)a2 = v6;
    *(_QWORD *)((v4 & -(__int64)(v5 != 0)) + 8) = a2;
    *v6 = _lambda_dcee8798513fab46317d31c20fdb92c7_::_lambda_invoker_cdecl_;
  }
  return a2;
}
