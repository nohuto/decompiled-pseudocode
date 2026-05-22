/*
 * XREFs of ?RegGetHKLMDword@@YA_NQEBG0PEAK@Z @ 0x180069E0C
 * Callers:
 *     ?IsVailContainer@@YA_NXZ @ 0x18001E058 (-IsVailContainer@@YA_NXZ.c)
 *     ?TryCreateBlurredWallpaperBackdropBrush@Api@Compositor@Composition@UI@Windows@@UEAAJPEAPEAUICompositionBackdropBrush@345@@Z @ 0x180069AD0 (-TryCreateBlurredWallpaperBackdropBrush@Api@Compositor@Composition@UI@Windows@@UEAAJPEAPEAUIComp.c)
 *     ?MilInstrumentationBreak@@YAXK_N@Z @ 0x1801005A0 (-MilInstrumentationBreak@@YAXK_N@Z.c)
 * Callees:
 *     ?RegGetDword@@YA_NQEAUHKEY__@@QEBGPEAK@Z @ 0x180069E90 (-RegGetDword@@YA_NQEAUHKEY__@@QEBGPEAK@Z.c)
 */

bool __fastcall RegGetHKLMDword(LPCWSTR lpSubKey, const unsigned __int16 *a2, unsigned int *a3)
{
  bool Dword; // bl
  HKEY hKey; // [rsp+58h] [rbp+20h] BYREF

  Dword = 0;
  hKey = 0LL;
  if ( !RegOpenKeyExW(HKEY_LOCAL_MACHINE, lpSubKey, 0, 0x20019u, &hKey) )
  {
    Dword = RegGetDword(hKey, a2, a3);
    RegCloseKey(hKey);
  }
  return Dword;
}
