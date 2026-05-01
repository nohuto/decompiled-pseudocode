/*
 * XREFs of ?GetBorderColor@TouchKeyboardExperienceManager@@AEBAKAEBUKBViewInfo@@@Z @ 0x18050FB48
 * Callers:
 *     ?UpdateBorderStyle@TouchKeyboardExperienceManager@@AEAAJPEAUHWND__@@AEBUKBViewInfo@@@Z @ 0x18051B8D0 (-UpdateBorderStyle@TouchKeyboardExperienceManager@@AEAAJPEAUHWND__@@AEBUKBViewInfo@@@Z.c)
 *     ?UpdateVisibileViewsBorder@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x18051BF2C (-UpdateVisibileViewsBorder@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?IsAppsUseLightTheme@TouchKeyboardExperienceManager@@CA_NXZ @ 0x180513078 (-IsAppsUseLightTheme@TouchKeyboardExperienceManager@@CA_NXZ.c)
 */

DWORD __fastcall TouchKeyboardExperienceManager::GetBorderColor(
        TouchKeyboardExperienceManager *this,
        const struct KBViewInfo *a2)
{
  DWORD result; // eax
  __int64 v4; // rcx
  __int64 v5; // rax
  __int128 pvParam; // [rsp+20h] [rbp-18h] BYREF

  result = -2;
  if ( *((_DWORD *)a2 + 40) == 1 )
  {
    pvParam = 0LL;
    LODWORD(pvParam) = 16;
    if ( SystemParametersInfoW(0x42u, 0x10u, &pvParam, 0) && (BYTE4(pvParam) & 1) != 0 )
    {
      return GetSysColor(8);
    }
    else
    {
      if ( TouchKeyboardExperienceManager::IsAppsUseLightTheme() )
      {
        v4 = 1584LL;
        v5 = 1600LL;
      }
      else
      {
        v4 = 1056LL;
        v5 = 1072LL;
      }
      if ( *(_QWORD *)((char *)this + v5) )
        return GetColorFromColorString((char *)this + v4);
      else
        return -1;
    }
  }
  return result;
}
