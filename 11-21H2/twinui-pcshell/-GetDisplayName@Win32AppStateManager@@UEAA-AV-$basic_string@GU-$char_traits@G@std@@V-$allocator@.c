/*
 * XREFs of ?GetDisplayName@Win32AppStateManager@@UEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x180567F60
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180089570 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x18009EA78 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800E63C0 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ?GetExePathFromAppId@ExePathToAppIdMapping@@QEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBV23@@Z @ 0x180568098 (-GetExePathFromAppId@ExePathToAppIdMapping@@QEAA-AV-$basic_string@GU-$char_traits@G@std@@V-$allo.c)
 *     ?TryGetWindowFromAppId@ExeDataCache@@QEAA?AV?$optional@PEAUHWND__@@@std@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@3@@Z @ 0x180568D58 (-TryGetWindowFromAppId@ExeDataCache@@QEAA-AV-$optional@PEAUHWND__@@@std@@AEBV-$basic_string@GU-$.c)
 *     ?GetDisplayNameFromExePath@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x18056A14C (-GetDisplayNameFromExePath@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PE.c)
 *     ?GetDisplayNameFromWindow@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAUHWND__@@@Z @ 0x18056A3BC (-GetDisplayNameFromWindow@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEA.c)
 */

// Hidden C++ exception states: #wind=3
_OWORD *__fastcall Win32AppStateManager::GetDisplayName(__int64 a1, _OWORD *a2, _WORD *a3)
{
  const WCHAR *v5; // rdx
  __int128 v7; // [rsp+20h] [rbp-29h] BYREF
  __int128 v8; // [rsp+30h] [rbp-19h]
  _OWORD *v9; // [rsp+40h] [rbp-9h] BYREF
  char v10; // [rsp+48h] [rbp-1h]
  __int64 v11; // [rsp+50h] [rbp+7h]
  LPCWSTR pszPath[4]; // [rsp+60h] [rbp+17h] BYREF

  v9 = a2;
  std::wstring::wstring(&v7, a3);
  ExePathToAppIdMapping::GetExePathFromAppId(a1 + 120, pszPath, &v7);
  if ( !pszPath[2] )
  {
    ExeDataCache::TryGetWindowFromAppId(a1 + 96, &v9, &v7);
    if ( v10 )
    {
      GetDisplayNameFromWindow(&v9, v9);
      if ( v11 )
      {
        std::wstring::wstring((__int64)a2, (__int64)&v9);
        std::wstring::_Tidy_deallocate((__int64)&v9);
        goto LABEL_10;
      }
      std::wstring::_Tidy_deallocate((__int64)&v9);
    }
    *a2 = v7;
    a2[1] = v8;
    *(_QWORD *)&v8 = 0LL;
    *((_QWORD *)&v8 + 1) = 7LL;
    LOWORD(v7) = 0;
    goto LABEL_10;
  }
  v5 = (const WCHAR *)pszPath;
  if ( pszPath[3] >= (LPCWSTR)8 )
    v5 = pszPath[0];
  GetDisplayNameFromExePath(a2, v5);
LABEL_10:
  std::wstring::_Tidy_deallocate((__int64)pszPath);
  std::wstring::_Tidy_deallocate((__int64)&v7);
  return a2;
}
