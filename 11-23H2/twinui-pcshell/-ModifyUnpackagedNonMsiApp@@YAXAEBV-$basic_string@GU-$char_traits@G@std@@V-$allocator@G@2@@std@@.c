/*
 * XREFs of ?ModifyUnpackagedNonMsiApp@@YAXAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_N11@Z @ 0x180634904
 * Callers:
 *     ?ModifyUnpackagedApp@@YAXV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_N1@Z @ 0x180634138 (-ModifyUnpackagedApp@@YAXV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@_N1@Z.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180098C40 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x1800C02C8 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAGXZ @ 0x180163C70 (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?Launch@@YAXV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG1_N2@Z @ 0x180633DFC (-Launch@@YAXV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEBG1_N2@Z.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall ModifyUnpackagedNonMsiApp(const WCHAR *pszCmdTemplate, char a2, char a3, char a4)
{
  void **v8; // rdi
  void **v9; // rax
  HRESULT v10; // eax
  const WCHAR *v11; // rdi
  const WCHAR *v12; // rbx
  WCHAR *v13; // rax
  int v14; // [rsp+20h] [rbp-59h]
  LPVOID pv; // [rsp+30h] [rbp-49h] BYREF
  LPVOID v16; // [rsp+38h] [rbp-41h] BYREF
  _QWORD v17[4]; // [rsp+48h] [rbp-31h] BYREF
  _QWORD v18[4]; // [rsp+68h] [rbp-11h] BYREF
  _QWORD v19[4]; // [rsp+88h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  v16 = 0LL;
  pv = 0LL;
  v8 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::put(&pv);
  v9 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::put(&v16);
  if ( *((_QWORD *)pszCmdTemplate + 3) >= 8uLL )
    pszCmdTemplate = *(const WCHAR **)pszCmdTemplate;
  v10 = SHEvaluateSystemCommandTemplate(pszCmdTemplate, (PWSTR *)v9, 0LL, (PWSTR *)v8);
  if ( v10 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x7E,
      (int)"pcshell\\twinui\\vailactivation\\lib\\modifyhelper.cpp",
      (const char *)(unsigned int)v10,
      v14);
  std::wstring::wstring(v19, v16);
  std::wstring::wstring(v18, pv);
  v11 = &LocaleName;
  if ( !a3 )
    v11 = L"runas";
  v12 = (const WCHAR *)v18;
  if ( v18[3] >= 8uLL )
    v12 = (const WCHAR *)v18[0];
  v13 = (WCHAR *)std::wstring::wstring(v17, (__int64)v19);
  Launch(v13, v12, v11, a2, a4);
  std::wstring::_Tidy_deallocate((__int64)v18);
  std::wstring::_Tidy_deallocate((__int64)v19);
  if ( pv )
    CoTaskMemFree(pv);
  if ( v16 )
    CoTaskMemFree(v16);
}
