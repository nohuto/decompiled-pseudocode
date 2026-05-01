/*
 * XREFs of ?HampUsageInfoRegistrySaveForApp@@YAJPEBGPEAX0PEAU_HAM_APPLICATION_USAGE_INFO@@@Z @ 0x18001B700
 * Callers:
 *     ?HampPkgCommitAppsUsageInfo@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x18001CB90 (-HampPkgCommitAppsUsageInfo@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 * Callees:
 *     ?HampUsageInfoRegistryCommit@@YAJPEAU_HAM_APPLICATION_USAGE_INFO@@PEAUHKEY__@@@Z @ 0x18001B8D4 (-HampUsageInfoRegistryCommit@@YAJPEAU_HAM_APPLICATION_USAGE_INFO@@PEAUHKEY__@@@Z.c)
 *     ?HampSystemOpenAppRegistryKey@@YAJPEBGPEAXKPEAPEAUHKEY__@@@Z @ 0x18001B9CC (-HampSystemOpenAppRegistryKey@@YAJPEBGPEAXKPEAPEAUHKEY__@@@Z.c)
 */

__int64 __fastcall HampUsageInfoRegistrySaveForApp(
        const unsigned __int16 *a1,
        void *a2,
        const unsigned __int16 *a3,
        struct _HAM_APPLICATION_USAGE_INFO *a4)
{
  bool v5; // zf
  int v7; // eax
  HKEY v8; // rdi
  signed int v9; // ebx
  LSTATUS v10; // eax
  LSTATUS v11; // eax
  LSTATUS v12; // eax
  HKEY v14; // [rsp+50h] [rbp-38h] BYREF
  HKEY phkResult; // [rsp+58h] [rbp-30h] BYREF
  HKEY hKey; // [rsp+60h] [rbp-28h] BYREF
  HKEY v17; // [rsp+A8h] [rbp+20h] BYREF

  v5 = *(_QWORD *)a4 == -1LL;
  hKey = 0LL;
  phkResult = 0LL;
  v14 = 0LL;
  v17 = 0LL;
  if ( v5 && *((_QWORD *)a4 + 1) == -1LL && *((_QWORD *)a4 + 2) == -1LL && *((_QWORD *)a4 + 3) == -1LL )
    return 0LL;
  v7 = HampSystemOpenAppRegistryKey(a1, a2, (unsigned int)a3, &hKey);
  v8 = hKey;
  v9 = v7;
  if ( v7 >= 0 )
  {
    v10 = RegCreateKeyExW(hKey, L"HAM\\AUI", 0, 0LL, 0, 4u, 0LL, &phkResult, 0LL);
    v9 = v10;
    if ( v10 > 0 )
      v9 = (unsigned __int16)v10 | 0xC0070000;
    if ( v9 >= 0 )
    {
      v11 = RegCreateKeyExW(phkResult, a3, 0, 0LL, 0, 4u, 0LL, &v14, 0LL);
      v9 = v11;
      if ( v11 > 0 )
        v9 = (unsigned __int16)v11 | 0xC0070000;
      if ( v9 >= 0 )
      {
        v12 = RegCreateKeyExW(v14, L"V1", 0, 0LL, 0, 4u, 0LL, &v17, 0LL);
        v9 = v12;
        if ( v12 > 0 )
          v9 = (unsigned __int16)v12 | 0xC0070000;
        if ( v9 >= 0 )
        {
          v9 = HampUsageInfoRegistryCommit(a4, v17);
          if ( v9 >= 0 )
            v9 = 0;
        }
      }
    }
  }
  if ( v17 )
    RegCloseKey(v17);
  if ( v14 )
    RegCloseKey(v14);
  if ( phkResult )
    RegCloseKey(phkResult);
  if ( v8 )
    RegCloseKey(v8);
  return (unsigned int)v9;
}
