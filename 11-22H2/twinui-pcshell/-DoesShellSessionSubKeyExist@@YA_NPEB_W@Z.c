/*
 * XREFs of ?DoesShellSessionSubKeyExist@@YA_NPEB_W@Z @ 0x18076C5AC
 * Callers:
 *     ?RuntimeClassInitialize@XamlSnapAssistViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z @ 0x18076D520 (-RuntimeClassInitialize@XamlSnapAssistViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z.c)
 * Callees:
 *     ?CreateShellSessionKey@@YAJKPEAPEAUHKEY__@@@Z @ 0x18012F95C (-CreateShellSessionKey@@YAJKPEAPEAUHKEY__@@@Z.c)
 */

bool __fastcall DoesShellSessionSubKeyExist(const wchar_t *a1)
{
  bool v1; // bl
  HKEY hKey; // [rsp+40h] [rbp+8h] BYREF
  HKEY phkResult; // [rsp+48h] [rbp+10h] BYREF

  hKey = 0LL;
  if ( CreateShellSessionKey(0x20019u, &hKey) < 0 )
  {
    v1 = 0;
  }
  else
  {
    phkResult = 0LL;
    v1 = RegOpenKeyExW(hKey, L"IsTabTearOutSupported", 0, 0x20019u, &phkResult) == 0;
    if ( phkResult )
      RegCloseKey(phkResult);
  }
  if ( hKey )
    RegCloseKey(hKey);
  return v1;
}
