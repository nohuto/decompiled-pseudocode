/*
 * XREFs of _lambda_d3e0cbfb3a0db2b18ab77775bcbdb9f6_::operator() @ 0x180010D48
 * Callers:
 *     ?CreateInstance@AssignedAccessConfigStoreV0@AssignedAccess@Internal@Windows@@SA?AV?$unique_ptr@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@U?$default_delete@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@@wistd@@@wistd@@XZ @ 0x180010C0C (-CreateInstance@AssignedAccessConfigStoreV0@AssignedAccess@Internal@Windows@@SA-AV-$unique_ptr@V.c)
 * Callees:
 *     memcpy_s @ 0x18000D370 (memcpy_s.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000F6B0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x180015960 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall lambda_d3e0cbfb3a0db2b18ab77775bcbdb9f6_::operator()(__int64 a1)
{
  __int64 v2; // rdx
  const wchar_t *v3; // rax
  rsize_t v4; // rdi
  char *v5; // rax
  char *v6; // rbx
  void *v7; // rdi
  _QWORD *v8; // rbx
  void *v9; // rcx
  void *v11; // [rsp+48h] [rbp+10h] BYREF

  v11 = 0LL;
  v2 = 0x7FFFFFFFLL;
  v3 = L"SOFTWARE\\Microsoft\\Windows Embedded\\Lockdown";
  do
  {
    if ( !*v3 )
      break;
    ++v3;
    --v2;
  }
  while ( v2 );
  v4 = 2 * (v3 - L"SOFTWARE\\Microsoft\\Windows Embedded\\Lockdown");
  v5 = (char *)CoTaskMemAlloc(v4 + 2);
  v6 = v5;
  if ( v5 )
  {
    memcpy_s(v5, v4 + 2, L"SOFTWARE\\Microsoft\\Windows Embedded\\Lockdown", v4);
    *(_WORD *)&v6[v4] = 0;
  }
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    &v11,
    v6);
  v7 = v11;
  if ( v11 )
  {
    v8 = *(_QWORD **)a1;
    v11 = 0LL;
    v9 = (void *)v8[1];
    if ( v9 )
      CoTaskMemFree(v9);
    v8[1] = v7;
    v8[3] = -1LL;
    v8[2] = -1LL;
    **(_BYTE **)(a1 + 8) = 1;
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&v11);
  return 0LL;
}
