/*
 * XREFs of ?GetThemePercentage@@YAJPEAXHHHPEAM@Z @ 0x18003B5D0
 * Callers:
 *     ?GetNCAreaHelper@CTopLevelWindow@@CAJPEAXPEBH1PEAUWindowFrame@1@2@Z @ 0x18003AE14 (-GetNCAreaHelper@CTopLevelWindow@@CAJPEAXPEBH1PEAUWindowFrame@1@2@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall GetThemePercentage(void *a1, int a2, int a3, __int64 a4, float *a5)
{
  HRESULT ThemeInt; // eax
  unsigned int v6; // ebx
  int piVal; // [rsp+58h] [rbp+20h] BYREF

  piVal = 0;
  ThemeInt = GetThemeInt(a1, a2, a3, 2432, &piVal);
  v6 = ThemeInt;
  if ( ThemeInt < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, ThemeInt, 0x3Du, 0LL);
  else
    *a5 = (float)piVal / 100.0;
  return v6;
}
