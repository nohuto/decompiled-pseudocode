/*
 * XREFs of ?ComputeCortanaWindowRect@SearchAppDesktopExperienceView@@AEAA?AUtagRECT@@W4EDGEUI_TRAYSTUCKPLACE@@HHU2@1_N@Z @ 0x180477DCC
 * Callers:
 *     ?PositionCortanaWindow@SearchAppDesktopExperienceView@@AEAAJ_N0@Z @ 0x18047B868 (-PositionCortanaWindow@SearchAppDesktopExperienceView@@AEAAJ_N0@Z.c)
 * Callees:
 *     ?IsBiDiLocale@@YAHK@Z @ 0x180186D9C (-IsBiDiLocale@@YAHK@Z.c)
 */

_DWORD *__fastcall SearchAppDesktopExperienceView::ComputeCortanaWindowRect(
        __int64 a1,
        _DWORD *a2,
        int a3,
        int a4,
        int a5,
        _DWORD *a6,
        int *a7,
        char a8)
{
  int v10; // r8d
  LANGID ThreadUILanguage; // ax
  int v12; // ecx
  int v13; // edx
  int v14; // edx
  _DWORD *v15; // rax
  LANGID v16; // ax

  if ( !a3 )
  {
    v15 = a6;
    v12 = a6[2];
    goto LABEL_17;
  }
  v10 = a3 - 1;
  if ( v10 )
  {
    if ( v10 != 1 )
    {
      ThreadUILanguage = GetThreadUILanguage();
      if ( (unsigned int)IsBiDiLocale(ThreadUILanguage) )
        v12 = a7[2] - a4;
      else
        v12 = *a7;
      *a2 = v12;
      if ( a8 )
        v13 = a6[3];
      else
        v13 = a6[1];
      v14 = v13 - a5;
      goto LABEL_18;
    }
    v15 = a6;
    v12 = *a6 - a4;
LABEL_17:
    *a2 = v12;
    v14 = v15[1];
    goto LABEL_18;
  }
  v16 = GetThreadUILanguage();
  if ( (unsigned int)IsBiDiLocale(v16) )
    v12 = a7[2] - a4;
  else
    v12 = *a7;
  *a2 = v12;
  v14 = a6[3];
LABEL_18:
  a2[1] = v14;
  a2[2] = v12 + a4;
  a2[3] = v14 + a5;
  return a2;
}
