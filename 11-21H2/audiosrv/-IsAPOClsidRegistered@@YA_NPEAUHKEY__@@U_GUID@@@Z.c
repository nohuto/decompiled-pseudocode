/*
 * XREFs of ?IsAPOClsidRegistered@@YA_NPEAUHKEY__@@U_GUID@@@Z @ 0x1801515AC
 * Callers:
 *     ?GetFxClsids@@YAJPEAUIMMDevice@@U_tagpropertykey@@1PEAIPEAPEAU_GUID@@@Z @ 0x180049CB0 (-GetFxClsids@@YAJPEAUIMMDevice@@U_tagpropertykey@@1PEAIPEAPEAU_GUID@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     ?IsAPOClsidRegistered@@YA_NPEAUHKEY__@@PEBG@Z @ 0x1801514DC (-IsAPOClsidRegistered@@YA_NPEAUHKEY__@@PEBG@Z.c)
 */

char __fastcall IsAPOClsidRegistered(HKEY hKey, struct _GUID *a2)
{
  GUID rguid; // [rsp+20h] [rbp-78h] BYREF
  OLECHAR sz[40]; // [rsp+30h] [rbp-68h] BYREF

  rguid = *a2;
  if ( StringFromGUID2(&rguid, sz, 39) > 0 )
    return IsAPOClsidRegistered(hKey, sz);
  else
    return 0;
}
