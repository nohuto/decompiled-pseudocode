/*
 * XREFs of ?UpdateBorderStyle@TouchKeyboardExperienceManager@@AEAAJPEAUHWND__@@W4ViewEffectKind@@@Z @ 0x180469B84
 * Callers:
 *     ?ApplyRequestedRect@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEBUtagRECT@@@Z @ 0x18045C7D4 (-ApplyRequestedRect@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEBUtagRECT@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateWindowAccent@TouchKeyboardExperienceManager@@AEAAJPEAUHWND__@@W4ACCENT_STATE@@KPEBUtagRECT@@@Z @ 0x18046A1F8 (-UpdateWindowAccent@TouchKeyboardExperienceManager@@AEAAJPEAUHWND__@@W4ACCENT_STATE@@KPEBUtagREC.c)
 */

__int64 __fastcall TouchKeyboardExperienceManager::UpdateBorderStyle(__int64 a1, HWND a2, int a3)
{
  bool v4; // zf
  __int64 v6; // r8
  HRESULT updated; // ebx
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int pvAttribute; // [rsp+50h] [rbp+18h] BYREF

  v4 = a3 == 1;
  v6 = 5LL;
  if ( !v4 )
    v6 = 0LL;
  updated = TouchKeyboardExperienceManager::UpdateWindowAccent(a1, a2, v6);
  if ( updated < 0 )
  {
    v8 = 5865LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)updated);
    return (unsigned int)updated;
  }
  pvAttribute = (a3 == 1) + 1;
  updated = DwmSetWindowAttribute(a2, 0x21u, &pvAttribute, 4u);
  if ( updated < 0 )
  {
    v8 = 5867LL;
    goto LABEL_5;
  }
  return 0LL;
}
