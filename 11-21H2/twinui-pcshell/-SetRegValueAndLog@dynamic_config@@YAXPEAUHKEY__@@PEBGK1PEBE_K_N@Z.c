/*
 * XREFs of ?SetRegValueAndLog@dynamic_config@@YAXPEAUHKEY__@@PEBGK1PEBE_K_N@Z @ 0x180158B6C
 * Callers:
 *     ?InitUserConfig@Theming@@YAXXZ @ 0x1800FBDD8 (-InitUserConfig@Theming@@YAXXZ.c)
 *     ?SetSoundRedirectionPath@Theming@@YAXPEBG@Z @ 0x180170E14 (-SetSoundRedirectionPath@Theming@@YAXPEBG@Z.c)
 *     ?SetBackgroundsRedirectionPath@Theming@@YAXPEBG@Z @ 0x180170EEC (-SetBackgroundsRedirectionPath@Theming@@YAXPEBG@Z.c)
 *     ?InitConfig@api_alchemy_config@@YAXV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@0Uapi_spec@api_alchemy@@@Z @ 0x1805DDC50 (-InitConfig@api_alchemy_config@@YAXV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18008EA60 (--1-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$integral.c)
 *     ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x1800E2CB4 (-_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     ?MakeOrOpenKey@dynamic_config@@YA_NPEAUHKEY__@@PEBGAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x180158C28 (-MakeOrOpenKey@dynamic_config@@YA_NPEAUHKEY__@@PEBGAEAV-$unique_any_t@V-$unique_storage@U-$resou.c)
 */

void __fastcall dynamic_config::SetRegValueAndLog(
        dynamic_config *this,
        const WCHAR *a2,
        const unsigned __int16 *a3,
        const WCHAR *a4,
        BYTE *lpData,
        const unsigned __int8 *cbData,
        unsigned __int64 a7)
{
  DWORD v8; // edi
  unsigned int v9; // eax
  __int64 v10; // rdx
  HKEY hKey[3]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v8 = (unsigned int)a3;
  hKey[0] = 0LL;
  if ( (_BYTE)a7 )
  {
    v9 = RegOpenKeyExW((HKEY)this, a2, 0, 2u, hKey);
    if ( !v9 )
    {
      RegDeleteValueW(hKey[0], a4);
      goto LABEL_4;
    }
    v10 = 29LL;
LABEL_9:
    wil::details::in1diag3::_Log_Win32(
      retaddr,
      (void *)v10,
      (int)"internal\\shellcommondesktopbase\\inc\\dynamic_config.h",
      (const char *)v9);
    goto LABEL_4;
  }
  if ( (unsigned __int8)dynamic_config::MakeOrOpenKey((HKEY)this, a2, hKey) )
  {
    v9 = RegSetValueExW(hKey[0], a4, 0, v8, lpData, (DWORD)cbData);
    if ( v9 )
    {
      v10 = 38LL;
      goto LABEL_9;
    }
  }
LABEL_4:
  wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(hKey);
}
