/*
 * XREFs of ?GetWindowTitle@Win32AppStateManager@@UEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x180625BE0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180098C40 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?TryGetWindowFromAppId@ExeDataCache@@QEAA?AV?$optional@PEAUHWND__@@@std@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@3@@Z @ 0x18062690C (-TryGetWindowFromAppId@ExeDataCache@@QEAA-AV-$optional@PEAUHWND__@@@std@@AEBV-$basic_string@GU-$.c)
 *     ?GetDisplayNameFromWindow@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAUHWND__@@@Z @ 0x180628004 (-GetDisplayNameFromWindow@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEA.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall Win32AppStateManager::GetWindowTitle(RTL_SRWLOCK *a1, _QWORD *a2, _WORD *a3)
{
  RTL_SRWLOCK *v4; // rbx
  char v7; // [rsp+30h] [rbp-48h]
  _QWORD v8[4]; // [rsp+38h] [rbp-40h] BYREF

  v4 = a1 + 12;
  std::wstring::wstring(v8, a3);
  ExeDataCache::TryGetWindowFromAppId(v4);
  std::wstring::_Tidy_deallocate((__int64)v8);
  if ( v7 )
  {
    GetDisplayNameFromWindow(a2, a2);
  }
  else
  {
    *a2 = 0LL;
    a2[2] = 0LL;
    a2[3] = 7LL;
    *(_WORD *)a2 = 0;
  }
  return a2;
}
