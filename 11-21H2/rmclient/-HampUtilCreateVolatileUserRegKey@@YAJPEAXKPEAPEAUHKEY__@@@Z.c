/*
 * XREFs of ?HampUtilCreateVolatileUserRegKey@@YAJPEAXKPEAPEAUHKEY__@@@Z @ 0x180007D18
 * Callers:
 *     ?HampUtilQueryRegistryTerminateReason@@YAJPEBGPEAXPEAW4_HAM_TERMINATE_REASON@@@Z @ 0x180007BFC (-HampUtilQueryRegistryTerminateReason@@YAJPEBGPEAXPEAW4_HAM_TERMINATE_REASON@@@Z.c)
 * Callees:
 *     ?HampUtilCreateUserRegKey@@YAJPEAXKPEBGGPEAGPEAPEAUHKEY__@@@Z @ 0x180007DF0 (-HampUtilCreateUserRegKey@@YAJPEAXKPEBGGPEAGPEAPEAUHKEY__@@@Z.c)
 *     ?HampSystemCreateKey@@YAJPEAUHKEY__@@PEBGKKPEAPEAU1@@Z @ 0x180007EA8 (-HampSystemCreateKey@@YAJPEAUHKEY__@@PEBGKKPEAPEAU1@@Z.c)
 *     __security_check_cookie @ 0x18000B040 (__security_check_cookie.c)
 */

__int64 __fastcall HampUtilCreateVolatileUserRegKey(void *a1, unsigned int a2, HKEY *a3, unsigned __int16 a4)
{
  int v5; // ebx
  unsigned int v6; // r9d
  HKEY v7; // rcx
  HKEY v9; // [rsp+30h] [rbp-228h] BYREF
  HKEY hKey; // [rsp+38h] [rbp-220h] BYREF
  unsigned __int16 v11[256]; // [rsp+40h] [rbp-218h] BYREF

  hKey = 0LL;
  v9 = 0LL;
  v5 = HampUtilCreateUserRegKey(a1, a2, (const unsigned __int16 *)a3, a4, v11, &hKey);
  if ( v5 < 0 || (v5 = HampSystemCreateKey(hKey, L"Volatile", 1u, v6, &v9), v5 < 0) )
  {
    v7 = v9;
  }
  else
  {
    v7 = 0LL;
    *a3 = v9;
    v5 = 0;
    v9 = 0LL;
  }
  if ( v7 )
    RegCloseKey(v7);
  if ( hKey )
    RegCloseKey(hKey);
  return (unsigned int)v5;
}
