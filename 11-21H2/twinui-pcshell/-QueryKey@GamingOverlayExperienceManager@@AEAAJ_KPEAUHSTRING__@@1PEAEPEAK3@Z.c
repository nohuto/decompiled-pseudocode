/*
 * XREFs of ?QueryKey@GamingOverlayExperienceManager@@AEAAJ_KPEAUHSTRING__@@1PEAEPEAK3@Z @ 0x18033785C
 * Callers:
 *     ?QueryKeyDWord@GamingOverlayExperienceManager@@UEAAJ_KPEAUHSTRING__@@1PEAK@Z @ 0x180337950 (-QueryKeyDWord@GamingOverlayExperienceManager@@UEAAJ_KPEAUHSTRING__@@1PEAK@Z.c)
 *     ?QueryKeyString@GamingOverlayExperienceManager@@UEAAJ_KPEAUHSTRING__@@1PEAPEAU2@@Z @ 0x180337A50 (-QueryKeyString@GamingOverlayExperienceManager@@UEAAJ_KPEAUHSTRING__@@1PEAPEAU2@@Z.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18008EA60 (--1-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$integral.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x18008EA88 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
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
  unsigned int v9; // edi
  const WCHAR *StringRawBuffer; // rax
  unsigned int Value; // eax
  __int64 v12; // rdx
  const WCHAR *v13; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  HKEY hKey; // [rsp+40h] [rbp+8h] BYREF

  v9 = 0;
  hKey = 0LL;
  StringRawBuffer = WindowsGetStringRawBuffer(a3, 0LL);
  Value = RegOpenKeyExW(a2, StringRawBuffer, 0, 0x20019u, &hKey);
  if ( Value )
  {
    v12 = 2121LL;
LABEL_5:
    v9 = wil::details::in1diag3::Return_Win32(
           retaddr,
           (void *)v12,
           (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
           (const char *)Value);
    goto LABEL_6;
  }
  v13 = WindowsGetStringRawBuffer(a4, 0LL);
  Value = RegQueryValueExW(hKey, v13, 0LL, lpType, lpData, lpcbData);
  if ( Value )
  {
    v12 = 2129LL;
    goto LABEL_5;
  }
LABEL_6:
  wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&hKey);
  return v9;
}
