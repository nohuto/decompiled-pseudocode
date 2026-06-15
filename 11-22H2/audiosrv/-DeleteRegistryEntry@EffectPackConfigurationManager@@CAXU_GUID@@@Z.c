/*
 * XREFs of ?DeleteRegistryEntry@EffectPackConfigurationManager@@CAXU_GUID@@@Z @ 0x18010DEE4
 * Callers:
 *     ?OnMediaNotification@EffectPackConfigurationManager@@UEAAJPEAUMEDIA_NOTIFICATION_BLOCK@@@Z @ 0x18010E000 (-OnMediaNotification@EffectPackConfigurationManager@@UEAAJPEAUMEDIA_NOTIFICATION_BLOCK@@@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180009588 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     ?GetEffectPackRegistryPath@@YAJU_GUID@@_KPEAG@Z @ 0x18014887C (-GetEffectPackRegistryPath@@YAJU_GUID@@_KPEAG@Z.c)
 */

void __fastcall EffectPackConfigurationManager::DeleteRegistryEntry(struct _GUID *a1, unsigned __int64 a2)
{
  LSTATUS v2; // eax
  LSTATUS v3; // eax
  HKEY hKey[2]; // [rsp+30h] [rbp-238h] BYREF
  WCHAR SubKey[264]; // [rsp+40h] [rbp-228h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+268h] [rbp+0h]

  *(struct _GUID *)hKey = *a1;
  if ( GetEffectPackRegistryPath((struct _GUID *)hKey, a2, SubKey) >= 0 )
  {
    hKey[0] = 0LL;
    if ( !RegOpenKeyExW(HKEY_LOCAL_MACHINE, SubKey, 0, 3u, hKey) )
    {
      v2 = RegDeleteTreeW(hKey[0], 0LL);
      if ( v2 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x88,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\effectpackconfigurationmanager.cpp",
          (const char *)(unsigned int)v2);
      v3 = RegDeleteKeyExW(HKEY_LOCAL_MACHINE, SubKey, 0, 0);
      if ( v3 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x8B,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\effectpackconfigurationmanager.cpp",
          (const char *)(unsigned int)v3);
    }
    if ( hKey[0] )
      RegCloseKey(hKey[0]);
  }
}
