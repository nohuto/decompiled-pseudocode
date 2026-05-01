/*
 * XREFs of HamQueryPackageUsageInfo @ 0x180007090
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000715C @ 0x18000715C (sub_18000715C.c)
 *     __security_check_cookie @ 0x18000AD40 (__security_check_cookie.c)
 *     sub_18001EC40 @ 0x18001EC40 (sub_18001EC40.c)
 *     sub_18001F224 @ 0x18001F224 (sub_18001F224.c)
 */

__int64 __fastcall HamQueryPackageUsageInfo(__int64 a1, __int64 a2, _OWORD *a3)
{
  int v4; // ebx
  LSTATUS v5; // eax
  DWORD v7; // r14d
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 *v10; // rax
  __int128 v11; // xmm0
  DWORD cchName; // [rsp+40h] [rbp-C0h] BYREF
  HKEY phkResult; // [rsp+48h] [rbp-B8h] BYREF
  HKEY hKey; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v15; // [rsp+58h] [rbp-A8h]
  __int128 v16; // [rsp+68h] [rbp-98h] BYREF
  __int128 v17; // [rsp+88h] [rbp-78h] BYREF
  __int128 v18; // [rsp+98h] [rbp-68h]
  _BYTE v19[40]; // [rsp+A8h] [rbp-58h] BYREF
  WCHAR Name[72]; // [rsp+D0h] [rbp-30h] BYREF

  hKey = 0LL;
  phkResult = 0LL;
  v4 = sub_18000715C(a1, a2, a3, &hKey);
  if ( v4 >= 0 )
  {
    v5 = RegOpenKeyExW(hKey, L"HAM\\AUI", 0, 8u, &phkResult);
    v4 = v5;
    if ( v5 > 0 )
      v4 = (unsigned __int16)v5 | 0xC0070000;
    if ( v4 >= 0 )
    {
      v7 = 0;
      v17 = 0xFFFFFFFFFFFFFFFFuLL;
      v18 = 0xFFFFFFFFFFFFFFFFuLL;
      cchName = 65;
      v4 = RegEnumKeyExW(phkResult, 0, Name, &cchName, 0LL, 0LL, 0LL, 0LL);
      if ( v4 == 259 )
      {
        v8 = v18;
        v9 = v17;
LABEL_12:
        *a3 = v9;
        v4 = 0;
        a3[1] = v8;
      }
      else
      {
        while ( !v4 )
        {
          v4 = sub_18001EC40(phkResult, Name, v19);
          if ( v4 < 0 )
            goto LABEL_5;
          v10 = (__int128 *)sub_18001F224(&v16, &v17, v19);
          ++v7;
          v15 = *v10;
          v17 = v15;
          v11 = v10[1];
          cchName = 65;
          v16 = v11;
          v18 = v11;
          v4 = RegEnumKeyExW(phkResult, v7, Name, &cchName, 0LL, 0LL, 0LL, 0LL);
          if ( v4 == 259 )
          {
            v9 = v15;
            v8 = v16;
            goto LABEL_12;
          }
        }
        if ( v4 > 0 )
          v4 = (unsigned __int16)v4 | 0xC0070000;
      }
    }
  }
LABEL_5:
  if ( phkResult )
    RegCloseKey(phkResult);
  if ( hKey )
    RegCloseKey(hKey);
  return (unsigned int)v4;
}
