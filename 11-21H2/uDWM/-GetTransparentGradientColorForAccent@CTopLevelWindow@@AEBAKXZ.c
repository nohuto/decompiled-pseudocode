/*
 * XREFs of ?GetTransparentGradientColorForAccent@CTopLevelWindow@@AEBAKXZ @ 0x1800E5124
 * Callers:
 *     ?UpdateAccent@CTopLevelWindow@@QEAAJ_N@Z @ 0x1800170B4 (-UpdateAccent@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18002B020 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     ?GetEffectiveGlassColorizationParameters@CDesktopManager@@QEAAXMU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@_NPEAVCGlassColorizationParameters@@@Z @ 0x1800B0BC8 (-GetEffectiveGlassColorizationParameters@CDesktopManager@@QEAAXMU-$TMILFlagsEnum@W4FlagsEnum@Col.c)
 *     ?s_ChooseWindowFrameFromStyle@CTopLevelWindow@@CAPEAUWindowFrame@1@I_N0@Z @ 0x1800E6948 (-s_ChooseWindowFrameFromStyle@CTopLevelWindow@@CAPEAUWindowFrame@1@I_N0@Z.c)
 */

__int64 __fastcall CTopLevelWindow::GetTransparentGradientColorForAccent(CTopLevelWindow *this)
{
  CDesktopManager *v2; // rdi
  struct CTopLevelWindow::WindowFrame *v3; // rax
  bool v4; // zf
  char v5; // r8
  __int128 v7; // [rsp+30h] [rbp-38h] BYREF
  int v8; // [rsp+40h] [rbp-28h]
  __int64 v9; // [rsp+44h] [rbp-24h]

  v2 = CDesktopManager::s_pDesktopManagerInstance;
  v3 = CTopLevelWindow::s_ChooseWindowFrameFromStyle(
         *((_DWORD *)this + 152),
         1,
         (*(_BYTE *)(*((_QWORD *)this + 94) + 667LL) & 0x10) != 0);
  *(_QWORD *)&v7 = 4282425086LL;
  v4 = (*((_BYTE *)this + 608) & 0x40) == 0;
  *((_QWORD *)&v7 + 1) = 27LL;
  v8 = 73;
  v9 = 1LL;
  if ( !v4 || (v5 = 2, (*(_BYTE *)(*((_QWORD *)this + 94) + 667LL) & 0x10) != 0) )
    v5 = 1;
  CDesktopManager::GetEffectiveGlassColorizationParameters((__int64)v2, *((float *)v3 + 465), v5, 1, &v7);
  return v7 & 0xFF00FF00 | ((unsigned __int8)v7 << 16) | (unsigned int)BYTE2(v7);
}
