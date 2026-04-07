/*
 * XREFs of ?Create@CBitmapSource@@SAJPEAUHINSTANCE__@@PEAXHPEAPEAV1@@Z @ 0x18003B89C
 * Callers:
 *     ?EnsureImages@CTopLevelWindow@@SAJXZ @ 0x18003B630 (-EnsureImages@CTopLevelWindow@@SAJXZ.c)
 * Callees:
 *     ?Create@CBitmapSource@@SAJPEAXKPEAPEAV1@@Z @ 0x18003A06C (-Create@CBitmapSource@@SAJPEAXKPEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
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
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, ThemeStream, 0x3Bu, 0LL);
  }
  else
  {
    v7 = CBitmapSource::Create(v9, v10, a4);
    v6 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x3Eu, 0LL);
  }
  return v6;
}
