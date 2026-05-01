/*
 * XREFs of ?UpdateBorderStyle@TouchKeyboardExperienceManager@@AEAAJPEAUHWND__@@AEBUKBViewInfo@@@Z @ 0x18051B8D0
 * Callers:
 *     ?ApplyRequestedRect@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEBUtagRECT@@@Z @ 0x18050E368 (-ApplyRequestedRect@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEBUtagRECT@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateWindowAccent@TouchKeyboardExperienceManager@@AEAAJPEAUHWND__@@W4ACCENT_STATE@@KPEBUtagRECT@@@Z @ 0x1802DC746 (-UpdateWindowAccent@TouchKeyboardExperienceManager@@AEAAJPEAUHWND__@@W4ACCENT_STATE@@KPEBUtagREC.c)
 *     ?GetBorderColor@TouchKeyboardExperienceManager@@AEBAKAEBUKBViewInfo@@@Z @ 0x18050FB48 (-GetBorderColor@TouchKeyboardExperienceManager@@AEBAKAEBUKBViewInfo@@@Z.c)
 */

__int64 __fastcall TouchKeyboardExperienceManager::UpdateBorderStyle(
        TouchKeyboardExperienceManager *this,
        HWND hwnd,
        const struct KBViewInfo *a3)
{
  int v3; // esi
  int v5; // r8d
  int updated; // ebx
  __int64 v9; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  int pvAttribute; // [rsp+70h] [rbp+18h] BYREF
  DWORD BorderColor; // [rsp+78h] [rbp+20h] BYREF

  v3 = *((_DWORD *)a3 + 40);
  v5 = 5;
  if ( v3 != 1 )
    v5 = 0;
  updated = TouchKeyboardExperienceManager::UpdateWindowAccent((__int64)this, (__int64)hwnd, v5);
  if ( updated < 0 )
  {
    v9 = 5631LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)updated);
    return (unsigned int)updated;
  }
  pvAttribute = (v3 == 1) + 1;
  updated = DwmSetWindowAttribute(hwnd, 0x21u, &pvAttribute, 4u);
  if ( updated < 0 )
  {
    v9 = 5633LL;
    goto LABEL_5;
  }
  BorderColor = TouchKeyboardExperienceManager::GetBorderColor(this, a3);
  updated = DwmSetWindowAttribute(hwnd, 0x22u, &BorderColor, 4u);
  if ( updated < 0 )
  {
    v9 = 5638LL;
    goto LABEL_5;
  }
  return 0LL;
}
