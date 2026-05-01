/*
 * XREFs of ?HampClientQueryReconnectTimeout@@YAKXZ @ 0x18004E27C
 * Callers:
 *     ?HampClientDisconnect@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18004DE3C (-HampClientDisconnect@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 * Callees:
 *     ?HampSystemQueryValue@@YAJPEAUHKEY__@@PEBGPEAXPEAK@Z @ 0x180045DC4 (-HampSystemQueryValue@@YAJPEAUHKEY__@@PEBGPEAXPEAK@Z.c)
 *     ?HampSystemOpenKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z @ 0x180082008 (-HampSystemOpenKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z.c)
 */

__int64 HampClientQueryReconnectTimeout(void)
{
  __int64 result; // rax
  unsigned int v1; // [rsp+30h] [rbp+10h] BYREF
  unsigned int v2; // [rsp+38h] [rbp+18h] BYREF
  HKEY hKey; // [rsp+40h] [rbp+20h] BYREF

  hKey = 0LL;
  v1 = 60000;
  if ( HampSystemOpenKey(
         HKEY_LOCAL_MACHINE,
         L"Software\\Microsoft\\Windows NT\\CurrentVersion\\HostActivityManager",
         1u,
         &hKey) < 0
    || (v2 = 4, HampSystemQueryValue(hKey, L"ClientReconnectTimeoutMs", (BYTE *)&v1, &v2) < 0)
    || v2 != 4
    || (result = v1) == 0 )
  {
    result = 60000LL;
    v1 = 60000;
  }
  if ( hKey )
  {
    RegCloseKey(hKey);
    return v1;
  }
  return result;
}
