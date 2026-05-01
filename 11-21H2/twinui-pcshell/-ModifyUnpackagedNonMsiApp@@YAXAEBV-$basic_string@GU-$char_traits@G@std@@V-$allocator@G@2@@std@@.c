/*
 * XREFs of ?ModifyUnpackagedNonMsiApp@@YAXAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_N11@Z @ 0x180576ACC
 * Callers:
 *     ?ModifyUnpackagedApp@@YAXV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_N1@Z @ 0x180576314 (-ModifyUnpackagedApp@@YAXV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@_N1@Z.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEA_WP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEA_WPEA_W$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180064078 (--1-$unique_storage@U-$resource_policy@PEA_WP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_consta.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180089570 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x18009EA78 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800E63C0 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ?Launch@@YAXV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG1_N2@Z @ 0x180575FE8 (-Launch@@YAXV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEBG1_N2@Z.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall ModifyUnpackagedNonMsiApp(const WCHAR *a1, char a2, char a3, char a4)
{
  HRESULT v7; // eax
  const WCHAR *v8; // rdi
  const WCHAR *v9; // rbx
  WCHAR *v10; // rax
  int v11; // [rsp+20h] [rbp-49h]
  PWSTR ppszParameters; // [rsp+30h] [rbp-39h] BYREF
  PWSTR ppszApplication[2]; // [rsp+38h] [rbp-31h] BYREF
  _BYTE v14[32]; // [rsp+48h] [rbp-21h] BYREF
  _QWORD v15[4]; // [rsp+68h] [rbp-1h] BYREF
  _QWORD v16[4]; // [rsp+88h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  ppszParameters = 0LL;
  ppszApplication[0] = 0LL;
  if ( *((_QWORD *)a1 + 3) >= 8uLL )
    a1 = *(const WCHAR **)a1;
  v7 = SHEvaluateSystemCommandTemplate(a1, ppszApplication, 0LL, &ppszParameters);
  if ( v7 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x7E,
      (int)"pcshell\\twinui\\vailactivation\\lib\\modifyhelper.cpp",
      (const char *)(unsigned int)v7,
      v11);
  std::wstring::wstring(v16, ppszApplication[0]);
  std::wstring::wstring(v15, ppszParameters);
  v8 = &LocaleName;
  if ( !a3 )
    v8 = L"runas";
  v9 = (const WCHAR *)v15;
  if ( v15[3] >= 8uLL )
    v9 = (const WCHAR *)v15[0];
  v10 = (WCHAR *)std::wstring::wstring((__int64)v14, (__int64)v16);
  Launch(v10, v9, v8, a2, a4);
  std::wstring::_Tidy_deallocate((__int64)v15);
  std::wstring::_Tidy_deallocate((__int64)v16);
  wil::details::unique_storage<wil::details::resource_policy<wchar_t *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<wchar_t *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>((void **)&ppszParameters);
  wil::details::unique_storage<wil::details::resource_policy<wchar_t *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<wchar_t *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>((void **)ppszApplication);
}
