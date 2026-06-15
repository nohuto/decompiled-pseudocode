/*
 * XREFs of ?IsAPOClsidRegistered@@YA_NPEAUHKEY__@@PEBG@Z @ 0x1801514DC
 * Callers:
 *     ?IsAPOClsidRegistered@@YA_NPEAUHKEY__@@U_GUID@@@Z @ 0x1801515AC (-IsAPOClsidRegistered@@YA_NPEAUHKEY__@@U_GUID@@@Z.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180021120 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     ?StringCchLengthW@@YAJPEBG_KPEA_K@Z @ 0x1800F085C (-StringCchLengthW@@YAJPEBG_KPEA_K@Z.c)
 */

char __fastcall IsAPOClsidRegistered(HKEY hKey, const unsigned __int16 *a2)
{
  __int64 v3; // r11
  unsigned __int64 v5; // [rsp+30h] [rbp-C8h] BYREF
  HKEY hKeya; // [rsp+38h] [rbp-C0h] BYREF
  WCHAR SubKey[80]; // [rsp+40h] [rbp-B8h] BYREF

  v5 = 0LL;
  if ( (int)StringCchLengthW(a2, 39LL, &v5) < 0
    || v5 != 38
    || (int)StringCchPrintfW(SubKey, 75LL, L"%s\\%s", L"AudioEngine\\AudioProcessingObjects", v3) < 0
    || RegOpenKeyExW(hKey, SubKey, 0, 0x20019u, &hKeya) )
  {
    return 0;
  }
  RegCloseKey(hKeya);
  return 1;
}
