/*
 * XREFs of ?WriteKey@GamingOverlayExperienceManager@@AEAAJ_KPEAUHSTRING__@@1PEBEKK@Z @ 0x18040960C
 * Callers:
 *     ?WriteKeyDWord@GamingOverlayExperienceManager@@UEAAJ_KPEAUHSTRING__@@1K@Z @ 0x180409720 (-WriteKeyDWord@GamingOverlayExperienceManager@@UEAAJ_KPEAUHSTRING__@@1K@Z.c)
 *     ?WriteKeyString@GamingOverlayExperienceManager@@UEAAJ_KPEAUHSTRING__@@11@Z @ 0x180409780 (-WriteKeyString@GamingOverlayExperienceManager@@UEAAJ_KPEAUHSTRING__@@11@Z.c)
 * Callees:
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x180393038 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
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
  const WCHAR *StringRawBuffer; // rax
  unsigned int v10; // eax
  __int64 v11; // rdx
  const WCHAR *v12; // rax
  unsigned int v13; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  HKEY hKey; // [rsp+60h] [rbp+8h] BYREF

  hKey = 0LL;
  StringRawBuffer = WindowsGetStringRawBuffer(a3, 0LL);
  v10 = RegCreateKeyExW(a2, StringRawBuffer, 0, 0LL, 0, 0x20006u, 0LL, &hKey, 0LL);
  if ( v10 )
  {
    v11 = 2240LL;
LABEL_5:
    v13 = wil::details::in1diag3::Return_Win32(
            retaddr,
            v11,
            (__int64)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
            (const char *)v10);
    goto LABEL_7;
  }
  v12 = WindowsGetStringRawBuffer(a4, 0LL);
  v10 = RegSetValueExW(hKey, v12, 0, dwType, lpData, cbData);
  if ( v10 )
  {
    v11 = 2248LL;
    goto LABEL_5;
  }
  v13 = 0;
LABEL_7:
  if ( hKey )
    RegCloseKey(hKey);
  return v13;
}
