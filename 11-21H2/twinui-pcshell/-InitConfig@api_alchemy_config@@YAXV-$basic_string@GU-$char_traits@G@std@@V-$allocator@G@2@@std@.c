/*
 * XREFs of ?InitConfig@api_alchemy_config@@YAXV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@0Uapi_spec@api_alchemy@@@Z @ 0x1805DDC50
 * Callers:
 *     ?InitConfig@alchemy_config_dwm@@YAXPEBG@Z @ 0x1805DDB40 (-InitConfig@alchemy_config_dwm@@YAXPEBG@Z.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18008EA60 (--1-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$integral.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x18009EA78 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800E63C0 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?SetRegValueAndLog@dynamic_config@@YAXPEAUHKEY__@@PEBGK1PEBE_K_N@Z @ 0x180158B6C (-SetRegValueAndLog@dynamic_config@@YAXPEAUHKEY__@@PEBGK1PEBE_K_N@Z.c)
 *     ?MakeOrOpenKey@dynamic_config@@YA_NPEAUHKEY__@@PEBGAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x180158C28 (-MakeOrOpenKey@dynamic_config@@YA_NPEAUHKEY__@@PEBGAEAV-$unique_any_t@V-$unique_storage@U-$resou.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ?_Throw_bad_optional_access@std@@YAXXZ @ 0x1802EBABC (-_Throw_bad_optional_access@std@@YAXXZ.c)
 *     ?stoul@std@@YAKAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@PEA_KH@Z @ 0x18046AB88 (-stoul@std@@YAKAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@1@PEA_KH@Z.c)
 *     api_alchemy_config::_anonymous_namespace_::specifiers::_specifiers @ 0x1805DD68C (api_alchemy_config--_anonymous_namespace_--specifiers--_specifiers.c)
 *     api_alchemy_config::_anonymous_namespace_::GetSpecsForID @ 0x1805DDA30 (api_alchemy_config--_anonymous_namespace_--GetSpecsForID.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall api_alchemy_config::InitConfig(__int64 a1, const WCHAR *a2, __int64 a3)
{
  __int64 v6; // rax
  char v7; // al
  const WCHAR *v8; // rdx
  __int64 *v9; // rbx
  wchar_t *v10; // rdx
  __int64 v11; // r8
  int v12; // eax
  unsigned int *v13; // r9
  __int64 **v14; // rax
  __int64 *i; // rax
  __int64 *j; // rcx
  unsigned __int64 v18; // [rsp+30h] [rbp-D0h]
  unsigned __int16 v19[2]; // [rsp+40h] [rbp-C0h] BYREF
  HKEY phkResult[2]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v21[64]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 **v22; // [rsp+A0h] [rbp-60h]
  char v23; // [rsp+B0h] [rbp-50h]
  __int64 v24; // [rsp+C0h] [rbp-40h]
  const WCHAR *v25; // [rsp+C8h] [rbp-38h]
  unsigned int v26[2]; // [rsp+D0h] [rbp-30h] BYREF
  unsigned __int64 v27; // [rsp+E8h] [rbp-18h]
  wchar_t String[16]; // [rsp+F0h] [rbp-10h] BYREF

  v24 = a1;
  v25 = a2;
  v6 = std::wstring::wstring((__int64)v26, a1);
  *(_OWORD *)phkResult = *(_OWORD *)a3;
  api_alchemy_config::_anonymous_namespace_::GetSpecsForID((__int64)v21, v6, (unsigned int *)phkResult);
  v7 = v23;
  if ( v23 )
  {
    phkResult[0] = 0LL;
    v8 = a2;
    if ( *((_QWORD *)a2 + 3) >= 8uLL )
      v8 = *(const WCHAR **)a2;
    if ( dynamic_config::MakeOrOpenKey(HKEY_CURRENT_USER, v8, phkResult) )
    {
      if ( !v23 )
        std::_Throw_bad_optional_access();
      v9 = *v22;
      while ( !*((_BYTE *)v9 + 25) )
      {
        std::wstring::wstring((__int64)v26, (__int64)(v9 + 4));
        std::wstring::wstring((__int64)String, (__int64)(v9 + 8));
        std::stoul(String, v10, v11);
        v13 = v26;
        if ( v27 >= 8 )
          v13 = *(unsigned int **)v26;
        *(_DWORD *)v19 = v12;
        LOBYTE(v18) = 0;
        dynamic_config::SetRegValueAndLog(
          (dynamic_config *)phkResult[0],
          *(const WCHAR **)(a3 + 8),
          (const unsigned __int16 *)4,
          (const WCHAR *)v13,
          (BYTE *)v19,
          (const unsigned __int8 *)4,
          v18);
        std::wstring::_Tidy_deallocate((__int64)String);
        std::wstring::_Tidy_deallocate((__int64)v26);
        v14 = (__int64 **)v9[2];
        if ( *((_BYTE *)v14 + 25) )
        {
          for ( i = (__int64 *)v9[1]; !*((_BYTE *)i + 25) && v9 == (__int64 *)i[2]; i = (__int64 *)i[1] )
            v9 = i;
          v9 = i;
        }
        else
        {
          v9 = (__int64 *)v9[2];
          for ( j = *v14; !*((_BYTE *)j + 25); j = (__int64 *)*j )
            v9 = j;
        }
      }
    }
    wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(phkResult);
    v7 = v23;
  }
  if ( v7 )
    api_alchemy_config::_anonymous_namespace_::specifiers::_specifiers((__int64)v21);
  std::wstring::_Tidy_deallocate(a1);
  return std::wstring::_Tidy_deallocate((__int64)a2);
}
