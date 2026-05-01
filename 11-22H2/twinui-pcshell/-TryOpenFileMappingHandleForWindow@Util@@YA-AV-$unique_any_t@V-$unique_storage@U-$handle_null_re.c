/*
 * XREFs of ?TryOpenFileMappingHandleForWindow@Util@@YA?AV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@_JAEBUhstring@winrt@@@Z @ 0x1807197A0
 * Callers:
 *     Util::TryOpenFileMappingAsStreamForWindowAsync$_ResumeCoro$1 @ 0x180279750 (Util--TryOpenFileMappingAsStreamForWindowAsync$_ResumeCoro$1.c)
 *     ?ReadBufferFromSharedMemory@FileMappingHelpers@Util@@QEAA?AUIBuffer@Streams@Storage@Windows@winrt@@QEAUHWND__@@AEBUhstring@7@@Z @ 0x180716AB0 (-ReadBufferFromSharedMemory@FileMappingHelpers@Util@@QEAA-AUIBuffer@Streams@Storage@Windows@winr.c)
 * Callees:
 *     ??Hwinrt@@YA?AUhstring@0@PEBGAEBU10@@Z @ 0x180060E5C (--Hwinrt@@YA-AUhstring@0@PEBGAEBU10@@Z.c)
 *     ??$assign@Uhstring@winrt@@$0A@@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@AEBUhstring@winrt@@@Z @ 0x1800B53F0 (--$assign@Uhstring@winrt@@$0A@@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801322B8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180165FBC (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?GetWindowNamedObjectPath@UserAwareWindowIdentity@@YAJPEAUHWND__@@EPEAU_UNICODE_STRING@@@Z @ 0x180713550 (-GetWindowNamedObjectPath@UserAwareWindowIdentity@@YAJPEAUHWND__@@EPEAU_UNICODE_STRING@@@Z.c)
 *     ?IsProcessAppContainer@UserAwareProcessIdentity@@YAJKPEA_N@Z @ 0x180714240 (-IsProcessAppContainer@UserAwareProcessIdentity@@YAJKPEA_N@Z.c)
 */

// Hidden C++ exception states: #wind=5
volatile signed __int32 *__fastcall Util::TryOpenFileMappingHandleForWindow(
        volatile signed __int32 *a1,
        UserAwareWindowIdentity *a2,
        __int64 a3)
{
  void *v6; // rbx
  char v7; // si
  bool *v8; // r8
  const char *v9; // r9
  HWND v10; // rdx
  __int64 v11; // r8
  struct _UNICODE_STRING *v12; // r9
  int IsProcessAppContainer; // eax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // r8
  const WCHAR *v17; // r8
  HANDLE v18; // rax
  unsigned int v20; // [rsp+20h] [rbp-39h] BYREF
  volatile signed __int32 *dwProcessId; // [rsp+28h] [rbp-31h] BYREF
  void *v22; // [rsp+30h] [rbp-29h] BYREF
  volatile signed __int32 *v23[2]; // [rsp+38h] [rbp-21h] BYREF
  struct _UNICODE_STRING UnicodeString; // [rsp+48h] [rbp-11h] BYREF
  struct _UNICODE_STRING *p_UnicodeString; // [rsp+58h] [rbp-1h]
  char v26; // [rsp+60h] [rbp+7h]
  LPCWSTR lpName[2]; // [rsp+68h] [rbp+Fh] BYREF
  __m128i si128; // [rsp+78h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  v23[0] = a1;
  v6 = 0LL;
  v22 = 0LL;
  lpName[0] = 0LL;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v7 = 1;
  LOBYTE(v20) = 1;
  if ( GetWindowThreadProcessId((HWND)a2, (LPDWORD)&dwProcessId) )
  {
    IsProcessAppContainer = UserAwareProcessIdentity::IsProcessAppContainer((DWORD)dwProcessId, (bool *)&v20, v8);
    if ( IsProcessAppContainer < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x7F,
        (int)"onecoreuap\\internal\\shell\\inc\\FileMappingHelpers.h",
        (const char *)(unsigned int)IsProcessAppContainer);
      goto LABEL_14;
    }
    v7 = v20;
  }
  else if ( (int)wil::details::in1diag3::Return_GetLastError(
                   retaddr,
                   (void *)0x7D,
                   (int)"onecoreuap\\internal\\shell\\inc\\FileMappingHelpers.h",
                   v9) < 0 )
  {
    goto LABEL_14;
  }
  if ( v7 )
  {
    if ( (int)UserAwareWindowIdentity::GetWindowNamedObjectPath(a2, v10, (__int64)&UnicodeString, v12) < 0 )
      goto LABEL_14;
    p_UnicodeString = &UnicodeString;
    v26 = 1;
    v14 = winrt::operator+((__int64)v23, (__int64)L"\\", a3);
    v15 = winrt::operator+((__int64)&dwProcessId, (__int64)UnicodeString.Buffer, v14);
    std::wstring::assign<winrt::hstring,0>((__int64)lpName, v15, v16);
    winrt::handle_type<winrt::impl::hstring_traits>::close(&dwProcessId);
    winrt::handle_type<winrt::impl::hstring_traits>::close(v23);
    RtlFreeUnicodeString(&UnicodeString);
  }
  else
  {
    std::wstring::assign<winrt::hstring,0>((__int64)lpName, a3, v11);
  }
  v17 = (const WCHAR *)lpName;
  if ( si128.m128i_i64[1] >= 8uLL )
    v17 = lpName[0];
  v18 = OpenFileMappingW(0xF001Fu, 1, v17);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    &v22,
    v18);
  v6 = v22;
LABEL_14:
  *(_QWORD *)a1 = v6;
  std::wstring::_Tidy_deallocate((__int64)lpName);
  return a1;
}
