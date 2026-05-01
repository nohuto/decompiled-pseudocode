/*
 * XREFs of HamQueryApplicationUsageInfo @ 0x18001E060
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000715C @ 0x18000715C (sub_18000715C.c)
 *     __security_check_cookie @ 0x18000AD40 (__security_check_cookie.c)
 *     sub_18001EC40 @ 0x18001EC40 (sub_18001EC40.c)
 */

__int64 __fastcall HamQueryApplicationUsageInfo(const WCHAR *a1, __int64 a2, _OWORD *a3)
{
  HKEY v3; // rdi
  unsigned int v6; // r8d
  signed int v7; // ebx
  int v8; // eax
  LSTATUS v9; // eax
  __int128 v10; // xmm1
  UINT32 packageRelativeApplicationIdLength; // [rsp+30h] [rbp-D0h] BYREF
  UINT32 packageFamilyNameLength; // [rsp+34h] [rbp-CCh] BYREF
  HKEY hKey; // [rsp+38h] [rbp-C8h] BYREF
  HKEY phkResult; // [rsp+40h] [rbp-C0h] BYREF
  _OWORD v16[2]; // [rsp+48h] [rbp-B8h] BYREF
  WCHAR packageFamilyName[72]; // [rsp+70h] [rbp-90h] BYREF
  WCHAR packageRelativeApplicationId[72]; // [rsp+100h] [rbp+0h] BYREF

  v3 = 0LL;
  phkResult = 0LL;
  hKey = 0LL;
  packageFamilyNameLength = 65;
  packageRelativeApplicationIdLength = 65;
  if ( ParseApplicationUserModelId(
         a1,
         &packageFamilyNameLength,
         packageFamilyName,
         &packageRelativeApplicationIdLength,
         packageRelativeApplicationId) )
  {
    v7 = -1073741585;
  }
  else
  {
    v8 = sub_18000715C((__int64)packageFamilyName, a2, v6, &hKey);
    v3 = hKey;
    v7 = v8;
    if ( v8 >= 0 )
    {
      v9 = RegOpenKeyExW(hKey, L"HAM\\AUI", 0, 1u, &phkResult);
      v7 = v9;
      if ( v9 > 0 )
        v7 = (unsigned __int16)v9 | 0xC0070000;
      if ( v7 >= 0 )
      {
        v7 = sub_18001EC40(phkResult, packageRelativeApplicationId, v16);
        if ( v7 >= 0 )
        {
          v7 = 0;
          v10 = v16[1];
          *a3 = v16[0];
          a3[1] = v10;
        }
      }
    }
  }
  if ( phkResult )
    RegCloseKey(phkResult);
  if ( v3 )
    RegCloseKey(v3);
  return (unsigned int)v7;
}
