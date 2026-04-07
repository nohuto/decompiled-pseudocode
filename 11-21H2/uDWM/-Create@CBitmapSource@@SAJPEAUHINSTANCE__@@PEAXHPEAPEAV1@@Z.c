/*
 * XREFs of ?Create@CBitmapSource@@SAJPEAUHINSTANCE__@@PEAXHPEAPEAV1@@Z @ 0x180050C3C
 * Callers:
 *     ?EnsureImages@CTopLevelWindow@@SAJXZ @ 0x18004F984 (-EnsureImages@CTopLevelWindow@@SAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CBitmapSource@@SAJPEAXKPEAPEAV1@@Z @ 0x180050CBC (-Create@CBitmapSource@@SAJPEAXKPEAPEAV1@@Z.c)
 */

__int64 __fastcall CBitmapSource::Create(HINSTANCE a1, void *a2, unsigned int a3, struct CBitmapSource **a4)
{
  HRESULT ThemeStream; // eax
  unsigned int v6; // ebx
  int v7; // eax
  void *v9; // [rsp+40h] [rbp-18h] BYREF
  unsigned int v10; // [rsp+70h] [rbp+18h] BYREF

  v10 = a3;
  ThemeStream = GetThemeStream(a2, 0, 0, 213, &v9, &v10, a1);
  v6 = ThemeStream;
  if ( ThemeStream < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, ThemeStream, 0x3Bu);
  }
  else
  {
    v7 = CBitmapSource::Create(v9, v10, a4);
    v6 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x3Eu);
  }
  return v6;
}
