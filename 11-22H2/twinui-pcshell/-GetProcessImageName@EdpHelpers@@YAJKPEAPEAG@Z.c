/*
 * XREFs of ?GetProcessImageName@EdpHelpers@@YAJKPEAPEAG@Z @ 0x1803CE8D8
 * Callers:
 *     ?GetEnterpriseIdForWindow@EdpHelpers@@YAJPEAUHWND__@@PEAPEAG@Z @ 0x1803CE39C (-GetEnterpriseIdForWindow@EdpHelpers@@YAJPEAUHWND__@@PEAPEAG@Z.c)
 * Callees:
 *     ??$make_unique_string_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x1800C2AB0 (--$make_unique_string_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801322B8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

__int64 __fastcall EdpHelpers::GetProcessImageName(DWORD dwProcessId, _QWORD *a2, unsigned __int16 **a3)
{
  HANDLE v4; // rax
  void *v5; // rbx
  unsigned int LastError; // edi
  const char *v7; // r9
  DWORD dwSize; // [rsp+20h] [rbp-238h] BYREF
  __int64 v10; // [rsp+28h] [rbp-230h] BYREF
  WCHAR ExeName[264]; // [rsp+30h] [rbp-228h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+258h] [rbp+0h]

  *a2 = 0LL;
  v4 = OpenProcess(0x1000u, 0, dwProcessId);
  v5 = v4;
  if ( !v4 )
  {
    LastError = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8D,
      (int)"onecoreuap\\internal\\shell\\inc\\private\\EdpHelpers.h",
      (const char *)0x8007000ELL);
    goto LABEL_5;
  }
  dwSize = 260;
  if ( !QueryFullProcessImageNameW(v4, 0, ExeName, &dwSize) )
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x91,
                  (int)"onecoreuap\\internal\\shell\\inc\\private\\EdpHelpers.h",
                  v7);
LABEL_5:
    if ( !v5 )
      return LastError;
    goto LABEL_10;
  }
  wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
    &v10,
    (char *)ExeName,
    dwSize,
    v7);
  if ( v10 )
  {
    *a2 = v10;
    LastError = 0;
  }
  else
  {
    LastError = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x94,
      (int)"onecoreuap\\internal\\shell\\inc\\private\\EdpHelpers.h",
      (const char *)0x8007000ELL);
  }
LABEL_10:
  if ( v5 != (void *)-1LL )
    CloseHandle(v5);
  return LastError;
}
