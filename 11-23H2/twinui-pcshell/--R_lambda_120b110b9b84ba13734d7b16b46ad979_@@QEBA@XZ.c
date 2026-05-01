/*
 * XREFs of ??R_lambda_120b110b9b84ba13734d7b16b46ad979_@@QEBA@XZ @ 0x1801F1C94
 * Callers:
 *     ?IsSearchBoxExtensionAvailable@StartSearchSharedUtils@@YA_NXZ @ 0x18005F3DC (-IsSearchBoxExtensionAvailable@StartSearchSharedUtils@@YA_NXZ.c)
 * Callees:
 *     ?Find@AppExtension@AppExtensions@ApplicationModel@WindowsUdk@winrt@@SA@AEBUhstring@param@5@@Z @ 0x18009190C (-Find@AppExtension@AppExtensions@ApplicationModel@WindowsUdk@winrt@@SA@AEBUhstring@param@5@@Z.c)
 *     ??0hstring@param@winrt@@QEAA@QEBG@Z @ 0x1800B3E54 (--0hstring@param@winrt@@QEAA@QEBG@Z.c)
 *     ??8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x1800D5B1C (--8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     atexit @ 0x1801C6CEC (atexit.c)
 *     _Init_thread_footer @ 0x1801C9108 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1801C9170 (_Init_thread_header.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall _lambda_120b110b9b84ba13734d7b16b46ad979_::operator()(__int64 a1)
{
  const char *v2; // r9
  _BYTE v3[40]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v5; // [rsp+50h] [rbp+8h] BYREF

  v5 = a1;
  if ( __TSS0__2___R_lambda_120b110b9b84ba13734d7b16b46ad979___QEBA_XZ_4HA > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer
                                                                                         + (unsigned int)tls_index)
                                                                                       + 16LL) )
  {
    Init_thread_header(&__TSS0__2___R_lambda_120b110b9b84ba13734d7b16b46ad979___QEBA_XZ_4HA);
    if ( __TSS0__2___R_lambda_120b110b9b84ba13734d7b16b46ad979___QEBA_XZ_4HA == -1 )
    {
      winrt::param::hstring::hstring(
        (winrt::param::hstring *)v3,
        L"com.microsoft.windows.app.startmenu.searchboxinstart");
      try
      {
        winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtension::Find(
          (const struct winrt::param::hstring *)&`_lambda_120b110b9b84ba13734d7b16b46ad979_::operator()'::`3'::searchBoxInStartExtension,
          (__int64)v3);
        atexit(`_lambda_120b110b9b84ba13734d7b16b46ad979_::operator()'::`3'::`dynamic atexit destructor for 'searchBoxInStartExtension'');
        Init_thread_footer(&__TSS0__2___R_lambda_120b110b9b84ba13734d7b16b46ad979___QEBA_XZ_4HA);
      }
      catch ( ... )
      {
        wil::details::in1diag3::Log_CaughtException(
          retaddr,
          (void *)0x24,
          (unsigned int)"shellcommon\\internal\\shell\\inc\\Private\\StartSearchSharedUtils.h",
          v2);
        return 0;
      }
    }
  }
  v5 = 0LL;
  return winrt::Windows::Foundation::operator==(
           &`_lambda_120b110b9b84ba13734d7b16b46ad979_::operator()'::`3'::searchBoxInStartExtension,
           &v5) == 0;
}
