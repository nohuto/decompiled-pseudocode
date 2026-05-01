/*
 * XREFs of ?IsAppsUseLightTheme@TouchKeyboardExperienceManager@@CA_NXZ @ 0x180513078
 * Callers:
 *     ?GetBorderColor@TouchKeyboardExperienceManager@@AEBAKAEBUKBViewInfo@@@Z @ 0x18050FB48 (-GetBorderColor@TouchKeyboardExperienceManager@@AEBAKAEBUKBViewInfo@@@Z.c)
 * Callees:
 *     <none>
 */

char TouchKeyboardExperienceManager::IsAppsUseLightTheme(void)
{
  char v0; // bl
  unsigned int v2; // [rsp+50h] [rbp+8h] BYREF
  DWORD v3; // [rsp+58h] [rbp+10h] BYREF
  DWORD v4; // [rsp+60h] [rbp+18h] BYREF

  v4 = 4;
  v3 = 0;
  v0 = 1;
  if ( !RegGetValueW(
          HKEY_CURRENT_USER,
          L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Themes\\Personalize",
          L"AppsUseLightTheme",
          0x10000012u,
          &v3,
          &v2,
          &v4) )
  {
    if ( v3 == 4 )
    {
      if ( v2 <= 1 )
        return v2 == 1;
    }
    else if ( v4 == 4 && (unsigned __int16)(v2 - 48) <= 1u )
    {
      return (_WORD)v2 == 49;
    }
  }
  return v0;
}
