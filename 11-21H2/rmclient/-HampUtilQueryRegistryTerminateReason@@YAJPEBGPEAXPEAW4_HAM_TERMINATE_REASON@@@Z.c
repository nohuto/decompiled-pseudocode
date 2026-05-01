/*
 * XREFs of ?HampUtilQueryRegistryTerminateReason@@YAJPEBGPEAXPEAW4_HAM_TERMINATE_REASON@@@Z @ 0x180007BFC
 * Callers:
 *     HamQueryCallerTerminateReason @ 0x180007B20 (HamQueryCallerTerminateReason.c)
 * Callees:
 *     ?HampSystemQueryValue@@YAJPEAUHKEY__@@PEBGPEAXPEAK@Z @ 0x180007CE0 (-HampSystemQueryValue@@YAJPEAUHKEY__@@PEBGPEAXPEAK@Z.c)
 *     ?HampUtilCreateVolatileUserRegKey@@YAJPEAXKPEAPEAUHKEY__@@@Z @ 0x180007D18 (-HampUtilCreateVolatileUserRegKey@@YAJPEAXKPEAPEAUHKEY__@@@Z.c)
 *     __security_check_cookie @ 0x18000B040 (__security_check_cookie.c)
 */

__int64 __fastcall HampUtilQueryRegistryTerminateReason(
        const unsigned __int16 *a1,
        void *a2,
        enum _HAM_TERMINATE_REASON *a3)
{
  unsigned int v5; // edx
  int v6; // ebx
  int v7; // eax
  unsigned int v9; // [rsp+20h] [rbp-E0h] BYREF
  HKEY hKey; // [rsp+28h] [rbp-D8h] BYREF
  int v11; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v12[3]; // [rsp+34h] [rbp-CCh] BYREF
  unsigned __int16 v13[136]; // [rsp+40h] [rbp-C0h] BYREF

  hKey = 0LL;
  v11 = 130;
  PsmGetAumidFromKey(a1, &v11, v13);
  v6 = HampUtilCreateVolatileUserRegKey(a2, v5, &hKey);
  if ( v6 >= 0 )
  {
    v9 = 4;
    v7 = HampSystemQueryValue(hKey, v13, v12, &v9);
    v6 = v7;
    if ( v7 < 0 )
    {
      if ( v7 != -1073283070 )
        goto LABEL_6;
      *(_DWORD *)a3 = 0;
      goto LABEL_5;
    }
    if ( v12[0] <= 0x1AFF && v9 == 4 )
    {
      *(_DWORD *)a3 = v12[0];
LABEL_5:
      v6 = 0;
      goto LABEL_6;
    }
    v6 = -1073739509;
  }
LABEL_6:
  if ( hKey )
    RegCloseKey(hKey);
  return (unsigned int)v6;
}
