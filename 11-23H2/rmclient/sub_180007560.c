/*
 * XREFs of sub_180007560 @ 0x180007560
 * Callers:
 *     sub_18000738C @ 0x18000738C (sub_18000738C.c)
 * Callees:
 *     sub_1800074A8 @ 0x1800074A8 (sub_1800074A8.c)
 *     sub_180007638 @ 0x180007638 (sub_180007638.c)
 *     __security_check_cookie @ 0x18000AD40 (__security_check_cookie.c)
 */

__int64 __fastcall sub_180007560(void *a1, __int64 a2, HKEY *a3, __int64 a4)
{
  int v5; // ebx
  int v6; // r9d
  HKEY v7; // rcx
  HKEY v9; // [rsp+30h] [rbp-228h] BYREF
  HKEY hKey; // [rsp+38h] [rbp-220h] BYREF
  __int64 v11[64]; // [rsp+40h] [rbp-218h] BYREF

  hKey = 0LL;
  v9 = 0LL;
  v5 = sub_1800074A8(a1, a2, (__int64)a3, a4, (WCHAR *)v11, &hKey);
  if ( v5 < 0 || (v5 = sub_180007638((_DWORD)hKey, (unsigned int)L"Volatile", 1, v6, (__int64)&v9), v5 < 0) )
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
