/*
 * XREFs of ?MakeOrOpenKey@dynamic_config@@YA_NPEAUHKEY__@@PEBGAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x180158C28
 * Callers:
 *     ?SetRegValueAndLog@dynamic_config@@YAXPEAUHKEY__@@PEBGK1PEBE_K_N@Z @ 0x180158B6C (-SetRegValueAndLog@dynamic_config@@YAXPEAUHKEY__@@PEBGK1PEBE_K_N@Z.c)
 *     ?InitConfig@api_alchemy_config@@YAXV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@0Uapi_spec@api_alchemy@@@Z @ 0x1805DDC50 (-InitConfig@api_alchemy_config@@YAXV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@.c)
 * Callees:
 *     ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x1800E2CB4 (-_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall dynamic_config::MakeOrOpenKey(HKEY hKey, LPCWSTR lpSubKey, PHKEY phkResult)
{
  HKEY v6; // rbp
  char v7; // di
  unsigned int Key; // eax
  DWORD LastError; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v6 = *phkResult;
  v7 = 0;
  if ( *phkResult )
  {
    LastError = GetLastError();
    RegCloseKey(v6);
    SetLastError(LastError);
  }
  *phkResult = 0LL;
  Key = RegCreateKeyExW(hKey, lpSubKey, 0, 0LL, 0, 2u, 0LL, phkResult, 0LL);
  if ( !Key )
    return 1;
  wil::details::in1diag3::_Log_Win32(
    retaddr,
    (void *)0x14,
    (int)"internal\\shellcommondesktopbase\\inc\\dynamic_config.h",
    (const char *)Key);
  return v7;
}
