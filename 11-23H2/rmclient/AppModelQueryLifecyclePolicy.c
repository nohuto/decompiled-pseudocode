/*
 * XREFs of AppModelQueryLifecyclePolicy @ 0x180009220
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001EB84 @ 0x18001EB84 (sub_18001EB84.c)
 */

__int64 __fastcall AppModelQueryLifecyclePolicy(__int64 a1, _DWORD *a2)
{
  LSTATUS v4; // eax
  signed int v5; // ebx
  bool v7; // zf
  int v8; // [rsp+50h] [rbp+18h] BYREF
  HKEY hKey; // [rsp+58h] [rbp+20h] BYREF

  hKey = 0LL;
  v4 = RegOpenKeyExW(HKEY_LOCAL_MACHINE, L"Software\\Microsoft\\Windows NT\\CurrentVersion\\AppModel", 0, 1u, &hKey);
  v5 = v4;
  if ( v4 == 2 )
    goto LABEL_2;
  if ( !v4 )
  {
    v5 = sub_18001EB84(hKey, L"RuntimeFlags", 3LL, &v8);
    if ( v5 < 0 )
      goto LABEL_4;
    if ( (v8 & 3) != 0 )
    {
      if ( (v8 & 3) != 1 )
      {
        v7 = (v8 & 3) == 2;
        goto LABEL_14;
      }
      v5 = sub_18001EB84(hKey, a1, 2LL, &v8);
      if ( v5 < 0 )
        goto LABEL_4;
      if ( (v8 & 3) != 0 )
      {
        v7 = (v8 & 3) == 2;
LABEL_14:
        if ( v7 )
          *a2 = 65537;
        goto LABEL_3;
      }
    }
LABEL_2:
    *a2 = 0x10000;
LABEL_3:
    v5 = 0;
    goto LABEL_4;
  }
  if ( v4 > 0 )
    v5 = (unsigned __int16)v4 | 0xC0070000;
LABEL_4:
  if ( hKey )
    RegCloseKey(hKey);
  return (unsigned int)v5;
}
