/*
 * XREFs of ?InitializeFromRegistry@FailFast@WRL2@Microsoft@@SAXPEBG0@Z @ 0x18001BC48
 * Callers:
 *     DllMain @ 0x18009C1A4 (DllMain.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL2::FailFast::InitializeFromRegistry(
        const unsigned __int16 *a1,
        const unsigned __int16 *a2)
{
  HKEY v2; // rcx
  const unsigned __int16 *cbData; // [rsp+40h] [rbp+10h] BYREF
  const unsigned __int16 *Data; // [rsp+48h] [rbp+18h] BYREF
  DWORD Type; // [rsp+50h] [rbp+20h] BYREF
  HKEY hKey; // [rsp+58h] [rbp+28h] BYREF

  Data = a2;
  cbData = a1;
  hKey = 0LL;
  if ( !RegOpenKeyExW(HKEY_LOCAL_MACHINE, L"Software\\Microsoft\\Windows\\Dwm", 0, 0x20019u, &hKey) )
  {
    LODWORD(Data) = 0;
    v2 = hKey;
    LODWORD(cbData) = 4;
    if ( hKey )
    {
      if ( !RegQueryValueExW(hKey, L"DebugFailFast", 0LL, &Type, (LPBYTE)&Data, (LPDWORD)&cbData) && Type == 4 )
        DebugFailFast = (_DWORD)Data != 0;
      v2 = hKey;
    }
    RegCloseKey(v2);
  }
}
