/*
 * XREFs of ??$GetForWindowsEdition@$0?HPPPPPPO@@ShellProgramConfiguration@@SA?AU0@PEBG@Z @ 0x1801FB560
 * Callers:
 *     ?IsStartMenuPrelaunchEnabled@XamlLauncher@@AEBA_NXZ @ 0x1801FF46C (-IsStartMenuPrelaunchEnabled@XamlLauncher@@AEBA_NXZ.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHKEY__@@@Z @ 0x1800C4F00 (-reset@-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$inte.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??$str_printf@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@wil@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBGZZ @ 0x180489BC4 (--$str_printf@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@wil@@YA-AV-$basic_s.c)
 */

PHKEY __fastcall ShellProgramConfiguration::GetForWindowsEdition<-2147483646>(PHKEY phkResult)
{
  const WCHAR *v2; // rdx
  LPCWSTR lpSubKey[4]; // [rsp+40h] [rbp-38h] BYREF

  wil::str_printf<std::wstring>(lpSubKey, L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\%s", L"StartMenu");
  *phkResult = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::reset(
    phkResult,
    0LL);
  v2 = (const WCHAR *)lpSubKey;
  if ( lpSubKey[3] >= (LPCWSTR)8 )
    v2 = lpSubKey[0];
  RegOpenKeyExW(HKEY_LOCAL_MACHINE, v2, 0, 0x20019u, phkResult);
  std::wstring::_Tidy_deallocate((__int64)lpSubKey);
  return phkResult;
}
