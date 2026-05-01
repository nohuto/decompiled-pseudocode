/*
 * XREFs of ?GetDisplayName@Win32AppStateManager@@UEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x180625900
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180098C40 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x1800C02C8 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?GetExePathFromAppId@ExePathToAppIdMapping@@QEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBV23@@Z @ 0x180625AC0 (-GetExePathFromAppId@ExePathToAppIdMapping@@QEAA-AV-$basic_string@GU-$char_traits@G@std@@V-$allo.c)
 *     ?TryGetWindowFromAppId@ExeDataCache@@QEAA?AV?$optional@PEAUHWND__@@@std@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@3@@Z @ 0x18062690C (-TryGetWindowFromAppId@ExeDataCache@@QEAA-AV-$optional@PEAUHWND__@@@std@@AEBV-$basic_string@GU-$.c)
 *     ?GetDisplayNameFromExePath@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x180627D7C (-GetDisplayNameFromExePath@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PE.c)
 *     ?GetDisplayNameFromWindow@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAUHWND__@@@Z @ 0x180628004 (-GetDisplayNameFromWindow@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEA.c)
 */

// Hidden C++ exception states: #wind=3
__m128i *__fastcall Win32AppStateManager::GetDisplayName(RTL_SRWLOCK *a1, __m128i *a2, _WORD *a3)
{
  const WCHAR *v5; // rdx
  __m128i v7; // [rsp+28h] [rbp-21h] BYREF
  __m128i si128; // [rsp+38h] [rbp-11h]
  __m128i *v9; // [rsp+48h] [rbp-1h] BYREF
  char v10; // [rsp+50h] [rbp+7h]
  __int64 v11; // [rsp+58h] [rbp+Fh]
  LPCWSTR pszPath[4]; // [rsp+68h] [rbp+1Fh] BYREF

  v9 = a2;
  std::wstring::wstring(&v7, a3);
  ExePathToAppIdMapping::GetExePathFromAppId(a1 + 15);
  if ( !pszPath[2] )
  {
    ExeDataCache::TryGetWindowFromAppId(a1 + 12);
    if ( v10 )
    {
      GetDisplayNameFromWindow(&v9, v9);
      if ( v11 )
      {
        std::wstring::wstring(a2, (__int64)&v9);
        std::wstring::_Tidy_deallocate((__int64)&v9);
        goto LABEL_10;
      }
      std::wstring::_Tidy_deallocate((__int64)&v9);
    }
    *a2 = v7;
    a2[1] = si128;
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    v7.m128i_i16[0] = 0;
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
