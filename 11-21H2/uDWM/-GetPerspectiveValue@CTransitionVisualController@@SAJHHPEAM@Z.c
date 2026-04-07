/*
 * XREFs of ?GetPerspectiveValue@CTransitionVisualController@@SAJHHPEAM@Z @ 0x1800ED0C4
 * Callers:
 *     ?AddAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@@Z @ 0x1800E9DE4 (-AddAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z @ 0x180025C70 (-GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z.c)
 */

__int64 __fastcall CTransitionVisualController::GetPerspectiveValue(unsigned int a1, unsigned int a2, float *a3)
{
  __int64 Theme; // rbp
  unsigned int v7; // edx
  int ThemeAnimationProperty; // eax
  unsigned int v9; // ebx
  int v10; // eax
  _BYTE v12[40]; // [rsp+40h] [rbp-28h] BYREF
  int v13; // [rsp+88h] [rbp+20h] BYREF

  v13 = 0;
  Theme = CDesktopManager::GetTheme(3);
  ThemeAnimationProperty = GetThemeAnimationProperty(Theme, a1, v7, 0LL, &v13, 4, v12);
  v9 = ThemeAnimationProperty;
  if ( ThemeAnimationProperty >= 0 )
  {
    if ( (v13 & 0x10) != 0 )
    {
      v10 = GetThemeAnimationProperty(Theme, a1, a2, 258LL, a3, 4, v12);
      v9 = v10;
      if ( v10 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(
          0x14u,
          &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
          2LL,
          v10,
          0xB45u);
    }
    else
    {
      return (unsigned int)-2147467259;
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2LL,
      ThemeAnimationProperty,
      0xB3Bu);
  }
  return v9;
}
