/*
 * XREFs of ?await_resume@?$notify_awaiter@U?$IAsyncOperation@W4HttpStatusCode@Http@Web@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@QEAA?AW4HttpStatusCode@Http@Web@Windows@3@XZ @ 0x1805D5EF8
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::MeetAndChatIris::ReportMeetAndChatUsage$_ResumeCoro$1 @ 0x1801D63D0 (winrt--Windows--Internal--Shell--implementation--MeetAndChatIris--ReportMeetAndChatUsage$_Resume.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x180188F6C (_CxxThrowException_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??0hresult_canceled@winrt@@QEAA@XZ @ 0x18041CF2C (--0hresult_canceled@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall winrt::impl::notify_awaiter<winrt::Windows::Foundation::IAsyncOperation<enum winrt::Windows::Web::Http::HttpStatusCode>>::await_resume(
        __int64 a1)
{
  _QWORD *v2; // rax
  signed int v3; // eax
  _BYTE pExceptionObject[40]; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v6; // [rsp+50h] [rbp+8h] BYREF

  if ( winrt_resume_handler )
    winrt_resume_handler();
  if ( *(_DWORD *)(a1 + 16) == 2 )
  {
    winrt::hresult_canceled::hresult_canceled((winrt::hresult_canceled *)pExceptionObject);
    throw (winrt::hresult_canceled *)pExceptionObject;
  }
  v2 = *(_QWORD **)(a1 + 8);
  v6 = 0;
  v3 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(*(_QWORD *)*v2 + 64LL))(*v2, &v6);
  if ( v3 < 0 )
    winrt::throw_hresult(v3);
  return v6;
}
