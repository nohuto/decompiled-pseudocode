/*
 * XREFs of ?InitConfig@api_alchemy_config@@YAXV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@0Uapi_spec@api_alchemy@@@Z @ 0x1806E2BA0
 * Callers:
 *     ?InitConfig@alchemy_config_dwm@@YAXPEBG@Z @ 0x1806E2A90 (-InitConfig@alchemy_config_dwm@@YAXPEBG@Z.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x1800C02C8 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?SetRegValueAndLog@dynamic_config@@YAXPEAUHKEY__@@PEBGK1PEBE_K_N@Z @ 0x18018CE8C (-SetRegValueAndLog@dynamic_config@@YAXPEAUHKEY__@@PEBGK1PEBE_K_N@Z.c)
 *     ?MakeOrOpenKey@dynamic_config@@YA_NPEAUHKEY__@@PEBGAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x18018CF54 (-MakeOrOpenKey@dynamic_config@@YA_NPEAUHKEY__@@PEBGAEAV-$unique_any_t@V-$unique_storage@U-$resou.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?stoul@std@@YAKAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@PEA_KH@Z @ 0x1802DC8F2 (-stoul@std@@YAKAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@1@PEA_KH@Z.c)
 *     ?_Throw_bad_optional_access@std@@YAXXZ @ 0x1803A45A8 (-_Throw_bad_optional_access@std@@YAXXZ.c)
 *     api_alchemy_config::_anonymous_namespace_::specifiers::_specifiers @ 0x1806E1CAC (api_alchemy_config--_anonymous_namespace_--specifiers--_specifiers.c)
 *     api_alchemy_config::_anonymous_namespace_::GetSpecsForID @ 0x1806E28C0 (api_alchemy_config--_anonymous_namespace_--GetSpecsForID.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall api_alchemy_config::InitConfig(__int64 a1, const WCHAR *a2, __int64 a3)
{
  _QWORD *v6; // rax
  const WCHAR *v7; // rdx
  __int64 *v8; // rbx
  wchar_t *v9; // rdx
  __int64 v10; // r8
  int v11; // eax
  unsigned int *v12; // r9
  __int64 **v13; // rax
  __int64 *i; // rax
  __int64 *j; // rcx
  unsigned __int64 v17; // [rsp+30h] [rbp-D0h]
  unsigned __int16 v18[2]; // [rsp+40h] [rbp-C0h] BYREF
  HKEY hKey[2]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v20[64]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 **v21; // [rsp+A0h] [rbp-60h]
  char v22; // [rsp+B0h] [rbp-50h]
  __int64 v23; // [rsp+C0h] [rbp-40h]
  const WCHAR *v24; // [rsp+C8h] [rbp-38h]
  unsigned int v25[2]; // [rsp+D0h] [rbp-30h] BYREF
  unsigned __int64 v26; // [rsp+E8h] [rbp-18h]
  wchar_t String[16]; // [rsp+F0h] [rbp-10h] BYREF

  v23 = a1;
  v24 = a2;
  v6 = std::wstring::wstring(v25, a1);
  *(_OWORD *)hKey = *(_OWORD *)a3;
  api_alchemy_config::_anonymous_namespace_::GetSpecsForID((__int64)v20, (__int64)v6, (unsigned int *)hKey);
  if ( v22 )
  {
    hKey[0] = 0LL;
    v7 = a2;
    if ( *((_QWORD *)a2 + 3) >= 8uLL )
      v7 = *(const WCHAR **)a2;
    if ( dynamic_config::MakeOrOpenKey(HKEY_CURRENT_USER, v7, hKey) )
    {
      if ( !v22 )
        std::_Throw_bad_optional_access();
      v8 = *v21;
      while ( !*((_BYTE *)v8 + 25) )
      {
        std::wstring::wstring(v25, (__int64)(v8 + 4));
        std::wstring::wstring(String, (__int64)(v8 + 8));
        std::stoul(String, v9, v10);
        v12 = v25;
        if ( v26 >= 8 )
          v12 = *(unsigned int **)v25;
        *(_DWORD *)v18 = v11;
        LOBYTE(v17) = 0;
        dynamic_config::SetRegValueAndLog(
          (dynamic_config *)hKey[0],
          *(const WCHAR **)(a3 + 8),
          (const unsigned __int16 *)4,
          (const WCHAR *)v12,
          (BYTE *)v18,
          (const unsigned __int8 *)4,
          v17);
        std::wstring::_Tidy_deallocate((__int64)String);
        std::wstring::_Tidy_deallocate((__int64)v25);
        v13 = (__int64 **)v8[2];
        if ( *((_BYTE *)v13 + 25) )
        {
          for ( i = (__int64 *)v8[1]; !*((_BYTE *)i + 25) && v8 == (__int64 *)i[2]; i = (__int64 *)i[1] )
            v8 = i;
          v8 = i;
        }
        else
        {
          v8 = (__int64 *)v8[2];
          for ( j = *v13; !*((_BYTE *)j + 25); j = (__int64 *)*j )
            v8 = j;
        }
      }
    }
    if ( hKey[0] )
      RegCloseKey(hKey[0]);
  }
  if ( v22 )
    api_alchemy_config::_anonymous_namespace_::specifiers::_specifiers((__int64)v20);
  std::wstring::_Tidy_deallocate(a1);
  return std::wstring::_Tidy_deallocate((__int64)a2);
}
