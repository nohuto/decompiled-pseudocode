/*
 * XREFs of ?HampUtilSaveRegistryTerminateReason@@YAJPEBGPEAXW4_HAM_TERMINATE_REASON@@@Z @ 0x18003E3B8
 * Callers:
 *     ?HampAppSaveTerminateReason@@YAXPEAU_HAM_APPLICATION@@W4_HAM_TERMINATE_REASON@@@Z @ 0x18003E308 (-HampAppSaveTerminateReason@@YAXPEAU_HAM_APPLICATION@@W4_HAM_TERMINATE_REASON@@@Z.c)
 * Callees:
 *     ?HampUtilCreateVolatileUserRegKey@@YAJPEAXKPEAPEAUHKEY__@@@Z @ 0x18000C064 (-HampUtilCreateVolatileUserRegKey@@YAJPEAXKPEAPEAUHKEY__@@@Z.c)
 *     ?HampSystemSetValue@@YAJPEAUHKEY__@@PEBGKPEAXK@Z @ 0x18003E4B4 (-HampSystemSetValue@@YAJPEAUHKEY__@@PEBGKPEAXK@Z.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 */

__int64 __fastcall HampUtilSaveRegistryTerminateReason(__int64 a1, void *a2, int a3)
{
  signed int v4; // ebx
  LSTATUS v6; // eax
  int v7; // [rsp+30h] [rbp-148h] BYREF
  HKEY hKey; // [rsp+38h] [rbp-140h] BYREF
  int v9[4]; // [rsp+40h] [rbp-138h] BYREF
  WCHAR ValueName[136]; // [rsp+50h] [rbp-128h] BYREF

  v7 = a3;
  v9[0] = 130;
  hKey = 0LL;
  PsmGetAumidFromKey(a1, v9, ValueName);
  v4 = HampUtilCreateVolatileUserRegKey(a2, 0x20006u, &hKey);
  if ( v4 >= 0 )
  {
    if ( v7 )
    {
      v4 = HampSystemSetValue(hKey, ValueName, 4u, &v7, 4u);
    }
    else
    {
      v6 = RegDeleteValueW(hKey, ValueName);
      v4 = v6;
      if ( v6 > 0 )
        v4 = (unsigned __int16)v6 | 0xC0070000;
      if ( v4 == -1073283070 )
        v4 = 279;
    }
    if ( v4 >= 0 )
      v4 = 0;
  }
  if ( hKey )
    RegCloseKey(hKey);
  return (unsigned int)v4;
}
