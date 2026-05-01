/*
 * XREFs of ?QueryKey@GamingOverlayExperienceManager@@AEAAJ_KPEAUHSTRING__@@1PEAEPEAK3@Z @ 0x180405474
 * Callers:
 *     ?QueryKeyDWord@GamingOverlayExperienceManager@@UEAAJ_KPEAUHSTRING__@@1PEAK@Z @ 0x180405560 (-QueryKeyDWord@GamingOverlayExperienceManager@@UEAAJ_KPEAUHSTRING__@@1PEAK@Z.c)
 *     ?QueryKeyString@GamingOverlayExperienceManager@@UEAAJ_KPEAUHSTRING__@@1PEAPEAU2@@Z @ 0x180405660 (-QueryKeyString@GamingOverlayExperienceManager@@UEAAJ_KPEAUHSTRING__@@1PEAPEAU2@@Z.c)
 * Callees:
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x180393038 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 */

__int64 __fastcall GamingOverlayExperienceManager::QueryKey(
        GamingOverlayExperienceManager *this,
        HKEY a2,
        HSTRING a3,
        HSTRING a4,
        unsigned __int8 *lpData,
        unsigned int *lpcbData,
        unsigned int *lpType)
{
  const WCHAR *StringRawBuffer; // rax
  unsigned int Value; // eax
  __int64 v11; // rdx
  const WCHAR *v12; // rax
  unsigned int v13; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  HKEY hKey; // [rsp+40h] [rbp+8h] BYREF

  hKey = 0LL;
  StringRawBuffer = WindowsGetStringRawBuffer(a3, 0LL);
  Value = RegOpenKeyExW(a2, StringRawBuffer, 0, 0x20019u, &hKey);
  if ( Value )
  {
    v11 = 2209LL;
LABEL_5:
    v13 = wil::details::in1diag3::Return_Win32(
            retaddr,
            v11,
            (__int64)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
            (const char *)Value);
    goto LABEL_7;
  }
  v12 = WindowsGetStringRawBuffer(a4, 0LL);
  Value = RegQueryValueExW(hKey, v12, 0LL, lpType, lpData, lpcbData);
  if ( Value )
  {
    v11 = 2217LL;
    goto LABEL_5;
  }
  v13 = 0;
LABEL_7:
  if ( hKey )
    RegCloseKey(hKey);
  return v13;
}
