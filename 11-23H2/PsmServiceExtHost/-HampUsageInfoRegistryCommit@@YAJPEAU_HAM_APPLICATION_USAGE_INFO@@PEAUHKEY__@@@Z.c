/*
 * XREFs of ?HampUsageInfoRegistryCommit@@YAJPEAU_HAM_APPLICATION_USAGE_INFO@@PEAUHKEY__@@@Z @ 0x18001B8D4
 * Callers:
 *     ?HampUsageInfoRegistrySaveForApp@@YAJPEBGPEAX0PEAU_HAM_APPLICATION_USAGE_INFO@@@Z @ 0x18001B700 (-HampUsageInfoRegistrySaveForApp@@YAJPEBGPEAX0PEAU_HAM_APPLICATION_USAGE_INFO@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HampUsageInfoRegistryCommit(struct _HAM_APPLICATION_USAGE_INFO *a1, HKEY a2)
{
  LSTATUS v3; // eax
  signed int v4; // ebx
  unsigned int v5; // esi
  DWORD *v6; // rdi
  const BYTE *lpData; // rcx
  LSTATUS v9; // eax
  HKEY hKey; // [rsp+70h] [rbp+18h] BYREF

  hKey = 0LL;
  v3 = RegCreateKeyExW(a2, L"LU", 0, 0LL, 0, 2u, 0LL, &hKey, 0LL);
  v4 = v3;
  if ( v3 > 0 )
    v4 = (unsigned __int16)v3 | 0xC0070000;
  if ( v4 >= 0 )
  {
    v5 = 0;
    v6 = (DWORD *)&unk_1800DB178;
    while ( 1 )
    {
      lpData = (const BYTE *)a1 + v6[1];
      if ( *(_QWORD *)lpData != -1LL )
      {
        v9 = RegSetValueExW(hKey, *((LPCWSTR *)v6 - 1), 0, *v6, lpData, v6[2]);
        v4 = v9;
        if ( v9 > 0 )
          v4 = (unsigned __int16)v9 | 0xC0070000;
        if ( v4 < 0 )
          break;
      }
      ++v5;
      v6 += 6;
      if ( v5 >= 4 )
      {
        v4 = 0;
        break;
      }
    }
  }
  if ( hKey )
    RegCloseKey(hKey);
  return (unsigned int)v4;
}
