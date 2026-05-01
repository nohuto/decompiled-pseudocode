/*
 * XREFs of ?SetRegValueAndLog@dynamic_config@@YAXPEAUHKEY__@@PEBGK1PEBE_K_N@Z @ 0x18018CE8C
 * Callers:
 *     ?InitUserConfig@Theming@@YAXXZ @ 0x1800B2628 (-InitUserConfig@Theming@@YAXXZ.c)
 *     ?SetSoundRedirectionPath@Theming@@YAXPEBG@Z @ 0x1801A94C8 (-SetSoundRedirectionPath@Theming@@YAXPEBG@Z.c)
 *     ?SetBackgroundsRedirectionPath@Theming@@YAXPEBG@Z @ 0x1801A95A0 (-SetBackgroundsRedirectionPath@Theming@@YAXPEBG@Z.c)
 *     ?InitConfig@api_alchemy_config@@YAXV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@0Uapi_spec@api_alchemy@@@Z @ 0x1806E2BA0 (-InitConfig@api_alchemy_config@@YAXV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@.c)
 * Callees:
 *     ?MakeOrOpenKey@dynamic_config@@YA_NPEAUHKEY__@@PEBGAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x18018CF54 (-MakeOrOpenKey@dynamic_config@@YA_NPEAUHKEY__@@PEBGAEAV-$unique_any_t@V-$unique_storage@U-$resou.c)
 *     ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x1801DBA20 (-_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 */

void __fastcall dynamic_config::SetRegValueAndLog(
        dynamic_config *this,
        const WCHAR *a2,
        const unsigned __int16 *a3,
        const WCHAR *a4,
        BYTE *a5,
        const unsigned __int8 *cbData,
        unsigned __int64 a7)
{
  DWORD v8; // edi
  unsigned int v9; // eax
  __int64 v10; // rdx
  unsigned int lpData; // [rsp+20h] [rbp-28h]
  HKEY hKey[3]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  hKey[0] = 0LL;
  v8 = (unsigned int)a3;
  if ( (_BYTE)a7 )
  {
    v9 = RegOpenKeyExW((HKEY)this, a2, 0, 2u, hKey);
    if ( !v9 )
    {
      RegDeleteValueW(hKey[0], a4);
      goto LABEL_4;
    }
    v10 = 29LL;
  }
  else
  {
    if ( !(unsigned __int8)dynamic_config::MakeOrOpenKey((HKEY)this, a2, hKey) )
      goto LABEL_4;
    v9 = RegSetValueExW(hKey[0], a4, 0, v8, a5, (DWORD)cbData);
    if ( !v9 )
      goto LABEL_4;
    v10 = 38LL;
  }
  wil::details::in1diag3::_Log_Win32(
    retaddr,
    (void *)v10,
    (unsigned int)"ShellCommonDesktopBase\\Internal\\ShellCommonDesktopBase\\Inc\\dynamic_config.h",
    (const char *)v9,
    lpData);
LABEL_4:
  if ( hKey[0] )
    RegCloseKey(hKey[0]);
}
