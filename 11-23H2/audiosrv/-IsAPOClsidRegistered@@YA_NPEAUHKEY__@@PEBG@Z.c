/*
 * XREFs of ?IsAPOClsidRegistered@@YA_NPEAUHKEY__@@PEBG@Z @ 0x180023A68
 * Callers:
 *     ?GetFxClsidsFromPropertyStore@@YAJPEAUIPropertyStore@@U_tagpropertykey@@1PEBGPEAIPEAPEAU_GUID@@@Z @ 0x1800235C4 (-GetFxClsidsFromPropertyStore@@YAJPEAUIPropertyStore@@U_tagpropertykey@@1PEBGPEAIPEAPEAU_GUID@@@.c)
 *     ?IsAPOClsidRegistered@@YA_NPEAUHKEY__@@U_GUID@@@Z @ 0x180169550 (-IsAPOClsidRegistered@@YA_NPEAUHKEY__@@U_GUID@@@Z.c)
 * Callees:
 *     ?GetApoRegKeyPath@@YAJPEAGIPEBG@Z @ 0x180023AFC (-GetApoRegKeyPath@@YAJPEAGIPEBG@Z.c)
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 */

char __fastcall IsAPOClsidRegistered(HKEY hKey, const unsigned __int16 *a2)
{
  HKEY hKeya; // [rsp+30h] [rbp-C8h] BYREF
  WCHAR SubKey[80]; // [rsp+40h] [rbp-B8h] BYREF

  if ( (int)GetApoRegKeyPath(SubKey, (unsigned int)a2, a2) < 0 || RegOpenKeyExW(hKey, SubKey, 0, 0x20019u, &hKeya) )
    return 0;
  RegCloseKey(hKeya);
  return 1;
}
