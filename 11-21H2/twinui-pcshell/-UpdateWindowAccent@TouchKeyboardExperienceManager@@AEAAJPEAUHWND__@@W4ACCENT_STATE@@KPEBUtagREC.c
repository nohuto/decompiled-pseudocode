/*
 * XREFs of ?UpdateWindowAccent@TouchKeyboardExperienceManager@@AEAAJPEAUHWND__@@W4ACCENT_STATE@@KPEBUtagRECT@@@Z @ 0x18046A1F8
 * Callers:
 *     ?UpdateBorderStyle@TouchKeyboardExperienceManager@@AEAAJPEAUHWND__@@W4ViewEffectKind@@@Z @ 0x180469B84 (-UpdateBorderStyle@TouchKeyboardExperienceManager@@AEAAJPEAUHWND__@@W4ViewEffectKind@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18019033C (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall TouchKeyboardExperienceManager::UpdateWindowAccent(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  const char *v4; // r9
  int v6; // [rsp+20h] [rbp-38h] BYREF
  _DWORD *v7; // [rsp+28h] [rbp-30h]
  int v8; // [rsp+30h] [rbp-28h]
  _DWORD v9[4]; // [rsp+38h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v9[3] = 0;
  v9[0] = a3;
  v9[2] = 0;
  v6 = 19;
  v7 = v9;
  v9[1] = 1504;
  v8 = 16;
  if ( !(unsigned int)SetWindowCompositionAttribute(a2, &v6, a3, a4) )
    wil::details::in1diag3::_Log_GetLastError(
      retaddr,
      (void *)0x16D0,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      v4);
  return 0LL;
}
