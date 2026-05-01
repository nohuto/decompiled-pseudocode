/*
 * XREFs of ??R_lambda_376cdae45175a47ad8184ea3fe0886a7_@@QEBA@XZ @ 0x1801A4828
 * Callers:
 *     ?IsSearchBoxExtensionAvailable@StartSearchSharedUtils@@YA_NXZ @ 0x180035C9C (-IsSearchBoxExtensionAvailable@StartSearchSharedUtils@@YA_NXZ.c)
 * Callees:
 *     ??8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x1800F9DD8 (--8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ?Find@AppExtension@AppExtensions@ApplicationModel@WindowsUdk@winrt@@SA@AEBUhstring@param@5@@Z @ 0x1800FBC94 (-Find@AppExtension@AppExtensions@ApplicationModel@WindowsUdk@winrt@@SA@AEBUhstring@param@5@@Z.c)
 *     ??0hstring@param@winrt@@QEAA@QEBG@Z @ 0x1800FBCF4 (--0hstring@param@winrt@@QEAA@QEBG@Z.c)
 *     atexit @ 0x18018879C (atexit.c)
 *     _Init_thread_footer @ 0x180189828 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x180189890 (_Init_thread_header.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall _lambda_376cdae45175a47ad8184ea3fe0886a7_::operator()(__int64 a1)
{
  const char *v2; // r9
  _QWORD v3[5]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v5; // [rsp+50h] [rbp+8h] BYREF

  v5 = a1;
  if ( __TSS0__2___R_lambda_376cdae45175a47ad8184ea3fe0886a7___QEBA_XZ_4HA > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer
                                                                                         + (unsigned int)tls_index)
                                                                                       + 16LL) )
  {
    Init_thread_header(&__TSS0__2___R_lambda_376cdae45175a47ad8184ea3fe0886a7___QEBA_XZ_4HA);
    if ( __TSS0__2___R_lambda_376cdae45175a47ad8184ea3fe0886a7___QEBA_XZ_4HA == -1 )
    {
      winrt::param::hstring::hstring(
        (winrt::param::hstring *)v3,
        L"com.microsoft.windows.app.startmenu.searchboxinstart");
      try
      {
        winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtension::Find(
          (const struct winrt::param::hstring *)&`_lambda_376cdae45175a47ad8184ea3fe0886a7_::operator()'::`3'::searchBoxInStartExtension,
          v3);
        atexit(`_lambda_376cdae45175a47ad8184ea3fe0886a7_::operator()'::`3'::`dynamic atexit destructor for 'searchBoxInStartExtension'');
        Init_thread_footer(&__TSS0__2___R_lambda_376cdae45175a47ad8184ea3fe0886a7___QEBA_XZ_4HA);
      }
      catch ( ... )
      {
        wil::details::in1diag3::Log_CaughtException(
          retaddr,
          (void *)0x24,
          (unsigned int)"internal\\shellcommonshell\\private\\inc\\StartSearchSharedUtils.h",
          v2);
        return 0;
      }
    }
  }
  v5 = 0LL;
  return winrt::Windows::Foundation::operator==(
           &`_lambda_376cdae45175a47ad8184ea3fe0886a7_::operator()'::`3'::searchBoxInStartExtension,
           &v5) == 0;
}
