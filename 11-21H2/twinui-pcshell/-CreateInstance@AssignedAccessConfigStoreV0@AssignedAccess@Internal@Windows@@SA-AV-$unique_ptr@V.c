/*
 * XREFs of ?CreateInstance@AssignedAccessConfigStoreV0@AssignedAccess@Internal@Windows@@SA?AV?$unique_ptr@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@U?$default_delete@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@@wistd@@@wistd@@XZ @ 0x18008C5E0
 * Callers:
 *     Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper::FindIf__lambda_e4f37fdae08429a84761ade0db4bdd38___ @ 0x1801078B4 (Windows--Internal--AssignedAccess--AssignedAccessConfigStoreHelper--FindIf__lambda_e4f37fdae0842.c)
 *     Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper::FindIf__lambda_49fe318f7c95465e9283e5ab1b54dbad___ @ 0x180107A24 (Windows--Internal--AssignedAccess--AssignedAccessConfigStoreHelper--FindIf__lambda_49fe318f7c954.c)
 *     Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper::FindIf__lambda_47c177c364e43d13bff9c3e398002cbd___ @ 0x180107B8C (Windows--Internal--AssignedAccess--AssignedAccessConfigStoreHelper--FindIf__lambda_47c177c364e43.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEA_WP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEA_WPEA_W$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180064078 (--1-$unique_storage@U-$resource_policy@PEA_WP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_consta.c)
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 *     _invalid_parameter_noinfo @ 0x180188E82 (_invalid_parameter_noinfo.c)
 *     memset_0 @ 0x180188F60 (memset_0.c)
 *     memcpy_0 @ 0x1801EACEF (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
_QWORD *__fastcall Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV0::CreateInstance(_QWORD *a1)
{
  _QWORD *v2; // rbx
  char v3; // r12
  __int64 v4; // rcx
  const wchar_t *v5; // rax
  size_t v6; // r14
  size_t v7; // rbp
  char *v8; // rax
  char *v9; // rsi
  void *v10; // rcx
  void *v12; // [rsp+68h] [rbp+10h] BYREF
  void *v13; // [rsp+70h] [rbp+18h] BYREF

  v2 = operator new(0x20uLL);
  v2[2] = 0LL;
  v2[3] = 0LL;
  *v2 = &Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV0::`vftable';
  v2[1] = 0LL;
  v2[2] = 0LL;
  v2[3] = 0LL;
  v3 = 0;
  v4 = 0x7FFFFFFFLL;
  v5 = L"SOFTWARE\\Microsoft\\Windows Embedded\\Lockdown";
  do
  {
    if ( !*v5 )
      break;
    ++v5;
    --v4;
  }
  while ( v4 );
  v6 = 2 * (v5 - L"SOFTWARE\\Microsoft\\Windows Embedded\\Lockdown");
  v7 = v6 + 2;
  v8 = (char *)CoTaskMemAlloc(v6 + 2);
  v9 = v8;
  if ( v8 )
  {
    if ( v6 )
    {
      if ( v7 < v6 )
      {
        memset_0(v8, 0, v7);
        *(_DWORD *)_o__errno() = 34;
        invalid_parameter_noinfo();
      }
      else
      {
        memcpy_0(v8, L"SOFTWARE\\Microsoft\\Windows Embedded\\Lockdown", v6);
      }
    }
    *(_WORD *)&v9[v6] = 0;
  }
  v12 = v9;
  v13 = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<wchar_t *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<wchar_t *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>(&v13);
  if ( v9 )
  {
    v12 = 0LL;
    v10 = (void *)v2[1];
    if ( v10 )
      CoTaskMemFree(v10);
    v2[1] = v9;
    v2[3] = -1LL;
    v2[2] = -1LL;
    v3 = 1;
  }
  wil::details::unique_storage<wil::details::resource_policy<wchar_t *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<wchar_t *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>(&v12);
  if ( v3 )
  {
    *a1 = v2;
  }
  else
  {
    (*(void (__fastcall **)(_QWORD *, __int64))*v2)(v2, 1LL);
    *a1 = 0LL;
  }
  return a1;
}
