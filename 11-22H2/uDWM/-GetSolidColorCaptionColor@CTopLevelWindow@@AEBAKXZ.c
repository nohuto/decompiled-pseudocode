/*
 * XREFs of ?GetSolidColorCaptionColor@CTopLevelWindow@@AEBAKXZ @ 0x180011DFC
 * Callers:
 *     ?GetCaptionColor@CTopLevelWindow@@AEBAKXZ @ 0x180051CE4 (-GetCaptionColor@CTopLevelWindow@@AEBAKXZ.c)
 * Callees:
 *     ?GetCurrentDefaultColorizationFlags@CTopLevelWindow@@AEBA?AU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@XZ @ 0x180011E9C (-GetCurrentDefaultColorizationFlags@CTopLevelWindow@@AEBA-AU-$TMILFlagsEnum@W4FlagsEnum@Coloriza.c)
 *     ?GetEffectiveWindowColorizationColor@CDesktopManager@@QEAAXMU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@PEAK@Z @ 0x180011EF0 (-GetEffectiveWindowColorizationColor@CDesktopManager@@QEAAXMU-$TMILFlagsEnum@W4FlagsEnum@Coloriz.c)
 *     ?s_ChooseWindowFrameFromStyle@CTopLevelWindow@@CAPEAUWindowFrame@1@I_N0@Z @ 0x180051944 (-s_ChooseWindowFrameFromStyle@CTopLevelWindow@@CAPEAUWindowFrame@1@I_N0@Z.c)
 */

__int64 __fastcall CTopLevelWindow::GetSolidColorCaptionColor(CTopLevelWindow *this)
{
  __int64 v1; // rsi
  unsigned int v2; // r10d
  __int64 v3; // r11
  unsigned int v4; // ebx
  int v5; // r10d
  CDesktopManager *v6; // rdi
  __int64 v7; // rdx
  unsigned int v9; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 94);
  v2 = *(_DWORD *)(v1 + 192);
  if ( v2 >= 2 )
    return v2;
  CTopLevelWindow::GetCurrentDefaultColorizationFlags(this, &v9);
  v4 = v9 | 8;
  if ( v5 == 1 )
    v4 = v9 | 0x108;
  v6 = CDesktopManager::s_pDesktopManagerInstance;
  CTopLevelWindow::s_ChooseWindowFrameFromStyle(*(_DWORD *)(v3 + 624), 1, (*(_BYTE *)(v1 + 675) & 0x10) != 0);
  CDesktopManager::GetEffectiveWindowColorizationColor(v6, v7, v4, &v9);
  return v9;
}
