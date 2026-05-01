/*
 * XREFs of ?WriteKey@GamingOverlayExperienceManager@@AEAAJ_KPEAUHSTRING__@@1PEBEKK@Z @ 0x18033B774
 * Callers:
 *     ?WriteKeyDWord@GamingOverlayExperienceManager@@UEAAJ_KPEAUHSTRING__@@1K@Z @ 0x18033B880 (-WriteKeyDWord@GamingOverlayExperienceManager@@UEAAJ_KPEAUHSTRING__@@1K@Z.c)
 *     ?WriteKeyString@GamingOverlayExperienceManager@@UEAAJ_KPEAUHSTRING__@@11@Z @ 0x18033B8E0 (-WriteKeyString@GamingOverlayExperienceManager@@UEAAJ_KPEAUHSTRING__@@11@Z.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18008EA60 (--1-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$integral.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x18008EA88 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 */

__int64 __fastcall GamingOverlayExperienceManager::WriteKey(
        GamingOverlayExperienceManager *this,
        HKEY a2,
        HSTRING a3,
        HSTRING a4,
        BYTE *lpData,
        DWORD cbData,
        DWORD dwType)
{
  unsigned int v9; // edi
  const WCHAR *StringRawBuffer; // rax
  unsigned int v11; // eax
  __int64 v12; // rdx
  const WCHAR *v13; // rax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  HKEY hKey; // [rsp+60h] [rbp+8h] BYREF

  v9 = 0;
  hKey = 0LL;
  StringRawBuffer = WindowsGetStringRawBuffer(a3, 0LL);
  v11 = RegCreateKeyExW(a2, StringRawBuffer, 0, 0LL, 0, 0x20006u, 0LL, &hKey, 0LL);
  if ( v11 )
  {
    v12 = 2152LL;
LABEL_5:
    v9 = wil::details::in1diag3::Return_Win32(
           retaddr,
           (void *)v12,
           (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
           (const char *)v11);
    goto LABEL_6;
  }
  v13 = WindowsGetStringRawBuffer(a4, 0LL);
  v11 = RegSetValueExW(hKey, v13, 0, dwType, lpData, cbData);
  if ( v11 )
  {
    v12 = 2160LL;
    goto LABEL_5;
  }
LABEL_6:
  wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&hKey);
  return v9;
}
