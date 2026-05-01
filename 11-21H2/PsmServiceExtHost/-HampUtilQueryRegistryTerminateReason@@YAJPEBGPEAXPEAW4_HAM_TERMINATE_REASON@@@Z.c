/*
 * XREFs of ?HampUtilQueryRegistryTerminateReason@@YAJPEBGPEAXPEAW4_HAM_TERMINATE_REASON@@@Z @ 0x18000BF54
 * Callers:
 *     ?HampAppQueryTerminateReason@@YAJPEAU_HAM_APPLICATION@@PEAW4_HAM_TERMINATE_REASON@@@Z @ 0x18000BEEC (-HampAppQueryTerminateReason@@YAJPEAU_HAM_APPLICATION@@PEAW4_HAM_TERMINATE_REASON@@@Z.c)
 *     ?HamSrvGetApplicationStateForPsmKey@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKPEAW4_HAM_APPLICATION_EXECUTION_STATE@@PEAW4_HAM_TERMINATE_REASON@@@Z @ 0x180045BCC (-HamSrvGetApplicationStateForPsmKey@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKPEAW4_HAM_APPLICATION_.c)
 * Callees:
 *     ?HampUtilCreateVolatileUserRegKey@@YAJPEAXKPEAPEAUHKEY__@@@Z @ 0x18000C064 (-HampUtilCreateVolatileUserRegKey@@YAJPEAXKPEAPEAUHKEY__@@@Z.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 */

__int64 __fastcall HampUtilQueryRegistryTerminateReason(
        const unsigned __int16 *a1,
        void *a2,
        enum _HAM_TERMINATE_REASON *a3)
{
  signed int v5; // ebx
  LSTATUS v6; // eax
  DWORD cbData; // [rsp+30h] [rbp-D0h] BYREF
  HKEY hKey; // [rsp+38h] [rbp-C8h] BYREF
  int v10; // [rsp+40h] [rbp-C0h] BYREF
  BYTE Data[12]; // [rsp+44h] [rbp-BCh] BYREF
  WCHAR ValueName[136]; // [rsp+50h] [rbp-B0h] BYREF

  hKey = 0LL;
  v10 = 130;
  PsmGetAumidFromKey(a1, &v10, ValueName);
  v5 = HampUtilCreateVolatileUserRegKey(a2, 1u, &hKey);
  if ( v5 >= 0 )
  {
    cbData = 4;
    v6 = RegQueryValueExW(hKey, ValueName, 0LL, 0LL, Data, &cbData);
    v5 = v6;
    if ( v6 > 0 )
      v5 = (unsigned __int16)v6 | 0xC0070000;
    if ( v5 < 0 )
    {
      if ( v5 != -1073283070 )
        goto LABEL_8;
      *(_DWORD *)a3 = 0;
      goto LABEL_7;
    }
    if ( *(_DWORD *)Data <= 0x1AFFu && cbData == 4 )
    {
      *(_DWORD *)a3 = *(_DWORD *)Data;
LABEL_7:
      v5 = 0;
      goto LABEL_8;
    }
    v5 = -1073739509;
  }
LABEL_8:
  if ( hKey )
    RegCloseKey(hKey);
  return (unsigned int)v5;
}
