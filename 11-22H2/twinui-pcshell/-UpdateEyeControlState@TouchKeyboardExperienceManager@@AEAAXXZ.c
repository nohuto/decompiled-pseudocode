/*
 * XREFs of ?UpdateEyeControlState@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x180180FB8
 * Callers:
 *     ?PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x1800AAE90 (-PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnEyeControlStateChanged@TabTipAdapter@KeyboardHosting@@QEAAJ_N@Z @ 0x18018108C (-OnEyeControlStateChanged@TabTipAdapter@KeyboardHosting@@QEAAJ_N@Z.c)
 */

void __fastcall TouchKeyboardExperienceManager::UpdateEyeControlState(KeyboardHosting::TabTipAdapter **this)
{
  bool v2; // bl
  LSTATUS ValueW; // eax
  unsigned int v4; // ecx
  bool v5; // dl
  int v6; // eax
  bool v7; // zf
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int v9; // [rsp+50h] [rbp+8h] BYREF
  DWORD v10; // [rsp+58h] [rbp+10h] BYREF
  DWORD v11; // [rsp+60h] [rbp+18h] BYREF

  v11 = 4;
  v2 = 0;
  v10 = 0;
  ValueW = RegGetValueW(HKEY_CURRENT_USER, L"Software\\Microsoft\\Input\\EC", L"Enabled", 0x10000012u, &v10, &v9, &v11);
  v4 = ValueW;
  if ( ValueW )
  {
    if ( ValueW == 234 )
    {
      LOWORD(v4) = 13;
    }
    else if ( ValueW <= 0 )
    {
      goto LABEL_5;
    }
    goto LABEL_4;
  }
  LOWORD(v4) = 13;
  if ( v10 != 4 )
  {
    if ( v11 == 4 && (unsigned __int16)(v9 - 48) <= 1u )
    {
      v4 = 0;
      v7 = (_WORD)v9 == 49;
      goto LABEL_12;
    }
LABEL_4:
    v4 = (unsigned __int16)v4 | 0x80070000;
    goto LABEL_5;
  }
  if ( v9 > 1 )
    goto LABEL_4;
  v4 = 0;
  v7 = v9 == 1;
LABEL_12:
  v2 = v7;
LABEL_5:
  v5 = 0;
  if ( !v4 )
    v5 = v2;
  v6 = KeyboardHosting::TabTipAdapter::OnEyeControlStateChanged(this[73], v5);
  if ( v6 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x93F,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v6);
}
